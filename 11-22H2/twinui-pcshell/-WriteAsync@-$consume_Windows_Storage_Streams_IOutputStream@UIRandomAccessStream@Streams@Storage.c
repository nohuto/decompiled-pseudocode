/*
 * XREFs of ?WriteAsync@?$consume_Windows_Storage_Streams_IOutputStream@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@AEBUIBuffer@Streams@Storage@Windows@3@@Z @ 0x18071A3B8
 * Callers:
 *     Util::TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1 @ 0x180279750 (Util--TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Storage_Streams_IOutputStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::WriteAsync(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  signed int v7; // eax
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  v5 = *a1;
  if ( v5 )
  {
    v9 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v5)(
      v5,
      &winrt::impl::guid_v<winrt::Windows::Storage::Streams::IOutputStream>,
      &v9);
    v5 = v9;
    v6 = v9;
  }
  else
  {
    v6 = 0LL;
  }
  v10 = v5;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v5 + 48LL))(v5, *a3, &v11);
  if ( v7 < 0 )
    winrt::throw_hresult(v7);
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  *a2 = v11;
  return a2;
}
