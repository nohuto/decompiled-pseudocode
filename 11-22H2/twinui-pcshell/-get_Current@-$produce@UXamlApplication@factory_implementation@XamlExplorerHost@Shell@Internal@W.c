/*
 * XREFs of ?get_Current@?$produce@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlApplicationStatics@34567@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18010EB50
 * Callers:
 *     <none>
 * Callees:
 *     std::call_once__lambda_74a3d5ef1a851f826ae0f3c921cff92c___ @ 0x18010EBB4 (std--call_once__lambda_74a3d5ef1a851f826ae0f3c921cff92c___.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics>::get_Current(
        unsigned __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = (a1 - 24) & ((unsigned __int128)-(__int128)a1 >> 64);
  v6 = v3;
  try
  {
    std::call_once__lambda_74a3d5ef1a851f826ae0f3c921cff92c___();
    v4 = *(_QWORD *)(v3 + 40);
    v6 = v4;
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v6);
    *a2 = v4;
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v6);
  }
  return result;
}
