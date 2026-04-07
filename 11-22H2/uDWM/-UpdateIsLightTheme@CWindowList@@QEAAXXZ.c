/*
 * XREFs of ?UpdateIsLightTheme@CWindowList@@QEAAXXZ @ 0x18003D53C
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18003A654 (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CWindowList::UpdateIsLightTheme(CWindowList *this)
{
  CDesktopManager *v1; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = CDesktopManager::s_pDesktopManagerInstance;
  *((_BYTE *)this + 643) = 0;
  if ( (*(int (__fastcall **)(_QWORD, const wchar_t *, int *))(**((_QWORD **)v1 + 9) + 24LL))(
         *((_QWORD *)v1 + 9),
         L"SystemUsesLightTheme",
         &v3) >= 0 )
    *((_BYTE *)this + 643) = v3 != 0;
}
