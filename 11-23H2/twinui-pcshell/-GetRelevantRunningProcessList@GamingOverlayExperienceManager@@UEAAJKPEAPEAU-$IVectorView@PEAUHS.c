/*
 * XREFs of ?GetRelevantRunningProcessList@GamingOverlayExperienceManager@@UEAAJKPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z @ 0x1803FF1D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180188BA0 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?_Tidy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXXZ @ 0x1801AF188 (-_Tidy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$ba.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUHSTRING__@@@1234@Upermission@01234@@Z @ 0x1803F8CA8 (--0-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foun.c)
 *     ?GetNonServiceProcessListAndIds@GamingOverlayExperienceManager@@AEAAXAEAV?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@K@Z @ 0x1803FEA1C (-GetNonServiceProcessListAndIds@GamingOverlayExperienceManager@@AEAAXAEAV-$vector@U-$pair@KV-$ba.c)
 *     ?GetSortedUniqueProcessList@GamingOverlayExperienceManager@@AEAAXAEBV?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@3@@Z @ 0x1803FF798 (-GetSortedUniqueProcessList@GamingOverlayExperienceManager@@AEAAXAEBV-$vector@U-$pair@KV-$basic_.c)
 *     ?GetView@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@345@@Z @ 0x1803FFCE0 (-GetView@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collection.c)
 *     ?InsertAtInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUHSTRING__@@_N@Z @ 0x1804010E8 (-InsertAtInternal@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@C.c)
 *     ?InternalRelease@?$ComPtr@V?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180401300 (-InternalRelease@-$ComPtr@V-$AgileVector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING_.c)
 *     ?_Tidy@?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAAXXZ @ 0x18040A408 (-_Tidy@-$vector@U-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@V-$.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GamingOverlayExperienceManager::GetRelevantRunningProcessList(__int64 a1, int a2, __int64 a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  void *v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  _QWORD *i; // rdi
  __int64 v11; // rbx
  unsigned int v12; // r8d
  HSTRING_HEADER *v13; // rax
  __int64 v14; // r9
  int View; // eax
  __int64 v16; // rdx
  __int64 v18; // [rsp+28h] [rbp-19h] BYREF
  __int128 v19; // [rsp+30h] [rbp-11h] BYREF
  __int64 v20; // [rsp+40h] [rbp-1h]
  const WCHAR *v21; // [rsp+48h] [rbp+7h] BYREF
  __int128 v22; // [rsp+50h] [rbp+Fh] BYREF
  __int64 v23; // [rsp+60h] [rbp+1Fh]
  HSTRING_HEADER v24; // [rsp+68h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  if ( a3 )
  {
    v22 = 0LL;
    v23 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v18 = 0LL;
    GamingOverlayExperienceManager::GetNonServiceProcessListAndIds(a1, (__int64)&v22, a2);
    GamingOverlayExperienceManager::GetSortedUniqueProcessList(v5, &v22, &v19);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::AgileVector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0>>::InternalRelease(&v18);
    v18 = 0LL;
    v4 = 0;
    v6 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v6
      && (v7 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>((__int64)v6)) != 0 )
    {
      v18 = v7;
    }
    else
    {
      v4 = -2147024882;
    }
    if ( v4 >= 0 )
    {
      for ( i = (_QWORD *)v19; i != *((_QWORD **)&v19 + 1); i += 4 )
      {
        v11 = v18;
        v21 = (const WCHAR *)std::wstring::c_str(i);
        v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, &v21, v12);
        LOBYTE(v14) = 1;
        View = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::InsertAtInternal(
                 v11,
                 0LL,
                 v13[1].Reserved.Reserved1,
                 v14);
        v4 = View;
        if ( View < 0 )
        {
          v9 = 1600LL;
          goto LABEL_15;
        }
      }
      View = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::GetView(
               v18,
               a3);
      v4 = View;
      if ( View < 0 )
      {
        v9 = 1603LL;
LABEL_15:
        v8 = (unsigned int)View;
        goto LABEL_16;
      }
      v4 = 0;
    }
    else
    {
      v8 = (unsigned int)v4;
      v9 = 1596LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)v8);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::AgileVector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0>>::InternalRelease(&v18);
    std::vector<std::wstring>::_Tidy((__int64)&v19);
    std::vector<std::pair<unsigned long,std::wstring>>::_Tidy(&v22, v16);
  }
  else
  {
    v4 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x634,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)0x80004003LL);
  }
  return (unsigned int)v4;
}
