/*
 * XREFs of ?RemoveAll@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1801BEB24
 * Callers:
 *     ??1CLauncherTipContextMenu@@MEAA@XZ @ 0x1801A9E60 (--1CLauncherTipContextMenu@@MEAA@XZ.c)
 *     ?OnSettingChange@CLauncherTipContextMenu@@UEAAJXZ @ 0x1806CDEC0 (-OnSettingChange@CLauncherTipContextMenu@@UEAAJXZ.c)
 *     ?_EnumerateAndBuildShutdownMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806DF168 (-_EnumerateAndBuildShutdownMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?_HandleBackgroundEnumeration@CLauncherTipContextMenu@@AEAAX_N_J@Z @ 0x1806DF9E4 (-_HandleBackgroundEnumeration@CLauncherTipContextMenu@@AEAAX_N_J@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::RemoveAll(
        __int64 a1)
{
  _QWORD *v2; // rcx
  unsigned __int64 i; // rdi
  __int64 v4; // rdx

  v2 = *(_QWORD **)a1;
  if ( v2 )
  {
    for ( i = 0LL; i < *(_QWORD *)(a1 + 8); ++i )
    {
      v4 = v2[i];
      if ( v4 )
      {
        v2[i] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        v2 = *(_QWORD **)a1;
      }
    }
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
