/*
 * XREFs of MiRecomputePageHash @ 0x1405BC92C
 * Callers:
 *     MiUpdatePageFileBlockOwner @ 0x1405BC9E8 (MiUpdatePageFileBlockOwner.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiRecomputePageHash(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // r9d
  __int64 result; // rax
  __int64 v5; // r8

  v3 = *(_DWORD *)a1;
  result = 0LL;
  if ( *(_DWORD *)a1 > 3u )
  {
    result = (unsigned int)(a3 >> 3) - (unsigned int)(a2 >> 3);
    v3 += result;
    if ( v3 < 3 )
      v3 = 3;
  }
  v5 = a3 | 1;
  *(_DWORD *)a1 = v3;
  if ( dword_140C531D0 )
    *(_QWORD *)(a1 + 8) = v5;
  return result;
}
