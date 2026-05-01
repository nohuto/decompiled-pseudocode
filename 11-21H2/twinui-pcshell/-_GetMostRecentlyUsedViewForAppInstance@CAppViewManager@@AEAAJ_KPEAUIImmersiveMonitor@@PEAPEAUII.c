/*
 * XREFs of ?_GetMostRecentlyUsedViewForAppInstance@CAppViewManager@@AEAAJ_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180036AF8
 * Callers:
 *     ?_GetViewForSwitchInternalByHostId@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180036960 (-_GetViewForSwitchInternalByHostId@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImme.c)
 * Callees:
 *     ?_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x180028794 (-_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180036AA8 (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800EBCDC (--$As@UIImmersiveApplication@@@-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEBAJV-$.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18022AB3C (--0-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@.c)
 *     WPP_SF_ @ 0x1802EC2B8 (WPP_SF_.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1802F37DC (--0Iterator@-$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V-$ComPtr@UIImmersiveApplic.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1802F65C8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V-$ComPtr@UI.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CAppViewManager::_GetMostRecentlyUsedViewForAppInstance(
        CAppViewManager *this,
        __int64 a2,
        struct IImmersiveMonitor *a3,
        struct IImmersiveApplicationInternal **a4)
{
  HRESULT v7; // r14d
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64, __int64 *); // rdi
  bool v10; // cc
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **)); // rdi
  void *v14; // rbx
  __int64 (__fastcall *v15)(void *, _QWORD, __int64 *); // rdi
  __int64 v16; // rdi
  __int64 v17; // rsi
  struct IImmersiveApplicationInternal *v18; // rbx
  CAppViewManager *v19; // rcx
  PVOID Ptr; // r14
  __int64 (__fastcall *v21)(PVOID, __int64, __int64 *); // rbx
  __int64 *AddressOf; // rax
  __int64 *v23; // rcx
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **)); // rdi
  __int64 v26; // [rsp+30h] [rbp-69h] BYREF
  struct IImmersiveApplicationInternal *v27; // [rsp+38h] [rbp-61h] BYREF
  __int64 v28; // [rsp+40h] [rbp-59h] BYREF
  __int64 v29; // [rsp+48h] [rbp-51h] BYREF
  __int64 v30; // [rsp+50h] [rbp-49h] BYREF
  __int64 v31; // [rsp+58h] [rbp-41h] BYREF
  __int64 v32; // [rsp+60h] [rbp-39h] BYREF
  void *ppvOut; // [rsp+68h] [rbp-31h] BYREF
  __int64 v34; // [rsp+70h] [rbp-29h] BYREF
  int v35; // [rsp+78h] [rbp-21h] BYREF
  struct IImmersiveApplicationInternal *v36[2]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v37; // [rsp+90h] [rbp-9h] BYREF
  unsigned int v38; // [rsp+98h] [rbp-1h]
  int v39; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v40[9]; // [rsp+A8h] [rbp+Fh] BYREF
  int v41; // [rsp+100h] [rbp+67h] BYREF
  unsigned int v42; // [rsp+110h] [rbp+77h] BYREF
  int v43; // [rsp+114h] [rbp+7Bh]
  __int64 (__fastcall ***v44)(_QWORD, GUID *, struct IImmersiveApplicationInternal **); // [rsp+118h] [rbp+7Fh] BYREF

  v43 = HIDWORD(a3);
  *a4 = 0LL;
  v44 = 0LL;
  v26 = 0LL;
  v42 = 0;
  v34 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v34);
  v7 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 15))(
         *((_QWORD *)this + 15),
         &GUID_6ab2f0e6_cf78_4445_80dd_201879cf4c70,
         &v34);
  if ( v7 < 0 )
    goto LABEL_9;
  v8 = v34;
  v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v34 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
  v7 = v9(v8, a2, &v26);
  if ( v7 < 0 )
    goto LABEL_9;
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v26 + 24LL))(v26, &v42);
  if ( v7 < 0 )
    goto LABEL_9;
  v10 = v42 <= 1;
  if ( v42 == 1 )
  {
    v11 = v26;
    v12 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **)))(*(_QWORD *)v26 + 32LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44);
    v7 = v12(v11, 0LL, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v44);
    if ( v7 < 0 )
      goto LABEL_9;
    v10 = v42 <= 1;
  }
  if ( v10 )
  {
LABEL_8:
    v7 = (**v44)(v44, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, a4);
    goto LABEL_9;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  v7 = IUnknown_QueryService(
         *((IUnknown **)this + 15),
         (const GUID *const)&SID_VirtualDesktopManager,
         &GUID_b2f925b9_5a0f_4d2e_9f4d_2b1507593c10,
         &ppvOut);
  if ( v7 >= 0 )
  {
    v32 = 0LL;
    v14 = ppvOut;
    v15 = *(__int64 (__fastcall **)(void *, _QWORD, __int64 *))(*(_QWORD *)ppvOut + 48LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v32);
    v7 = v15(v14, 0LL, &v32);
    if ( v7 < 0 )
    {
LABEL_34:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v32);
      goto LABEL_35;
    }
    v16 = 0LL;
    v31 = 0LL;
    v17 = 0LL;
    v30 = 0LL;
    details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
      &v37,
      v26);
    details::ObjectArrayAdapterImpl<IImmersiveApplicationInternal,Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::Iterator::Iterator(
      &v35,
      &v37,
      0LL);
    details::ObjectArrayAdapterImpl<IImmersiveApplicationInternal,Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::Iterator::Iterator(
      &v39,
      &v37,
      v38);
    while ( v35 != v39 || v36[1] != (struct IImmersiveApplicationInternal *)v40[1] )
    {
      v18 = v36[0];
      v27 = v36[0];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v27);
      AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      LOBYTE(v18) = CAppViewManager::_IsMultiViewOperationAllowed(v19, v18);
      ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      if ( (_BYTE)v18 )
      {
        if ( !v16 )
        {
          Microsoft::WRL::ComPtr<IAppLayout>::operator=(&v31, (__int64 *)&v27);
          v16 = v31;
        }
        v29 = 0LL;
        v7 = Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::As<IImmersiveApplication>(&v27, &v29);
        if ( v7 >= 0 )
        {
          v28 = 0LL;
          Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
          v21 = *(__int64 (__fastcall **)(PVOID, __int64, __int64 *))(*(_QWORD *)Ptr + 56LL);
          AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v28);
          v7 = v21(Ptr, v29, AddressOf);
          if ( v7 >= 0 )
          {
            v7 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v32 + 24LL))(v32, v28, &v41);
            if ( v7 >= 0 )
            {
              if ( v41 )
              {
                Microsoft::WRL::ComPtr<IAppLayout>::operator=(&v30, (__int64 *)&v27);
                Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v28);
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
                Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v27);
                v17 = v30;
                break;
              }
            }
          }
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v28);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v27);
      ++v35;
      details::ObjectArrayAdapterImpl<IImmersiveApplicationInternal,Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::Iterator::GetCurrentObject(&v35);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v40);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v36);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v37);
    if ( v17 )
    {
      v23 = &v30;
    }
    else
    {
      if ( !v16 )
      {
LABEL_33:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v30);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v31);
        goto LABEL_34;
      }
      v23 = &v31;
    }
    Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::As<IImmersiveApplication>(v23, &v44);
    goto LABEL_33;
  }
LABEL_35:
  if ( !v44 )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_65754c2fe5c9338726b8119b5dabff0c_Traceguids);
    v24 = v26;
    v25 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **)))(*(_QWORD *)v26 + 32LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44);
    v7 = v25(v24, 0LL, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v44);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  if ( v7 >= 0 )
    goto LABEL_8;
LABEL_9:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v34);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44);
  return (unsigned int)v7;
}
