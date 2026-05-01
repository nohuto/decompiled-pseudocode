/*
 * XREFs of ?NotifyFailure@?$test_watcher@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x180287E80
 * Callers:
 *     <none>
 * Callees:
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x180086D28 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18016B8F0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?end_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ @ 0x180288BF4 (-end_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ.c)
 *     ??0StoredFailureInfo@wil@@QEAA@AEBUFailureInfo@1@@Z @ 0x18038CBDC (--0StoredFailureInfo@wil@@QEAA@AEBUFailureInfo@1@@Z.c)
 *     ?push_back@?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N$$QEAVStoredFailureInfo@wil@@@Z @ 0x18046D5C0 (-push_back@-$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N$$QEAVStoredFailureInfo@wil@@@Z.c)
 */

char __fastcall tip2::test_watcher<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::NotifyFailure(
        __int64 a1,
        const struct wil::FailureInfo *a2)
{
  __int64 v2; // rdi
  bool v4; // bl
  _BYTE v6[152]; // [rsp+20h] [rbp-B8h] BYREF
  volatile signed __int32 *v7; // [rsp+B8h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  if ( tip2::details::shared_data<0,0,1>::begin_update(v2 + 8) )
  {
    wil::StoredFailureInfo::StoredFailureInfo((wil::StoredFailureInfo *)v6, a2);
    v4 = (unsigned __int8)tip2::vector_nothrow<wil::StoredFailureInfo>::push_back(v2 + 80, v6) == 0;
    wil::details::shared_buffer::reset(&v7);
    if ( v4 )
      *(_DWORD *)(v2 + 72) |= 0x100000u;
  }
  tip2::details::shared_data<0,0,1>::end_update(v2 + 8);
  return 0;
}
