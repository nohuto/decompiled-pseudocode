/*
 * XREFs of ?_Calculate_growth@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEBA_K_K@Z @ 0x180029BC8
 * Callers:
 *     ??$_Emplace_reallocate@UINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@QEAAPEAUINPUT_SPACE_PAYLOAD@@QEAU2@$$QEAU2@@Z @ 0x180029AA0 (--$_Emplace_reallocate@UINPUT_SPACE_PAYLOAD@@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT.c)
 *     ??$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@QEAAPEAUINPUT_SPACE_PAYLOAD@@QEAU2@AEAU2@@Z @ 0x180086D3C (--$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UIN.c)
 *     ??$_Emplace_reallocate@AEBUVirtualTouchpadRect@@@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@QEAAPEAUVirtualTouchpadRect@@QEAU2@AEBU2@@Z @ 0x1801300B4 (--$_Emplace_reallocate@AEBUVirtualTouchpadRect@@@-$vector@UVirtualTouchpadRect@@V-$allocator@UVi.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAX_K@Z @ 0x18019E310 (-_Clear_and_reserve_geometric@-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpadRect@@.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::vector<INPUT_SPACE_PAYLOAD>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r9

  result = 0xAAAAAAAAAAAAAAALL;
  v3 = (0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 3)) >> 1;
  if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 3) <= 0xAAAAAAAAAAAAAAALL - v3 )
  {
    result = v3 - 0x5555555555555555LL * ((__int64)(a1[2] - *a1) >> 3);
    if ( result < a2 )
      return a2;
  }
  return result;
}
