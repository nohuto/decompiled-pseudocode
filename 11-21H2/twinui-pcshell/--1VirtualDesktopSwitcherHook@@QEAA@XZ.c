/*
 * XREFs of ??1VirtualDesktopSwitcherHook@@QEAA@XZ @ 0x180607EC8
 * Callers:
 *     ??1VirtualDesktopSwitcherHost@@UEAA@XZ @ 0x180607F04 (--1VirtualDesktopSwitcherHost@@UEAA@XZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall VirtualDesktopSwitcherHook::~VirtualDesktopSwitcherHook(VirtualDesktopSwitcherHook *this)
{
  std::_Ref_count_base *v1; // rcx

  if ( VirtualDesktopSwitcherHook::s_vdsHookData )
  {
    v1 = qword_1807B4B90;
    VirtualDesktopSwitcherHook::s_vdsHookData = 0LL;
    qword_1807B4B90 = 0LL;
    if ( v1 )
      std::_Ref_count_base::_Decref(v1);
  }
}
