/*
 * XREFs of ??Hwinrt@@YA?AUhstring@0@AEBU10@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18070EFA4
 * Callers:
 *     ?CreateFileMappingName@FileMappingHelpers@Util@@QEAA?AUhstring@winrt@@QEAUHWND__@@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEBU34@@Z @ 0x18070FF08 (-CreateFileMappingName@FileMappingHelpers@Util@@QEAA-AUhstring@winrt@@QEAUHWND__@@AEBV-$basic_st.c)
 *     ?LaunchBootToCloudAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x1807146CC (-LaunchBootToCloudAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winr.c)
 * Callees:
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800B5528 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ?concat_hstring@impl@winrt@@YA?AUhstring@2@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x1800B5630 (-concat_hstring@impl@winrt@@YA-AUhstring@2@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@.c)
 */

struct winrt::impl::shared_hstring_header **__fastcall winrt::operator+(
        struct winrt::impl::shared_hstring_header **a1,
        __int64 *a2,
        _QWORD *a3)
{
  _QWORD *v4; // rax
  _QWORD v6[2]; // [rsp+28h] [rbp-30h] BYREF
  _QWORD v7[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = a3;
  if ( a3[3] >= 8uLL )
    v4 = (_QWORD *)*a3;
  v6[0] = v4;
  v6[1] = a3[2];
  winrt::hstring::operator std::basic_string_view<unsigned short>(a2, v7);
  winrt::impl::concat_hstring(a1, (__int64)v7, (__int64)v6);
  return a1;
}
