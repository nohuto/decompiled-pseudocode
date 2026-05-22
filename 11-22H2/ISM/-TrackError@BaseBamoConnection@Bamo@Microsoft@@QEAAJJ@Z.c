/*
 * XREFs of ?TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z @ 0x1801587E0
 * Callers:
 *     ?RemoteInsert@?$ListProxySimpleCommon@VBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UDisplayOcclusionRect@@AEBU6@@Bamo@Microsoft@@MEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x180157F40 (-RemoteInsert@-$ListProxySimpleCommon@VBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Li.c)
 *     ?RemoteRemove@?$ListProxySimpleCommon@VBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UDisplayOcclusionRect@@AEBU6@@Bamo@Microsoft@@MEAAJI@Z @ 0x1801580C0 (-RemoteRemove@-$ListProxySimpleCommon@VBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Li.c)
 *     ?RemoteReplace@?$ListProxySimpleCommon@VBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UDisplayOcclusionRect@@AEBU6@@Bamo@Microsoft@@MEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x180158370 (-RemoteReplace@-$ListProxySimpleCommon@VBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@L.c)
 *     ?RemoteInsert@?$ListProxySimpleCommon@VBamoList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UVirtualTouchpadRect@@AEBU6@@Bamo@Microsoft@@MEAAJIAEBUVirtualTouchpadRect@@@Z @ 0x1801591D0 (-RemoteInsert@-$ListProxySimpleCommon@VBamoList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@Lib.c)
 *     ?RemoteRemove@?$ListProxySimpleCommon@VBamoList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UVirtualTouchpadRect@@AEBU6@@Bamo@Microsoft@@MEAAJI@Z @ 0x180159350 (-RemoteRemove@-$ListProxySimpleCommon@VBamoList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@Lib.c)
 *     ?RemoteReplace@?$ListProxySimpleCommon@VBamoList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UVirtualTouchpadRect@@AEBU6@@Bamo@Microsoft@@MEAAJIAEBUVirtualTouchpadRect@@@Z @ 0x180159530 (-RemoteReplace@-$ListProxySimpleCommon@VBamoList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@Li.c)
 *     ?RemoteInsert@?$ListProxySimpleCommon@VBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UTouchInjectionContact@Input@Internal@UI@Windows@@AEBU6789Windows@@@Bamo@Microsoft@@MEAAJIAEBUTouchInjectionContact@Input@Internal@UI@Windows@@@Z @ 0x1801C3490 (-RemoteInsert@-$ListProxySimpleCommon@VBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@L.c)
 *     ?RemoteRemove@?$ListProxySimpleCommon@VBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UTouchInjectionContact@Input@Internal@UI@Windows@@AEBU6789Windows@@@Bamo@Microsoft@@MEAAJI@Z @ 0x1801C3660 (-RemoteRemove@-$ListProxySimpleCommon@VBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@L.c)
 *     ?RemoteReplace@?$ListProxySimpleCommon@VBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UTouchInjectionContact@Input@Internal@UI@Windows@@AEBU6789Windows@@@Bamo@Microsoft@@MEAAJIAEBUTouchInjectionContact@Input@Internal@UI@Windows@@@Z @ 0x1801C3800 (-RemoteReplace@-$ListProxySimpleCommon@VBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::TrackError(Microsoft::Bamo::BaseBamoConnection *this)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v1; // rax

  v1 = (struct Microsoft::BamoImpl::ConnectionIndirector **)(*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)this + 56LL))(this);
  return Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v1, 0x87B2080C, 1);
}
