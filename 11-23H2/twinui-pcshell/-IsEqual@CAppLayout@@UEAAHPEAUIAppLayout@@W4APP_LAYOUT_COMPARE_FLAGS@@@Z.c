/*
 * XREFs of ?IsEqual@CAppLayout@@UEAAHPEAUIAppLayout@@W4APP_LAYOUT_COMPARE_FLAGS@@@Z @ 0x180795B30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIAppLayoutInternal@@U?$ChainInterfaces@UIAppLayoutBuilder@@UIAppLayout@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIAppLayoutInternal@@U?$ChainInterfaces@UIAppLayoutBuilder@@UIAppLayout@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18016C594 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIAp.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x18067E92C (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::IsEqual(__int64 a1, int (__fastcall ***a2)(_QWORD, GUID *, __int64 *), char a3)
{
  unsigned int v6; // r14d
  int (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  RTL_SRWLOCK *v8; // rdi
  __int64 *v9; // rbx
  int (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rsi
  __int64 *v11; // rbx
  RTL_SRWLOCK *v12; // rbx
  RTL_SRWLOCK *v13; // rbx
  unsigned __int64 v14; // r12
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rbx
  int (__fastcall *v18)(__int64, _QWORD, GUID *, __int64 *); // r14
  __int64 *v19; // rsi
  int v20; // eax
  __int64 v21; // r14
  __int64 (__fastcall *v22)(__int64, GUID *, __int64 *); // rsi
  __int64 *v23; // rbx
  int v24; // eax
  wil::details::in1diag3 *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 (__fastcall *v28)(__int64, GUID *, __int64 *); // r14
  __int64 *v29; // rsi
  unsigned __int64 v30; // r12
  unsigned __int64 i; // r15
  __int64 v32; // rbx
  int (__fastcall *v33)(__int64, _QWORD, GUID *, __int64 *); // r14
  __int64 *v34; // rsi
  __int64 v35; // rcx
  struct IUnknown *v37; // [rsp+30h] [rbp-59h] BYREF
  __int64 v38; // [rsp+38h] [rbp-51h] BYREF
  struct IUnknown *v39; // [rsp+40h] [rbp-49h] BYREF
  __int64 v40; // [rsp+48h] [rbp-41h] BYREF
  unsigned __int64 v41; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int64 v42; // [rsp+58h] [rbp-31h] BYREF
  PSRWLOCK SRWLock; // [rsp+60h] [rbp-29h] BYREF
  __int64 v44; // [rsp+68h] [rbp-21h] BYREF
  __int64 v45; // [rsp+70h] [rbp-19h] BYREF
  __int64 v46; // [rsp+78h] [rbp-11h] BYREF
  RECT rc2; // [rsp+80h] [rbp-9h] BYREF
  int v48; // [rsp+90h] [rbp+7h]
  int v49; // [rsp+94h] [rbp+Bh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v6 = 0;
  v38 = 0LL;
  v7 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v38);
  if ( v7(a2, &GUID_1ef1ecfa_786a_4d06_b024_4a61c7049b29, &v38) < 0 )
    goto LABEL_44;
  SRWLock = 0LL;
  v8 = 0LL;
  v37 = 0LL;
  v42 = 0LL;
  v41 = 0LL;
  v9 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v42, &v39);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v9);
  if ( (int)Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IAppLayoutInternal,Microsoft::WRL::ChainInterfaces<IAppLayoutBuilder,IAppLayout,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>>(
              a1 - 40,
              &GUID_00000000_0000_0000_c000_000000000046,
              v9) < 0 )
    goto LABEL_40;
  v10 = **a2;
  v11 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v41, &v39);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v11);
  if ( v10(a2, &GUID_00000000_0000_0000_c000_000000000046, v11) < 0 )
    goto LABEL_40;
  if ( v41 > v42 )
  {
    v13 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 56LL))(v38);
    AcquireSRWLockShared(v13);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
      (RTL_SRWLOCK **)&v37,
      v13);
    AcquireSRWLockShared((PSRWLOCK)(a1 + 16));
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
      &SRWLock,
      (RTL_SRWLOCK *)(a1 + 16));
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 16));
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
      &SRWLock,
      (RTL_SRWLOCK *)(a1 + 16));
    if ( v41 == v42 )
      goto LABEL_9;
    v12 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 56LL))(v38);
    AcquireSRWLockShared(v12);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
      (RTL_SRWLOCK **)&v37,
      v12);
  }
  v8 = (RTL_SRWLOCK *)v37;
LABEL_9:
  (*(void (__fastcall **)(__int64, RECT *))(*(_QWORD *)v38 + 24LL))(v38, &rc2);
  if ( (a3 & 1) != 0
    && (!EqualRect((const RECT *)(a1 + 24), &rc2) || *(_DWORD *)(a1 + 40) != v48 || *(_DWORD *)(a1 + 44) != v49) )
  {
LABEL_39:
    v6 = 0;
    goto LABEL_40;
  }
  v6 = 1;
  if ( (a3 & 4) != 0 )
  {
    v14 = *(_QWORD *)(a1 + 72);
    if ( v14 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v38 + 32LL))(v38) )
    {
      v15 = 0LL;
      if ( v14 )
      {
        while ( 1 )
        {
          if ( !v6 )
            goto LABEL_40;
          v16 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v15);
          LODWORD(v37) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16);
          v40 = 0LL;
          v17 = v38;
          v18 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v38 + 40LL);
          v19 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v40, &v45);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v19);
          if ( v18(v17, (unsigned int)v15, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v19) < 0
            || (v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v40 + 24LL))(v40), v20 != (_DWORD)v37) )
          {
            v6 = 0;
            goto LABEL_28;
          }
          v6 = 1;
          if ( (_DWORD)v37 == 1 )
            break;
LABEL_28:
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v40);
          if ( ++v15 >= v14 )
            goto LABEL_40;
        }
        v39 = 0LL;
        v37 = 0LL;
        v21 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v15);
        v22 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v21 + 48LL);
        v23 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v39, &v46);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v23);
        v24 = v22(v21, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v23);
        v25 = retaddr;
        if ( v24 >= 0 )
        {
          v27 = v40;
          v28 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v40 + 48LL);
          v29 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v37, &v44);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v29);
          v24 = v28(v27, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v29);
          v25 = retaddr;
          if ( v24 >= 0 )
          {
            v6 = SHIsSameObject(v39, v37);
            goto LABEL_26;
          }
          v26 = 790LL;
        }
        else
        {
          v26 = 789LL;
        }
        wil::details::in1diag3::_Log_Hr(
          v25,
          (void *)v26,
          (int)"pcshell\\twinui\\applayout\\lib\\applayout.cpp",
          (const char *)(unsigned int)v24);
        v6 = 0;
LABEL_26:
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v37);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v39);
        goto LABEL_28;
      }
      goto LABEL_40;
    }
    goto LABEL_39;
  }
  if ( (a3 & 2) != 0 )
  {
    v30 = *(_QWORD *)(a1 + 72);
    if ( v30 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v38 + 32LL))(v38) )
    {
      for ( i = 0LL; i < v30; ++i )
      {
        if ( !v6 )
          break;
        v39 = 0LL;
        v32 = v38;
        v33 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v38 + 40LL);
        v34 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v39, &v44);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v34);
        if ( v33(v32, (unsigned int)i, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v34) < 0 )
        {
          v6 = 0;
        }
        else
        {
          v35 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * i);
          v6 = (*(__int64 (__fastcall **)(__int64, struct IUnknown *))(*(_QWORD *)v35 + 96LL))(v35, v39);
        }
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v39);
      }
      goto LABEL_40;
    }
    goto LABEL_39;
  }
LABEL_40:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v41);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v42);
  if ( v8 )
    ReleaseSRWLockShared(v8);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
LABEL_44:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v38);
  return v6;
}
