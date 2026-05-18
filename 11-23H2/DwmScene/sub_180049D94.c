/*
 * XREFs of sub_180049D94 @ 0x180049D94
 * Callers:
 *     sub_180013AF0 @ 0x180013AF0 (sub_180013AF0.c)
 *     sub_18008CE00 @ 0x18008CE00 (sub_18008CE00.c)
 *     sub_18008CFB8 @ 0x18008CFB8 (sub_18008CFB8.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180049D94(__int64 a1, int a2)
{
  if ( !*(_DWORD *)(a1 + 124) )
    *(_DWORD *)(a1 + 124) = a2;
  *(_DWORD *)(a1 + 120) = a2;
}
