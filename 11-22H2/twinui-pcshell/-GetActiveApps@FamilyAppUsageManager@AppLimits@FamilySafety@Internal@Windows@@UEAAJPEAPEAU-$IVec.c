/*
 * XREFs of ?GetActiveApps@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@5@@Z @ 0x18061D030
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180110D88 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z @ 0x1801993D0 (-get@-$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z.c)
 *     ?_Tidy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXXZ @ 0x1801AF188 (-_Tidy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$ba.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18039EBD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVector@PEAVGet.c)
 *     ??0?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUHSTRING__@@@1234@Upermission@01234@@Z @ 0x1803F8CA8 (--0-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foun.c)
 *     ?GetView@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@345@@Z @ 0x1803FFCE0 (-GetView@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collection.c)
 *     ?InsertAtInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUHSTRING__@@_N@Z @ 0x1804010E8 (-InsertAtInternal@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@C.c)
 */

// Hidden C++ exception states: #wind=7 #try_helpers=1
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::GetActiveApps(
        RTL_SRWLOCK *a1,
        _QWORD *a2)
{
  _DWORD *v4; // rbx
  int v5; // edi
  void *v6; // rax
  __int64 v7; // rax
  RTL_SRWLOCK *v8; // rdi
  PVOID Ptr; // rcx
  wil::details::in1diag3 *v10; // rcx
  unsigned int v11; // r8d
  char *v12; // rax
  char *v13; // rsi
  char *v14; // r14
  char *v15; // r12
  char *v16; // rax
  HSTRING_HEADER *v17; // rax
  int v18; // eax
  __int64 v19; // r14
  _DWORD *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r9
  int View; // eax
  __int64 v24; // rax
  int v26; // [rsp+20h] [rbp-98h]
  int v27[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v28; // [rsp+38h] [rbp-80h]
  __int64 v29; // [rsp+40h] [rbp-78h] BYREF
  char *v30; // [rsp+48h] [rbp-70h] BYREF
  char *v31; // [rsp+50h] [rbp-68h]
  RTL_SRWLOCK *v32; // [rsp+60h] [rbp-58h]
  HSTRING_HEADER v33; // [rsp+68h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  *a2 = 0LL;
  v4 = 0LL;
  v28 = 0LL;
  v5 = 0;
  v6 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6
    && (v7 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>((__int64)v6)) != 0 )
  {
    v4 = (_DWORD *)v7;
    v28 = v7;
  }
  else
  {
    v5 = -2147024882;
  }
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x80,
      (int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
      (const char *)(unsigned int)v5,
      v26);
  v8 = a1 + 18;
  AcquireSRWLockShared(a1 + 18);
  v32 = a1 + 18;
  Ptr = a1[17].Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID, char **))(*(_QWORD *)Ptr + 48LL))(Ptr, &v30);
    v12 = v30;
    v13 = v30;
    v14 = v31;
    v15 = v31;
    while ( v13 != v15 )
    {
      v16 = v13;
      if ( *((_QWORD *)v13 + 3) >= 8uLL )
        v16 = *(char **)v13;
      *(_QWORD *)v27 = v16;
      v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v33, (const WCHAR **)v27, v11);
      v18 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::InsertAtInternal(
              (__int64)v4,
              0,
              (HSTRING)v17[1].Reserved.Reserved1,
              1);
      v10 = retaddr;
      if ( v18 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x88,
          (int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
          (const char *)(unsigned int)v18,
          v26);
      v13 += 32;
      v14 = v31;
      v12 = v30;
    }
    v19 = (v14 - v12) >> 5;
    v20 = (_DWORD *)wil::details::static_lazy<AppUsageTelemetry>::get(
                      (__int64)v10,
                      (void (__cdecl *)())_lambda_4d19eb78d2d318fd81ccffb962d1d1a6_::_lambda_invoker_cdecl_)[1];
    if ( *v20 > 5u && tlgKeywordOn((__int64)v20, 0x400000000000LL) )
    {
      v29 = 0x2000000LL;
      v27[0] = v19;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v21,
        byte_18086F686,
        0LL,
        v22,
        (__int64)v27,
        (__int64)&v29);
    }
    std::vector<std::wstring>::_Tidy((__int64)&v30);
  }
  *(_QWORD *)v27 = 0LL;
  View = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::GetView(
           v4,
           (__int64 *)v27);
  if ( View < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8F,
      (int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
      (const char *)(unsigned int)View,
      v26);
  v24 = *(_QWORD *)v27;
  *(_QWORD *)v27 = 0LL;
  *a2 = v24;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v27);
  if ( v8 )
    ReleaseSRWLockShared(v8);
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::Collections::IIterable<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Microsoft::WRL::FtmBase>::Release((__int64)v4);
  return 0LL;
}
