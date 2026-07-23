/*
 * XREFs of sub_1402E0198 @ 0x1402E0198
 * Callers:
 *     sub_1406054D0 @ 0x1406054D0 (sub_1406054D0.c)
 *     sub_14064F770 @ 0x14064F770 (sub_14064F770.c)
 *     sub_140696944 @ 0x140696944 (sub_140696944.c)
 *     sub_1406E9530 @ 0x1406E9530 (sub_1406E9530.c)
 *     sub_14070AFEC @ 0x14070AFEC (sub_14070AFEC.c)
 *     sub_1407446E0 @ 0x1407446E0 (sub_1407446E0.c)
 *     sub_1407459F4 @ 0x1407459F4 (sub_1407459F4.c)
 *     sub_140748300 @ 0x140748300 (sub_140748300.c)
 *     IoCreateDevice @ 0x14074ED50 (IoCreateDevice.c)
 *     IoWMIOpenBlock @ 0x140784550 (IoWMIOpenBlock.c)
 *     sub_14078508C @ 0x14078508C (sub_14078508C.c)
 *     sub_1407F385C @ 0x1407F385C (sub_1407F385C.c)
 *     sub_140804350 @ 0x140804350 (sub_140804350.c)
 *     sub_14080E438 @ 0x14080E438 (sub_14080E438.c)
 *     sub_14080F068 @ 0x14080F068 (sub_14080F068.c)
 *     sub_14082666C @ 0x14082666C (sub_14082666C.c)
 *     sub_140827DE0 @ 0x140827DE0 (sub_140827DE0.c)
 *     sub_14082848C @ 0x14082848C (sub_14082848C.c)
 *     sub_140841F20 @ 0x140841F20 (sub_140841F20.c)
 *     sub_140843C1C @ 0x140843C1C (sub_140843C1C.c)
 *     IoCreateDriver @ 0x14084F500 (IoCreateDriver.c)
 *     sub_1408646E8 @ 0x1408646E8 (sub_1408646E8.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z_1 @ 0x14094DE60 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@A_ea_14094DE60.c)
 *     sub_14094E570 @ 0x14094E570 (sub_14094E570.c)
 *     sub_140957F9C @ 0x140957F9C (sub_140957F9C.c)
 *     sub_1409AC388 @ 0x1409AC388 (sub_1409AC388.c)
 *     sub_1409B9B50 @ 0x1409B9B50 (sub_1409B9B50.c)
 *     sub_1409CF26C @ 0x1409CF26C (sub_1409CF26C.c)
 *     sub_1409D0360 @ 0x1409D0360 (sub_1409D0360.c)
 *     sub_1409D1418 @ 0x1409D1418 (sub_1409D1418.c)
 *     sub_1409D3874 @ 0x1409D3874 (sub_1409D3874.c)
 *     sub_140A047F0 @ 0x140A047F0 (sub_140A047F0.c)
 *     sub_140A05110 @ 0x140A05110 (sub_140A05110.c)
 *     sub_140A10FDC @ 0x140A10FDC (sub_140A10FDC.c)
 *     sub_140A1483C @ 0x140A1483C (sub_140A1483C.c)
 *     sub_140B0E1A8 @ 0x140B0E1A8 (sub_140B0E1A8.c)
 *     sub_140B0F20C @ 0x140B0F20C (sub_140B0F20C.c)
 *     sub_140B2BC5C @ 0x140B2BC5C (sub_140B2BC5C.c)
 * Callees:
 *     _vsnwprintf @ 0x1403E0440 (_vsnwprintf.c)
 */

__int64 sub_1402E0198(wchar_t *a1, __int64 a2, const wchar_t *a3, ...)
{
  unsigned __int64 v4; // rsi
  unsigned int v5; // edi
  int v6; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, a3);
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    v5 = -1073741811;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v4 = a2 - 1;
    v5 = 0;
    v6 = vsnwprintf(a1, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v4 )
    {
      v5 = -2147483643;
      goto LABEL_5;
    }
    if ( v6 == v4 )
LABEL_5:
      a1[v4] = 0;
  }
  return v5;
}
