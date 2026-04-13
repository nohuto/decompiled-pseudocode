/*
 * XREFs of ?sbumpc@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@QEAAGXZ @ 0x180064F00
 * Callers:
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x180061AA0 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Ipfx@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA_N_N@Z @ 0x18006208C (-_Ipfx@-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA_N_N@Z.c)
 *     ?_Ipfx@?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAA_N_N@Z @ 0x1800B8B0C (-_Ipfx@-$basic_istream@_WU-$char_traits@_W@std@@@std@@QEAA_N_N@Z.c)
 * Callees:
 *     ?_Gnavail@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@IEBA_JXZ @ 0x1800619F4 (-_Gnavail@-$basic_streambuf@_WU-$char_traits@_W@std@@@std@@IEBA_JXZ.c)
 */

__int64 __fastcall std::wstreambuf::sbumpc(__int64 a1)
{
  unsigned __int16 **v2; // rcx
  unsigned __int16 *v3; // rdx

  if ( std::wstreambuf::_Gnavail(a1) <= 0 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  --**(_DWORD **)(a1 + 80);
  v2 = *(unsigned __int16 ***)(a1 + 56);
  v3 = (*v2)++;
  return *v3;
}
