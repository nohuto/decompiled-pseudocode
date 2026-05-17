/*
 * XREFs of RtlAppendStringToString @ 0x1800F75A0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall RtlAppendStringToString(unsigned __int16 *a1, const void **a2)
{
  int v2; // edi
  __int64 v4; // rcx

  v2 = *(unsigned __int16 *)a2;
  if ( (_WORD)v2 )
  {
    v4 = *a1;
    if ( (int)v4 + v2 > (unsigned int)a1[1] )
      return 3221225507LL;
    memmove((void *)(*((_QWORD *)a1 + 1) + v4), a2[1], *(unsigned __int16 *)a2);
    *a1 += v2;
  }
  return 0LL;
}
