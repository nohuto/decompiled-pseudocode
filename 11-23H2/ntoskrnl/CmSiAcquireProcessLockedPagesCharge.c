/*
 * XREFs of CmSiAcquireProcessLockedPagesCharge @ 0x140207D84
 * Callers:
 *     HvpViewMapAcquireChargesAndLockViewPages @ 0x140689A3C (HvpViewMapAcquireChargesAndLockViewPages.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1402E9F08 (MmAdjustWorkingSetSizeEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     CmSiRWLockReleaseExclusive @ 0x140747528 (CmSiRWLockReleaseExclusive.c)
 *     CmSiRWLockAcquireExclusive @ 0x14074755C (CmSiRWLockAcquireExclusive.c)
 */

__int64 __fastcall CmSiAcquireProcessLockedPagesCharge(_QWORD *a1, __int64 a2)
{
  ULONG_PTR v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rbp
  int v7; // ecx
  int v8; // r9d
  int v9; // edi
  _BYTE v11[8]; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v12[3]; // [rsp+38h] [rbp-50h] BYREF

  v4 = a1[1];
  memset(v12, 0, sizeof(v12));
  KiStackAttachProcess(v4);
  CmSiRWLockAcquireExclusive(a1 + 2);
  v5 = a1[5];
  v6 = a2 + a1[4];
  v7 = a2 + *((_DWORD *)a1 + 8);
  LOBYTE(v8) = 1;
  v11[0] = 0;
  v9 = MmAdjustWorkingSetSizeEx(v7, v5, 0, v8, 0, (__int64)v11);
  if ( v9 >= 0 )
  {
    a1[3] += a2;
    v9 = 0;
    a1[4] = v6;
  }
  CmSiRWLockReleaseExclusive((ULONG_PTR)(a1 + 2));
  KiUnstackDetachProcess(v12, 0LL);
  return (unsigned int)v9;
}
