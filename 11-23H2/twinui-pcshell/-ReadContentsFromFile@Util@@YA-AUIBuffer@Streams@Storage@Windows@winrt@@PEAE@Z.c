/*
 * XREFs of ?ReadContentsFromFile@Util@@YA?AUIBuffer@Streams@Storage@Windows@winrt@@PEAE@Z @ 0x180717068
 * Callers:
 *     ?ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA?AUIBuffer@Streams@Storage@Windows@winrt@@QEAUHWND__@@AEBUhstring@7@@Z @ 0x180716AB0 (-ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA-AUIBuffer@Streams@Storage@Windows@winr.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     memcpy_0 @ 0x1801C934B (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$as@UIBufferByteAccess@Streams@Storage@Windows@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIBufferByteAccess@Streams@Storage@Windows@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18070B37C (--$as@UIBufferByteAccess@Streams@Storage@Windows@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt.c)
 *     ??$call@AEAV_lambda_e7631c1690498db2dc470481c9b63fc5_@@@?$factory_cache_entry@UBuffer@Streams@Storage@Windows@winrt@@UIBufferFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_e7631c1690498db2dc470481c9b63fc5_@@@Z @ 0x18070B460 (--$call@AEAV_lambda_e7631c1690498db2dc470481c9b63fc5_@@@-$factory_cache_entry@UBuffer@Streams@St.c)
 *     ?Create@?$consume_Windows_Storage_Streams_IBufferFactory@UIBufferFactory@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@I@Z @ 0x18070FB8C (-Create@-$consume_Windows_Storage_Streams_IBufferFactory@UIBufferFactory@Streams@Storage@Windows.c)
 */

// Hidden C++ exception states: #wind=3
void (__fastcall ***__fastcall Util::ReadContentsFromFile(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        unsigned int *a2))(_QWORD, __int64 *, __int64 *)
{
  size_t v4; // rsi
  void (__fastcall **v5)(_QWORD, __int64 *, __int64 *); // rcx
  signed int v6; // eax
  __int64 v7; // rbx
  signed int v8; // eax
  unsigned int *v10; // [rsp+28h] [rbp-18h] BYREF
  void *v11[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v12; // [rsp+78h] [rbp+38h] BYREF
  void (__fastcall **v13)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+40h] BYREF
  __int64 v14; // [rsp+88h] [rbp+48h] BYREF

  v4 = *a2;
  v12 = *a2;
  v10 = &v12;
  v11[1] = &qword_180990B78;
  _InterlockedIncrement64(&qword_180990B78);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::Streams::Buffer,winrt::Windows::Storage::Streams::IBufferFactory> )
  {
    winrt::impl::consume_Windows_Storage_Streams_IBufferFactory<winrt::Windows::Storage::Streams::IBufferFactory>::Create(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::Streams::Buffer,winrt::Windows::Storage::Streams::IBufferFactory>,
      &v13,
      v12);
    _InterlockedDecrement64(&qword_180990B78);
  }
  else
  {
    _InterlockedDecrement64(&qword_180990B78);
    winrt::impl::factory_cache_entry<winrt::Windows::Storage::Streams::Buffer,winrt::Windows::Storage::Streams::IBufferFactory>::call<_lambda_e7631c1690498db2dc470481c9b63fc5_ &>(
      a1,
      (__int64)&v13,
      &v10);
  }
  v5 = v13;
  *a1 = v13;
  v6 = (*((__int64 (__fastcall **)(void (__fastcall **)(_QWORD, __int64 *, __int64 *), _QWORD))*v5 + 8))(
         v5,
         (unsigned int)v4);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  winrt::impl::as<Windows::Storage::Streams::IBufferByteAccess,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v14,
    (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*a1);
  v7 = v14;
  v8 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v14 + 24LL))(v14, v11);
  if ( v8 < 0 )
    winrt::throw_hresult(v8);
  if ( v7 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v14);
  memcpy_0(v11[0], a2 + 1, v4);
  return a1;
}
