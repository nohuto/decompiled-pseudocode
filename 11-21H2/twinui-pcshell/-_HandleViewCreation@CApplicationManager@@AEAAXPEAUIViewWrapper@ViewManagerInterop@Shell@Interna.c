/*
 * XREFs of ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x1800E8EF8
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1800E8B80 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 *     ?_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z @ 0x18017AA98 (-_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z @ 0x18006DFA0 (--0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z.c)
 *     ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x1800711A4 (-_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Win.c)
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x1800E7794 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ??1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ @ 0x1800E8B48 (--1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByHostId@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByHostId@@_KPEA_K@Z @ 0x1800E92E0 (--$GetAppPosition@VCImmersiveAppFinderByHostId@@@-$CActivationBasedCollection@V-$ComPtr@UIImmers.c)
 *     ?UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x1800E9F14 (-UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1800EA190 (-HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown.c)
 *     ?GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z @ 0x1800EACF4 (-GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z @ 0x1802DD26C (--$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHostIdAndGlomId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHostIdAndGlomId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1802DE974 (--$_FindFirstApplication@VCImmersiveAppFinderByHostIdAndGlomId@@@CApplicationManager@@AEAAJAEBVC.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CApplicationManager::_HandleViewCreation(
        CApplicationManager *this,
        void (__fastcall ***a2)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, struct IImmersiveMonitor **),
        struct IUnknown *a3)
{
  int (__fastcall *v5)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING *); // rbx
  int v6; // r13d
  int v7; // edi
  unsigned int NextGlomId; // r14d
  RTL_SRWLOCK *v9; // rcx
  char v10; // r12
  __int64 v11; // r8
  int First; // ebx
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **); // rbx
  const unsigned __int16 *StringRawBuffer; // rax
  struct IImmersiveMonitor *v17; // rbx
  unsigned __int64 v18; // rdi
  CallerIdentity *v19; // rax
  PSRWLOCK v20; // rax
  __int64 (__fastcall ***v21)(_QWORD, GUID *, struct IImmersiveApplicationInternal **); // rcx
  void (__fastcall *v22)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, struct IImmersiveMonitor **); // rbx
  __int64 (__fastcall ***v23)(_QWORD, GUID *, struct IImmersiveApplicationInternal **); // rcx
  const struct _GUID *v24; // [rsp+28h] [rbp-58h]
  struct IImmersiveApplicationInternal *v25; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-38h] BYREF
  HSTRING string; // [rsp+50h] [rbp-30h] BYREF
  struct IImmersiveMonitor *v28; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v29; // [rsp+60h] [rbp-20h]
  _BYTE v30[8]; // [rsp+68h] [rbp-18h] BYREF
  int v31; // [rsp+70h] [rbp-10h]
  unsigned __int64 v32; // [rsp+C8h] [rbp+48h] BYREF
  struct IUnknown *v33; // [rsp+D0h] [rbp+50h]
  int v34; // [rsp+D8h] [rbp+58h] BYREF

  v33 = a3;
  string = 0LL;
  v5 = (int (__fastcall *)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING *))(*a2)[7];
  WindowsDeleteString(0LL);
  string = 0LL;
  if ( v5((struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2, &string) >= 0 )
  {
    v6 = -1;
    v26 = -1LL;
    ((void (__fastcall *)(void (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, struct IImmersiveMonitor **), unsigned __int64 *))(*a2)[73])(
      a2,
      &v26);
    v7 = 0;
    v34 = 0;
    NextGlomId = 0;
    v9 = CApplicationManagerUtility::g_pIAMGlobals;
    if ( !BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
    {
      v28 = 0LL;
      v22 = **a2;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v28);
      v22(
        (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2,
        &GUID_9230a21d_831d_414f_87f1_f0131a16a75a,
        &v28);
      if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, const WCHAR *, unsigned __int64 *))(*(_QWORD *)v28 + 88LL))(
             v28,
             L"LastSetGlomIdForReconstitution",
             &v32) >= 0 )
        NextGlomId = v32;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v28);
      v9 = CApplicationManagerUtility::g_pIAMGlobals;
    }
    v25 = 0LL;
    v10 = 0;
    AcquireSRWLockExclusive(v9);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v25);
    if ( NextGlomId )
    {
      v28 = (struct IImmersiveMonitor *)v26;
      v29 = NextGlomId;
      First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHostIdAndGlomId>(this, &v28, &v25);
    }
    else
    {
      v32 = v26;
      v25 = 0LL;
      First = CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByHostId>(
                (char *)this + 624,
                &v32,
                v11,
                &v28);
      if ( First >= 0 )
      {
        v21 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **))(*((_QWORD *)this + 79)
                                                                                                  + 8LL * (_QWORD)v28);
        First = (**v21)(v21, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v25);
      }
    }
    LODWORD(v32) = First;
    if ( First >= 0 )
    {
      v10 = (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v25 + 408LL))(v25) == 0;
      First = CApplicationManager::_AddViewToGlom((__int64)this, (__int64)a2, (__int64)v25, 1, 0LL, (__int64)v33);
      LODWORD(v32) = First;
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( First < 0 )
    {
      CAutoApplicationCreationResourceGuarantee::CAutoApplicationCreationResourceGuarantee(
        (CAutoApplicationCreationResourceGuarantee *)v30,
        (struct IIAMServiceProvider *)(((unsigned __int64)this + 192) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
      v7 = v31;
      v34 = v31;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v25);
      if ( NextGlomId )
      {
        v28 = (struct IImmersiveMonitor *)v26;
        v29 = NextGlomId;
        First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHostIdAndGlomId>(this, &v28, &v25);
      }
      else
      {
        v32 = v26;
        v25 = 0LL;
        First = CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByHostId>(
                  (char *)this + 624,
                  &v32,
                  v13,
                  &v28);
        if ( First >= 0 )
        {
          v23 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **))(*((_QWORD *)this + 79) + 8LL * (_QWORD)v28);
          First = (**v23)(v23, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v25);
        }
      }
      LODWORD(v32) = First;
      if ( First >= 0 )
      {
        v6 = 1;
        v10 = (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v25 + 408LL))(v25) == 0;
      }
      else if ( First == -2147319765 )
      {
        v28 = 0LL;
        v14 = *((_QWORD *)this + 70);
        v15 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v14 + 72LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v28);
        First = v15(
                  v14,
                  0LL,
                  &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                  &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                  &v28);
        LODWORD(v32) = First;
        if ( First >= 0 )
        {
          if ( !NextGlomId )
          {
            StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
            NextGlomId = CActivationBasedAppAndGlomCollection::GetNextGlomId(
                           (CApplicationManager *)((char *)this + 624),
                           StringRawBuffer);
          }
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v25);
          v17 = v28;
          v18 = v26;
          v19 = (CallerIdentity *)WindowsGetStringRawBuffer(string, 0LL);
          First = CApplicationManager::_CreateImmersiveApp(this, v19, v18, NextGlomId, v17, v24, (void **)&v25);
          LODWORD(v32) = First;
          if ( First >= 0 )
          {
            v6 = 0;
            v20 = CApplicationManagerUtility::g_pIAMGlobals;
            if ( !BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
            {
              CApplicationManager::UpdateMonitorForAppAsync(this, v25);
              v20 = CApplicationManagerUtility::g_pIAMGlobals;
            }
            v10 = BYTE4(v20[13].Ptr);
          }
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v28);
        v7 = v34;
      }
      if ( First >= 0 )
      {
        First = CApplicationManager::_AddViewToGlom((__int64)this, (__int64)a2, (__int64)v25, v6, 0LL, (__int64)v33);
        LODWORD(v32) = First;
      }
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      CAutoApplicationCreationResourceGuarantee::~CAutoApplicationCreationResourceGuarantee((CAutoApplicationCreationResourceGuarantee *)v30);
      if ( First < 0 )
        goto LABEL_39;
    }
    if ( v10 )
    {
      First = CApplicationManager::HandleInitialPosition(
                (CApplicationManager *)((char *)this + 240),
                v25,
                v33,
                0LL,
                0LL);
      LODWORD(v32) = First;
    }
    if ( First < 0 || v7 < 0 )
    {
LABEL_39:
      v28 = (struct IImmersiveMonitor *)WindowsGetStringRawBuffer(string, 0LL);
      CAppManagerTelemetry::HandleViewCreationFailure<unsigned short const *,unsigned __int64 &,long &,long &>(
        &v28,
        &v26,
        &v32,
        &v34);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v25);
  }
  if ( string )
    WindowsDeleteString(string);
}
