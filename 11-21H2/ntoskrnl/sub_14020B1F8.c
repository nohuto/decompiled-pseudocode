/*
 * XREFs of sub_14020B1F8 @ 0x14020B1F8
 * Callers:
 *     sub_14020AABC @ 0x14020AABC (sub_14020AABC.c)
 *     sub_14068A7FC @ 0x14068A7FC (sub_14068A7FC.c)
 *     sub_140833B80 @ 0x140833B80 (sub_140833B80.c)
 *     sub_14085A568 @ 0x14085A568 (sub_14085A568.c)
 * Callees:
 *     sub_1402A4320 @ 0x1402A4320 (sub_1402A4320.c)
 *     sub_14068B6FC @ 0x14068B6FC (sub_14068B6FC.c)
 *     sub_14068E614 @ 0x14068E614 (sub_14068E614.c)
 *     sub_1406EA2F0 @ 0x1406EA2F0 (sub_1406EA2F0.c)
 *     sub_140AB41E0 @ 0x140AB41E0 (sub_140AB41E0.c)
 *     sub_140AB41FC @ 0x140AB41FC (sub_140AB41FC.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 */

__int64 __fastcall sub_14020B1F8(__int64 a1)
{
  sub_140AB4370();
  sub_140AB41FC(a1);
  if ( *(_QWORD *)(a1 + 4792) )
  {
    if ( (unsigned __int8)sub_14068B6FC() || (*(_DWORD *)(a1 + 4112) & 0x20) != 0 )
    {
      if ( (unsigned __int8)sub_14068E614(a1 + 224) )
        sub_1402A4320(2LL, 0LL, 0LL);
    }
    else
    {
      sub_1406EA2F0(a1);
    }
  }
  sub_140AB41E0(a1);
  return sub_140AB4260();
}
