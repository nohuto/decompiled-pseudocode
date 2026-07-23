/*
 * XREFs of sub_14070BCA4 @ 0x14070BCA4
 * Callers:
 *     sub_140683990 @ 0x140683990 (sub_140683990.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1402A0800 (IoSetThreadHardErrorMode.c)
 *     sub_1406AC130 @ 0x1406AC130 (sub_1406AC130.c)
 *     sub_1406AC404 @ 0x1406AC404 (sub_1406AC404.c)
 *     sub_1407A2CB0 @ 0x1407A2CB0 (sub_1407A2CB0.c)
 */

void __fastcall sub_14070BCA4(__int64 a1)
{
  _QWORD *v1; // rdi
  BOOLEAN v3; // bl

  v1 = *(_QWORD **)(a1 + 1392);
  if ( v1 )
  {
    v3 = IoSetThreadHardErrorMode(0);
    sub_1407A2CB0(a1, v1, 0LL);
    IoSetThreadHardErrorMode(v3);
    *(_QWORD *)(a1 + 1392) = 0LL;
    sub_1406AC404((__int64)v1);
    sub_1406AC130(v1);
  }
}
