/*
 * XREFs of ?OnGazeUpdate@MPCSixDofProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801EC2C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProviderBase@@@Z @ 0x1800BAC64 (--0-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProvid.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800BB2E4 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BB7F0 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 */

void __fastcall MPCSixDofProcessor::OnGazeUpdate(__int64 this, struct LegacyInputInfo *a2)
{
  struct MPCGestureHandlerManager *Instance; // rdi
  unsigned __int64 *v4; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  Instance = MPCGestureHandlerManager::GetInstance(this, (__int64)a2);
  v4 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
         &v5,
         this & -(__int64)(this != 24));
  MPCGestureHandlerManager::OnGazeUpdate((__int64)Instance, v4);
}
