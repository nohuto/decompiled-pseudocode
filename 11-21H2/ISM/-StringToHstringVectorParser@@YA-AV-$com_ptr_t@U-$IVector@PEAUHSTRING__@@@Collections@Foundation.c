/*
 * XREFs of ?StringToHstringVectorParser@@YA?AV?$com_ptr_t@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@PEBG@Z @ 0x18016C580
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002BBF0 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?find@?$_WChar_traits@G@std@@SAPEBGPEBG_KAEBG@Z @ 0x1800C3AD0 (-find@-$_WChar_traits@G@std@@SAPEBGPEBG_KAEBG@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEBGI@Z @ 0x1800FBDB8 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEBGI@Z.c)
 *     ??0?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUHSTRING__@@@1234@Upermission@01234@@Z @ 0x180164298 (--0-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foun.c)
 *     ?substr@?$basic_string_view@GU?$char_traits@G@std@@@std@@QEBA?AV12@_K_K@Z @ 0x18016E2C0 (-substr@-$basic_string_view@GU-$char_traits@G@std@@@std@@QEBA-AV12@_K_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall StringToHstringVectorParser(__int64 *a1, _WORD *a2)
{
  __int64 v4; // rbx
  void *v5; // rax
  __int64 v6; // rdx
  char v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  __int64 v10; // r15
  _WORD *v11; // rax
  __int16 v12; // r9
  __int64 v13; // rdi
  __m128i v14; // xmm1
  _WORD *v15; // rax
  __m128i v16; // xmm1
  _QWORD v18[2]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v19[24]; // [rsp+30h] [rbp-18h] BYREF
  __int64 *v20; // [rsp+90h] [rbp+48h] BYREF
  HSTRING string; // [rsp+98h] [rbp+50h] BYREF
  HSTRING v22; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+60h] BYREF

  v20 = a1;
  v4 = 0LL;
  v23 = 0LL;
  v5 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v8 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>(
           (__int64)v5,
           v6,
           v7);
    if ( v8 )
      v4 = v8;
    v23 = v4;
  }
  v18[0] = a2;
  v9 = -1LL;
  do
    ++v9;
  while ( a2[v9] );
  v18[1] = v9;
  v10 = 0LL;
  LOWORD(v20) = 44;
  if ( v9 )
  {
    v11 = std::_WChar_traits<unsigned short>::find(a2, v9, (__int16 *)&v20);
    if ( v11 )
    {
      v13 = v11 - a2;
      if ( v13 != -1 )
      {
        LOWORD(v20) = v12;
        do
        {
          v14 = *(__m128i *)((__int64 (__fastcall *)(_QWORD *, _BYTE *, __int64, __int64))std::basic_string_view<unsigned short>::substr)(
                              v18,
                              v19,
                              v10,
                              v13 - v10);
          string = 0LL;
          Microsoft::WRL::Wrappers::HString::Set(
            &string,
            (const unsigned __int16 *)v14.m128i_i64[0],
            _mm_srli_si128(v14, 8).m128i_u32[0]);
          (*(void (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v4 + 104LL))(v4, string);
          v10 = v13 + 1;
          if ( v13 + 1 < v9
            && (v15 = std::_WChar_traits<unsigned short>::find(&a2[v10], v9 - v10, (__int16 *)&v20)) != 0LL )
          {
            v13 = v15 - a2;
          }
          else
          {
            v13 = -1LL;
          }
          WindowsDeleteString(string);
          string = 0LL;
        }
        while ( v13 != -1 );
      }
    }
  }
  v16 = *(__m128i *)((__int64 (__fastcall *)(_QWORD *, _BYTE *, __int64, __int64))std::basic_string_view<unsigned short>::substr)(
                      v18,
                      v19,
                      v10,
                      -1LL);
  v22 = 0LL;
  Microsoft::WRL::Wrappers::HString::Set(
    &v22,
    (const unsigned __int16 *)v16.m128i_i64[0],
    _mm_srli_si128(v16, 8).m128i_u32[0]);
  (*(void (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v4 + 104LL))(v4, v22);
  v23 = 0LL;
  *a1 = v4;
  WindowsDeleteString(v22);
  v22 = 0LL;
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v23);
  return a1;
}
