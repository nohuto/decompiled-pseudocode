/*
 * XREFs of ??1?$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180097B54
 * Callers:
 *     _Microsoft::Bamo::BaseBamoConnection::CreateClient_AnimationDataProviderConnection__::_1_::dtor$0 @ 0x1800554CA (_Microsoft--Bamo--BaseBamoConnection--CreateClient_AnimationDataProviderConnection__--_1_--dtor$.c)
 *     _MPCManager::MPCManager_::_1_::dtor$1 @ 0x180055524 (_MPCManager--MPCManager_--_1_--dtor$1.c)
 *     _Microsoft::Bamo::BaseBamoConnection::CreateServer_InputSystemInternalServerConnection__::_1_::dtor$0 @ 0x18005579E (_Microsoft--Bamo--BaseBamoConnection--CreateServer_InputSystemInternalServerConnection__--_1_--d.c)
 *     _Microsoft::Bamo::BaseBamoConnection::CreateClient_InputSystemInternalClientConnection__::_1_::dtor$0 @ 0x180120647 (_Microsoft--Bamo--BaseBamoConnection--CreateClient_InputSystemInternalClientConnection__--_1_--d.c)
 *     _Microsoft::Bamo::BaseBamoConnection::CreateClient_MPCManagerClientConnection__::_1_::dtor$0 @ 0x18015761A (_Microsoft--Bamo--BaseBamoConnection--CreateClient_MPCManagerClientConnection__--_1_--dtor$0.c)
 * Callees:
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18002BBAC (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>(
        Microsoft::Bamo::BaseBamoConnection **a1)
{
  Microsoft::Bamo::BaseBamoConnection *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::Bamo::BaseBamoConnection::Release(v1);
  return result;
}
