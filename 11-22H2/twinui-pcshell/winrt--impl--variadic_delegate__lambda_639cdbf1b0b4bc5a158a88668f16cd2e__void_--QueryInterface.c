/*
 * XREFs of winrt::impl::variadic_delegate__lambda_639cdbf1b0b4bc5a158a88668f16cd2e__void_::QueryInterface @ 0x1806AE220
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::variadic_delegate__lambda_639cdbf1b0b4bc5a158a88668f16cd2e__void_::QueryInterface(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r9

  if ( winrt::operator==(a2, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>)
    || winrt::operator==(v2, &winrt::impl::guid_v<winrt::impl::IAgileObject>) )
  {
    *v3 = v4;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 24), 1u);
    return 0LL;
  }
  else
  {
    *v3 = 0LL;
    return 2147500034LL;
  }
}
