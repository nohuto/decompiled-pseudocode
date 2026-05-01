/*
 * XREFs of ?_ApplyFilterToAllItems@SwitchItemFilteredCollection@@AEAAJXZ @ 0x180568608
 * Callers:
 *     ?SetActiveTabFilter@SwitchItemFilteredCollection@@UEAAJXZ @ 0x180567EC0 (-SetActiveTabFilter@SwitchItemFilteredCollection@@UEAAJXZ.c)
 *     ?SetMonitorFilter@SwitchItemFilteredCollection@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@@Z @ 0x180567F10 (-SetMonitorFilter@SwitchItemFilteredCollection@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiv.c)
 *     ?SetTitleFilter@SwitchItemFilteredCollection@@UEAAJPEBG@Z @ 0x180567FA0 (-SetTitleFilter@SwitchItemFilteredCollection@@UEAAJPEBG@Z.c)
 *     ?SetVirtualDesktopFilter@SwitchItemFilteredCollection@@UEAAJPEAUIVirtualDesktopNotificationService@@PEAUIVirtualDesktop@@@Z @ 0x180568110 (-SetVirtualDesktopFilter@SwitchItemFilteredCollection@@UEAAJPEAUIVirtualDesktopNotificationServi.c)
 *     ?SetWindowFilter@SwitchItemFilteredCollection@@UEAAJXZ @ 0x1805681E0 (-SetWindowFilter@SwitchItemFilteredCollection@@UEAAJXZ.c)
 *     ?SetWindowTabFilter@SwitchItemFilteredCollection@@UEAAJXZ @ 0x180568230 (-SetWindowTabFilter@SwitchItemFilteredCollection@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z @ 0x1802E12CC (-_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z.c)
 *     ?GetAt@ObservableObjectArray@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x180571200 (-GetAt@ObservableObjectArray@@UEAAJIAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SwitchItemFilteredCollection::_ApplyFilterToAllItems(SwitchItemFilteredCollection *this)
{
  __int64 v2; // rdi
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  unsigned int v8; // r14d
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, _QWORD, GUID *, struct IObservableItem **); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  unsigned int v12; // [rsp+50h] [rbp+20h] BYREF
  struct IObservableItem *v13; // [rsp+58h] [rbp+28h] BYREF

  v2 = *((_QWORD *)this + 3);
  while ( 1 )
  {
    LODWORD(v2) = v2 - 1;
    if ( (int)v2 < 0 )
      break;
    v13 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
    v3 = ObservableObjectArray::GetAt(this, v2, &GUID_f6f4d0ff_fce6_40ef_a647_2738c4375c27, (void **)&v13);
    v4 = v3;
    if ( v3 < 0 )
    {
      v6 = 364LL;
      goto LABEL_10;
    }
    v3 = SwitchItemFilteredCollection::_ApplyFilterToItem(this, v13, 1u);
    v4 = v3;
    if ( v3 < 0 )
    {
      v6 = 365LL;
      goto LABEL_10;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 23) + 24LL))(
         *((_QWORD *)this + 23),
         &v12);
  v4 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x174,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
      (const char *)(unsigned int)v5);
    return v4;
  }
  v8 = 0;
  if ( v12 )
  {
    while ( 1 )
    {
      v13 = 0LL;
      v9 = *((_QWORD *)this + 23);
      v10 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IObservableItem **))(*(_QWORD *)v9 + 32LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
      v3 = v10(v9, v8, &GUID_f6f4d0ff_fce6_40ef_a647_2738c4375c27, &v13);
      v4 = v3;
      if ( v3 < 0 )
        break;
      v3 = SwitchItemFilteredCollection::_ApplyFilterToItem(this, v13, 1u);
      v4 = v3;
      if ( v3 < 0 )
      {
        v6 = 377LL;
        goto LABEL_10;
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
      if ( ++v8 >= v12 )
        return 0LL;
    }
    v6 = 376LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
      (const char *)(unsigned int)v3);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
    return v4;
  }
  return 0LL;
}
