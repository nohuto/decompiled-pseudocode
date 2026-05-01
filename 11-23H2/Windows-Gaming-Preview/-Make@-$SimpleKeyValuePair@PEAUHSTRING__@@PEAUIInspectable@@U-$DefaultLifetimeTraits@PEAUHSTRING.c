/*
 * XREFs of ?Make@?$SimpleKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@SAJAEBQEAUHSTRING__@@AEBV?$GitStorageType@UIInspectable@@@detail@XWinRT@@PEAPEAV12345@@Z @ 0x180034978
 * Callers:
 *     ?GetMany@Iterator@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJIQEAPEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@456@PEAI@Z @ 0x180034140 (-GetMany@Iterator@-$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultHash@PEAUHSTRING__@@@Inte.c)
 *     ?get_Current@Iterator@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@456@@Z @ 0x180034440 (-get_Current@Iterator@-$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultHash@PEAUHSTRING__@@@.c)
 * Callees:
 *     ??$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIInspectable@@@detail@1@@Z @ 0x18000F98C (--$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$GitStorageType@UIInspectable.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180013390 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeUserConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180034C40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeUserConf.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004BBD0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>::Make(
        HSTRING *a1,
        __m128i *a2,
        _QWORD *a3)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  _QWORD *v8; // rsi
  HRESULT v9; // edi
  HSTRING v10; // rax
  HSTRING v11; // rcx
  __int128 v12; // xmm1
  _QWORD *v13; // rcx
  __int128 v15; // [rsp+20h] [rbp-20h] BYREF
  __m128i v16; // [rsp+30h] [rbp-10h]
  HSTRING newString; // [rsp+90h] [rbp+50h] BYREF
  _QWORD *v18; // [rsp+98h] [rbp+58h]

  *a3 = 0LL;
  v6 = 0LL;
  v18 = 0LL;
  v7 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    *v7 = &Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *>::`vftable';
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v7 + 2));
    v7[7] = 1LL;
    *v7 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *>,Microsoft::WRL::FtmBase>::`vftable';
    v7[1] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *>,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
    v7[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v7 = &Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>::`vftable';
    v7[1] = &Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>::`vftable'{for `IWeakReferenceSource'};
    v7[2] = &Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v7[8] = 0LL;
    v7[9] = 0LL;
    *((_BYTE *)v7 + 80) = 0;
    v6 = v7;
    v18 = v7;
    v8 = v7;
  }
  else
  {
    v7 = 0LL;
    v8 = 0LL;
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
      v16 = *a2;
      BYTE8(v15) = _mm_cvtsi128_si32(_mm_srli_si128(v16, 8));
      if ( BYTE8(v15) )
      {
        *(_QWORD *)&v15 = v16.m128i_i64[0];
        _InterlockedIncrement((volatile signed __int32 *)v16.m128i_i64[0]);
        v6 = v18;
      }
      else
      {
        *(_QWORD *)&v15 = v16.m128i_i64[0];
        if ( v16.m128i_i64[0] )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16.m128i_i64[0] + 8LL))(v16.m128i_i64[0]);
      }
      v9 = 0;
      v11 = (HSTRING)v8[8];
      v8[8] = newString;
      newString = v11;
      v12 = *(_OWORD *)(v8 + 9);
      *(_OWORD *)(v8 + 9) = v15;
      v15 = v12;
      XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>((__int64)&v15);
    }
    WindowsDeleteString(newString);
    if ( v9 >= 0 )
    {
      v13 = v6;
      v6 = 0LL;
      *a3 = v13;
    }
  }
  else
  {
    v9 = -2147024882;
  }
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::Release(v6);
  return (unsigned int)v9;
}
