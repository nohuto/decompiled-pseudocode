/*
 * XREFs of ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18000E474
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18000F0C0 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 *     ?_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z @ 0x1801B7850 (-_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z.c)
 * Callees:
 *     ??1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ @ 0x18000DB0C (--1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ.c)
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18000DE50 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHostId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHostId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18000E7B4 (--$_FindFirstApplication@VCImmersiveAppFinderByHostId@@@CApplicationManager@@AEAAJAEBVCImmersive.c)
 *     ?GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z @ 0x18000E85C (-GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z.c)
 *     ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x18000F300 (-HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown.c)
 *     ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x1800109E8 (-_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Win.c)
 *     ?UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x180011554 (-UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ??0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z @ 0x1800270D0 (--0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z @ 0x180394634 (--$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHostIdAndGlomId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHostIdAndGlomId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180395844 (--$_FindFirstApplication@VCImmersiveAppFinderByHostIdAndGlomId@@@CApplicationManager@@AEAAJAEBVC.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CApplicationManager::_HandleViewCreation(
        CApplicationManager *this,
        void (__fastcall ***a2)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, struct IImmersiveMonitor **),
        struct IUnknown *a3)
{
  int (__fastcall *v5)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING *); // rbx
  unsigned int v6; // edi
  int v7; // r13d
  unsigned int NextGlomId; // r14d
  RTL_SRWLOCK *v9; // rcx
  char v10; // r12
  int First; // eax
  int ImmersiveApp; // ebx
  int v13; // eax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **); // rbx
  const unsigned __int16 *StringRawBuffer; // rax
  struct IImmersiveMonitor *v17; // rbx
  unsigned __int64 v18; // rdi
  CallerIdentity *v19; // rax
  PSRWLOCK v20; // rax
  void (__fastcall *v21)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, struct IImmersiveMonitor **); // rbx
  struct IUnknown *v22; // [rsp+28h] [rbp-58h]
  struct IImmersiveApplicationInternal *v23; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-38h] BYREF
  HSTRING string; // [rsp+50h] [rbp-30h] BYREF
  struct IImmersiveMonitor *v26; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v27; // [rsp+60h] [rbp-20h]
  char v28[8]; // [rsp+68h] [rbp-18h] BYREF
  int v29; // [rsp+70h] [rbp-10h]
  unsigned __int64 v30; // [rsp+C8h] [rbp+48h] BYREF
  struct IUnknown *v31; // [rsp+D0h] [rbp+50h]
  int v32; // [rsp+D8h] [rbp+58h] BYREF

  v31 = a3;
  string = 0LL;
  v5 = (int (__fastcall *)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING *))(*a2)[7];
  WindowsDeleteString(0LL);
  string = 0LL;
  if ( v5((struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2, &string) >= 0 )
  {
    v6 = -1;
    v24 = -1LL;
    ((void (__fastcall *)(void (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, struct IImmersiveMonitor **), unsigned __int64 *))(*a2)[73])(
      a2,
      &v24);
    v7 = 0;
    v32 = 0;
    NextGlomId = 0;
    v9 = CApplicationManagerUtility::g_pIAMGlobals;
    v10 = 0;
    if ( !BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
    {
      v26 = 0LL;
      v21 = **a2;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
      v21(
        (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2,
        &GUID_9230a21d_831d_414f_87f1_f0131a16a75a,
        &v26);
      if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, const WCHAR *, unsigned __int64 *))(*(_QWORD *)v26 + 88LL))(
             v26,
             L"LastSetGlomIdForReconstitution",
             &v30) >= 0 )
        NextGlomId = v30;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
      v9 = CApplicationManagerUtility::g_pIAMGlobals;
    }
    v23 = 0LL;
    AcquireSRWLockExclusive(v9);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
    if ( NextGlomId )
    {
      v26 = (struct IImmersiveMonitor *)v24;
      v27 = NextGlomId;
      First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHostIdAndGlomId>(this, &v26, &v23);
    }
    else
    {
      v30 = v24;
      First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHostId>(this, &v30, &v23);
    }
    ImmersiveApp = First;
    LODWORD(v30) = First;
    if ( First >= 0 )
    {
      v10 = (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v23 + 408LL))(v23) == 0;
      v22 = v31;
      ImmersiveApp = CApplicationManager::_AddViewToGlom(this, a2, v23, 1LL, 0LL);
      LODWORD(v30) = ImmersiveApp;
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( ImmersiveApp < 0 )
    {
      CAutoApplicationCreationResourceGuarantee::CAutoApplicationCreationResourceGuarantee(
        (CAutoApplicationCreationResourceGuarantee *)v28,
        (struct IIAMServiceProvider *)(((unsigned __int64)this + 192) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
      v7 = v29;
      v32 = v29;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
      if ( NextGlomId )
      {
        v26 = (struct IImmersiveMonitor *)v24;
        v27 = NextGlomId;
        v13 = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHostIdAndGlomId>(this, &v26, &v23);
      }
      else
      {
        v30 = v24;
        v13 = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHostId>(this, &v30, &v23);
      }
      ImmersiveApp = v13;
      LODWORD(v30) = v13;
      if ( v13 >= 0 )
      {
        v6 = 1;
        v10 = (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v23 + 408LL))(v23) == 0;
      }
      else if ( v13 == -2147319765 )
      {
        v26 = 0LL;
        v14 = *((_QWORD *)this + 70);
        v15 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v14 + 72LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
        ImmersiveApp = v15(
                         v14,
                         0LL,
                         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                         &v26);
        LODWORD(v30) = ImmersiveApp;
        if ( ImmersiveApp < 0 )
          goto LABEL_37;
        if ( !NextGlomId )
        {
          StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
          NextGlomId = CActivationBasedAppAndGlomCollection::GetNextGlomId(
                         (CApplicationManager *)((char *)this + 624),
                         StringRawBuffer);
        }
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
        v17 = v26;
        v18 = v24;
        v19 = (CallerIdentity *)WindowsGetStringRawBuffer(string, 0LL);
        ImmersiveApp = CApplicationManager::_CreateImmersiveApp(
                         this,
                         v19,
                         v18,
                         NextGlomId,
                         v17,
                         (const struct _GUID *)v22,
                         (void **)&v23);
        LODWORD(v30) = ImmersiveApp;
        if ( ImmersiveApp < 0 )
        {
LABEL_37:
          v6 = -1;
        }
        else
        {
          v6 = 0;
          v20 = CApplicationManagerUtility::g_pIAMGlobals;
          if ( !BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
          {
            CApplicationManager::UpdateMonitorForAppAsync(this, v23);
            v20 = CApplicationManagerUtility::g_pIAMGlobals;
          }
          v10 = BYTE4(v20[13].Ptr);
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
      }
      if ( ImmersiveApp >= 0 )
      {
        ImmersiveApp = CApplicationManager::_AddViewToGlom(this, a2, v23, v6, 0LL);
        LODWORD(v30) = ImmersiveApp;
      }
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      CAutoApplicationCreationResourceGuarantee::~CAutoApplicationCreationResourceGuarantee((CAutoApplicationCreationResourceGuarantee *)v28);
      if ( ImmersiveApp < 0 )
        goto LABEL_38;
    }
    if ( v10 )
    {
      ImmersiveApp = CApplicationManager::HandleInitialPosition(
                       (CApplicationManager *)((char *)this + 240),
                       v23,
                       v31,
                       0LL,
                       0LL);
      LODWORD(v30) = ImmersiveApp;
    }
    if ( ImmersiveApp < 0 || v7 < 0 )
    {
LABEL_38:
      v26 = (struct IImmersiveMonitor *)WindowsGetStringRawBuffer(string, 0LL);
      CAppManagerTelemetry::HandleViewCreationFailure<unsigned short const *,unsigned __int64 &,long &,long &>(
        &v26,
        &v24,
        &v30,
        &v32);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
  }
  if ( string )
    WindowsDeleteString(string);
}
