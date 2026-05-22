/*
 * XREFs of ?OnNotify@DataProviderPrincipal@@UEAAJPEAVBamoDataProviderStub@@_KW4DataProviderNotificationEventArg@@@Z @ 0x180122A00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800254AC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ @ 0x180073E5C (-CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ.c)
 *     ?SendAnimationEndedIfNeeded@GestureHandler@@AEAAXXZ @ 0x180073FCC (-SendAnimationEndedIfNeeded@GestureHandler@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x180156A1C (--$find@X@-$_Hash@V-$_Umap_traits@_KUInputObserverClient@-$CBaseInputObserverServer@$0L@@@V-$_Uh.c)
 */

__int64 __fastcall DataProviderPrincipal::OnNotify(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  GestureHandler *v9; // rbx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 88LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  v12 = a3;
  v8 = v7;
  std::_Hash<std::_Umap_traits<unsigned __int64,CBaseInputObserverServer<11>::InputObserverClient,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,CBaseInputObserverServer<11>::InputObserverClient>>,0>>::find<void>(
    v7 + 264,
    v11,
    &v12);
  if ( v11[0] != *(_QWORD *)(v8 + 272) )
  {
    v9 = *(GestureHandler **)(v11[0] + 24LL);
    if ( *((_BYTE *)v9 + 240) )
    {
      if ( a4 == 1 )
      {
        GestureHandler::SendAnimationEndedIfNeeded(*(GestureHandler **)(v11[0] + 24LL));
        GestureHandler::CleanupAnimationDataIfNeeded(v9);
      }
    }
  }
  return 0LL;
}
