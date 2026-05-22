/*
 * XREFs of ?IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ @ 0x18008DD74
 * Callers:
 *     ?RemoveAt@?$ListPrincipalCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@Bamo@Microsoft@@QEAAJI@Z @ 0x18008E1DC (-RemoveAt@-$ListPrincipalCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamo.c)
 *     ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_DisplayOcclusionRect_Stub@2345@UDisplayOcclusionRect@@AEBU8@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IAEBUDisplayOcclusionRect@@@Z @ 0x18013362C (-InsertWorker@-$ListPrincipalSimpleCommon@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_Auto.c)
 *     ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_VirtualTouchpadRect_Stub@2345@UVirtualTouchpadRect@@AEBU8@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IAEBUVirtualTouchpadRect@@@Z @ 0x180133730 (-InsertWorker@-$ListPrincipalSimpleCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoB.c)
 *     ?RemoveAt@?$ListPrincipalCommon@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@UDisplayOcclusionRect@@@Bamo@Microsoft@@QEAAJI@Z @ 0x180135FD4 (-RemoveAt@-$ListPrincipalCommon@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@.c)
 *     ?RemoveAt@?$ListPrincipalCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@UVirtualTouchpadRect@@@Bamo@Microsoft@@QEAAJI@Z @ 0x180136104 (-RemoveAt@-$ListPrincipalCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@B.c)
 *     ?Replace@?$ListPrincipalSimpleCommon@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_DisplayOcclusionRect_Stub@2345@UDisplayOcclusionRect@@AEBU8@@Bamo@Microsoft@@QEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x18013622C (-Replace@-$ListPrincipalSimpleCommon@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos.c)
 *     ?Replace@?$ListPrincipalSimpleCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_VirtualTouchpadRect_Stub@2345@UVirtualTouchpadRect@@AEBU8@@Bamo@Microsoft@@QEAAJIAEBUVirtualTouchpadRect@@@Z @ 0x180136438 (-Replace@-$ListPrincipalSimpleCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@.c)
 *     ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_PenDevicePrincipal_Stub@2345@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAVBamoPenDevicePrincipal@@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IPEAVBamoPenDevicePrincipal@@@Z @ 0x180186D5C (-InsertWorker@-$ListPrincipalSimpleCommon@VBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBa.c)
 *     ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_SimpleHapticsControllerFeedback_Stub@2345@USimpleHapticsControllerFeedback@@AEBU8@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IAEBUSimpleHapticsControllerFeedback@@@Z @ 0x18018D52C (-InsertWorker@-$ListPrincipalSimpleCommon@VBamoList_SimpleHapticsControllerFeedback_Principal@IS.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall Microsoft::Bamo::BaseBamoConnection::IsDisconnected(Microsoft::Bamo::BaseBamoConnection *this)
{
  return *(_QWORD *)((*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)this + 48LL))(this)
                   + 64) == 0LL;
}
