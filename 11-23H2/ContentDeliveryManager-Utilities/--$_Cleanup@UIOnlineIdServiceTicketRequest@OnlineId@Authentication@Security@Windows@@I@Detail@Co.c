/*
 * XREFs of ??$_Cleanup@UIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@3@I@Z @ 0x18002961C
 * Callers:
 *     ??$_IteratorGetMany@U?$IIterator_impl@U?$AggregateType@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@PEAUIOnlineIdServiceTicketRequest@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@U?$AggregateType@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@PEAUIOnlineIdServiceTicketRequest@2345@@Internal@Foundation@Windows@@$00@123@IPEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@3@PEAI@Z @ 0x1800298C8 (--$_IteratorGetMany@U-$IIterator_impl@U-$AggregateType@PEAVOnlineIdServiceTicketRequest@OnlineId.c)
 *     ??$_VectorGetMany@U?$IVectorView_impl@U?$AggregateType@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@PEAUIOnlineIdServiceTicketRequest@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVectorView_impl@U?$AggregateType@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@PEAUIOnlineIdServiceTicketRequest@2345@@Internal@Foundation@Windows@@$00@123@IIPEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@3@PEAI@Z @ 0x1800299B8 (--$_VectorGetMany@U-$IVectorView_impl@U-$AggregateType@PEAVOnlineIdServiceTicketRequest@OnlineId.c)
 *     ??$_VectorGetMany@U?$IVector_impl@U?$AggregateType@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@PEAUIOnlineIdServiceTicketRequest@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVector_impl@U?$AggregateType@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@PEAUIOnlineIdServiceTicketRequest@2345@@Internal@Foundation@Windows@@$00@123@IIPEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@3@PEAI@Z @ 0x180029AAC (--$_VectorGetMany@U-$IVector_impl@U-$AggregateType@PEAVOnlineIdServiceTicketRequest@OnlineId@Aut.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
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
