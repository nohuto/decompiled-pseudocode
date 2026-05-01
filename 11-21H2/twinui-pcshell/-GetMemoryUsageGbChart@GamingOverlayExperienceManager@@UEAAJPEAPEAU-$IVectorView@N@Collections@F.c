/*
 * XREFs of ?GetMemoryUsageGbChart@GamingOverlayExperienceManager@@UEAAJPEAPEAU?$IVectorView@N@Collections@Foundation@Windows@@PEAN@Z @ 0x180331260
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18009EBB4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$Vector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@U?$VectorOptions@N$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@N@1234@Upermission@01234@@Z @ 0x18032B4C4 (--0-$Vector@NU-$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U-$DefaultLi.c)
 *     ?GetView@?$Vector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@U?$VectorOptions@N$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IVectorView@N@345@@Z @ 0x1803325A0 (-GetView@-$Vector@NU-$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U-$Def.c)
 *     ?InsertAtInternal@?$Vector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@U?$VectorOptions@N$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEAAJIN_N@Z @ 0x18033385C (-InsertAtInternal@-$Vector@NU-$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Window.c)
 *     ?InternalRelease@?$ComPtr@V?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180333BD4 (-InternalRelease@-$ComPtr@V-$AgileVector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING_.c)
 *     ?StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180339DD0 (-StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GetMemoryUsageGbChart(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v6; // ebx
  void *v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // rbp
  int v15; // eax
  int View; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+68h] [rbp+20h] BYREF

  if ( !*(_QWORD *)(a1 + 536) )
    GamingOverlayExperienceManager::StartPerfDataCollectionThread((GamingOverlayExperienceManager *)(a1 - 136));
  v19 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::AgileVector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0>>::InternalRelease(&v19);
  v19 = 0LL;
  v6 = 0;
  v7 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7
    && (v8 = Windows::Foundation::Collections::Internal::Vector<double,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<double>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<double>,Windows::Foundation::Collections::Internal::VectorOptions<double,0,1,0>>::Vector<double,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<double>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<double>,Windows::Foundation::Collections::Internal::VectorOptions<double,0,1,0>>((__int64)v7)) != 0 )
  {
    v19 = v8;
  }
  else
  {
    v6 = -2147024882;
  }
  if ( v6 >= 0 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 976));
    v20 = (struct _RTL_CRITICAL_SECTION *)(a1 + 976);
    v13 = *(_QWORD *)(a1 + 1016);
    v14 = *(_QWORD *)(a1 + 1024);
    while ( v13 != v14 )
    {
      LOBYTE(v12) = 1;
      v15 = Windows::Foundation::Collections::Internal::Vector<double,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<double>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<double>,Windows::Foundation::Collections::Internal::VectorOptions<double,0,1,0>>::InsertAtInternal(
              v19,
              0LL,
              v11,
              v12);
      v6 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x97E,
          (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
          (const char *)(unsigned int)v15);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v20);
        goto LABEL_18;
      }
      v13 += 8LL;
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v20);
    View = Windows::Foundation::Collections::Internal::Vector<double,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<double>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<double>,Windows::Foundation::Collections::Internal::VectorOptions<double,0,1,0>>::GetView(
             v19,
             a2);
    v6 = View;
    if ( View < 0 )
    {
      v9 = (unsigned int)View;
      v10 = 2434LL;
      goto LABEL_15;
    }
    v20 = *(struct _RTL_CRITICAL_SECTION **)(a1 + 960);
    *a3 = v20;
    v6 = 0;
  }
  else
  {
    v9 = (unsigned int)v6;
    v10 = 2424LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)v9);
  }
LABEL_18:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::AgileVector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0>>::InternalRelease(&v19);
  return (unsigned int)v6;
}
