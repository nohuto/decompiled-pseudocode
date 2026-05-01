/*
 * XREFs of ?OnFullActivationTestTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18046979C
 * Callers:
 *     ?OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x1800E3CC0 (-OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800130A4 (-reset@-$com_ptr_t@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returnc.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1800130C8 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18001319C (-end_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800B30E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Release@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@AEAAKXZ @ 0x1800B724C (-Release@-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@AEAAKXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800B8618 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@.c)
 */

void __fastcall UndockedSearchAppExperienceManager::OnFullActivationTestTimeoutTimer(
        UndockedSearchAppExperienceManager *this)
{
  struct _TP_TIMER **v1; // rbx
  struct _TP_TIMER *v3; // rcx
  void **v4; // rsi
  volatile signed __int32 *v5; // rdi
  LPVOID pv; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _TP_TIMER **)((char *)this + 816);
  v3 = (struct _TP_TIMER *)*((_QWORD *)this + 102);
  if ( v3 && !IsThreadpoolTimerSet(v3) )
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v1,
      0LL);
  v4 = (void **)((char *)this + 824);
  v5 = *tip2::tip_test<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::ensure_data((volatile signed __int32 **)this + 103);
  pv = (LPVOID)v5;
  if ( v5 )
    _InterlockedIncrement(v5 + 84);
  tip2::details::shared_data<1,0,0>::begin_update((__int64)(v5 + 2));
  *((_BYTE *)v5 + 272) = 1;
  tip2::details::shared_data<1,0,0>::end_update((__int64)(v5 + 2));
  wil::com_ptr_t<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>::reset(&pv);
  if ( pv )
    tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>::Release((volatile signed __int32 *)pv);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>::reset(v4);
}
