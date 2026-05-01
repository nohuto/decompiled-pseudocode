/*
 * XREFs of ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAU3@@Z @ 0x180398A20
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18000DE50 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ?GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z @ 0x18000E85C (-GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z.c)
 *     ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x1800109E8 (-_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Win.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ??$As@UIImmersiveApplication2@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication2@@@WRL@Microsoft@@@Details@12@@Z @ 0x180063984 (--$As@UIImmersiveApplication2@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@.c)
 *     ?_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@W4RemoveWindowReason@1@PEAPEAUITaskWindow@@@Z @ 0x18006DBBC (-_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicati.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CApplicationManager::CreateNewGlom(
        CApplicationManager *this,
        HWND a2,
        void (__fastcall ***a3)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *),
        struct Windows::Foundation::Collections::IPropertySet *a4,
        struct IImmersiveApplicationInternal **a5)
{
  struct IImmersiveApplicationInternal **v9; // r15
  void (__fastcall *v10)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *); // rbx
  int ImmersiveApp; // ebx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v13)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v14; // r9
  void (__fastcall *v15)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *); // rbx
  __int64 *AddressOf; // rax
  struct IImmersiveMonitor *v17; // rbx
  unsigned int NextGlomId; // eax
  struct IImmersiveApplicationInternal **v19; // rax
  const struct _GUID *v21; // [rsp+30h] [rbp-49h]
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-31h] BYREF
  struct IImmersiveMonitor *v23; // [rsp+50h] [rbp-29h] BYREF
  __int64 v24; // [rsp+58h] [rbp-21h] BYREF
  __int64 v25; // [rsp+60h] [rbp-19h] BYREF
  unsigned __int16 *v26; // [rsp+68h] [rbp-11h] BYREF
  __int64 v27; // [rsp+70h] [rbp-9h]
  __int64 v28; // [rsp+78h] [rbp-1h]
  unsigned __int64 v29; // [rsp+80h] [rbp+7h] BYREF
  HWND v30; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v31; // [rsp+90h] [rbp+17h] BYREF
  char v32; // [rsp+98h] [rbp+1Fh]
  __int64 v33; // [rsp+E8h] [rbp+6Fh] BYREF

  v9 = a5;
  *a5 = 0LL;
  a5 = 0LL;
  v22 = 0LL;
  v25 = 0LL;
  v10 = **a3;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v22);
  ImmersiveApp = ((__int64 (__fastcall *)(_QWORD, GUID *, _QWORD))v10)(
                   a3,
                   &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                   &v22);
  if ( ImmersiveApp >= 0 )
  {
    ImmersiveApp = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication2>(&v22, &v25);
    if ( ImmersiveApp >= 0 )
    {
      v29 = -1LL;
      ImmersiveApp = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v25 + 24LL))(v25, &v29);
      if ( ImmersiveApp >= 0 )
      {
        v26 = 0LL;
        v27 = 0LL;
        v28 = 0LL;
        v12 = v22;
        v13 = (*v22)[4];
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v26);
        v27 = -1LL;
        v28 = -1LL;
        ImmersiveApp = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), unsigned __int16 **))v13)(
                         v12,
                         &v26);
        if ( ImmersiveApp >= 0 )
        {
          v33 = 0LL;
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v33);
          v30 = a2;
          v31 = 0LL;
          v32 = 0;
          CApplicationManager::_RemoveWindowFromGlom(
            (CApplicationManager *)((char *)this - 240),
            (__int64)&v30,
            a3,
            v14,
            &v33);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v31);
          v24 = 0LL;
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
          ImmersiveApp = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**((_QWORD **)this + 42) + 32LL))(
                           *((_QWORD *)this + 42),
                           0LL,
                           &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
                           &v24);
          if ( ImmersiveApp < 0 )
            goto LABEL_9;
          v23 = 0LL;
          v15 = (*a3)[58];
          AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v23);
          ((void (__fastcall *)(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *), __int64 *))v15)(
            a3,
            AddressOf);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&a5);
          v17 = v23;
          NextGlomId = CActivationBasedAppAndGlomCollection::GetNextGlomId(
                         (CApplicationManager *)((char *)this + 384),
                         v26);
          ImmersiveApp = CApplicationManager::_CreateImmersiveApp(
                           (CApplicationManager *)((char *)this - 240),
                           (CallerIdentity *)v26,
                           v29,
                           NextGlomId,
                           v17,
                           v21,
                           (void **)&a5);
          if ( ImmersiveApp >= 0 )
            ImmersiveApp = CApplicationManager::_AddViewToGlom(
                             (__int64)this - 240,
                             0LL,
                             (struct IImmersiveApplicationInternal *)a5,
                             0,
                             v33,
                             (__int64 (__fastcall ***)(_QWORD, GUID *, unsigned __int64 *))a4);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
          if ( ImmersiveApp < 0 )
LABEL_9:
            CApplicationManager::_AddViewToGlom(
              (__int64)this - 240,
              0LL,
              (struct IImmersiveApplicationInternal *)a3,
              9,
              v33,
              (__int64 (__fastcall ***)(_QWORD, GUID *, unsigned __int64 *))a4);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v33);
        }
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v26);
        if ( ImmersiveApp >= 0 )
        {
          v19 = a5;
          a5 = 0LL;
          *v9 = (struct IImmersiveApplicationInternal *)v19;
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v22);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&a5);
  return (unsigned int)ImmersiveApp;
}
