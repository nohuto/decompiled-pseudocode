/*
 * XREFs of sub_1409328A8 @ 0x1409328A8
 * Callers:
 *     sub_140971068 @ 0x140971068 (sub_140971068.c)
 *     sub_1409779A4 @ 0x1409779A4 (sub_1409779A4.c)
 * Callees:
 *     MmSizeOfMdl @ 0x140231480 (MmSizeOfMdl.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     sub_1403A0EB4 @ 0x1403A0EB4 (sub_1403A0EB4.c)
 *     sub_1403A0F08 @ 0x1403A0F08 (sub_1403A0F08.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409328A8(PVOID Base, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  ULONG v6; // r15d
  struct _MDL *Pool2; // rax
  struct _MDL *v8; // rbx
  int v10; // edi
  __int64 *v11[10]; // [rsp+40h] [rbp-F8h] BYREF
  _QWORD v12[14]; // [rsp+90h] [rbp-A8h] BYREF

  v3 = a3;
  memset(v12, 0, 0x68uLL);
  memset(v11, 0, 0x48uLL);
  v6 = MmSizeOfMdl(Base, (unsigned int)v3);
  Pool2 = (struct _MDL *)ExAllocatePool2(64LL, v6, 1416850774LL);
  v8 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  Pool2->Next = 0LL;
  Pool2->Size = 8 * ((((unsigned __int64)(a2 & 0xFFF) + v3 + 4095) >> 12) + 6);
  Pool2->MdlFlags = 0;
  Pool2->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
  Pool2->ByteOffset = a2 & 0xFFF;
  Pool2->ByteCount = v3;
  MmProbeAndLockPages(Pool2, 0, IoWriteAccess);
  v10 = sub_1403A0F08((__int64)v11, v8, v6, 1, 0);
  if ( v10 >= 0 )
  {
    v12[1] = Base;
    v12[2] = v11[0];
    v12[3] = v11[7];
    v10 = sub_140358A20(2u, 71, 0, (__int64)v12);
    sub_1403A0EB4(v11);
  }
  if ( (v8->MdlFlags & 2) != 0 )
    MmUnlockPages(v8);
  ExFreePoolWithTag(v8, 0);
  return (unsigned int)v10;
}
