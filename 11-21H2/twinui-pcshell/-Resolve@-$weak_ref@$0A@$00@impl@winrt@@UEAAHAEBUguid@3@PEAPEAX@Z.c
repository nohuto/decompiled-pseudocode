/*
 * XREFs of ?Resolve@?$weak_ref@$0A@$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180423090
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::weak_ref<0,1>::Resolve(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  int v5; // ett

  result = *(unsigned int *)(a1 + 24);
  do
  {
    if ( !(_DWORD)result )
    {
      *a3 = 0LL;
      return result;
    }
    v5 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), result + 1, result);
  }
  while ( v5 != (_DWORD)result );
  result = (***(__int64 (__fastcall ****)(_QWORD, __int64, _QWORD *))(a1 + 16))(*(_QWORD *)(a1 + 16), a2, a3);
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 24), 0xFFFFFFFF);
  return result;
}
