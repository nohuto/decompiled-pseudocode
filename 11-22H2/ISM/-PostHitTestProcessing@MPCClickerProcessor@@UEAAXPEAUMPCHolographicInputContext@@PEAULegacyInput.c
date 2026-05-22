/*
 * XREFs of ?PostHitTestProcessing@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801F73E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProviderBase@@@Z @ 0x1800BAC64 (--0-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProvid.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BB00C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800BB2E4 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800D57C0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800D720C (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 */

void __fastcall MPCClickerProcessor::PostHitTestProcessing(
        unsigned __int64 this,
        struct MPCHolographicInputContext *a2,
        struct LegacyInputInfo *a3)
{
  char IsPrimary; // al
  int v6; // r8d
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  MPCGestureHandlerManager *Instance; // rbx
  unsigned __int64 *v11; // rax
  const char *v12; // r9
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  IsPrimary = MPCInputProviderBase::IsPrimary(this);
  v6 = 0;
  if ( IsPrimary )
  {
    *(_DWORD *)(this + 3644) = *((_DWORD *)a3 + 567);
    if ( *((_BYTE *)a3 + 240) )
    {
      v7 = (unsigned int)(*((_DWORD *)a3 + 17) - 2);
      if ( *((_DWORD *)a3 + 17) == 2 )
      {
        v6 = 1;
      }
      else
      {
        v7 = (unsigned int)(*((_DWORD *)a3 + 17) - 4);
        if ( (unsigned int)v7 <= 1 )
          v6 = 2;
      }
      MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(v7, (__int64)a3, v6);
      Instance = MPCGestureHandlerManager::GetInstance(v9, v8);
      v11 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
              &v13,
              this & -(__int64)(this != 24));
      MPCGestureHandlerManager::DownLevelTo2D(Instance, (__int64)a3, v11, v12);
    }
  }
}
