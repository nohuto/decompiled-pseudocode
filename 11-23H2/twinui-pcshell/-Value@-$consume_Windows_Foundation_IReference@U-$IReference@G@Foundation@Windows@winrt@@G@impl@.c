/*
 * XREFs of ?Value@?$consume_Windows_Foundation_IReference@U?$IReference@G@Foundation@Windows@winrt@@G@impl@winrt@@QEBA@XZ @ 0x18071A324
 * Callers:
 *     ??$TrySerialize@G@ValueSetReader@Details@RemoteSystemData@@QEAA_NAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEAG@Z @ 0x180709C98 (--$TrySerialize@G@ValueSetReader@Details@RemoteSystemData@@QEAA_NAEBV-$basic_string_view@GU-$cha.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<unsigned short>,unsigned short>::Value(
        __int64 *a1)
{
  __int64 v1; // rcx
  signed int v2; // eax
  unsigned __int16 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, unsigned __int16 *))(*(_QWORD *)v1 + 48LL))(v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  return v4;
}
