/*
 * XREFs of ?_Gnavail@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@IEBA_JXZ @ 0x1800619F4
 * Callers:
 *     ?_Ipfx@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA_N_N@Z @ 0x18006208C (-_Ipfx@-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA_N_N@Z.c)
 *     ?sbumpc@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@QEAAGXZ @ 0x180064F00 (-sbumpc@-$basic_streambuf@_WU-$char_traits@_W@std@@@std@@QEAAGXZ.c)
 *     ?sgetc@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@QEAAGXZ @ 0x1800652D8 (-sgetc@-$basic_streambuf@_WU-$char_traits@_W@std@@@std@@QEAAGXZ.c)
 *     ?xsgetn@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@MEAA_JPEA_W_J@Z @ 0x180065550 (-xsgetn@-$basic_streambuf@_WU-$char_traits@_W@std@@@std@@MEAA_JPEA_W_J@Z.c)
 *     ?_Ipfx@?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAA_N_N@Z @ 0x1800B8B0C (-_Ipfx@-$basic_istream@_WU-$char_traits@_W@std@@@std@@QEAA_N_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstreambuf::_Gnavail(__int64 a1)
{
  int v1; // edx

  v1 = 0;
  if ( **(_QWORD **)(a1 + 56) )
    return **(int **)(a1 + 80);
  return v1;
}
