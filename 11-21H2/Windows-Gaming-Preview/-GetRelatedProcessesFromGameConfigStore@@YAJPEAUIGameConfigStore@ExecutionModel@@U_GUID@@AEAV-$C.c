/*
 * XREFs of ?GetRelatedProcessesFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x1800194E4
 * Callers:
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003ECE4 (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeserializeRelatedProcessArray@@YAJQEAGKAEAV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x1800192F8 (-DeserializeRelatedProcessArray@@YAJQEAGKAEAV-$ComPtr@V-$Vector@PEAUHSTRING__@@U-$DefaultEqualit.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004ACBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004ACD4 (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004ACE0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetRelatedProcessesFromGameConfigStore(__int64 *a1, __int128 *a2, __int64 *a3)
{
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  HRESULT ApartmentType; // eax
  int v13; // ecx
  unsigned int v14; // edi
  WCHAR *v16; // rbx
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // eax
  __int128 v21; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  int v23; // [rsp+70h] [rbp+30h] BYREF
  WCHAR *pAptType; // [rsp+78h] [rbp+38h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+88h] [rbp+48h] BYREF

  v23 = 0;
  v6 = *a1;
  v21 = *a2;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64))(v6 + 64))(a1, &v21, 22LL);
  v8 = v7;
  if ( (_WORD)v7 == 2 )
  {
    v9 = *a3;
    if ( *a3 )
    {
      *a3 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    *a3 = 0LL;
    v10 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v10;
    if ( v10 )
    {
      v10[4] = 1LL;
      *v10 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::`vftable';
      v10[1] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::`vftable'{for `IWeakReferenceSource'};
      v10[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<HSTRING__ *>>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *v11 = &Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::`vftable';
      v11[1] = &Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::`vftable'{for `IWeakReferenceSource'};
      v11[2] = &Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<HSTRING__ *>>'};
      *((_DWORD *)v11 + 10) = 0;
      *((_DWORD *)v11 + 11) = 0;
      *((_DWORD *)v11 + 12) = 0;
      v11[7] = 0LL;
      ApartmentType = CoGetApartmentType((APTTYPE *)&pAptType, &pAptQualifier);
      v13 = (int)pAptType;
      if ( ApartmentType < 0 )
        v13 = 1;
      LODWORD(pAptType) = v13;
      if ( v13 == 3 || !v13 )
      {
        *((_DWORD *)v11 + 18) = 1;
        *((_DWORD *)v11 + 20) = 0;
      }
      else
      {
        *((_DWORD *)v11 + 18) = 0;
        InitializeSRWLock((PSRWLOCK)v11 + 10);
      }
      *((_DWORD *)v11 + 22) = 0;
      *((_DWORD *)v11 + 24) = 0;
      *a3 = (__int64)v11;
      v14 = 0;
    }
    else
    {
      v14 = -2147024882;
    }
    if ( (v14 & 0x80000000) == 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F3,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)v14);
    return v14;
  }
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F8,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
  v16 = (WCHAR *)operator new[]((unsigned int)v23 + 2LL, (const struct std::nothrow_t *)&std::nothrow);
  pAptType = v16;
  if ( !v16 )
  {
    v14 = -2147024882;
    v17 = 2147942414LL;
    v18 = 509LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)v17);
    goto LABEL_29;
  }
  v19 = *a1;
  v21 = *a2;
  v20 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, WCHAR *, int *))(v19 + 64))(
          a1,
          &v21,
          22LL,
          v16,
          &v23);
  v14 = v20;
  if ( v20 < 0 )
  {
    v18 = 511LL;
LABEL_26:
    v17 = (unsigned int)v20;
    goto LABEL_27;
  }
  v20 = DeserializeRelatedProcessArray(v16, v23, a3);
  v14 = v20;
  if ( v20 < 0 )
  {
    v18 = 512LL;
    goto LABEL_26;
  }
  v14 = 0;
LABEL_29:
  if ( v16 )
    operator delete[](v16);
  return v14;
}
