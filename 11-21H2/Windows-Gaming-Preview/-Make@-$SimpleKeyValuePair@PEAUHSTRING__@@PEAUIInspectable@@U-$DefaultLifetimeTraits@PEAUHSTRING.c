/*
 * XREFs of ?Make@?$SimpleKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@SAJAEBQEAUHSTRING__@@AEBV?$GitStorageType@UIInspectable@@@detail@XWinRT@@PEAPEAV12345@@Z @ 0x180033F68
 * Callers:
 *     ?GetMany@Iterator@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJIQEAPEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@456@PEAI@Z @ 0x180033730 (-GetMany@Iterator@-$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultHash@PEAUHSTRING__@@@Inte.c)
 *     ?get_Current@Iterator@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@456@@Z @ 0x180033A30 (-get_Current@Iterator@-$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultHash@PEAUHSTRING__@@@.c)
 * Callees:
 *     ??$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIInspectable@@@detail@1@@Z @ 0x18000F80C (--$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$GitStorageType@UIInspectable.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180012E20 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeUserConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180034240 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeUserConf.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004ACE0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>::Make(
        HSTRING *a1,
        __m128i *a2,
        _QWORD *a3)
{
  char *v6; // rbx
  char *v7; // rdi
  char *v8; // rsi
  HRESULT v9; // r14d
  HSTRING v10; // rax
  HSTRING v11; // rcx
  __int128 v12; // xmm1
  __int128 v14; // [rsp+20h] [rbp-20h] BYREF
  __m128i v15; // [rsp+30h] [rbp-10h]
  HSTRING newString; // [rsp+90h] [rbp+50h] BYREF
  char *v17; // [rsp+98h] [rbp+58h]

  *a3 = 0LL;
  v6 = 0LL;
  v17 = 0LL;
  v7 = (char *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    *(_QWORD *)v7 = &Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *>::`vftable';
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v7 + 16));
    *((_QWORD *)v7 + 7) = 1LL;
    *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *>,Microsoft::WRL::FtmBase>::`vftable';
    *((_QWORD *)v7 + 1) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *>,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
    *((_QWORD *)v7 + 2) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v7 = &Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>::`vftable';
    *((_QWORD *)v7 + 1) = &Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>::`vftable'{for `IWeakReferenceSource'};
    *((_QWORD *)v7 + 2) = &Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *((_QWORD *)v7 + 8) = 0LL;
    *((_QWORD *)v7 + 9) = 0LL;
    v7[80] = 0;
    v6 = v7;
    v17 = v7;
    v8 = v7;
  }
  else
  {
    v8 = 0LL;
    v7 = 0LL;
  }
  if ( v7 )
  {
    v9 = WindowsDuplicateString(*a1, &newString);
    v10 = newString;
    if ( v9 < 0 )
      v10 = 0LL;
    newString = v10;
    if ( v9 >= 0 )
    {
      v15 = *a2;
      BYTE8(v14) = _mm_cvtsi128_si32(_mm_srli_si128(v15, 8));
      if ( BYTE8(v14) )
      {
        *(_QWORD *)&v14 = v15.m128i_i64[0];
        _InterlockedIncrement((volatile signed __int32 *)v15.m128i_i64[0]);
        v6 = v17;
      }
      else
      {
        *(_QWORD *)&v14 = v15.m128i_i64[0];
        if ( v15.m128i_i64[0] )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15.m128i_i64[0] + 8LL))(v15.m128i_i64[0]);
      }
      v9 = 0;
      v11 = (HSTRING)*((_QWORD *)v7 + 8);
      *((_QWORD *)v7 + 8) = newString;
      newString = v11;
      v12 = *(_OWORD *)(v7 + 72);
      *(_OWORD *)(v7 + 72) = v14;
      v14 = v12;
      XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>((__int64)&v14);
    }
    WindowsDeleteString(newString);
    if ( v9 >= 0 )
    {
      v6 = 0LL;
      *a3 = v8;
      v8 = 0LL;
    }
  }
  else
  {
    v9 = -2147024882;
  }
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::Release(v6);
  return (unsigned int)v9;
}
