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

signed __int64 __fastcall LdrpWriteBackProtectedDelayLoad(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  int v5; // ebx
  volatile signed __int64 *v6; // rbp
  int v10; // r12d
  __int64 v11; // r14
  _QWORD *v12; // rax
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  int v16; // eax
  __int64 v17; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v18; // [rsp+88h] [rbp+10h] BYREF
  char v19; // [rsp+98h] [rbp+20h] BYREF

  v5 = a4;
  v6 = (volatile signed __int64 *)(a1 + 144);
  v18 = a2;
  v10 = a4;
  v11 = 8LL * (unsigned int)a4;
  v17 = v11;
  RtlAcquireSRWLockExclusive(a1 + 144, a2, a3, a4);
  if ( *(_QWORD *)(a2 + 8LL * a5) != *(_QWORD *)(a3 + 8LL * a5)
    && (int)ZwProtectVirtualMemory(-1LL, &v18, &v17, 4LL, &v19) >= 0 )
  {
    if ( v5 )
    {
      v12 = (_QWORD *)(v11 + a2);
      v13 = a3 - a2;
      do
      {
        --v12;
        --v5;
        v14 = *(_QWORD *)((char *)v12 + v13);
        if ( v14 )
          *v12 = v14;
      }
      while ( v5 );
    }
    ZwProtectVirtualMemory(-1LL, &v18, &v17, 2LL, &v19);
    if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression() )
    {
      v16 = LdrpUnsuppressAddressTakenIat(
              *(_QWORD *)(a1 + 48),
              (unsigned int)(a2 - *(_DWORD *)(a1 + 48)),
              (unsigned int)(8 * v10 - *(_DWORD *)(a1 + 48) + a2 - 8));
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrdload.c",
        849,
        (unsigned int)"LdrpWriteBackProtectedDelayLoad",
        0,
        "LdrpWriteBackProtectedDelayLoad:Unable to unsuppress the export suppressed functions that is imported in the DLL"
        " based at 0x%p.Status = 0x%x\n",
        *(const void **)(a1 + 48),
        v16);
    }
  }
  return RtlReleaseSRWLockExclusive(v6);
}
