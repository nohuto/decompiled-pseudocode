/*
 * XREFs of ?OnSettingChange@CLauncherTipContextMenu@@UEAAJXZ @ 0x1806CDEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1801BEB24 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipCo.c)
 */

__int64 __fastcall CLauncherTipContextMenu::OnSettingChange(CLauncherTipContextMenu *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbp
  HMENU v3; // rbx
  HMENU v4; // rdi

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
  v3 = 0LL;
  v4 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  if ( !*((_BYTE *)this + 225) && *((_BYTE *)this + 224) )
  {
    v4 = (HMENU)*((_QWORD *)this + 30);
    *((_QWORD *)this + 30) = 0LL;
    *((_BYTE *)this + 224) = 0;
    v3 = (HMENU)*((_QWORD *)this + 29);
    *((_QWORD *)this + 29) = 0LL;
    CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::RemoveAll((__int64)this + 80);
    CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::RemoveAll((__int64)this + 112);
  }
  LeaveCriticalSection(v1);
  if ( v4 )
    DestroyMenu(v4);
  if ( v3 )
    DestroyMenu(v3);
  return 0LL;
}
