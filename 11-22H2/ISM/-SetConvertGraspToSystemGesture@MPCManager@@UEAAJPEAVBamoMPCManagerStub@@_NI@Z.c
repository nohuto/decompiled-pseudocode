/*
 * XREFs of ?SetConvertGraspToSystemGesture@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@_NI@Z @ 0x1800C3F60
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FC64 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180040ACC (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?MPCManager_SetConvertGraspToSystemGesture_@ISMTracing@@QEAAX_NI@Z @ 0x1800C1E7C (-MPCManager_SetConvertGraspToSystemGesture_@ISMTracing@@QEAAX_NI@Z.c)
 *     ?SetConvertGraspToSystemGesture@MPCHolographicInputManager@@QEAAX_NK@Z @ 0x1800C9378 (-SetConvertGraspToSystemGesture@MPCHolographicInputManager@@QEAAX_NK@Z.c)
 */

__int64 __fastcall MPCManager::SetConvertGraspToSystemGesture(
        MPCManager *this,
        struct BamoMPCManagerStub *a2,
        char a3,
        unsigned int a4)
{
  __int64 v6; // rcx
  ISMTracing *v7; // rcx
  MPCHolographicInputManager *Instance; // rax

  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<ISMTracing>::get(v6, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCManager_SetConvertGraspToSystemGesture_(v7, a3, a4);
  }
  Instance = MPCHolographicInputManager::GetInstance();
  MPCHolographicInputManager::SetConvertGraspToSystemGesture(Instance, a3, a4);
  return 0LL;
}
