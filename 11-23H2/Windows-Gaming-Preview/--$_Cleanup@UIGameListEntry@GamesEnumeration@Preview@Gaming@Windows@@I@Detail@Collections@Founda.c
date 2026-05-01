/*
 * XREFs of ??$_Cleanup@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@3@I@Z @ 0x180012384
 * Callers:
 *     ?GetMany@?$IVector_impl@U?$AggregateType@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@PEAUIGameListEntry@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@4@PEAI@Z @ 0x180012190 (-GetMany@-$IVector_impl@U-$AggregateType@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windo.c)
 *     ?GetMany@?$IVectorView_impl@U?$AggregateType@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@PEAUIGameListEntry@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@4@PEAI@Z @ 0x180012290 (-GetMany@-$IVectorView_impl@U-$AggregateType@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@W.c)
 *     ?GetMany@?$IIterator_impl@U?$AggregateType@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@PEAUIGameListEntry@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@4@PEAI@Z @ 0x1800123E0 (-GetMany@-$IIterator_impl@U-$AggregateType@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Win.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_Cleanup<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,unsigned int>(
        _QWORD *a1,
        unsigned int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  if ( a2 )
  {
    v3 = a2;
    do
    {
      result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
      *a1++ = 0LL;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
