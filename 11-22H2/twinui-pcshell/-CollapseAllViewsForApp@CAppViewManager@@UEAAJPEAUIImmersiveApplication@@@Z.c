/*
 * XREFs of ?CollapseAllViewsForApp@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x18005B700
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CAppViewManager::CollapseAllViewsForApp(CAppViewManager *this, struct IImmersiveApplication *a2)
{
  __int64 (__fastcall *v4)(struct IImmersiveApplication *, GUID **); // rbx
  int v5; // ebx
  RTL_SRWLOCK *v6; // rdi
  int (__fastcall *v7)(struct IImmersiveApplication *, GUID *, __int64 *); // rbx
  int (__fastcall ***v8)(_QWORD, _QWORD, _QWORD); // rbx
  int (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rsi
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64 *); // rsi
  int v12; // eax
  int (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // rbx
  int (__fastcall *v15)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v16)(struct IImmersiveApplication *, GUID *, struct IUnknown **); // rbx
  unsigned int i; // r14d
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, _QWORD, GUID *, struct IUnknown **); // rsi
  struct IUnknown *v20; // [rsp+30h] [rbp-50h] BYREF
  int (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-48h] BYREF
  __int64 v22; // [rsp+40h] [rbp-40h] BYREF
  __int64 v23; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v24[2]; // [rsp+50h] [rbp-30h] BYREF
  GUID *v25; // [rsp+60h] [rbp-20h] BYREF
  __int64 v26; // [rsp+68h] [rbp-18h]
  __int64 v27; // [rsp+70h] [rbp-10h]
  unsigned int v28; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v29; // [rsp+C0h] [rbp+40h] BYREF
  struct IUnknown *v30; // [rsp+C8h] [rbp+48h] BYREF

  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v4 = *(__int64 (__fastcall **)(struct IImmersiveApplication *, GUID **))(*(_QWORD *)a2 + 32LL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v25);
  v26 = -1LL;
  v27 = -1LL;
  v5 = v4(a2, &v25);
  if ( v5 >= 0 )
  {
    v21 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
    v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD))this + 11))(
           *((_QWORD *)this + 11),
           &GUID_237c07c9_313b_4b5a_b98d_4f613da23e8f,
           &v21);
    if ( v5 >= 0 )
    {
      v6 = CApplicationManagerUtility::g_pIAMGlobals;
      v24[1] = CApplicationManagerUtility::g_pIAMGlobals;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v29 = 0LL;
      v23 = 0LL;
      v22 = 0LL;
      v24[0] = 0LL;
      v7 = **(int (__fastcall ***)(struct IImmersiveApplication *, GUID *, __int64 *))a2;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
      if ( v7(a2, &GUID_b00297dd_eb90_48c8_99c0_f0b2d68213d3, &v23) < 0
        || (v8 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v21,
            v9 = **v21,
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22),
            v9(v8, &GUID_af40de1b_7663_429e_9fee_6029ee6c4978, &v22) < 0)
        || (*(int (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v23 + 24LL))(v23, v24) < 0 )
      {
        v14 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v21;
        v15 = (*v21)[13];
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v29);
        v12 = v15(v14, v25, &v29);
      }
      else
      {
        v10 = v22;
        v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v22 + 24LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v29);
        v12 = v11(v10, v24[0], &v29);
      }
      v5 = v12;
      if ( v12 >= 0 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v29 + 24LL))(v29, &v28);
        if ( v5 >= 0 && v28 > 1 )
        {
          v20 = 0LL;
          v16 = **(__int64 (__fastcall ***)(struct IImmersiveApplication *, GUID *, struct IUnknown **))a2;
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v20);
          v5 = v16(a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v20);
          for ( i = 0; v5 >= 0; ++i )
          {
            if ( i >= v28 )
              break;
            v30 = 0LL;
            v18 = v29;
            v19 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IUnknown **))(*(_QWORD *)v29 + 32LL);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v30);
            v5 = v19(v18, i, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v30);
            if ( v5 >= 0 && !(unsigned int)SHIsSameObject(v20, v30) )
              v5 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *, struct IUnknown *, _QWORD))(**((_QWORD **)this + 11) + 104LL))(
                     *((_QWORD *)this + 11),
                     v30,
                     v20,
                     0LL);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v30);
          }
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v20);
        }
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v29);
      if ( v6 )
        ReleaseSRWLockExclusive(v6);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v25);
  return (unsigned int)v5;
}
