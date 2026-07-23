/*
 * XREFs of RtlpWakeSRWLock @ 0x18001E4A4
 * Callers:
 *     TppWorkerFindTask @ 0x180018A28 (TppWorkerFindTask.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     LdrpLoadDependentModuleInternal @ 0x18003D8F0 (LdrpLoadDependentModuleInternal.c)
 *     RtlpOptimizeSRWLockList @ 0x18007BDD8 (RtlpOptimizeSRWLockList.c)
 *     RtlConvertSRWLockExclusiveToShared @ 0x18008C5C0 (RtlConvertSRWLockExclusiveToShared.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x1800A4E60 (ZwAlertThreadByThreadId.c)
 */

int __fastcall RtlpWakeSRWLock(volatile signed __int64 *a1, signed __int64 a2, char a3)
{
  _QWORD *v4; // r10
  __int64 v5; // r8
  signed __int64 v6; // rax
  bool v7; // zf
  __int64 v8; // rbx
  void *v9; // rcx
  _QWORD *v10; // rax

  while ( a3 || (a2 & 1) == 0 )
  {
LABEL_3:
    v4 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL);
    v5 = *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
    if ( !v5 )
    {
      do
      {
        v10 = v4;
        v4 = (_QWORD *)*v4;
        v4[2] = v10;
        v5 = v4[1];
      }
      while ( !v5 );
      if ( v4 != (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL) )
        *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v5;
    }
    LODWORD(v6) = *(_DWORD *)(v5 + 36);
    if ( (v6 & 1) != 0 )
    {
      if ( a3 )
      {
        _InterlockedAnd64(a1, 0xFFFFFFFFFFFFFFFBuLL);
        return v6;
      }
      v6 = *(_QWORD *)(v5 + 16);
      if ( v6 )
      {
        *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v6;
        *(_QWORD *)(v5 + 16) = 0LL;
        _InterlockedAnd64(a1, 0xFFFFFFFFFFFFFFFBuLL);
        do
        {
LABEL_8:
          v8 = *(_QWORD *)(v5 + 16);
          v9 = *(void **)(v5 + 24);
          _interlockedbittestandset((volatile signed __int32 *)(v5 + 36), 2u);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)(v5 + 36), 1u) )
            LODWORD(v6) = ZwAlertThreadByThreadId(v9);
          v5 = v8;
        }
        while ( v8 );
        return v6;
      }
    }
    v6 = _InterlockedCompareExchange64(a1, a3 != 0 ? 0x11 : 0, a2);
    v7 = a2 == v6;
    a2 = v6;
    if ( v7 )
      goto LABEL_8;
  }
  while ( 1 )
  {
    v6 = _InterlockedCompareExchange64(a1, a2 - 4, a2);
    v7 = a2 == v6;
    a2 = v6;
    if ( v7 )
      return v6;
    if ( (v6 & 1) == 0 )
      goto LABEL_3;
  }
}
