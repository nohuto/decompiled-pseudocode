/*
 * XREFs of sub_18001CB40 @ 0x18001CB40
 * Callers:
 *     sub_18001CD8C @ 0x18001CD8C (sub_18001CD8C.c)
 *     sub_18002EBE0 @ 0x18002EBE0 (sub_18002EBE0.c)
 *     sub_18002EE38 @ 0x18002EE38 (sub_18002EE38.c)
 *     sub_18002FD24 @ 0x18002FD24 (sub_18002FD24.c)
 *     sub_18004D5EC @ 0x18004D5EC (sub_18004D5EC.c)
 *     sub_18004D6B4 @ 0x18004D6B4 (sub_18004D6B4.c)
 *     sub_18004D7D8 @ 0x18004D7D8 (sub_18004D7D8.c)
 *     sub_18004DC30 @ 0x18004DC30 (sub_18004DC30.c)
 *     sub_18004DD30 @ 0x18004DD30 (sub_18004DD30.c)
 *     sub_18004DE24 @ 0x18004DE24 (sub_18004DE24.c)
 *     sub_18004FA08 @ 0x18004FA08 (sub_18004FA08.c)
 *     sub_18004FA5C @ 0x18004FA5C (sub_18004FA5C.c)
 *     sub_1800504A0 @ 0x1800504A0 (sub_1800504A0.c)
 *     sub_180050CB0 @ 0x180050CB0 (sub_180050CB0.c)
 *     sub_18007BE40 @ 0x18007BE40 (sub_18007BE40.c)
 * Callees:
 *     sub_18001C7B4 @ 0x18001C7B4 (sub_18001C7B4.c)
 */

bool __fastcall sub_18001CB40(__int64 a1, __int64 a2, _QWORD *a3)
{
  char v3; // bl

  v3 = 0;
  if ( !*(_BYTE *)(a2 + 25) )
    return (unsigned __int8)sub_18001C7B4(a3, (_QWORD *)(a2 + 32)) == 0;
  return v3;
}
