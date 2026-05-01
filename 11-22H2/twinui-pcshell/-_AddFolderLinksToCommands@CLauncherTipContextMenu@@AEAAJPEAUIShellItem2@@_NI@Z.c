/*
 * XREFs of ?_AddFolderLinksToCommands@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@_NI@Z @ 0x1806CF3C4
 * Callers:
 *     ?AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806CC2AC (-AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806DE4E4 (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SafeRelease@UIShellItem@@@@YAXPEAPEAUIShellItem@@@Z @ 0x1806C9820 (--$SafeRelease@UIShellItem@@@@YAXPEAPEAUIShellItem@@@Z.c)
 *     ??0CShallowContainerIterator@@QEAA@PEAUIShellItem@@K@Z @ 0x1806CB808 (--0CShallowContainerIterator@@QEAA@PEAUIShellItem@@K@Z.c)
 *     ?Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z @ 0x1806CDD00 (-Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z.c)
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x1806CF52C (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CLauncherTipContextMenu::_AddFolderLinksToCommands(
        CLauncherTipContextMenu *this,
        struct IShellItem *a2,
        bool a3,
        unsigned int a4)
{
  unsigned __int64 v4; // r14
  unsigned int v7; // ebx
  int v8; // esi
  struct IShellItem2 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v13; // [rsp+20h] [rbp-30h] BYREF
  struct IShellItem2 *v14; // [rsp+28h] [rbp-28h] BYREF
  int v15; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17; // [rsp+40h] [rbp-10h]

  v4 = a4;
  CShallowContainerIterator::CShallowContainerIterator((CShallowContainerIterator *)&v15, a2, 64);
  v7 = v15;
  if ( v15 >= 0 )
  {
    v14 = 0LL;
    v8 = 0;
    while ( 1 )
    {
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
      if ( !CShallowContainerIterator::Next((CShallowContainerIterator *)&v15, &v14) )
        break;
      v9 = v14;
      if ( ((int (__fastcall *)(struct IShellItem2 *, __int64, int *))v14->lpVtbl->GetAttributes)(v14, 0x10000LL, &v13) >= 0
        && (v13 & 0x10000) != 0 )
      {
        v10 = *((_QWORD *)this + 48);
        if ( (*((_QWORD *)this + 49) - v10) >> 2 <= v4 )
        {
          std::_Xout_of_range("invalid vector subscript");
          __debugbreak();
LABEL_11:
          v7 = -2147467260;
          break;
        }
        CLauncherTipContextMenu::_AddLinkToCommands(this, v9, a3, v8 + *(_DWORD *)(v10 + 4 * v4));
        ++v8;
      }
      if ( *((_BYTE *)this + 322) )
        goto LABEL_11;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
  }
  v11 = v17;
  v17 = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  SafeRelease<IShellItem>(&v16);
  return v7;
}
