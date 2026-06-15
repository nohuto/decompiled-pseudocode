/*
 * XREFs of ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x180016FE0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_6721409c6d8d6be39a12e154768b61d2_::operator() @ 0x1800029B4 (_lambda_6721409c6d8d6be39a12e154768b61d2_--operator().c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800029FC (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIProcessSubmixProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180002C7C (--$As@UIProcessSubmixProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 *     ??$_Destroy_range@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@YAXPEAVWeakRef@WRL@Microsoft@@QEAV123@AEAV?$allocator@VWeakRef@WRL@Microsoft@@@0@@Z @ 0x180002D34 (--$_Destroy_range@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@YAXPEAVWeakRef@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EFC8 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CProcessSubmixProxy@@QEAAJPEBUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DESCRIPTOR@@PEAUIStreamGroupProxy@@K@Z @ 0x180018300 (-RuntimeClassInitialize@CProcessSubmixProxy@@QEAAJPEBUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DE.c)
 *     ??$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800186D0 (--$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator.c)
 *     ??$AsWeak@UIProcessSubmixProxy@@@WRL@Microsoft@@YAJPEAUIProcessSubmixProxy@@PEAVWeakRef@01@@Z @ 0x180019190 (--$AsWeak@UIProcessSubmixProxy@@@WRL@Microsoft@@YAJPEAUIProcessSubmixProxy@@PEAVWeakRef@01@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??$_Emplace_back_with_unused_capacity@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAAEAVWeakRef@WRL@Microsoft@@AEBV234@@Z @ 0x18003FC28 (--$_Emplace_back_with_unused_capacity@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsof.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C69EC (--1-$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800C6A24 (--1-$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$_Move_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00@Z @ 0x1800DE6A8 (--$_Move_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123.c)
 *     ??4?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800F7488 (--4-$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CBaseStreamGroupProxy::GetProcessSubmix(
        __int64 **this,
        struct ProcessSubmixParams *a2,
        __int64 a3,
        struct IProcessSubmixProxy **a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // r14
  __int64 v8; // rcx
  __int64 *v9; // r15
  __int64 v10; // rbx
  __int64 *v11; // rcx
  __int64 *j; // rbx
  __int64 *v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rbx
  int v16; // r15d
  int v17; // eax
  unsigned int v18; // ebx
  char *v19; // rcx
  __int64 *v20; // rdx
  __int64 *v21; // rcx
  struct IProcessSubmixProxy *v22; // rax
  __int64 v24; // rcx
  __int64 v25; // r15
  int v26; // eax
  __int64 *v27; // rax
  __int64 v28; // rcx
  __int64 *v29; // rbx
  unsigned int v30; // [rsp+20h] [rbp-138h]
  __int64 *i; // [rsp+30h] [rbp-128h] BYREF
  _QWORD *v32; // [rsp+38h] [rbp-120h] BYREF
  struct IProcessSubmixProxy *v33; // [rsp+40h] [rbp-118h] BYREF
  __int64 v34; // [rsp+48h] [rbp-110h] BYREF
  int v35; // [rsp+50h] [rbp-108h]
  struct _RTL_CRITICAL_SECTION *v36; // [rsp+58h] [rbp-100h] BYREF
  _DWORD v37[4]; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v38; // [rsp+70h] [rbp-E8h]
  int v39; // [rsp+78h] [rbp-E0h]
  int v40; // [rsp+7Ch] [rbp-DCh]
  __int64 v41; // [rsp+80h] [rbp-D8h]
  int v42; // [rsp+88h] [rbp-D0h]
  int v43; // [rsp+8Ch] [rbp-CCh]
  __int64 v44; // [rsp+90h] [rbp-C8h]
  __int64 v45; // [rsp+98h] [rbp-C0h]
  int v46; // [rsp+A0h] [rbp-B8h]
  __int128 v47; // [rsp+A4h] [rbp-B4h]
  char v48[92]; // [rsp+B4h] [rbp-A4h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+0h]

  v7 = (struct _RTL_CRITICAL_SECTION *)(this + 19);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 19));
  v36 = v7;
  if ( ((unsigned __int8 (__fastcall *)(__int64 **))(*this)[19])(this) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x145,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)0x80070057LL,
      v30);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v36);
    return 2147942487LL;
  }
  EnterCriticalSection(v7);
  v9 = this[28];
  v10 = (__int64)this[27];
  if ( (__int64 *)v10 != v9 )
  {
    do
    {
      if ( lambda_6721409c6d8d6be39a12e154768b61d2_::operator()(v8, v10) )
        break;
      v10 += 8LL;
    }
    while ( (__int64 *)v10 != v9 );
    if ( (__int64 *)v10 != v9 )
    {
      v27 = (__int64 *)(v10 + 8);
      for ( i = (__int64 *)(v10 + 8); v27 != v9; i = v27 )
      {
        if ( !lambda_6721409c6d8d6be39a12e154768b61d2_::operator()(v8, (__int64)v27) )
        {
          v28 = 0LL;
          if ( &v32 != (_QWORD **)i )
          {
            v28 = *i;
            *i = 0LL;
          }
          v32 = *(_QWORD **)v10;
          *(_QWORD *)v10 = v28;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v32);
          v10 += 8LL;
        }
        v27 = i + 1;
      }
    }
  }
  v11 = this[28];
  if ( (__int64 *)v10 != v11 )
  {
    v29 = (__int64 *)std::_Move_unchecked<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *>(v11, this[28], v10);
    std::_Destroy_range<std::allocator<Microsoft::WRL::WeakRef>>(v29, this[28]);
    this[28] = v29;
  }
  if ( v7 )
    LeaveCriticalSection(v7);
  v33 = 0LL;
  for ( j = this[27]; j != this[28]; ++j )
  {
    v24 = *j;
    v32 = (_QWORD *)v24;
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
    i = 0LL;
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(&v32, &i) >= 0 && i )
    {
      v34 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IProcessSubmixProxy>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&i,
                  &v34) >= 0 )
      {
        v25 = *(_QWORD *)a2;
        v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 104LL))(v34);
        v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 40LL))(v25);
        if ( v26 == v35
          && *((_BYTE *)a2 + 8) == (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v34 + 120LL))(v34) )
        {
          Microsoft::WRL::ComPtr<IProcessSubmixProxy>::operator=(&v33, &v34);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v34);
          Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&i);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v32);
          break;
        }
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v34);
    }
    Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&i);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v32);
  }
  if ( v33 )
    goto LABEL_20;
  v37[3] = 0;
  v40 = 0;
  v43 = 0;
  memset_0(v48, 0, 0x54uLL);
  v13 = (__int64 *)*((_QWORD *)a2 + 2);
  v37[0] = *((_DWORD *)v13 + 2);
  v37[1] = 0;
  v41 = *v13;
  v37[2] = *(unsigned __int16 *)(v13[2] + 16) + 18;
  v38 = v13[2];
  v42 = *(unsigned __int16 *)(v13[2] + 16) + 18;
  v44 = v13[2];
  v45 = v13[3];
  v46 = 0;
  v47 = *((_OWORD *)v13 + 2);
  v39 = *((unsigned __int8 *)v13 + 50);
  v33 = 0LL;
  v14 = operator new(0xE0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = (__int64)v14;
  v32 = v14;
  if ( !v14 )
  {
    Microsoft::WRL::Details::MakeAllocator<AvoidEndpointPolicyRule>::~MakeAllocator<AvoidEndpointPolicyRule>(&v32);
    v16 = -2147024882;
    goto LABEL_47;
  }
  v14[5] = 1LL;
  *v14 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IProcessSubmixProxy,IInspectable>::`vftable'{for `IInspectable'};
  v14[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IProcessSubmixProxy,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IProcessSubmixProxy,IWeakReferenceSource,IInspectable>'};
  v14[2] = &CProcessSubmixProxy::`vftable'{for `IWeakReferenceSource'};
  v14[3] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IProcessSubmixProxy,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))();
  *(_QWORD *)v15 = &CProcessSubmixProxy::`vftable'{for `IInspectable'};
  *(_QWORD *)(v15 + 8) = &CProcessSubmixProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IProcessSubmixProxy,IWeakReferenceSource,IInspectable>'};
  *(_QWORD *)(v15 + 16) = &CProcessSubmixProxy::`vftable'{for `IWeakReferenceSource'};
  *(_QWORD *)(v15 + 24) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IProcessSubmixProxy,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  *(_QWORD *)(v15 + 48) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v15 + 56), 0, 0);
  *(_QWORD *)(v15 + 96) = 0LL;
  *(_DWORD *)(v15 + 104) = 0;
  *(_QWORD *)(v15 + 112) = 0LL;
  *(_DWORD *)(v15 + 120) = 0;
  *(_BYTE *)(v15 + 124) = 0;
  *(_DWORD *)(v15 + 128) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v15 + 136), 0, 0);
  *(_QWORD *)(v15 + 176) = 0LL;
  *(_QWORD *)(v15 + 184) = 0LL;
  *(_QWORD *)(v15 + 192) = 0LL;
  *(_QWORD *)(v15 + 200) = 0LL;
  *(_QWORD *)(v15 + 208) = 0LL;
  *(_QWORD *)(v15 + 216) = 0LL;
  v34 = v15;
  v32 = 0LL;
  v16 = CProcessSubmixProxy::RuntimeClassInitialize(
          (CProcessSubmixProxy *)v15,
          a2,
          (struct PROCESS_SUBMIX_DESCRIPTOR *)v37,
          (struct IStreamGroupProxy *)this,
          v30);
  if ( v16 < 0 )
  {
    Microsoft::WRL::ComPtr<CAudioStream>::~ComPtr<CAudioStream>(&v34);
    Microsoft::WRL::Details::MakeAllocator<AvoidEndpointPolicyRule>::~MakeAllocator<AvoidEndpointPolicyRule>(&v32);
    goto LABEL_47;
  }
  v16 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v15)(
          v15,
          &GUID_3a5c2657_1b5f_474a_96ef_4cfdc4deeb2a,
          (__int64 *)&v33);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v16 < 0 )
  {
LABEL_47:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16B,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v16,
      v30);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v33);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v36);
    return (unsigned int)v16;
  }
  i = 0LL;
  v17 = Microsoft::WRL::AsWeak<IProcessSubmixProxy>(v33, &i);
  v18 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16F,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v17,
      v30);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&i);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v33);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v36);
    return v18;
  }
  v19 = (char *)(this + 27);
  v20 = this[28];
  if ( v20 == this[29] )
    std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef const &>(v19, v20, &i);
  else
    std::vector<Microsoft::WRL::WeakRef>::_Emplace_back_with_unused_capacity<Microsoft::WRL::WeakRef const &>(v19, &i);
  v21 = i;
  if ( i )
  {
    i = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v21 + 16))(v21);
  }
LABEL_20:
  v22 = v33;
  v33 = 0LL;
  *a4 = v22;
  if ( v7 )
    LeaveCriticalSection(v7);
  return 0LL;
}
