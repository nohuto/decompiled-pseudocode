/*
 * XREFs of ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAU3@@Z @ 0x1800386C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIImmersiveApplication2@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication2@@@WRL@Microsoft@@@Details@12@@Z @ 0x180055BA0 (--$As@UIImmersiveApplication2@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@.c)
 *     ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x1800711A4 (-_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Win.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x1800E7794 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ?GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z @ 0x1800EACF4 (-GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@W4RemoveWindowReason@1@PEAPEAUITaskWindow@@@Z @ 0x1801759E4 (-_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicati.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CApplicationManager::CreateNewGlom(
        CApplicationManager *this,
        HWND a2,
        __int64 (__fastcall ***a3)(struct IImmersiveApplicationInternal *, GUID *, __int64 *),
        struct Windows::Foundation::Collections::IPropertySet *a4,
        struct IImmersiveApplicationInternal **a5)
{
  struct IImmersiveApplicationInternal **v9; // r15
  __int64 (__fastcall *v10)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  int ImmersiveApp; // ebx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, unsigned __int16 **); // rdi
  void (__fastcall *v14)(struct IImmersiveApplicationInternal *, __int64); // rbx
  __int64 AddressOf; // rax
  struct IImmersiveMonitor *v16; // rbx
  unsigned int NextGlomId; // eax
  struct IImmersiveApplicationInternal **v18; // rax
  const struct _GUID *v20; // [rsp+30h] [rbp-49h]
  __int64 v21; // [rsp+48h] [rbp-31h] BYREF
  struct IImmersiveMonitor *v22; // [rsp+50h] [rbp-29h] BYREF
  __int64 v23; // [rsp+58h] [rbp-21h] BYREF
  __int64 v24; // [rsp+60h] [rbp-19h] BYREF
  unsigned __int16 *v25; // [rsp+68h] [rbp-11h] BYREF
  __int64 v26; // [rsp+70h] [rbp-9h]
  __int64 v27; // [rsp+78h] [rbp-1h]
  unsigned __int64 v28; // [rsp+80h] [rbp+7h] BYREF
  HWND v29; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v30; // [rsp+90h] [rbp+17h] BYREF
  char v31; // [rsp+98h] [rbp+1Fh]
  __int64 v32; // [rsp+E8h] [rbp+6Fh] BYREF

  v9 = a5;
  *a5 = 0LL;
  a5 = 0LL;
  v21 = 0LL;
  v24 = 0LL;
  v10 = **a3;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
  ImmersiveApp = v10((struct IImmersiveApplicationInternal *)a3, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v21);
  if ( ImmersiveApp >= 0 )
  {
    ImmersiveApp = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication2>(&v21, &v24);
    if ( ImmersiveApp >= 0 )
    {
      v28 = -1LL;
      ImmersiveApp = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v24 + 24LL))(v24, &v28);
      if ( ImmersiveApp >= 0 )
      {
        v25 = 0LL;
        v26 = 0LL;
        v27 = 0LL;
        v12 = v21;
        v13 = *(__int64 (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)v21 + 32LL);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v25);
        v26 = -1LL;
        v27 = -1LL;
        ImmersiveApp = v13(v12, &v25);
        if ( ImmersiveApp >= 0 )
        {
          v32 = 0LL;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
          v29 = a2;
          v30 = 0LL;
          v31 = 0;
          CApplicationManager::_RemoveWindowFromGlom((char *)this - 240, &v29, a3);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
          v23 = 0LL;
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
          ImmersiveApp = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**((_QWORD **)this + 42) + 32LL))(
                           *((_QWORD *)this + 42),
                           0LL,
                           &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
                           &v23);
          if ( ImmersiveApp < 0 )
            goto LABEL_14;
          v22 = 0LL;
          v14 = (void (__fastcall *)(struct IImmersiveApplicationInternal *, __int64))(*a3)[58];
          AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v22);
          v14((struct IImmersiveApplicationInternal *)a3, AddressOf);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&a5);
          v16 = v22;
          NextGlomId = CActivationBasedAppAndGlomCollection::GetNextGlomId(
                         (CApplicationManager *)((char *)this + 384),
                         v25);
          ImmersiveApp = CApplicationManager::_CreateImmersiveApp(
                           (CApplicationManager *)((char *)this - 240),
                           v25,
                           v28,
                           NextGlomId,
                           v16,
                           v20,
                           (void **)&a5);
          if ( ImmersiveApp >= 0 )
            ImmersiveApp = CApplicationManager::_AddViewToGlom((char *)this - 240, 0LL, a5, 0LL, v32, a4);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
          if ( ImmersiveApp < 0 )
LABEL_14:
            CApplicationManager::_AddViewToGlom((char *)this - 240, 0LL, a3, 9LL, v32, a4);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
        }
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v25);
        if ( ImmersiveApp >= 0 )
        {
          v18 = a5;
          a5 = 0LL;
          *v9 = (struct IImmersiveApplicationInternal *)v18;
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&a5);
  return (unsigned int)ImmersiveApp;
}
