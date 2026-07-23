/*
 * XREFs of sub_1406EB5A4 @ 0x1406EB5A4
 * Callers:
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 * Callees:
 *     sub_140285FE0 @ 0x140285FE0 (sub_140285FE0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14058C0E4 @ 0x14058C0E4 (sub_14058C0E4.c)
 */

__int64 __fastcall sub_1406EB5A4(__int64 a1)
{
  __int64 v3[21]; // [rsp+20h] [rbp-A8h] BYREF

  memset(&v3[1], 0, 0x90uLL);
  if ( *(_BYTE *)(a1 + 65) == 1 )
    sub_14058C0E4(*(_QWORD *)(a1 + 80));
  v3[0] = *(_QWORD *)(a1 + 80);
  return sub_140285FE0(v3, (_QWORD *)(a1 + 24), 4);
}
