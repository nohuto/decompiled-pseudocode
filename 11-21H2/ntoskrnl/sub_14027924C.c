/*
 * XREFs of sub_14027924C @ 0x14027924C
 * Callers:
 *     sub_140277580 @ 0x140277580 (sub_140277580.c)
 *     sub_140278460 @ 0x140278460 (sub_140278460.c)
 *     sub_140278960 @ 0x140278960 (sub_140278960.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14027924C(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r8d
  __int64 *v3; // r10
  __int64 i; // r9

  if ( !*(_BYTE *)(a1 + 15590) )
    return 0xFFFFFFFFLL;
  v2 = 0;
  v3 = qword_14001C780;
  for ( i = a1 + 15816; !*(_QWORD *)i || !_bittest64(*(const signed __int64 **)(i + 8), a2 / *v3); i += 16LL )
  {
    ++v2;
    ++v3;
    if ( v2 >= 2 )
      return 0xFFFFFFFFLL;
  }
  return v2;
}
