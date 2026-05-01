/*
 * XREFs of ?log_failure@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXAEBUFailureInfo@wil@@@Z @ 0x18046D40C
 * Callers:
 *     ?NotifyFailure@?$test_watcher@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x1801EE2B0 (-NotifyFailure@-$test_watcher@V-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@.c)
 * Callees:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180045680 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x180086D28 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18016B8F0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?push_back@?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N$$QEAVStoredFailureInfo@wil@@@Z @ 0x18046D5C0 (-push_back@-$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N$$QEAVStoredFailureInfo@wil@@@Z.c)
 */

void __fastcall tip2::details::shared_data<0,0,0>::log_failure(__int64 a1, const struct wil::FailureInfo *a2)
{
  __int64 v4; // rdx
  bool v5; // bl
  _BYTE v6[152]; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v7; // [rsp+B8h] [rbp-20h] BYREF

  if ( tip2::details::shared_data<0,0,1>::begin_update(a1) )
  {
    v7 = 0LL;
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)v6, a2);
    v5 = (unsigned __int8)tip2::vector_nothrow<wil::StoredFailureInfo>::push_back(a1 + 72, v6) == 0;
    wil::details::shared_buffer::reset((volatile signed __int32 **)&v7);
    if ( v5 )
      *(_DWORD *)(a1 + 64) |= 0x100000u;
  }
  tip2::details::shared_data<0,0,0>::end_update(a1, v4);
}
