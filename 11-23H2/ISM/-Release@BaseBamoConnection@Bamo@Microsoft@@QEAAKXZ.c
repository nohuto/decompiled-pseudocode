/*
 * XREFs of ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180032574
 * Callers:
 *     ?GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@XZ @ 0x180031F50 (-GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@X.c)
 *     ?InternalRelease@?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x18003234C (-InternalRelease@-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_d12edc8f4df206c0d98be8a6673aacf9_::operator() @ 0x180032374 (_lambda_d12edc8f4df206c0d98be8a6673aacf9_--operator().c)
 *     ?RuntimeClassInitialize@AnimationDataProvider@@UEAAJXZ @ 0x1800325C0 (-RuntimeClassInitialize@AnimationDataProvider@@UEAAJXZ.c)
 *     ??1?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@QEAA@XZ @ 0x180098BAC (--1-$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x18009EF4C (-InternalRelease@-$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800AE490 (--1-$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1MPCManager@@UEAA@XZ @ 0x1800AE6C0 (--1MPCManager@@UEAA@XZ.c)
 *     ??1AnimationDataProvider@@UEAA@XZ @ 0x18010E3D0 (--1AnimationDataProvider@@UEAA@XZ.c)
 *     std::_Func_impl_no_alloc__lambda_2a263001a26d7ccb0e01a80a789391e1__void_::_Do_call @ 0x18013C5C0 (std--_Func_impl_no_alloc__lambda_2a263001a26d7ccb0e01a80a789391e1__void_--_Do_call.c)
 *     ??1MPCManagerClient@@UEAA@XZ @ 0x180177CB4 (--1MPCManagerClient@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@MPCManagerClient@@QEAAJXZ @ 0x18017CAEC (-RuntimeClassInitialize@MPCManagerClient@@QEAAJXZ.c)
 *     ??1MPCConstantManagerClient@@UEAA@XZ @ 0x18018466C (--1MPCConstantManagerClient@@UEAA@XZ.c)
 *     ??1InputProcessManager@@UEAA@XZ @ 0x1801B3A6C (--1InputProcessManager@@UEAA@XZ.c)
 *     ??4?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSystemInternalServerConnection@@@Z @ 0x1801B3B10 (--4-$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSystemInt.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::Release(Microsoft::Bamo::BaseBamoConnection *this)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)this + 56LL))(this);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
}
