/*
 * XREFs of ?DownLevelPressTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800A3658
 * Callers:
 *     ?DownLevelSelectTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800A3960 (-DownLevelSelectTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800A39B0 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180029D70 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x18009D9E0 (-GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ??$MPCGestureHandler_InjectPress@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z @ 0x1800A23B4 (--$MPCGestureHandler_InjectPress@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x180100F54 (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x1801016B0 (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 */

void __fastcall MPCGestureHandler::DownLevelPressTo2D(
        MPCGestureHandler *this,
        struct LegacyInputInfo *a2,
        unsigned int a3,
        struct tagPOINT a4)
{
  ManipulationInjector *v4; // rbp
  const RECT *v8; // r11
  MPCHolographicInputManager *Instance; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  const char *v12; // r9
  struct IMPCInputPostProcessor *PostProcessor; // rax
  unsigned int v14; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+50h] [rbp+18h] BYREF
  struct tagPOINT v16; // [rsp+58h] [rbp+20h] BYREF

  v16 = a4;
  v15 = a3;
  v4 = (MPCGestureHandler *)((char *)this + 80);
  if ( !ManipulationInjector::IsInContactForDeviceId((MPCGestureHandler *)((char *)this + 80), a3) )
  {
    if ( PtInRect(v8 + 55, a4) )
    {
      ManipulationInjector::InjectDrag(v4, &v16, a3);
      *((_BYTE *)this + 972) = ManipulationInjector::IsInContactForDeviceId(v4, a3);
      Instance = MPCHolographicInputManager::GetInstance();
      PostProcessor = MPCHolographicInputManager::GetPostProcessor(Instance, v10, v11, v12);
      (*(void (__fastcall **)(struct IMPCInputPostProcessor *, struct tagPOINT))(*(_QWORD *)PostProcessor + 64LL))(
        PostProcessor,
        a4);
      v14 = *((_DWORD *)this + 228);
      ISMTracing::MPCGestureHandler_InjectPress<long &,long &,unsigned long const &,unsigned long>(
        (int *)&v16,
        &v16.y,
        &v15,
        &v14);
    }
  }
}
