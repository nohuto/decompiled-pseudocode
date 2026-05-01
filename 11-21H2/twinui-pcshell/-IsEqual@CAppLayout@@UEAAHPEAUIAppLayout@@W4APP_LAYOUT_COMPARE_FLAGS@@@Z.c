/*
 * XREFs of ?IsEqual@CAppLayout@@UEAAHPEAUIAppLayout@@W4APP_LAYOUT_COMPARE_FLAGS@@@Z @ 0x180617280
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081EB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CastToUnknown@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIDropFeedback@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@Details@WRL@Microsoft@@IEAAPEAUIUnknown@@XZ @ 0x1800B0FBC (-CastToUnknown@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarke.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIAppLayoutInternal@@U?$ChainInterfaces@UIAppLayoutBuilder@@UIAppLayout@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18011F240 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIAppLayoutInternal@@U-.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::IsEqual(__int64 a1, int (__fastcall ***a2)(_QWORD, GUID *, __int64 *), char a3)
{
  unsigned int v6; // esi
  int (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v8; // rbx
  BOOL IsEqualGUID; // eax
  const struct _GUID *v10; // rdx
  Microsoft::WRL::FtmBase *v11; // rcx
  _DWORD *v12; // rdx
  int CanCastTo; // edi
  _QWORD *v14; // r8
  __int64 v15; // rax
  int (__fastcall *v16)(_QWORD, GUID *, __int64 *); // rdi
  __int64 *v17; // rbx
  RTL_SRWLOCK *v18; // rbx
  RTL_SRWLOCK *v19; // rbx
  unsigned __int64 v20; // r12
  __int64 v21; // r14
  __int64 v22; // rcx
  int v23; // r13d
  __int64 v24; // rbx
  int (__fastcall *v25)(__int64, _QWORD, GUID *, __int64 *); // rsi
  __int64 *v26; // rdi
  __int64 v27; // rsi
  __int64 (__fastcall *v28)(__int64, GUID *, __int64 *); // rdi
  __int64 *v29; // rbx
  int v30; // eax
  wil::details::in1diag3 *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 (__fastcall *v34)(__int64, GUID *, __int64 *); // rsi
  __int64 *v35; // rdi
  unsigned __int64 v36; // r12
  unsigned __int64 i; // r14
  __int64 v38; // rbx
  int (__fastcall *v39)(__int64, _QWORD, GUID *, __int64 *); // rsi
  __int64 *v40; // rdi
  __int64 v41; // rcx
  struct IUnknown *v43; // [rsp+30h] [rbp-69h] BYREF
  __int64 v44; // [rsp+38h] [rbp-61h] BYREF
  RTL_SRWLOCK *v45; // [rsp+40h] [rbp-59h] BYREF
  __int64 v46; // [rsp+48h] [rbp-51h] BYREF
  unsigned __int64 v47; // [rsp+50h] [rbp-49h] BYREF
  unsigned __int64 v48; // [rsp+58h] [rbp-41h] BYREF
  struct IUnknown *v49; // [rsp+60h] [rbp-39h] BYREF
  RTL_SRWLOCK *v50; // [rsp+68h] [rbp-31h] BYREF
  __int64 v51; // [rsp+70h] [rbp-29h] BYREF
  __int64 v52; // [rsp+78h] [rbp-21h] BYREF
  __int64 v53; // [rsp+80h] [rbp-19h] BYREF
  RECT rc2; // [rsp+88h] [rbp-11h] BYREF
  int v55; // [rsp+98h] [rbp-1h]
  int v56; // [rsp+9Ch] [rbp+3h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v6 = 0;
  v44 = 0LL;
  v7 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v44);
  if ( v7(a2, &GUID_1ef1ecfa_786a_4d06_b024_4a61c7049b29, &v44) >= 0 )
  {
    v45 = 0LL;
    v50 = 0LL;
    v48 = 0LL;
    v47 = 0LL;
    v8 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v48, &v43);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v8);
    *v8 = 0LL;
    IsEqualGUID = InlineIsEqualGUID(
                    &GUID_00000000_0000_0000_c000_000000000046,
                    &GUID_00000000_0000_0000_c000_000000000046);
    v11 = (Microsoft::WRL::FtmBase *)(a1 - 40);
    if ( IsEqualGUID )
    {
      v15 = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IDropFeedback,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::CastToUnknown((__int64)v11);
      *v8 = v15;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    }
    else
    {
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(v11, v10, (void **)v8);
      if ( CanCastTo == -2147467262 )
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAppLayoutInternal,Microsoft::WRL::ChainInterfaces<IAppLayoutBuilder,IAppLayout,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::CanCastTo(
                      a1 - 8,
                      v12,
                      v14);
      if ( CanCastTo < 0 )
        goto LABEL_44;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*v8 + 8LL))(*v8);
    }
    v16 = **a2;
    v17 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v47, &v43);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v17);
    if ( v16(a2, &GUID_00000000_0000_0000_c000_000000000046, v17) >= 0 )
    {
      if ( v47 > v48 )
      {
        v19 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 56LL))(v44);
        AcquireSRWLockShared(v19);
        v50 = v19;
        v45 = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v45);
        AcquireSRWLockShared((PSRWLOCK)(a1 + 16));
        v45 = (RTL_SRWLOCK *)(a1 + 16);
        v43 = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)&v43);
      }
      else
      {
        AcquireSRWLockShared((PSRWLOCK)(a1 + 16));
        v45 = (RTL_SRWLOCK *)(a1 + 16);
        v43 = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)&v43);
        if ( v47 != v48 )
        {
          v18 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 56LL))(v44);
          AcquireSRWLockShared(v18);
          v50 = v18;
          v43 = 0LL;
          wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)&v43);
        }
      }
      (*(void (__fastcall **)(__int64, RECT *))(*(_QWORD *)v44 + 24LL))(v44, &rc2);
      if ( (a3 & 1) != 0
        && (!EqualRect((const RECT *)(a1 + 24), &rc2) || *(_DWORD *)(a1 + 40) != v55 || *(_DWORD *)(a1 + 44) != v56) )
      {
LABEL_43:
        v6 = 0;
        goto LABEL_44;
      }
      v6 = 1;
      if ( (a3 & 4) != 0 )
      {
        v20 = *(_QWORD *)(a1 + 72);
        if ( v20 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v44 + 32LL))(v44) )
        {
          v21 = 0LL;
          if ( v20 )
          {
            while ( 1 )
            {
              if ( !v6 )
                goto LABEL_44;
              v22 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v21);
              v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 24LL))(v22);
              v46 = 0LL;
              v24 = v44;
              v25 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v44 + 40LL);
              v26 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(
                                  (__int64)&v46,
                                  &v52);
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v26);
              if ( v25(v24, (unsigned int)v21, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v26) < 0
                || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v46 + 24LL))(v46) != v23 )
              {
                v6 = 0;
                goto LABEL_32;
              }
              v6 = 1;
              if ( v23 == 1 )
                break;
LABEL_32:
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v46);
              if ( ++v21 >= v20 )
                goto LABEL_44;
            }
            v43 = 0LL;
            v49 = 0LL;
            v27 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v21);
            v28 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v27 + 48LL);
            v29 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v43, &v53);
            Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v29);
            v30 = v28(v27, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v29);
            v31 = retaddr;
            if ( v30 >= 0 )
            {
              v33 = v46;
              v34 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v46 + 48LL);
              v35 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(
                                  (__int64)&v49,
                                  &v51);
              Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v35);
              v30 = v34(v33, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v35);
              v31 = retaddr;
              if ( v30 >= 0 )
              {
                v6 = SHIsSameObject(v43, v49);
                goto LABEL_30;
              }
              v32 = 790LL;
            }
            else
            {
              v32 = 789LL;
            }
            wil::details::in1diag3::_Log_Hr(
              v31,
              (void *)v32,
              (__int64)"pcshell\\twinui\\applayout\\lib\\applayout.cpp",
              (const char *)(unsigned int)v30);
            v6 = 0;
LABEL_30:
            Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v49);
            Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v43);
            goto LABEL_32;
          }
          goto LABEL_44;
        }
        goto LABEL_43;
      }
      if ( (a3 & 2) != 0 )
      {
        v36 = *(_QWORD *)(a1 + 72);
        if ( v36 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v44 + 32LL))(v44) )
        {
          for ( i = 0LL; i < v36; ++i )
          {
            if ( !v6 )
              break;
            v43 = 0LL;
            v38 = v44;
            v39 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v44 + 40LL);
            v40 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v43, &v51);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v40);
            if ( v39(v38, (unsigned int)i, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v40) < 0 )
            {
              v6 = 0;
            }
            else
            {
              v41 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * i);
              v6 = (*(__int64 (__fastcall **)(__int64, struct IUnknown *))(*(_QWORD *)v41 + 96LL))(v41, v43);
            }
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v43);
          }
          goto LABEL_44;
        }
        goto LABEL_43;
      }
    }
LABEL_44:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v47);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v48);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v50);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v45);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v44);
  return v6;
}
