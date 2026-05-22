/*
 * XREFs of ??1?$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800AE490
 * Callers:
 *     ??$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVMPCManagerConnection@@@Z @ 0x180032680 (--$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSessio.c)
 *     ??$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVAnimationDataProviderConnection@@@Z @ 0x180032798 (--$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMe.c)
 *     ??$CreateServer@VInputSystemServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVInputSystemServerConnection@@@Z @ 0x180032860 (--$CreateServer@VInputSystemServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessag.c)
 *     ??$CreateServer@VInputSystemInternalServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVInputSystemInternalServerConnection@@@Z @ 0x180032928 (--$CreateServer@VInputSystemInternalServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEA.c)
 *     __lambda_d12edc8f4df206c0d98be8a6673aacf9_::operator()_::_1_::dtor$1 @ 0x18006C456 (__lambda_d12edc8f4df206c0d98be8a6673aacf9_--operator()_--_1_--dtor$1.c)
 *     _Microsoft::Bamo::BaseBamoConnection::CreateServer_InputSystemInternalServerConnection__::_1_::dtor$0 @ 0x18006C49E (_Microsoft--Bamo--BaseBamoConnection--CreateServer_InputSystemInternalServerConnection__--_1_--d.c)
 *     _Microsoft::Bamo::BaseBamoConnection::CreateClient_AnimationDataProviderConnection__::_1_::dtor$0 @ 0x18006C4D7 (_Microsoft--Bamo--BaseBamoConnection--CreateClient_AnimationDataProviderConnection__--_1_--dtor$.c)
 *     _MPCManager::MPCManager_::_1_::dtor$1 @ 0x18006E3CD (_MPCManager--MPCManager_--_1_--dtor$1.c)
 *     ??$CreateClient@VInputSystemInternalClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVInputSystemInternalClientConnection@@@Z @ 0x18013BC74 (--$CreateClient@VInputSystemInternalClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEA.c)
 *     _Microsoft::Bamo::BaseBamoConnection::CreateClient_InputSystemInternalClientConnection__::_1_::dtor$0 @ 0x18013BD2C (_Microsoft--Bamo--BaseBamoConnection--CreateClient_InputSystemInternalClientConnection__--_1_--d.c)
 *     ??$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVMPCManagerClientConnection@@@Z @ 0x180176788 (--$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessage.c)
 *     _Microsoft::Bamo::BaseBamoConnection::CreateClient_MPCManagerClientConnection__::_1_::dtor$0 @ 0x180176858 (_Microsoft--Bamo--BaseBamoConnection--CreateClient_MPCManagerClientConnection__--_1_--dtor$0.c)
 * Callees:
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180032574 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
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
