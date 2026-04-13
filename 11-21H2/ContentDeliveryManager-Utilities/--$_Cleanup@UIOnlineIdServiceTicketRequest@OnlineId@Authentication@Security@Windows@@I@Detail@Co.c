/*
 * XREFs of ??$_Cleanup@UIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@3@I@Z @ 0x1800273A8
 * Callers:
 *     ?GetMany@?$IIterator_impl@U?$AggregateType@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@PEAUIOnlineIdServiceTicketRequest@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@4@PEAI@Z @ 0x180037620 (-GetMany@-$IIterator_impl@U-$AggregateType@PEAVOnlineIdServiceTicketRequest@OnlineId@Authenticat.c)
 *     ?GetMany@?$IVectorView_impl@U?$AggregateType@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@PEAUIOnlineIdServiceTicketRequest@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@4@PEAI@Z @ 0x180037710 (-GetMany@-$IVectorView_impl@U-$AggregateType@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentic.c)
 *     ?GetMany@?$IVector_impl@U?$AggregateType@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@PEAUIOnlineIdServiceTicketRequest@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@4@PEAI@Z @ 0x180037810 (-GetMany@-$IVector_impl@U-$AggregateType@PEAVOnlineIdServiceTicketRequest@OnlineId@Authenticatio.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_Cleanup<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest,unsigned int>(
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
