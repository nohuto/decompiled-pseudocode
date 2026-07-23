/*
 * XREFs of sub_14064C978 @ 0x14064C978
 * Callers:
 *     sub_140A1B260 @ 0x140A1B260 (sub_140A1B260.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14064C978(_DWORD *a1, _OWORD *a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rax

  v2 = 0;
  if ( a1[1] )
    return (unsigned int)-1073741728;
  v3 = (unsigned int)(*a1 - 2);
  if ( (unsigned int)v3 > 0x22 )
    return (unsigned int)-1073741728;
  else
    *a2 = *(_OWORD *)((char *)&unk_140C0E580 + 24 * v3);
  return v2;
}
