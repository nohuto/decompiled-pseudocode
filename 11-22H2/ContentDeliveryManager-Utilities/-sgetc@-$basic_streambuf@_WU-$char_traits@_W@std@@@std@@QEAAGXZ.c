/*
 * XREFs of ?sgetc@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@QEAAGXZ @ 0x1800652D8
 * Callers:
 *     ?_Ipfx@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA_N_N@Z @ 0x18006208C (-_Ipfx@-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA_N_N@Z.c)
 *     ?_Peek@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@AEBA_WXZ @ 0x180062390 (-_Peek@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@AEBA_WXZ.c)
 *     ?_Ipfx@?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAA_N_N@Z @ 0x1800B8B0C (-_Ipfx@-$basic_istream@_WU-$char_traits@_W@std@@@std@@QEAA_N_N@Z.c)
 * Callees:
 *     ?_Gnavail@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@IEBA_JXZ @ 0x1800619F4 (-_Gnavail@-$basic_streambuf@_WU-$char_traits@_W@std@@@std@@IEBA_JXZ.c)
 */

__int64 __fastcall std::wstreambuf::sgetc(unsigned __int16 ***a1)
{
  if ( std::wstreambuf::_Gnavail((__int64)a1) <= 0 )
    return ((__int64 (__fastcall *)(unsigned __int16 ***))(*a1)[6])(a1);
  else
    return **a1[7];
}
