/*
 * XREFs of LdrpWriteBackProtectedDelayLoad @ 0x18006AC84
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x180023220 (LdrpHandleProtectedDelayload.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180021CB0 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     ZwProtectVirtualMemory @ 0x18009F7F0 (ZwProtectVirtualMemory.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800E02B4 (LdrpUnsuppressAddressTakenIat.c)
 */

signed __int64 __fastcall LdrpWriteBackProtectedDelayLoad(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  volatile signed __int64 *v5; // rbp
  __int64 v7; // r14
  unsigned int v8; // ebx
  _QWORD *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  int v15; // eax
  int v17; // eax
  __int64 v18; // [rsp+80h] [rbp+8h] BYREF
  __int64 v19; // [rsp+88h] [rbp+10h] BYREF
  char v20; // [rsp+98h] [rbp+20h] BYREF

  v5 = (volatile signed __int64 *)(a1 + 144);
  v7 = 8LL * a4;
  v18 = v7;
  v8 = a4;
  v19 = a2;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 144));
  if ( *(_QWORD *)(a2 + 8LL * a5) != *(_QWORD *)(a3 + 8LL * a5)
    && (int)ZwProtectVirtualMemory(-1LL, &v19, &v18, 4LL, &v20) >= 0 )
  {
    if ( v8 )
    {
      v12 = (_QWORD *)(v7 + a2);
      v13 = a3 - a2;
      do
      {
        --v12;
        --v8;
        v14 = *(_QWORD *)((char *)v12 + v13);
        if ( v14 )
          *v12 = v14;
      }
      while ( v8 );
    }
    ZwProtectVirtualMemory(-1LL, &v19, &v18, 2LL, &v20);
    LOBYTE(v15) = LdrControlFlowGuardEnforcedWithExportSuppression();
    if ( v15 )
    {
      v17 = LdrpUnsuppressAddressTakenIat(
              *(_QWORD *)(a1 + 48),
              (unsigned int)(a2 - *(_DWORD *)(a1 + 48)),
              8 * a4 - *(_DWORD *)(a1 + 48) + (_DWORD)a2 - 8);
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrdload.c",
        849LL,
        (__int64)"LdrpWriteBackProtectedDelayLoad",
        0LL,
        "LdrpWriteBackProtectedDelayLoad:Unable to unsuppress the export suppressed functions that is imported in the DLL"
        " based at 0x%p.Status = 0x%x\n",
        *(const void **)(a1 + 48),
        v17);
    }
  }
  return RtlReleaseSRWLockExclusive(v5);
}
