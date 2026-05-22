/*
 * XREFs of ?ClearAnimationDataForAllSources@DragManagerClientProxy@@AEAAXXZ @ 0x180073C64
 * Callers:
 *     ?OnDisconnected@DragManagerClientProxy@@MEAAJXZ @ 0x180163A30 (-OnDisconnected@DragManagerClientProxy@@MEAAJXZ.c)
 *     ?SetAnimationDataForSource@DragManagerClientProxy@@QEAAX_KAEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z @ 0x180163B88 (-SetAnimationDataForSource@DragManagerClientProxy@@QEAAX_KAEBUGestureAnimationData@Input@Interna.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800254AC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnManagerAnimationDataChange@GestureServices@@QEAAX_K0@Z @ 0x1801615BC (-OnManagerAnimationDataChange@GestureServices@@QEAAX_K0@Z.c)
 */

void __fastcall DragManagerClientProxy::ClearAnimationDataForAllSources(DragManagerClientProxy *this)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v3; // rax
  char *v4; // rsi
  _QWORD *v5; // rdi
  GestureServices *v6; // rbp
  _QWORD *i; // rbx

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 88LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  v4 = (char *)this + 64;
  v5 = (_QWORD *)*((_QWORD *)this + 9);
  v6 = (GestureServices *)v3;
  for ( i = (_QWORD *)*v5; i != v5; i = (_QWORD *)*i )
    GestureServices::OnManagerAnimationDataChange(v6, i[3], 0LL);
  std::_Hash<std::_Umap_traits<unsigned __int64,Windows::UI::Internal::Input::GestureAnimationData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Windows::UI::Internal::Input::GestureAnimationData>>,0>>::clear(v4);
}
