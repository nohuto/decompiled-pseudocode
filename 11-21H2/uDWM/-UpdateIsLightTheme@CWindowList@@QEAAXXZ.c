/*
 * XREFs of ?UpdateIsLightTheme@CWindowList@@QEAAXXZ @ 0x18005EC18
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180016690 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CWindowList::UpdateIsLightTheme(CWindowList *this)
{
  CDesktopManager *v1; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = CDesktopManager::s_pDesktopManagerInstance;
  *((_BYTE *)this + 659) = 0;
  if ( (*(int (__fastcall **)(_QWORD, const wchar_t *, int *))(**((_QWORD **)v1 + 8) + 24LL))(
         *((_QWORD *)v1 + 8),
         L"SystemUsesLightTheme",
         &v3) >= 0 )
    *((_BYTE *)this + 659) = v3 != 0;
}
