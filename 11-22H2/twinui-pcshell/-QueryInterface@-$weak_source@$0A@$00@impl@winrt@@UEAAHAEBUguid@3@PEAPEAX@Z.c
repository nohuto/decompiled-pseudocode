/*
 * XREFs of ?QueryInterface@?$weak_source@$0A@$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180391ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::weak_source<0,1>::QueryInterface(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // r9
  __int64 v4; // r11
  __int64 v5; // rdx
  __int64 v7; // rax

  if ( winrt::operator==(a2, &winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>) )
  {
    *v2 = v3;
    v5 = v3 + 16;
    if ( !v3 )
      v5 = 24LL;
    _InterlockedExchangeAdd((volatile signed __int32 *)v5, 1u);
    return 0LL;
  }
  else
  {
    v7 = v3 + 8;
    if ( !v3 )
      v7 = 16LL;
    return (***(__int64 (__fastcall ****)(_QWORD, __int64))v7)(*(_QWORD *)v7, v4);
  }
}
