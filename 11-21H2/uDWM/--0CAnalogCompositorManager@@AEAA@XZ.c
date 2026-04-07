/*
 * XREFs of ??0CAnalogCompositorManager@@AEAA@XZ @ 0x180054C44
 * Callers:
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x180016C2C (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 * Callees:
 *     ?CreateAttachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV?$function@$$A6AXXZ@wistd@@@Z @ 0x180054DD4 (-CreateAttachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV-$function@$$A6AXXZ@.c)
 *     ?CreateDetachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV?$function@$$A6AXXZ@wistd@@@Z @ 0x180054E48 (-CreateDetachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV-$function@$$A6AXXZ@.c)
 *     ?RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ @ 0x180055118 (-RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ.c)
 *     ??0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x180056140 (--0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800628A4 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
CAnalogCompositorManager *__fastcall CAnalogCompositorManager::CAnalogCompositorManager(CAnalogCompositorManager *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v5; // [rsp+20h] [rbp-29h] BYREF
  _QWORD v6[13]; // [rsp+28h] [rbp-21h] BYREF
  _QWORD *v7; // [rsp+90h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]
  CAnalogCompositorManager *v9; // [rsp+B0h] [rbp+67h] BYREF
  __int64 *v10; // [rsp+B8h] [rbp+6Fh]

  v9 = this;
  v10 = &qword_180142F20;
  qword_180142F20 = 0LL;
  Windows::Mirage::HolographicDriverDetectedWatcher::HolographicDriverDetectedWatcher((Windows::Mirage::HolographicDriverDetectedWatcher *)&unk_180142F28);
  qword_180142F50 = 0LL;
  qword_180142F58 = 0LL;
  qword_180142F60 = 0LL;
  byte_180142F68 = 0;
  xmmword_180142F70 = 0LL;
  xmmword_180142F80 = 0LL;
  qword_180142F90 = 0LL;
  qword_180142F98 = 0LL;
  qword_180142FA0 = 0LL;
  dword_180142FA8 = 0;
  byte_180142FAC = 0;
  qword_180142FB0 = 0LL;
  LODWORD(v9) = 0;
  if ( (*(int (__fastcall **)(_QWORD, const wchar_t *, CAnalogCompositorManager **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                      + 8)
                                                                                   + 8LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8),
         L"DisableHologramCompositor",
         &v9) < 0
    || !(_DWORD)v9 )
  {
    v1 = Windows::Mirage::HolographicDriverDetectedWatcher::RegisterForCMNotifications((Windows::Mirage::HolographicDriverDetectedWatcher *)&unk_180142F28);
    if ( v1 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x26,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v1,
        v5);
    v6[0] = off_18010E608;
    v7 = v6;
    v2 = Windows::Mirage::HolographicDriverDetectedWatcher::CreateAttachWatcher(&unk_180142F28, &v5);
    if ( v2 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x2C,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v2,
        v5);
    v6[0] = off_18010E5E0;
    v7 = v6;
    v3 = Windows::Mirage::HolographicDriverDetectedWatcher::CreateDetachWatcher(&unk_180142F28, &v5);
    if ( v3 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x32,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v3,
        v5);
  }
  return (CAnalogCompositorManager *)&qword_180142F20;
}
