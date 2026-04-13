/*
 * XREFs of ??$_IteratorGetMany@U?$IIterator_impl@U?$AggregateType@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@PEAUIOnlineIdServiceTicketRequest@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@U?$AggregateType@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@PEAUIOnlineIdServiceTicketRequest@2345@@Internal@Foundation@Windows@@$00@123@IPEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@3@PEAI@Z @ 0x1800298C8
 * Callers:
 *     ?GetMany@?$IIterator_impl@U?$AggregateType@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@PEAUIOnlineIdServiceTicketRequest@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@4@PEAI@Z @ 0x1800359F0 (-GetMany@-$IIterator_impl@U-$AggregateType@PEAVOnlineIdServiceTicketRequest@OnlineId@Authenticat.c)
 * Callees:
 *     memset_0 @ 0x180022C6D (memset_0.c)
 *     ??$_Cleanup@UIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@3@I@Z @ 0x18002961C (--$_Cleanup@UIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@I@Detail@Co.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_IteratorGetMany<Windows::Foundation::Collections::IIterator_impl<Windows::Foundation::Internal::AggregateType<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest *>,1>,Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest *>(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int *a4)
{
  __int64 v8; // rdi
  int v9; // ebx
  char v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0;
  v8 = 0LL;
  memset_0(a3, 0, 8LL * a2);
  *a4 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 56LL))(a1, &v11);
  if ( v9 < 0 )
  {
LABEL_8:
    Windows::Foundation::Collections::Detail::_Cleanup<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest,unsigned int>(
      a3,
      *a4);
  }
  else
  {
    while ( v11 )
    {
      if ( (unsigned int)v8 < a2 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a1 + 48LL))(a1, &a3[v8]);
        if ( v9 < 0 )
          goto LABEL_8;
        v8 = (unsigned int)(v8 + 1);
        v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 64LL))(a1, &v11);
        if ( v9 >= 0 )
          continue;
      }
      if ( v9 < 0 )
        goto LABEL_8;
      break;
    }
    *a4 = v8;
  }
  return (unsigned int)v9;
}
