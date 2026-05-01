/*
 * XREFs of _lambda_75b78523e3da460933f50e5d76bfa16b_::__lambda_75b78523e3da460933f50e5d76bfa16b_ @ 0x18002EDC8
 * Callers:
 *     _Windows::Internal::MakeAsyncOperation_Windows::Internal::CBasicResult_unsigned_char_0__bool_Windows::Internal::ComTaskPoolHandler__lambda_75b78523e3da460933f50e5d76bfa16b____::_1_::dtor$2 @ 0x18004DEB2 (_Windows--Internal--MakeAsyncOperation_Windows--Internal--CBasicResult_unsigned_cha_ea_18004DEB2.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180013C20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180013C20.c)
 */

volatile signed __int64 *__fastcall lambda_75b78523e3da460933f50e5d76bfa16b_::__lambda_75b78523e3da460933f50e5d76bfa16b_(
        __int64 a1)
{
  volatile signed __int64 *result; // rax

  result = *(volatile signed __int64 **)(a1 + 8);
  if ( result )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
