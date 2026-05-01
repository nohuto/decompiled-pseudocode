/*
 * XREFs of ?GetMonitorsToNotify@CVirtualDesktopManager@@AEAAPEAUIObjectArray@@PEAUHMONITOR__@@@Z @ 0x180545B6C
 * Callers:
 *     ?CreateDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@@Z @ 0x180544F50 (-CreateDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@@Z.c)
 *     ?MoveDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAUHMONITOR__@@I@Z @ 0x1805463D0 (-MoveDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAUHMONITOR__@@I@Z.c)
 *     ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180547810 (-RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x18054ACB0 (-SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?IsVirtualDesktopPerMonitor@CVirtualDesktopManager@@AEAA_NXZ @ 0x1800A0180 (-IsVirtualDesktopPerMonitor@CVirtualDesktopManager@@AEAA_NXZ.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1801243A0 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Tidy@?$vector@PEAUHMONITOR__@@V?$allocator@PEAUHMONITOR__@@@std@@@std@@AEAAXXZ @ 0x18031D0B8 (-_Tidy@-$vector@PEAUHMONITOR__@@V-$allocator@PEAUHMONITOR__@@@std@@@std@@AEAAXXZ.c)
 *     ?GetMonitors@VirtualDesktopHelpers@@YA?AV?$vector@PEAUHMONITOR__@@V?$allocator@PEAUHMONITOR__@@@std@@@std@@XZ @ 0x18048AE5C (-GetMonitors@VirtualDesktopHelpers@@YA-AV-$vector@PEAUHMONITOR__@@V-$allocator@PEAUHMONITOR__@@@.c)
 */

// Hidden C++ exception states: #wind=1
struct IObjectArray *__fastcall CVirtualDesktopManager::GetMonitorsToNotify(
        CVirtualDesktopManager *this,
        const struct _GUID *a2)
{
  CVirtualDesktopManager *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // rcx
  __int64 v9; // rax
  _QWORD *i; // rbx
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rbx
  _QWORD v15[4]; // [rsp+20h] [rbp-20h] BYREF
  void *v16; // [rsp+60h] [rbp+20h] BYREF
  __int64 v17; // [rsp+70h] [rbp+30h] BYREF
  __int64 v18; // [rsp+78h] [rbp+38h] BYREF

  v16 = 0LL;
  CEnumerableObjectCollection::CreateInstance((__int64)this, a2, &v16);
  if ( *((_QWORD *)this + 21) )
  {
    if ( CVirtualDesktopManager::IsVirtualDesktopPerMonitor(v4) && a2 )
    {
      v8 = (__int64 *)*((_QWORD *)this + 21);
      v9 = *v8;
      v18 = 0LL;
      if ( (*(int (__fastcall **)(__int64 *, const struct _GUID *, __int64 *))(v9 + 48))(v8, a2, &v18) >= 0 )
        (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v16 + 40LL))(v16, v18);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v18);
    }
    else
    {
      VirtualDesktopHelpers::GetMonitors(v15, v5, v6, v7);
      for ( i = (_QWORD *)v15[0]; i != (_QWORD *)v15[1]; ++i )
      {
        v11 = (__int64 *)*((_QWORD *)this + 21);
        v12 = *v11;
        v18 = 0LL;
        if ( (*(int (__fastcall **)(__int64 *, _QWORD, __int64 *))(v12 + 48))(v11, *i, &v18) >= 0 )
          (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v16 + 40LL))(v16, v18);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v18);
      }
      std::vector<HMONITOR__ *>::_Tidy((__int64)v15);
    }
  }
  v13 = 0LL;
  v17 = 0LL;
  if ( v16 )
  {
    (**(void (__fastcall ***)(void *, GUID *, __int64 *))v16)(v16, &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9, &v17);
    v13 = v17;
  }
  v17 = 0LL;
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v17);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v16);
  return (struct IObjectArray *)v13;
}
