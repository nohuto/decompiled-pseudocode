/*
 * XREFs of sub_140763000 @ 0x140763000
 * Callers:
 *     sub_140762C04 @ 0x140762C04 (sub_140762C04.c)
 *     sub_140762F18 @ 0x140762F18 (sub_140762F18.c)
 *     sub_14076308C @ 0x14076308C (sub_14076308C.c)
 *     sub_14084F808 @ 0x14084F808 (sub_14084F808.c)
 *     sub_140860758 @ 0x140860758 (sub_140860758.c)
 *     sub_140953894 @ 0x140953894 (sub_140953894.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140763000(__int64 a1)
{
  char v1; // dl

  v1 = 1;
  if ( !a1 || !*(_QWORD *)(a1 + 80) || (*(_DWORD *)(a1 + 4) & 4) == 0 || *(_QWORD *)(a1 + 88) )
    return 0;
  return v1;
}
