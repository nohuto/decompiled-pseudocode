/*
 * XREFs of ?GetFramesPerSecondChart@GamingOverlayExperienceManager@@UEAAJKPEAPEAU?$IVectorView@H@Collections@Foundation@Windows@@@Z @ 0x1803FD610
 * Callers:
 *     <none>
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@H@1234@Upermission@01234@@Z @ 0x1803F8AE8 (--0-$Vector@HU-$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U-$DefaultLi.c)
 *     ?GetView@?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IVectorView@H@345@@Z @ 0x1803FFB40 (-GetView@-$Vector@HU-$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U-$Def.c)
 *     ?InsertAtInternal@?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEAAJIH_N@Z @ 0x180400DB0 (-InsertAtInternal@-$Vector@HU-$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Window.c)
 *     ?InternalRelease@?$ComPtr@V?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180401300 (-InternalRelease@-$ComPtr@V-$AgileVector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING_.c)
 *     ?StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180407CCC (-StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GetFramesPerSecondChart(__int64 a1, int a2, __int64 a3)
{
  int v5; // ebx
  void *v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r9
  unsigned int *v11; // rsi
  unsigned int *v12; // rdi
  int v13; // eax
  int View; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 != *(_DWORD *)(a1 + 716) || !*(_BYTE *)(a1 + 720) )
  {
    *(_DWORD *)(a1 + 716) = a2;
    if ( !*(_QWORD *)(a1 + 576) )
      GamingOverlayExperienceManager::StartPerfDataCollectionThread((GamingOverlayExperienceManager *)(a1 - 136));
  }
  v17 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::AgileVector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0>>::InternalRelease(&v17);
  v17 = 0LL;
  v5 = 0;
  v6 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6
    && (v7 = Windows::Foundation::Collections::Internal::Vector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,Windows::Foundation::Collections::Internal::VectorOptions<int,0,1,0>>::Vector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,Windows::Foundation::Collections::Internal::VectorOptions<int,0,1,0>>((__int64)v6)) != 0 )
  {
    v17 = v7;
  }
  else
  {
    v5 = -2147024882;
  }
  if ( v5 >= 0 )
  {
    wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 728));
    v11 = *(unsigned int **)(a1 + 768);
    v12 = *(unsigned int **)(a1 + 776);
    while ( v11 != v12 )
    {
      LOBYTE(v10) = 1;
      v13 = Windows::Foundation::Collections::Internal::Vector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,Windows::Foundation::Collections::Internal::VectorOptions<int,0,1,0>>::InsertAtInternal(
              v17,
              0LL,
              *v11,
              v10);
      v5 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x95C,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
          (const char *)(unsigned int)v13);
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        goto LABEL_23;
      }
      ++v11;
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    View = Windows::Foundation::Collections::Internal::Vector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,Windows::Foundation::Collections::Internal::VectorOptions<int,0,1,0>>::GetView(
             v17,
             a3);
    v5 = View;
    if ( View < 0 )
    {
      v8 = (unsigned int)View;
      v9 = 2400LL;
      goto LABEL_19;
    }
    v5 = 0;
  }
  else
  {
    v8 = (unsigned int)v5;
    v9 = 2390LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)v8);
  }
LABEL_23:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::AgileVector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0>>::InternalRelease(&v17);
  return (unsigned int)v5;
}
