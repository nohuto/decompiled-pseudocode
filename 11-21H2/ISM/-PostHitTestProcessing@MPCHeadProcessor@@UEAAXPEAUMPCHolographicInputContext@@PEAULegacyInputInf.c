/*
 * XREFs of ?PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801CAB20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProviderBase@@@Z @ 0x180091CA8 (--0-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProvid.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18009205C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x180092314 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180092820 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800AD480 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800AEECC (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 *     ?Display3DCursor@MPCHeadProcessor@@UEAA_NXZ @ 0x1801CAAA0 (-Display3DCursor@MPCHeadProcessor@@UEAA_NXZ.c)
 */

void __fastcall MPCHeadProcessor::PostHitTestProcessing(
        MPCHeadProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct LegacyInputInfo *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  bool v8; // al
  MPCGestureHandlerManager *Instance; // rbx
  unsigned __int64 *v10; // rax
  const char *v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct MPCGestureHandlerManager *v14; // rbx
  unsigned __int64 *v15; // rax
  char v16; // cl
  __int64 v17; // rax
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  if ( MPCInputProviderBase::IsPrimary((unsigned __int64)this) && *((_BYTE *)a3 + 240) )
  {
    MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(v5, (__int64)a3, 4);
    v8 = *((_BYTE *)a3 + 900) || !MPCHeadProcessor::Display3DCursor(this);
    *((_BYTE *)a3 + 900) = v8;
    Instance = MPCGestureHandlerManager::GetInstance(v7, v6);
    v10 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
            &v18,
            (unsigned __int64)this & -(__int64)(this != (MPCHeadProcessor *)24));
    MPCGestureHandlerManager::DownLevelTo2D(Instance, (__int64)a3, v10, v11);
    v14 = MPCGestureHandlerManager::GetInstance(v13, v12);
    v15 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
            &v18,
            (unsigned __int64)this & -(__int64)(this != (MPCHeadProcessor *)24));
    MPCGestureHandlerManager::OnGazeUpdate((__int64)v14, v15);
  }
  v16 = *((_BYTE *)a3 + 312) != 0;
  if ( !*((_BYTE *)this + 3641) || *((_BYTE *)this + 3640) != v16 )
  {
    v17 = *((_QWORD *)this + 3);
    *((_BYTE *)this + 3640) = v16;
    *((_BYTE *)this + 3641) = 1;
    *(_BYTE *)(v17 + 1488) = v16;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 48LL))(
      *((_QWORD *)this + 2),
      *((_QWORD *)this + 3));
  }
}
