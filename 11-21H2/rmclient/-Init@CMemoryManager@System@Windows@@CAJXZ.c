/*
 * XREFs of ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180004620
 * Callers:
 *     ?add_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x180002D60 (-add_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJPEAU-$IEventHandler@PEAUIInspec.c)
 *     ?add_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x180003860 (-add_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJPEAU-$IEventHandler@PEAUIInspec.c)
 *     ?add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x1800038A0 (-add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJPEAU-$IEventHandler@PEAVApp.c)
 *     ?GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_K0PEAU_PROCESS_JOB_MEMORY_INFO@@@Z @ 0x180006C04 (-GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_K0PEAU_PROCESS_JOB_MEMORY_INFO@.c)
 *     ?get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UEAAJPEAW4AppMemoryUsageLevel@23@@Z @ 0x180006E60 (-get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UEAAJPEAW4AppMemoryUsageLevel@23@@Z.c)
 *     ?TrySetAppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJ_KPEAE@Z @ 0x18001B330 (-TrySetAppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJ_KPEAE@Z.c)
 * Callees:
 *     CempRpcBindToServer @ 0x180005AD0 (CempRpcBindToServer.c)
 *     ?RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@ZP6AX_K2@Z@Z @ 0x180005E44 (-RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_P.c)
 *     ??0ModernResourceManagerProxy@@QEAA@XZ @ 0x18000652C (--0ModernResourceManagerProxy@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18000BB44 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180015750 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 Windows::System::CMemoryManager::Init(void)
{
  ModernResourceManagerProxy *v1; // rax
  ModernResourceManagerProxy *v2; // rbx
  int v3; // eax
  void (*v4)(struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *); // rdx
  void (*v5)(unsigned __int64, unsigned __int64); // r8
  int v6; // edi

  RtlAcquireSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock);
  if ( Windows::System::CMemoryManager::s_pProxy )
  {
    RtlReleaseSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock);
    return 0LL;
  }
  else
  {
    v1 = (ModernResourceManagerProxy *)operator new(0x70uLL);
    if ( v1 && (v2 = ModernResourceManagerProxy::ModernResourceManagerProxy(v1)) != 0LL )
    {
      v3 = CempRpcBindToServer(&unk_180021680);
      v6 = v3 | 0x10000000;
      if ( v3 < 0 || (v6 = ModernResourceManagerProxy::RegisterCommitMemoryCallback(v2, v4, v5), v6 < 0) )
      {
        RtlReleaseSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock);
        (*(void (__fastcall **)(ModernResourceManagerProxy *))(*(_QWORD *)v2 + 16LL))(v2);
        return (unsigned int)v6;
      }
      else
      {
        if ( Windows::System::CMemoryManager::s_pProxy )
          (*(void (__fastcall **)(ModernResourceManagerProxy *))(*(_QWORD *)Windows::System::CMemoryManager::s_pProxy
                                                               + 16LL))(Windows::System::CMemoryManager::s_pProxy);
        Windows::System::CMemoryManager::s_pProxy = v2;
        RtlReleaseSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock);
        return 0LL;
      }
    }
    else
    {
      RtlReleaseSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock);
      return 2147942414LL;
    }
  }
}
