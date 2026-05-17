/*
 * XREFs of RtlFreeActivationContextStack @ 0x180073F80
 * Callers:
 *     RtlFreeThreadActivationContextStack @ 0x180073EE0 (RtlFreeThreadActivationContextStack.c)
 * Callees:
 *     RtlReleaseActivationContext @ 0x180033D90 (RtlReleaseActivationContext.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlpFreeActivationContextStackFrame @ 0x18007415C (RtlpFreeActivationContextStackFrame.c)
 */

void __fastcall RtlFreeActivationContextStack(__int64 a1)
{
  __int64 *v1; // rdi
  _QWORD *v3; // rdi
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // rcx
  __int64 *v7; // rsi

  if ( a1 )
  {
    v1 = *(__int64 **)a1;
    if ( *(_QWORD *)a1 )
    {
      do
      {
        v7 = (__int64 *)*v1;
        if ( (v1[2] & 1) != 0 )
          RtlReleaseActivationContext((volatile signed __int32 *)v1[1]);
        if ( (v1[2] & 8) != 0 )
          RtlpFreeActivationContextStackFrame(a1, v1);
        v1 = v7;
      }
      while ( v7 );
    }
    *(_QWORD *)a1 = 0LL;
    v3 = *(_QWORD **)(a1 + 8);
    while ( v3 != (_QWORD *)(a1 + 8) )
    {
      v4 = (_QWORD *)*v3;
      v5 = (__int64)(v3 - 1);
      if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v6 = (_QWORD *)v3[1], (_QWORD *)*v6 != v3) )
        __fastfail(3u);
      *v6 = v4;
      v4[1] = v6;
      v3 = v4;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
    }
    if ( (*(_BYTE *)(a1 + 24) & 2) == 0 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
}
