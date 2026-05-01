/*
 * XREFs of ?GetFrameworkViewType@CWin32ApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18009B320
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x1800982E0 (-IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::GetFrameworkViewType(
        CWin32ApplicationView *this,
        enum FRAMEWORK_VIEW_TYPE *a2)
{
  HWND v3; // rax
  int v4; // eax

  v3 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
  if ( (unsigned __int8)GetPropW(v3, L"Windows.Graphics.Holographic.HolographicSpace") )
    v4 = 1;
  else
    v4 = IsHolographicWin32SlatesFeatureEnabled() == 0 ? 6 : 0;
  *(_DWORD *)a2 = v4;
  return 0LL;
}
