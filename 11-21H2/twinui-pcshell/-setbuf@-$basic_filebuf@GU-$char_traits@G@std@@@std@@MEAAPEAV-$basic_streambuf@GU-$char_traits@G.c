/*
 * XREFs of ?setbuf@?$basic_filebuf@GU?$char_traits@G@std@@@std@@MEAAPEAV?$basic_streambuf@GU?$char_traits@G@std@@@2@PEAG_J@Z @ 0x1805DEA40
 * Callers:
 *     <none>
 * Callees:
 *     ?_Init@?$basic_filebuf@GU?$char_traits@G@std@@@std@@IEAAXPEAU_iobuf@@W4_Initfl@12@@Z @ 0x1805DE1DC (-_Init@-$basic_filebuf@GU-$char_traits@G@std@@@std@@IEAAXPEAU_iobuf@@W4_Initfl@12@@Z.c)
 */

__int64 __fastcall std::basic_filebuf<unsigned short>::setbuf(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  __int64 v6; // rcx

  if ( a2 || a3 )
    v5 = 0LL;
  else
    v5 = 4LL;
  v6 = *(_QWORD *)(a1 + 128);
  if ( !v6 || (unsigned int)_o_setvbuf(v6, a2, v5, 2 * a3) )
    return 0LL;
  std::basic_filebuf<unsigned short>::_Init(a1, *(_QWORD *)(a1 + 128), 1);
  return a1;
}
