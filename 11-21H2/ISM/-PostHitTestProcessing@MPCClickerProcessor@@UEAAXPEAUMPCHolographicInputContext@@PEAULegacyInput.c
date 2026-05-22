/*
 * XREFs of ?PostHitTestProcessing@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801CB670
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProviderBase@@@Z @ 0x180091CA8 (--0-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProvid.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18009205C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x180092314 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800AD480 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800AEECC (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 */

void __fastcall MPCClickerProcessor::PostHitTestProcessing(
        unsigned __int64 this,
        struct MPCHolographicInputContext *a2,
        struct LegacyInputInfo *a3)
{
  char IsPrimary; // al
  __int64 v6; // rcx
  int v7; // r8d
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  MPCGestureHandlerManager *Instance; // rbx
  unsigned __int64 *v12; // rax
  const char *v13; // r9
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  IsPrimary = MPCInputProviderBase::IsPrimary(this);
  v7 = 0;
  if ( IsPrimary )
  {
    *(_DWORD *)(this + 3644) = *((_DWORD *)a3 + 567);
    if ( *((_BYTE *)a3 + 240) )
    {
      v8 = *((_DWORD *)a3 + 17);
      if ( v8 == 2 )
      {
        v7 = 1;
      }
      else if ( (unsigned int)(v8 - 4) <= 1 )
      {
        v7 = 2;
      }
      MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(v6, (__int64)a3, v7);
      Instance = MPCGestureHandlerManager::GetInstance(v10, v9);
      v12 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
              &v14,
              this & -(__int64)(this != 24));
      MPCGestureHandlerManager::DownLevelTo2D(Instance, (__int64)a3, v12, v13);
    }
  }
}
