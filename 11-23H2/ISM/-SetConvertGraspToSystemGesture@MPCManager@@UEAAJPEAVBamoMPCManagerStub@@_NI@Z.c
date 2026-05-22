/*
 * XREFs of ?SetConvertGraspToSystemGesture@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@_NI@Z @ 0x1800B1DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180040694 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ??$MPCManager_SetConvertGraspToSystemGesture@AEA_NAEAI@ISMTracing@@SAXAEA_NAEAI@Z @ 0x1800ADE94 (--$MPCManager_SetConvertGraspToSystemGesture@AEA_NAEAI@ISMTracing@@SAXAEA_NAEAI@Z.c)
 *     ?SetConvertGraspToSystemGesture@MPCHolographicInputManager@@QEAAX_NK@Z @ 0x1800B8244 (-SetConvertGraspToSystemGesture@MPCHolographicInputManager@@QEAAX_NK@Z.c)
 */

__int64 __fastcall MPCManager::SetConvertGraspToSystemGesture(
        MPCManager *this,
        struct BamoMPCManagerStub *a2,
        bool a3,
        unsigned int a4)
{
  MPCHolographicInputManager *Instance; // rax
  bool v8; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = a4;
  v8 = a3;
  ISMTracing::MPCManager_SetConvertGraspToSystemGesture<bool &,unsigned int &>(&v8, &v9);
  Instance = MPCHolographicInputManager::GetInstance();
  MPCHolographicInputManager::SetConvertGraspToSystemGesture(Instance, a3, a4);
  return 0LL;
}
