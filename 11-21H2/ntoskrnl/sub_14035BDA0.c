/*
 * XREFs of sub_14035BDA0 @ 0x14035BDA0
 * Callers:
 *     sub_14035BB4C @ 0x14035BB4C (sub_14035BB4C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14035BDA0(__int64 a1, unsigned __int16 **a2)
{
  unsigned int v3; // r9d
  unsigned __int64 i; // r8
  unsigned __int64 v5; // rcx
  __int64 result; // rax

  if ( *a2 )
    v3 = **a2;
  else
    v3 = *((unsigned __int16 *)a2 + 8) + 1;
  for ( i = (unsigned __int64)a2[1]; ; a2[1] = (unsigned __int16 *)i )
  {
    if ( i )
    {
      _BitScanForward64(&v5, i);
      *(_BYTE *)(a1 + 2) = v5;
      *(_WORD *)a1 = *((_WORD *)a2 + 8);
      result = 0LL;
      a2[1] = (unsigned __int16 *)(i & ~(1LL << v5));
      return result;
    }
    if ( (unsigned __int16)++*((_WORD *)a2 + 8) >= v3 )
      break;
    i = *(_QWORD *)&(*a2)[4 * *((unsigned __int16 *)a2 + 8) + 4];
  }
  return 3221226021LL;
}
