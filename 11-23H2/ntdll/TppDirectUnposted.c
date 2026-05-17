/*
 * XREFs of TppDirectUnposted @ 0x180126E20
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 */

signed __int64 __fastcall TppDirectUnposted(__int64 a1)
{
  volatile signed __int64 *v1; // rsi
  _QWORD **v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  signed __int64 result; // rax
  __int64 v6; // r8

  v1 = (volatile signed __int64 *)(a1 + 32);
  v2 = (_QWORD **)(a1 + 40);
  while ( 1 )
  {
    RtlAcquireSRWLockExclusive(v1);
    v3 = *v2;
    if ( *v2 == v2 )
    {
      v3 = 0LL;
    }
    else
    {
      if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
        __fastfail(3u);
      *v2 = v4;
      v4[1] = v2;
    }
    result = RtlReleaseSRWLockExclusive(v1);
    if ( !v3 )
      break;
    if ( v3 != (_QWORD *)32 )
    {
      v6 = v3[2];
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) == 1 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 3145728, *(_QWORD *)v6);
    }
  }
  return result;
}
