/*
 * XREFs of ?QueryInterface@?$weak_ref@$0A@$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1804F7B50
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::weak_ref<0,1>::QueryInterface(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r9

  if ( winrt::operator==(a2, "7") || winrt::operator==(v2, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>) )
  {
    *v3 = v4;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 28), 1u);
    return 0LL;
  }
  else
  {
    *v3 = 0LL;
    return 2147500034LL;
  }
}
