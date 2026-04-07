/*
 * XREFs of ?QueryInterface@?$weak_source@$00$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800F1210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::weak_source<1,1>::QueryInterface(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v7; // rax

  v4 = *a2 - winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>;
  if ( *a2 == winrt::impl::guid_v<winrt::impl::IWeakReferenceSource> )
    v4 = a2[1] - 0x46000000000000C0LL;
  if ( v4 )
  {
    v7 = a1 + 8;
    if ( !a1 )
      v7 = 16LL;
    return (***(__int64 (__fastcall ****)(_QWORD))v7)(*(_QWORD *)v7);
  }
  else
  {
    v5 = a1 + 16;
    *a3 = a1;
    if ( !a1 )
      v5 = 24LL;
    _InterlockedExchangeAdd((volatile signed __int32 *)v5, 1u);
    return 0LL;
  }
}
