/*
 * XREFs of ?ReadAsync@?$consume_Windows_Storage_Streams_IInputStream@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@AEBUIBuffer@Streams@Storage@Windows@3@IAEBW4InputStreamOptions@5673@@Z @ 0x1807169D8
 * Callers:
 *     ?ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA?AUIBuffer@Streams@Storage@Windows@winrt@@QEAUHWND__@@AEBUhstring@7@@Z @ 0x180716AB0 (-ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA-AUIBuffer@Streams@Storage@Windows@winr.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Storage_Streams_IInputStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::ReadAsync(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int a4,
        unsigned int *a5)
{
  __int64 v8; // rcx
  __int64 v9; // rdi
  signed int v10; // eax
  _QWORD v12[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  v12[0] = 0LL;
  v8 = *a1;
  if ( v8 )
  {
    v13 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v8)(
      v8,
      &winrt::impl::guid_v<winrt::Windows::Storage::Streams::IInputStream>,
      &v13);
    v8 = v13;
    v9 = v13;
  }
  else
  {
    v9 = 0LL;
  }
  v14 = v8;
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v8 + 48LL))(
          v8,
          *a3,
          a4,
          *a5,
          v12);
  if ( v10 < 0 )
    winrt::throw_hresult(v10);
  if ( v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
  *a2 = v12[0];
  return a2;
}
