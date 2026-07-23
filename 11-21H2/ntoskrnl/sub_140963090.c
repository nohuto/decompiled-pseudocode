/*
 * XREFs of sub_140963090 @ 0x140963090
 * Callers:
 *     sub_140962F40 @ 0x140962F40 (sub_140962F40.c)
 *     sub_1409630B0 @ 0x1409630B0 (sub_1409630B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140963090(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = *(_QWORD *)(a2 + 24);
  if ( a1 <= v2 )
    return (unsigned int)-(a1 < v2);
  else
    return 1LL;
}
