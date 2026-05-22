/*
 * XREFs of ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18002BBAC
 * Callers:
 *     ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x180029FAC (-Create@InputSystemServerConnection@@SA-AV-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@.c)
 *     _lambda_d12edc8f4df206c0d98be8a6673aacf9_::operator() @ 0x18002B984 (_lambda_d12edc8f4df206c0d98be8a6673aacf9_--operator().c)
 *     ?InternalRelease@?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x18002BB84 (-InternalRelease@-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@XZ @ 0x18002C380 (-GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@X.c)
 *     ?RuntimeClassInitialize@AnimationDataProvider@@UEAAJXZ @ 0x18002C410 (-RuntimeClassInitialize@AnimationDataProvider@@UEAAJXZ.c)
 *     ??$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVAnimationDataProviderConnection@@@Z @ 0x18002C4D0 (--$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMe.c)
 *     ??$CreateServer@VInputSystemServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVInputSystemServerConnection@@@Z @ 0x18002C5CC (--$CreateServer@VInputSystemServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessag.c)
 *     ??$CreateServer@VInputSystemInternalServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVInputSystemInternalServerConnection@@@Z @ 0x18002CC2C (--$CreateServer@VInputSystemInternalServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEA.c)
 *     ??$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVMPCManagerConnection@@@Z @ 0x18002CD44 (--$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSessio.c)
 *     ??1?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@QEAA@XZ @ 0x1800818FC (--1-$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VAnimationDataProviderConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x180087D3C (-InternalRelease@-$ComPtr@VAnimationDataProviderConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180097B54 (--1-$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1MPCManager@@UEAA@XZ @ 0x180097D98 (--1MPCManager@@UEAA@XZ.c)
 *     ??$CreateClient@VInputSystemInternalClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVInputSystemInternalClientConnection@@@Z @ 0x18012057C (--$CreateClient@VInputSystemInternalClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEA.c)
 *     std::_Func_impl_no_alloc__lambda_2a263001a26d7ccb0e01a80a789391e1__void_::_Do_call @ 0x180120BA0 (std--_Func_impl_no_alloc__lambda_2a263001a26d7ccb0e01a80a789391e1__void_--_Do_call.c)
 *     ??$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVMPCManagerClientConnection@@@Z @ 0x180157538 (--$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessage.c)
 *     ??1MPCManagerClient@@UEAA@XZ @ 0x180158A58 (--1MPCManagerClient@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@MPCManagerClient@@QEAAJXZ @ 0x18015D6BC (-RuntimeClassInitialize@MPCManagerClient@@QEAAJXZ.c)
 *     ??1MPCConstantManagerClient@@UEAA@XZ @ 0x180165028 (--1MPCConstantManagerClient@@UEAA@XZ.c)
 *     ??1InputProcessManager@@UEAA@XZ @ 0x180195AF4 (--1InputProcessManager@@UEAA@XZ.c)
 *     ??4?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSystemInternalServerConnection@@@Z @ 0x180195B98 (--4-$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSystemInt.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::Release(Microsoft::Bamo::BaseBamoConnection *this)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)this + 48LL))(this);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
}
