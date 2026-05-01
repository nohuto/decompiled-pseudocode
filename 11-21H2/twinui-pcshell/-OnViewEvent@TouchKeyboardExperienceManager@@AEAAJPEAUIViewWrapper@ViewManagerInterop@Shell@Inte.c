/*
 * XREFs of ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180463DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18009FDA8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1803D55B0 (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$OnViewCreatedFailed@AEAJ@TouchKeyboardExperienceTelemetryLogger@@SAXAEAJ@Z @ 0x180457F4C (--$OnViewCreatedFailed@AEAJ@TouchKeyboardExperienceTelemetryLogger@@SAXAEAJ@Z.c)
 *     wil::ResultFromException__lambda_3bafd4a5c526c49ed4dd10bbacb3a284___ @ 0x180458100 (wil--ResultFromException__lambda_3bafd4a5c526c49ed4dd10bbacb3a284___.c)
 *     ?DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18045D340 (-DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180463A5C (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 *     ?OnViewDestroyed@TabTipAdapterPolicy@KeyboardHosting@@QEAAXI@Z @ 0x1804828A8 (-OnViewDestroyed@TabTipAdapterPolicy@KeyboardHosting@@QEAAXI@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::OnViewEvent(
        RTL_SRWLOCK *this,
        struct IUnknown *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  struct EventRegistrationToken v8; // r8
  struct IUnknown ***Ptr; // rbx
  struct IUnknown ***v10; // r14
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  std::_Ref_count_base *v14; // rbx
  int v15; // eax
  RTL_SRWLOCK *v16; // [rsp+20h] [rbp-30h] BYREF
  std::_Ref_count_base *v17[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v18[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v20; // [rsp+80h] [rbp+30h] BYREF
  struct IUnknown ***v21; // [rsp+88h] [rbp+38h] BYREF

  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v20);
  if ( v5 < 0 )
  {
    v6 = 4481LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( v20 )
  {
    if ( v20 == 4 )
    {
      *(_OWORD *)v17 = 0LL;
      Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v16, this + 53);
      Ptr = (struct IUnknown ***)this[54].Ptr;
      v10 = (struct IUnknown ***)this[55].Ptr;
      while ( Ptr != v10 && !(unsigned int)SHIsSameObject(**Ptr, a2) )
        Ptr += 2;
      v21 = Ptr;
      if ( Ptr != this[55].Ptr )
      {
        std::shared_ptr<FlyoutView>::operator=((__int64 *)v17, Ptr);
        v18[0] = (__int64)this;
        v18[1] = (__int64)&v21;
        v11 = wil::ResultFromException__lambda_3bafd4a5c526c49ed4dd10bbacb3a284___(v18);
        if ( v11 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x11A8,
            (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v11);
      }
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v16);
      v14 = v17[0];
      if ( v17[0] )
      {
        v15 = TouchKeyboardExperienceManager::DestroyView((TouchKeyboardExperienceManager *)this, v17[0], v12, v13);
        if ( v15 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x11AF,
            (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v15);
        KeyboardHosting::TabTipAdapterPolicy::OnViewDestroyed(
          *((KeyboardHosting::TabTipAdapterPolicy **)this[92].Ptr + 14),
          *((_DWORD *)v14 + 26));
      }
      if ( v17[1] )
        std::_Ref_count_base::_Decref(v17[1]);
    }
  }
  else
  {
    v5 = ((__int64 (__fastcall *)(struct IUnknown *, __int64))a2->lpVtbl[14].AddRef)(a2, 4LL);
    if ( v5 < 0 )
    {
      v6 = 4486LL;
      goto LABEL_3;
    }
    LODWORD(v21) = TouchKeyboardExperienceManager::OnViewCreated(
                     (TouchKeyboardExperienceManager *)this,
                     (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2,
                     v8);
    if ( (int)v21 < 0 )
      TouchKeyboardExperienceTelemetryLogger::OnViewCreatedFailed<long &>((int *)&v21);
  }
  return 0LL;
}
