/*
 * XREFs of ?Resolve@?$weak_ref@$00$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180007B20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::weak_ref<1,1>::Resolve(__int64 a1, __int64 a2, _QWORD *a3)
{
  signed __int32 v3; // eax
  signed __int32 v5; // ett
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 24);
  while ( v3 )
  {
    v5 = v3;
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v3 + 1, v3);
    if ( v5 == v3 )
    {
      result = (***(__int64 (__fastcall ****)(_QWORD))(a1 + 16))(*(_QWORD *)(a1 + 16));
      _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 24), 0xFFFFFFFF);
      return result;
    }
  }
  *a3 = 0LL;
  return 0LL;
}
