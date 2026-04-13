/*
 * XREFs of ??$_VectorReplaceAll@U?$IVector_impl@U?$AggregateType@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@PEAUIOnlineIdServiceTicketRequest@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVector_impl@U?$AggregateType@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@PEAUIOnlineIdServiceTicketRequest@2345@@Internal@Foundation@Windows@@$00@123@IPEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@3@@Z @ 0x180029BA0
 * Callers:
 *     ?ReplaceAll@?$IVector_impl@U?$AggregateType@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@PEAUIOnlineIdServiceTicketRequest@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@4@@Z @ 0x18003E120 (-ReplaceAll@-$IVector_impl@U-$AggregateType@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentica.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_VectorReplaceAll<Windows::Foundation::Collections::IVector_impl<Windows::Foundation::Internal::AggregateType<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest *>,1>,Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest *>(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  int v6; // esi
  __int64 i; // rbx

  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
  if ( v6 >= 0 )
  {
    for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 104LL))(a1, *(_QWORD *)(a3 + 8 * i));
      if ( v6 < 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
        return (unsigned int)v6;
      }
    }
  }
  return (unsigned int)v6;
}
