/*
 * XREFs of LdrpWriteBackProtectedDelayLoad @ 0x1800340FC
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x18003BF80 (LdrpHandleProtectedDelayload.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800342A8 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     ZwProtectVirtualMemory @ 0x1800A4A70 (ZwProtectVirtualMemory.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800E1AA4 (LdrpUnsuppressAddressTakenIat.c)
 */

void __fastcall LdrpWriteBackProtectedDelayLoad(
        _RTL_SRWLOCK *a1,
        char *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  _RTL_SRWLOCK *v6; // rbp
  ULONG_PTR v10; // r14
  char *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  int v14; // eax
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+10h] BYREF
  ULONG OldProtect; // [rsp+98h] [rbp+20h] BYREF

  v5 = a4;
  v6 = a1 + 18;
  BaseAddress = a2;
  v10 = 8LL * a4;
  RegionSize = v10;
  RtlAcquireSRWLockExclusive(a1 + 18);
  if ( *(_QWORD *)&a2[8 * a5] != *(_QWORD *)(a3 + 8LL * a5)
    && ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &OldProtect) >= 0 )
  {
    if ( v5 )
    {
      v11 = &a2[v10];
      v12 = a3 - (_QWORD)a2;
      do
      {
        v11 -= 8;
        --v5;
        v13 = *(_QWORD *)&v11[v12];
        if ( v13 )
          *(_QWORD *)v11 = v13;
      }
      while ( v5 );
    }
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 2u, &OldProtect);
    if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression() )
    {
      v14 = LdrpUnsuppressAddressTakenIat(a1[6].Ptr);
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrdload.c",
        849,
        (unsigned int)"LdrpWriteBackProtectedDelayLoad",
        0,
        "LdrpWriteBackProtectedDelayLoad:Unable to unsuppress the export suppressed functions that is imported in the DLL"
        " based at 0x%p.Status = 0x%x\n",
        a1[6].Ptr,
        v14);
    }
  }
  RtlReleaseSRWLockExclusive(v6);
}
