/*
 * XREFs of ?IsEqual@CAppLayoutItem@@UEAAHPEAUIAppLayoutItem@@@Z @ 0x180619390
 * Callers:
 *     <none>
 * Callees:
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x18007AC50 (-AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayoutItem::IsEqual(
        CAppLayoutItem *this,
        int (__fastcall ***a2)(struct IAppLayoutItem *, GUID *, __int64 *))
{
  unsigned int v4; // r14d
  int (__fastcall *v5)(struct IAppLayoutItem *, GUID *, __int64 *); // rbx
  int (__fastcall *v6)(char *, GUID *, __int64 *); // rdi
  __int64 *v7; // rbx
  int (__fastcall *v8)(struct IAppLayoutItem *, GUID *, __int64 *); // rdi
  __int64 *v9; // rbx
  RTL_SRWLOCK *v10; // rbx
  RTL_SRWLOCK *v11; // rbx
  __int64 v12; // rbx
  int (__fastcall *v13)(__int64, GUID *, __int64 *); // rsi
  __int64 *v14; // rdi
  const struct APPLICATION_VIEW_DATA *v15; // r8
  __int64 v17; // [rsp+20h] [rbp-49h] BYREF
  struct IUnknown *v18; // [rsp+28h] [rbp-41h] BYREF
  RTL_SRWLOCK *v19; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp-29h] BYREF
  RTL_SRWLOCK *v22; // [rsp+48h] [rbp-21h] BYREF
  RECT rc2; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v24[48]; // [rsp+60h] [rbp-9h] BYREF

  v4 = 0;
  v17 = 0LL;
  v5 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v17);
  if ( v5((struct IAppLayoutItem *)a2, &GUID_972224dc_7815_4df5_9adc_96bd3e7902fd, &v17) >= 0 )
  {
    v21 = 0LL;
    v20 = 0LL;
    v6 = (int (__fastcall *)(char *, GUID *, __int64 *))**((_QWORD **)this - 1);
    v7 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v21, &v19);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v7);
    if ( v6((char *)this - 8, &GUID_00000000_0000_0000_c000_000000000046, v7) >= 0 )
    {
      v8 = **a2;
      v9 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v20, &v19);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v9);
      if ( v8((struct IAppLayoutItem *)a2, &GUID_00000000_0000_0000_c000_000000000046, v9) >= 0 )
      {
        v22 = 0LL;
        if ( v20 > v21 )
        {
          v11 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 56LL))(v17);
          AcquireSRWLockShared(v11);
          v22 = v11;
          v19 = 0LL;
          wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v19);
          AcquireSRWLockShared((PSRWLOCK)this + 3);
          v19 = (RTL_SRWLOCK *)((char *)this + 24);
          v18 = 0LL;
          wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)&v18);
        }
        else
        {
          AcquireSRWLockShared((PSRWLOCK)this + 3);
          v19 = (RTL_SRWLOCK *)((char *)this + 24);
          v18 = 0LL;
          wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)&v18);
          if ( v21 != v20 )
          {
            v10 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 56LL))(v17);
            AcquireSRWLockShared(v10);
            v22 = v10;
            v18 = 0LL;
            wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)&v18);
          }
        }
        if ( *((_DWORD *)this + 8) == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v17 + 24LL))(v17)
          && *((_DWORD *)this + 4) == ((unsigned int (__fastcall *)(int (__fastcall ***)(struct IAppLayoutItem *, GUID *, __int64 *)))(*a2)[4])(a2) )
        {
          v4 = 1;
          if ( *((_DWORD *)this + 8) != 1 )
            goto LABEL_14;
          v18 = 0LL;
          v12 = v17;
          v13 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v17 + 32LL);
          v14 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v18, &rc2);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v14);
          if ( v13(v12, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v14) >= 0 )
            v4 = SHIsSameObject(v18, *((struct IUnknown **)this + 5));
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v18);
          if ( v4 )
          {
LABEL_14:
            rc2 = 0LL;
            (*(void (__fastcall **)(__int64, _QWORD, RECT *))(*(_QWORD *)v17 + 40LL))(v17, 0LL, &rc2);
            v4 = EqualRect((const RECT *)this + 3, &rc2);
            if ( v4 )
            {
              rc2 = 0LL;
              (*(void (__fastcall **)(__int64, __int64, RECT *))(*(_QWORD *)v17 + 40LL))(v17, 1LL, &rc2);
              v4 = EqualRect((const RECT *)this + 4, &rc2);
              if ( v4 )
              {
                (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v17 + 48LL))(v17, v24);
                v4 = ImmersiveApplicationLayout::AreAppViewDataEqual(
                       (CAppLayoutItem *)((char *)this + 80),
                       (const struct APPLICATION_VIEW_DATA *)v24,
                       v15);
              }
            }
          }
        }
        else
        {
          v4 = 0;
        }
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v22);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v19);
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v17);
  return v4;
}
