/*
 * XREFs of ?VirtualDesktopSwitcherHasFocus@VirtualDesktopSwitcherHost@@UEAA_NXZ @ 0x18060C710
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

char __fastcall VirtualDesktopSwitcherHost::VirtualDesktopSwitcherHasFocus(VirtualDesktopSwitcherHost *this)
{
  __int64 v1; // rcx
  signed int v2; // eax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 12);
  if ( !v1 )
    return 0;
  v4 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v1 + 112LL))(v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  return v4;
}
