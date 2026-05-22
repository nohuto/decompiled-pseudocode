/*
 * XREFs of ?ShouldRequestPrimary@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@@Z @ 0x1801C1EDC
 * Callers:
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801C0E10 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180029D70 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z @ 0x18009E5C4 (-IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800AD480 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@I@Z @ 0x1801BF298 (-AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@I@Z.c)
 */

char __fastcall MPCSixDofProcessor::ShouldRequestPrimary(MPCSixDofProcessor *this, struct LegacyInputInfo *a2)
{
  struct MPCHolographicInputManager *Instance; // rdi
  const char *v5; // r9
  char v6; // bl

  Instance = MPCHolographicInputManager::GetInstance();
  v6 = 0;
  if ( MPCInputProviderBase::IsPrimary((unsigned __int64)this + 24) )
    return 0;
  if ( MPCSixDofProcessor::AreButtonsOrAxesActive(this, a2, 0, v5)
    || (*(unsigned int (__fastcall **)(_QWORD))(***((_QWORD ***)Instance + 450) + 48LL))(**((_QWORD **)Instance + 450)) == 0x2000
    || *((_DWORD *)a2 + 17) == 1
    && MPCHolographicInputManager::IsProviderPrimary(Instance, *((const struct IMPCInputProviderBase **)Instance + 418)) )
  {
    return 1;
  }
  return v6;
}
