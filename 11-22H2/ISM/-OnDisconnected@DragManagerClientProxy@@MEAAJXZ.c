/*
 * XREFs of ?OnDisconnected@DragManagerClientProxy@@MEAAJXZ @ 0x180163A30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800254AC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?IsShellClient@GestureServices@@AEBA_NPEAVDragManagerClientProxy@@@Z @ 0x180073418 (-IsShellClient@GestureServices@@AEBA_NPEAVDragManagerClientProxy@@@Z.c)
 *     ?ClearAnimationDataForAllSources@DragManagerClientProxy@@AEAAXXZ @ 0x180073C64 (-ClearAnimationDataForAllSources@DragManagerClientProxy@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?clear@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAAXXZ @ 0x180162500 (-clear@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$alloc.c)
 *     ?OnClientDisconnected@ShellGesturesProcessor@@QEAAXPEAVDragManagerClientProxy@@@Z @ 0x18017D190 (-OnClientDisconnected@ShellGesturesProcessor@@QEAAXPEAVDragManagerClientProxy@@@Z.c)
 */

__int64 __fastcall DragManagerClientProxy::OnDisconnected(DragManagerClientProxy *this)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v3; // rdi

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 88LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  DragManagerClientProxy::ClearAnimationDataForAllSources(this);
  ShellGesturesProcessor::OnClientDisconnected(*(ShellGesturesProcessor **)(v3 + 80), this);
  if ( GestureServices::IsShellClient((GestureServices *)v3, this) )
    std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::clear((_QWORD *)(v3 + 136));
  return 0LL;
}
