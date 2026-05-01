/*
 * XREFs of winrt::implements__anonymous_namespace_::ShellExecuteSite_IServiceProvider_ICreatingProcess_::Release @ 0x1806C2EA0
 * Callers:
 *     sub_1802AC480 @ 0x1802AC480 (sub_1802AC480.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::implements__anonymous_namespace_::ShellExecuteSite_IServiceProvider_ICreatingProcess_::Release(
        __int64 a1)
{
  volatile signed __int32 *v1; // rcx
  unsigned __int32 v2; // ebx

  v1 = (volatile signed __int32 *)(a1 + 16);
  v2 = _InterlockedDecrement(v1 + 2);
  if ( !v2 )
  {
    _InterlockedExchange(v1 + 2, 1);
    if ( v1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
  }
  return v2;
}
