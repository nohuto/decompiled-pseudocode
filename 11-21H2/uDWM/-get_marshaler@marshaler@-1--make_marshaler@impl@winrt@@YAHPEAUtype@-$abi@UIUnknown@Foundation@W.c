/*
 * XREFs of ?get_marshaler@marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@34@PEAPEAX@Z@CA?AU?$com_ptr@UIMarshal@impl@winrt@@@4@XZ @ 0x1800F15AC
 * Callers:
 *     ??0marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@PEAPEAX@Z@QEAA@0@Z @ 0x1800F0A04 (--0marshaler@-1--make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x180006224 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     WINRT_IMPL_CoCreateFreeThreadedMarshaler @ 0x1800610F0 (WINRT_IMPL_CoCreateFreeThreadedMarshaler.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall `winrt::impl::make_marshaler'::`2'::marshaler::get_marshaler(__int64 *a1)
{
  __int64 v2; // rax
  __int64 *v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi
  char v6; // si
  __int64 v8; // [rsp+20h] [rbp-10h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+60h] [rbp+30h] BYREF
  __int64 v10; // [rsp+68h] [rbp+38h] BYREF
  __int64 v11; // [rsp+70h] [rbp+40h] BYREF
  __int64 v12; // [rsp+78h] [rbp+48h] BYREF

  ppunkMarshal = 0LL;
  WINRT_IMPL_CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal);
  if ( ppunkMarshal )
  {
    v10 = 0LL;
    ((void (__fastcall *)(LPUNKNOWN, __int64 *, __int64 *))ppunkMarshal->lpVtbl->QueryInterface)(
      ppunkMarshal,
      &winrt::impl::guid_v<winrt::impl::IMarshal>,
      &v10);
    v2 = v10;
    v3 = &v10;
    v4 = v12;
    v5 = 0LL;
    v8 = 0LL;
    v6 = 3;
  }
  else
  {
    v5 = v8;
    v3 = &v11;
    v4 = 0LL;
    v12 = 0LL;
    v2 = 0LL;
    v6 = 12;
  }
  *v3 = 0LL;
  *a1 = v2;
  if ( (v6 & 8) != 0 )
  {
    v6 &= ~8u;
    if ( v11 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v11);
  }
  if ( (v6 & 4) != 0 )
  {
    v6 &= ~4u;
    if ( v4 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v12);
  }
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    if ( v10 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v10);
  }
  if ( (v6 & 1) != 0 && v5 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v8);
  if ( ppunkMarshal )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&ppunkMarshal);
  return a1;
}
