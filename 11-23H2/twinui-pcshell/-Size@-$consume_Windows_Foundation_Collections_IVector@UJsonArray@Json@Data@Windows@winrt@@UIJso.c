/*
 * XREFs of ?Size@?$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJsonValue@2345@@impl@winrt@@QEBA@XZ @ 0x1803E4410
 * Callers:
 *     ?DeserializeFromJsonFile@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x1800AFBC8 (-DeserializeFromJsonFile@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 *     GetStoredEnterprisePinGeneration @ 0x180287CFC (GetStoredEnterprisePinGeneration.c)
 *     PersistEnterprisePinDataToRegistry @ 0x180287EFC (PersistEnterprisePinDataToRegistry.c)
 *     PersistEnterprisePinDataToRegistry_Old @ 0x180288158 (PersistEnterprisePinDataToRegistry_Old.c)
 *     ShouldAddEnterprisePinToOutput @ 0x1802883A8 (ShouldAddEnterprisePinToOutput.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Data::Json::IJsonValue>::Size(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  signed int v3; // eax
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0;
  v1 = *a1;
  if ( v1 )
  {
    v6 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v1)(
      v1,
      &winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Data::Json::IJsonValue>>,
      &v6);
    v1 = v6;
    v2 = v6;
  }
  else
  {
    v2 = 0LL;
  }
  v7 = v1;
  v3 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 56LL))(v1, &v5);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  if ( v2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
  return v5;
}
