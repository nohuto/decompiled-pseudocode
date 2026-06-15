/*
 * XREFs of ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x180003148
 * Callers:
 *     ?TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z @ 0x180003080 (-TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800029FC (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCAudioSessionStore@@UIAudioSessionStore@@AEAPEAUIAudioSessionInfo@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioSessionStore@@AEAPEAUIAudioSessionInfo@@@Z @ 0x18000331C (--$MakeAndInitialize@VCAudioSessionStore@@UIAudioSessionStore@@AEAPEAUIAudioSessionInfo@@@Detail.c)
 *     _lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator() @ 0x180004540 (_lambda_92c40f897d3a9c7e927f302002ea2ff3_--operator().c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EFC8 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800186D0 (--$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??$AsWeak@UIAudioSessionStore@@@WRL@Microsoft@@YAJPEAUIAudioSessionStore@@PEAVWeakRef@01@@Z @ 0x18003F8C4 (--$AsWeak@UIAudioSessionStore@@@WRL@Microsoft@@YAJPEAUIAudioSessionStore@@PEAVWeakRef@01@@Z.c)
 *     ??$_Emplace_back_with_unused_capacity@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAAEAVWeakRef@WRL@Microsoft@@AEBV234@@Z @ 0x18003FC28 (--$_Emplace_back_with_unused_capacity@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsof.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18003FC74 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CPolicyConfig::GetAudioSessionPropertyStore(
        CPolicyConfig *this,
        struct IAudioSessionInfo *a2,
        struct IPropertyStore **a3)
{
  char *v6; // rbx
  __int64 v7; // rcx
  __int64 *v8; // rsi
  __int64 *i; // rbx
  __int64 *v10; // rsi
  __int64 *k; // rbx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 *j; // rdi
  __int64 *v16; // rdi
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // ebx
  char *v20; // rcx
  __int64 v21; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int (__fastcall ***v25)(_QWORD, _QWORD, _QWORD); // rdi
  int (__fastcall *v26)(_QWORD, GUID *, __int64 *); // rsi
  __int64 v27; // rdi
  unsigned __int8 (__fastcall *v28)(__int64, __int64); // rsi
  __int64 v29; // rax
  int v30[2]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v32; // [rsp+70h] [rbp+8h] BYREF
  struct IAudioSessionInfo *v33; // [rsp+78h] [rbp+10h] BYREF
  int (__fastcall ***v34)(_QWORD, GUID *, __int64 *); // [rsp+80h] [rbp+18h] BYREF
  char *v35; // [rsp+88h] [rbp+20h] BYREF

  v33 = a2;
  v6 = (char *)this + 24;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v35 = v6;
  v8 = (__int64 *)*((_QWORD *)this + 9);
  for ( i = (__int64 *)*((_QWORD *)this + 8);
        i != v8 && !(unsigned __int8)lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator()(v7, i);
        ++i )
  {
    ;
  }
  if ( i != v8 )
  {
    for ( j = i + 1; j != v8; ++j )
    {
      if ( !(unsigned __int8)lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator()(v7, j) )
      {
        v23 = 0LL;
        if ( &v32 != j )
        {
          v23 = *j;
          *j = 0LL;
        }
        v32 = *i;
        *i = v23;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v32);
        ++i;
      }
    }
  }
  v10 = (__int64 *)*((_QWORD *)this + 9);
  if ( i != v10 )
  {
    v16 = i;
    do
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v16++);
    while ( v16 != v10 );
    *((_QWORD *)this + 9) = i;
  }
  *a3 = 0LL;
  for ( k = (__int64 *)*((_QWORD *)this + 8); k != *((__int64 **)this + 9); ++k )
  {
    v24 = *k;
    *(_QWORD *)v30 = v24;
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
    v34 = 0LL;
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(v30, &v34) >= 0 )
    {
      v25 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v34;
      if ( v34 )
      {
        v32 = 0LL;
        v26 = **v34;
        Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v32);
        if ( v26(v25, &GUID_e5f61c43_fc50_4785_bbe0_b5ee4f99ee0a, &v32) >= 0 )
        {
          v27 = v32;
          v28 = *(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 24LL);
          v29 = (*(__int64 (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)a2 + 64LL))(a2);
          if ( v28(v27, v29) )
          {
            (**(void (__fastcall ***)(__int64, GUID *, struct IPropertyStore **))v32)(
              v32,
              &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
              a3);
            Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v32);
            Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v34);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v30);
            break;
          }
        }
        Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v32);
      }
    }
    Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v34);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v30);
  }
  if ( *a3 )
    goto LABEL_23;
  v32 = 0LL;
  v12 = Microsoft::WRL::Details::MakeAndInitialize<CAudioSessionStore,IAudioSessionStore,IAudioSessionInfo * &>(
          &v32,
          &v33);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v34 = 0LL;
    *(_QWORD *)v30 = &v34;
    v17 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(v30);
    v18 = Microsoft::WRL::AsWeak<IAudioSessionStore>(v32, v17);
    v19 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7A7,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v18,
        v30[0]);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v34);
      Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v32);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v35);
      return v19;
    }
    v20 = (char *)this + 64;
    v21 = *((_QWORD *)this + 9);
    if ( v21 == *((_QWORD *)this + 10) )
      std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef const &>(v20, v21, &v34);
    else
      std::vector<Microsoft::WRL::WeakRef>::_Emplace_back_with_unused_capacity<Microsoft::WRL::WeakRef const &>(
        v20,
        &v34);
    (**(void (__fastcall ***)(__int64, GUID *, struct IPropertyStore **))v32)(
      v32,
      &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
      a3);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v34);
    Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v32);
LABEL_23:
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v35);
    return 0LL;
  }
  if ( v12 == -2147024891 || v12 == -2147024894 )
  {
    Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v32);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v35);
    return v13;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A4,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)v12,
      v30[0]);
    Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v32);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v35);
    return v13;
  }
}
