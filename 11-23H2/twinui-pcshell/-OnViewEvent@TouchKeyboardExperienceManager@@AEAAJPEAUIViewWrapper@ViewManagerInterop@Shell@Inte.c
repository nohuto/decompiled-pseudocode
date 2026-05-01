/*
 * XREFs of ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1802DC360
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800E15F0 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1804B226C (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$OnViewCreatedFailed@AEAJ@TouchKeyboardExperienceTelemetryLogger@@SAXAEAJ@Z @ 0x180508B84 (--$OnViewCreatedFailed@AEAJ@TouchKeyboardExperienceTelemetryLogger@@SAXAEAJ@Z.c)
 *     wil::ResultFromException__lambda_3bafd4a5c526c49ed4dd10bbacb3a284___ @ 0x180508D70 (wil--ResultFromException__lambda_3bafd4a5c526c49ed4dd10bbacb3a284___.c)
 *     ?DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18050F280 (-DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180515004 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
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
  struct IUnknown ***Ptr; // r14
  struct IUnknown ***i; // rbx
  int v11; // eax
  std::_Ref_count_base *v12; // rbx
  int v13; // eax
  RTL_SRWLOCK *v14; // [rsp+20h] [rbp-30h] BYREF
  std::_Ref_count_base *v15[2]; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v16[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v18; // [rsp+80h] [rbp+30h] BYREF
  struct IUnknown ***v19; // [rsp+88h] [rbp+38h] BYREF

  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v18);
  if ( v5 < 0 )
  {
    v6 = 4255LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( v18 )
  {
    if ( v18 == 4 )
    {
      *(_OWORD *)v15 = 0LL;
      Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v14, this + 53);
      Ptr = (struct IUnknown ***)this[55].Ptr;
      for ( i = (struct IUnknown ***)this[54].Ptr; i != Ptr && !(unsigned int)SHIsSameObject(**i, a2); i += 2 )
        ;
      v19 = i;
      if ( i != this[55].Ptr )
      {
        std::shared_ptr<FlyoutView>::operator=(v15, i);
        v16[0] = this;
        v16[1] = &v19;
        v11 = wil::ResultFromException__lambda_3bafd4a5c526c49ed4dd10bbacb3a284___(v16);
        if ( v11 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x10C6,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v11);
      }
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v14);
      v12 = v15[0];
      if ( v15[0] )
      {
        v13 = TouchKeyboardExperienceManager::DestroyView((TouchKeyboardExperienceManager *)this, v15[0]);
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x10CD,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v13);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this[73].Ptr + 16) + 216LL))(
          *((_QWORD *)this[73].Ptr + 16),
          *((unsigned int *)v12 + 26));
      }
      if ( v15[1] )
        std::_Ref_count_base::_Decref(v15[1]);
    }
  }
  else
  {
    v5 = ((__int64 (__fastcall *)(struct IUnknown *, __int64))a2->lpVtbl[14].AddRef)(a2, 4LL);
    if ( v5 < 0 )
    {
      v6 = 4260LL;
      goto LABEL_3;
    }
    LODWORD(v19) = TouchKeyboardExperienceManager::OnViewCreated(
                     (TouchKeyboardExperienceManager *)this,
                     (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2,
                     v8);
    if ( (int)v19 < 0 )
      TouchKeyboardExperienceTelemetryLogger::OnViewCreatedFailed<long &>(&v19);
  }
  return 0LL;
}
