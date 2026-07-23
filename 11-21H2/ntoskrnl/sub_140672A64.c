/*
 * XREFs of sub_140672A64 @ 0x140672A64
 * Callers:
 *     sub_140257280 @ 0x140257280 (sub_140257280.c)
 *     sub_1406727EC @ 0x1406727EC (sub_1406727EC.c)
 *     sub_1406747FC @ 0x1406747FC (sub_1406747FC.c)
 *     sub_140B24D94 @ 0x140B24D94 (sub_140B24D94.c)
 * Callees:
 *     <none>
 */

void *__fastcall sub_140672A64(int a1)
{
  int v1; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return &unk_140D3D7A0;
  if ( v1 == 1 )
    return &unk_140D3D720;
  return 0LL;
}
