/*
 * XREFs of sub_140A69710 @ 0x140A69710
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A59C88 @ 0x140A59C88 (sub_140A59C88.c)
 */

ULONG_PTR __fastcall sub_140A69710(volatile signed __int32 *Argument)
{
  __int64 v2; // rcx

  v2 = *(unsigned int *)Argument;
  if ( *((_DWORD *)Argument + 1) == HIDWORD(KeGetPcr()[1].LockArray) )
  {
    while ( *((_DWORD *)Argument + 2) )
      _mm_pause();
    sub_140A59C88(v2, dword_140D0E5E0[v2] >> 6);
    *((_DWORD *)Argument + 4) = 1;
    while ( *((_DWORD *)Argument + 3) )
      _mm_pause();
  }
  else
  {
    _InterlockedDecrement(Argument + 2);
    while ( !*((_DWORD *)Argument + 4) )
      _mm_pause();
    _InterlockedDecrement(Argument + 3);
  }
  return 0LL;
}
