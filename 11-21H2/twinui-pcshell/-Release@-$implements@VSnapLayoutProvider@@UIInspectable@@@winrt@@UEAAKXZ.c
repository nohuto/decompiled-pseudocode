/*
 * XREFs of ?Release@?$implements@VSnapLayoutProvider@@UIInspectable@@@winrt@@UEAAKXZ @ 0x1803B0D60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::implements<SnapLayoutProvider,IInspectable>::Release(__int64 a1)
{
  volatile signed __int32 *v1; // rcx
  unsigned __int32 v2; // ebx

  v1 = (volatile signed __int32 *)(a1 + 8);
  v2 = _InterlockedDecrement(v1 + 2);
  if ( !v2 )
  {
    _InterlockedExchange(v1 + 2, 1);
    if ( v1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
  }
  return v2;
}
