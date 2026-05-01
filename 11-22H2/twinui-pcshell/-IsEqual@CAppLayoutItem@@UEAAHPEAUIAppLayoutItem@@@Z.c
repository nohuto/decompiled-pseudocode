/*
 * XREFs of ?IsEqual@CAppLayoutItem@@UEAAHPEAUIAppLayoutItem@@@Z @ 0x180797D30
 * Callers:
 *     <none>
 * Callees:
 *     ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x180022CD4 (-AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x18067E92C (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayoutItem::IsEqual(
        CAppLayoutItem *this,
        int (__fastcall ***a2)(struct IAppLayoutItem *, GUID *, __int64 *))
{
  unsigned int v4; // r15d
  int (__fastcall *v5)(struct IAppLayoutItem *, GUID *, __int64 *); // rbx
  int (__fastcall *v6)(char *, GUID *, __int64 *); // rdi
  __int64 *v7; // rbx
  int (__fastcall *v8)(struct IAppLayoutItem *, GUID *, __int64 *); // rdi
  __int64 *v9; // rbx
  RTL_SRWLOCK *v10; // rdi
  RTL_SRWLOCK *v11; // rbx
  RTL_SRWLOCK *v12; // rbx
  __int64 v13; // rbx
  int (__fastcall *v14)(__int64, GUID *, __int64 *); // r14
  __int64 *v15; // rsi
  const struct APPLICATION_VIEW_DATA *v16; // r8
  __int64 v18; // [rsp+20h] [rbp-39h] BYREF
  struct IUnknown *v19; // [rsp+28h] [rbp-31h] BYREF
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-29h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-21h] BYREF
  unsigned __int64 v22; // [rsp+40h] [rbp-19h] BYREF
  RECT rc2; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v24[48]; // [rsp+58h] [rbp-1h] BYREF

  v4 = 0;
  v18 = 0LL;
  v5 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v18);
  if ( v5((struct IAppLayoutItem *)a2, &GUID_972224dc_7815_4df5_9adc_96bd3e7902fd, &v18) >= 0 )
  {
    v22 = 0LL;
    v21 = 0LL;
    v6 = (int (__fastcall *)(char *, GUID *, __int64 *))**((_QWORD **)this - 1);
    v7 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v22, &SRWLock);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v7);
    if ( v6((char *)this - 8, &GUID_00000000_0000_0000_c000_000000000046, v7) < 0
      || (v8 = **a2,
          v9 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v21, &SRWLock),
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v9),
          v8((struct IAppLayoutItem *)a2, &GUID_00000000_0000_0000_c000_000000000046, v9) < 0) )
    {
LABEL_23:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
      goto LABEL_24;
    }
    SRWLock = 0LL;
    v10 = 0LL;
    v19 = 0LL;
    if ( v21 > v22 )
    {
      v12 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 56LL))(v18);
      AcquireSRWLockShared(v12);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
        (RTL_SRWLOCK **)&v19,
        v12);
      AcquireSRWLockShared((PSRWLOCK)this + 3);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
        &SRWLock,
        (RTL_SRWLOCK *)this + 3);
    }
    else
    {
      AcquireSRWLockShared((PSRWLOCK)this + 3);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
        &SRWLock,
        (RTL_SRWLOCK *)this + 3);
      if ( v22 == v21 )
        goto LABEL_9;
      v11 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 56LL))(v18);
      AcquireSRWLockShared(v11);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
        (RTL_SRWLOCK **)&v19,
        v11);
    }
    v10 = (RTL_SRWLOCK *)v19;
LABEL_9:
    if ( *((_DWORD *)this + 8) == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v18 + 24LL))(v18)
      && *((_DWORD *)this + 4) == ((unsigned int (__fastcall *)(int (__fastcall ***)(struct IAppLayoutItem *, GUID *, __int64 *)))(*a2)[4])(a2) )
    {
      v4 = 1;
      if ( *((_DWORD *)this + 8) != 1 )
        goto LABEL_15;
      v19 = 0LL;
      v13 = v18;
      v14 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v18 + 32LL);
      v15 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v19, &rc2);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v15);
      if ( v14(v13, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v15) >= 0 )
        v4 = SHIsSameObject(v19, *((struct IUnknown **)this + 5));
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v19);
      if ( v4 )
      {
LABEL_15:
        rc2 = 0LL;
        (*(void (__fastcall **)(__int64, _QWORD, RECT *))(*(_QWORD *)v18 + 40LL))(v18, 0LL, &rc2);
        v4 = EqualRect((const RECT *)this + 3, &rc2);
        if ( v4 )
        {
          rc2 = 0LL;
          (*(void (__fastcall **)(__int64, __int64, RECT *))(*(_QWORD *)v18 + 40LL))(v18, 1LL, &rc2);
          v4 = EqualRect((const RECT *)this + 4, &rc2);
          if ( v4 )
          {
            (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v18 + 48LL))(v18, v24);
            v4 = ImmersiveApplicationLayout::AreAppViewDataEqual(
                   (CAppLayoutItem *)((char *)this + 80),
                   (const struct APPLICATION_VIEW_DATA *)v24,
                   v16);
          }
        }
      }
    }
    else
    {
      v4 = 0;
    }
    if ( v10 )
      ReleaseSRWLockShared(v10);
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    goto LABEL_23;
  }
LABEL_24:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v18);
  return v4;
}
