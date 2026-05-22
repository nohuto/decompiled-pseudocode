/*
 * XREFs of ?OnGazeUpdate@MPCSixDofProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801C0640
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProviderBase@@@Z @ 0x180091CA8 (--0-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProvid.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x180092314 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180092820 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
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
