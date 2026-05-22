/*
 * XREFs of ?SetAnimationDataForSource@DragManagerClientProxy@@QEAAX_KAEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z @ 0x1801558A8
 * Callers:
 *     ?StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetClientProxy@@IPEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x180153CB0 (-StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetCl.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000E920 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180024ACC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?ClearAnimationDataForAllSources@DragManagerClientProxy@@AEAAXXZ @ 0x180061404 (-ClearAnimationDataForAllSources@DragManagerClientProxy@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18011DC70 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     ?OnManagerAnimationDataChange@GestureServices@@QEAAX_K0@Z @ 0x1801532DC (-OnManagerAnimationDataChange@GestureServices@@QEAAX_K0@Z.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KUGestureAnimationData@Input@Internal@UI@Windows@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUGestureAnimationData@Input@Internal@UI@Windows@@@std@@@7@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KUGestureAnimationData@Input@Internal@UI@Windows@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x180154360 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KUGestureAnimationData@Input@Internal@UI@Windo.c)
 */

void __fastcall DragManagerClientProxy::SetAnimationDataForSource(
        DragManagerClientProxy *this,
        __int64 a2,
        const struct Windows::UI::Internal::Input::GestureAnimationData *a3)
{
  __int64 v5; // rcx
  char *v6; // rbx
  struct InputSystemServerConnection *BamoServerConnection; // rax
  GestureServices *v8; // rax
  unsigned __int64 appended; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  char *v14; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = a2;
  if ( *((_QWORD *)this + 10) >= 0x64uLL )
  {
    MicrosoftTelemetryAssertTriggeredNoArgs();
    DragManagerClientProxy::ClearAnimationDataForAllSources(this);
  }
  std::_Hash<std::_Umap_traits<unsigned __int64,Windows::UI::Internal::Input::GestureAnimationData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Windows::UI::Internal::Input::GestureAnimationData>>,0>>::_Try_emplace<unsigned __int64 const &,>(
    (float *)this + 16,
    (__int64)&v14,
    (unsigned __int8 *)&v15);
  v6 = v14;
  if ( *((_QWORD *)v14 + 3) != *(_QWORD *)a3 )
  {
    BamoServerConnection = ISMStatics::GetBamoServerConnection();
    v8 = (GestureServices *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL)
                                                               + 88LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
    GestureServices::OnManagerAnimationDataChange(v8, *((_QWORD *)v6 + 3), *(_QWORD *)a3);
    *(_OWORD *)(v6 + 24) = *(_OWORD *)a3;
  }
  if ( !*(_QWORD *)a3 )
  {
    appended = std::_Fnv1a_append_bytes(v5, (const unsigned __int8 *const)v6 + 16, 8uLL);
    v10 = *((_QWORD *)this + 11);
    v11 = 2 * (*((_QWORD *)this + 14) & appended);
    if ( *(char **)(v10 + 16 * (*((_QWORD *)this + 14) & appended) + 8) == v6 )
    {
      if ( *(char **)(v10 + 16 * (*((_QWORD *)this + 14) & appended)) == v6 )
      {
        v12 = *((_QWORD *)this + 9);
        *(_QWORD *)(v10 + 8 * v11) = v12;
      }
      else
      {
        v12 = *((_QWORD *)v6 + 1);
      }
      *(_QWORD *)(v10 + 8 * v11 + 8) = v12;
    }
    else if ( *(char **)(v10 + 16 * (*((_QWORD *)this + 14) & appended)) == v6 )
    {
      *(_QWORD *)(v10 + 16 * (*((_QWORD *)this + 14) & appended)) = *(_QWORD *)v6;
    }
    v13 = *(_QWORD *)v6;
    --*((_QWORD *)this + 10);
    **((_QWORD **)v6 + 1) = v13;
    *(_QWORD *)(v13 + 8) = *((_QWORD *)v6 + 1);
    std::_Deallocate<16,0>(v6, 0x28uLL);
  }
}
