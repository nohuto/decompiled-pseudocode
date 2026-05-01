/*
 * XREFs of ?First@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@PEAUHSTRING__@@@345@@Z @ 0x1800159C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@PEAUHSTRING__@@@Collections@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000E460 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IIterator@PEAUH.c)
 *     ??0?$SimpleVectorIterator@PEAUHSTRING__@@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@QEAA@PEAV?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@1234@Upermission@01234@@Z @ 0x18001783C (--0-$SimpleVectorIterator@PEAUHSTRING__@@V-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PE.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004BBD0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::First(
        __int64 a1,
        volatile signed __int64 **a2)
{
  __int64 v3; // rbx
  volatile signed __int64 *v4; // rax
  volatile signed __int64 *v5; // rdx
  volatile signed __int64 *v6; // rbx
  volatile signed __int64 *v7; // rsi
  int v8; // edi
  volatile signed __int64 *v9; // rsi
  volatile signed __int64 *v11; // [rsp+40h] [rbp+8h]

  *a2 = 0LL;
  v3 = a1 - 16;
  v11 = 0LL;
  v4 = (volatile signed __int64 *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v4 = (volatile signed __int64 *)Windows::Foundation::Collections::Internal::SimpleVectorIterator<HSTRING__ *,Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,XWinRT::IntVersionTag,1>::SimpleVectorIterator<HSTRING__ *,Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,XWinRT::IntVersionTag,1>(
                                      v4,
                                      v3);
    v5 = v4;
    v6 = v4;
    v7 = v4;
  }
  else
  {
    v5 = 0LL;
    v6 = 0LL;
    v7 = 0LL;
  }
  if ( !v4 )
  {
    v8 = -2147024882;
LABEL_6:
    v6 = 0LL;
    goto LABEL_7;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v5 + 8) + 56LL))(
         *((_QWORD *)v5 + 8),
         (__int64)v5 + 76);
  if ( v8 < 0 )
    goto LABEL_6;
  v11 = v6;
  v7 = 0LL;
LABEL_7:
  if ( v7 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<HSTRING__ *>,Microsoft::WRL::FtmBase>::Release(v7);
    v6 = v11;
  }
  if ( v8 >= 0 )
  {
    v9 = v6;
    if ( v6 )
    {
      (*(void (__fastcall **)(volatile signed __int64 *, volatile signed __int64 *))(*v6 + 8))(v6, v5);
      v6 = v11;
    }
    *a2 = v9;
  }
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<HSTRING__ *>,Microsoft::WRL::FtmBase>::Release(v6);
  return (unsigned int)v8;
}
