/*
 * XREFs of ?RemoveAll@?$CTSimpleArray@V?$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180610D04
 * Callers:
 *     ??1VirtualDesktopGestureContext@@QEAA@XZ @ 0x18060ACF0 (--1VirtualDesktopGestureContext@@QEAA@XZ.c)
 *     ?Uninitialize@VirtualDesktopGestureContext@@QEAAXXZ @ 0x18061254C (-Uninitialize@VirtualDesktopGestureContext@@QEAAXXZ.c)
 *     ??1VirtualDesktopSwitchAnimator@@UEAA@XZ @ 0x180616744 (--1VirtualDesktopSwitchAnimator@@UEAA@XZ.c)
 *     ?Cleanup@VirtualDesktopSwitchAnimator@@UEAAXXZ @ 0x180617220 (-Cleanup@VirtualDesktopSwitchAnimator@@UEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>>>::RemoveAll(
        __int64 a1)
{
  _QWORD *v2; // rcx
  unsigned __int64 i; // rdi
  __int64 v4; // rax

  v2 = *(_QWORD **)a1;
  if ( v2 )
  {
    for ( i = 0LL; i < *(_QWORD *)(a1 + 8); ++i )
    {
      v4 = v2[i];
      if ( v4 )
      {
        v2[i] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v4 + 16) + 16LL))(v4 + 16);
        v2 = *(_QWORD **)a1;
      }
    }
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
