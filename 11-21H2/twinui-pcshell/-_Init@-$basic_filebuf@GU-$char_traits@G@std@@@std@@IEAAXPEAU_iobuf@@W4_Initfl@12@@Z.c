/*
 * XREFs of ?_Init@?$basic_filebuf@GU?$char_traits@G@std@@@std@@IEAAXPEAU_iobuf@@W4_Initfl@12@@Z @ 0x1805DE1DC
 * Callers:
 *     ??0?$basic_ifstream@GU?$char_traits@G@std@@@std@@QEAA@PEBGHH@Z @ 0x1805DCFA8 (--0-$basic_ifstream@GU-$char_traits@G@std@@@std@@QEAA@PEBGHH@Z.c)
 *     ?close@?$basic_filebuf@GU?$char_traits@G@std@@@std@@QEAAPEAV12@XZ @ 0x1805DE448 (-close@-$basic_filebuf@GU-$char_traits@G@std@@@std@@QEAAPEAV12@XZ.c)
 *     ?setbuf@?$basic_filebuf@GU?$char_traits@G@std@@@std@@MEAAPEAV?$basic_streambuf@GU?$char_traits@G@std@@@2@PEAG_J@Z @ 0x1805DEA40 (-setbuf@-$basic_filebuf@GU-$char_traits@G@std@@@std@@MEAAPEAV-$basic_streambuf@GU-$char_traits@G.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::basic_filebuf<unsigned short>::_Init(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 114) = 0;
  *(_BYTE *)(a1 + 124) = a3 == 1;
  std::basic_streambuf<unsigned short>::_Init();
  result = `std::basic_filebuf<unsigned short>::_Init'::`2'::_Stinit;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 128) = a2;
  *(_QWORD *)(a1 + 116) = result;
  return result;
}
