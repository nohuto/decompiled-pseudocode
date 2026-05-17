/*
 * XREFs of RtlpHpHeapUnlock @ 0x18002DAD4
 * Callers:
 *     RtlUnlockHeap @ 0x180029F10 (RtlUnlockHeap.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x180051580 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlpHpUnlockHeapForCloning @ 0x180121F54 (RtlpHpUnlockHeapForCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlpHpHeapUnlock(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _QWORD *v4; // rsi
  _DWORD *v5; // r8
  __int64 v6; // rdi
  _WORD *v7; // rdx
  __int64 v8; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx

  result = a2;
  if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
  {
    v4 = (_QWORD *)(a1 + 704);
    v5 = (_DWORD *)(a1 + 220);
    v6 = a1 + 384;
    v7 = (_WORD *)(a1 + 216);
    if ( (_DWORD)result )
    {
      v10 = (_QWORD *)(a1 + 384);
      *v5 = NtCurrentTeb()->ClientId.UniqueThread;
      v11 = 2LL;
      *v7 = 1;
      *(_QWORD *)(a1 + 968) = 1LL;
      *v4 = 1LL;
      do
      {
        *v10 = 1LL;
        v10 += 24;
        --v11;
      }
      while ( v11 );
      v8 = a1 + 64;
      *(_QWORD *)(a1 + 64) = 1LL;
    }
    else
    {
      v8 = a1 + 64;
    }
    result = 0xFFFFLL;
    if ( (*v7)-- == 1 )
    {
      *v5 = 0;
      if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
      {
        RtlReleaseSRWLockExclusive(v8);
        if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
        {
          RtlReleaseSRWLockExclusive(v6);
          if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
          {
            RtlReleaseSRWLockExclusive(a1 + 576);
            if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
              RtlReleaseSRWLockExclusive(v4);
          }
        }
      }
      return RtlReleaseSRWLockExclusive(a1 + 968);
    }
  }
  return result;
}
