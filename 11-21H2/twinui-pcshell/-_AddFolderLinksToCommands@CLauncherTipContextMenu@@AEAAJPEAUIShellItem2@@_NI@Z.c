/*
 * XREFs of ?_AddFolderLinksToCommands@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@_NI@Z @ 0x1801DA504
 * Callers:
 *     ?AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ @ 0x1801D8390 (-AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1805DB10C (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x1801DA63C (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 *     ?_Xrange@?$vector@IV?$allocator@I@std@@@std@@CAXXZ @ 0x1801E7DF8 (-_Xrange@-$vector@IV-$allocator@I@std@@@std@@CAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CShallowContainerIterator@@QEAA@PEAUIShellItem@@K@Z @ 0x1805D8230 (--0CShallowContainerIterator@@QEAA@PEAUIShellItem@@K@Z.c)
 *     ??1CShallowContainerIterator@@QEAA@XZ @ 0x1805D848C (--1CShallowContainerIterator@@QEAA@XZ.c)
 *     ?Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z @ 0x1805D97E0 (-Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CLauncherTipContextMenu::_AddFolderLinksToCommands(
        CLauncherTipContextMenu *this,
        struct IShellItem *a2,
        bool a3,
        unsigned int a4)
{
  unsigned __int64 v4; // rbp
  unsigned int v7; // ebx
  int v8; // esi
  struct IShellItem2 *v9; // rbx
  __int64 v10; // rdx
  int v12; // [rsp+20h] [rbp-38h] BYREF
  struct IShellItem2 *v13; // [rsp+28h] [rbp-30h] BYREF
  _DWORD v14[10]; // [rsp+30h] [rbp-28h] BYREF

  v4 = a4;
  CShallowContainerIterator::CShallowContainerIterator((CShallowContainerIterator *)v14, a2, 0x40u);
  v7 = v14[0];
  if ( v14[0] < 0 )
  {
LABEL_12:
    CShallowContainerIterator::~CShallowContainerIterator((CShallowContainerIterator *)v14);
    return v7;
  }
  v13 = 0LL;
  v8 = 0;
  while ( 1 )
  {
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v13);
    if ( !CShallowContainerIterator::Next((CShallowContainerIterator *)v14, &v13) )
      goto LABEL_11;
    v9 = v13;
    if ( ((int (__fastcall *)(struct IShellItem2 *, __int64, int *))v13->lpVtbl->GetAttributes)(v13, 0x10000LL, &v12) >= 0
      && (v12 & 0x10000) != 0 )
    {
      break;
    }
LABEL_8:
    if ( *((_BYTE *)this + 322) )
    {
      v7 = -2147467260;
LABEL_11:
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v13);
      goto LABEL_12;
    }
    v7 = 0;
  }
  v10 = *((_QWORD *)this + 48);
  if ( (*((_QWORD *)this + 49) - v10) >> 2 > v4 )
  {
    CLauncherTipContextMenu::_AddLinkToCommands(this, v9, a3, v8 + *(_DWORD *)(v10 + 4 * v4));
    ++v8;
    goto LABEL_8;
  }
  std::vector<unsigned int>::_Xrange();
  return CLauncherTipContextMenu::_AddFolderLinksToCommands_::_1_::dtor_0();
}
