/*
 * XREFs of ?GetRegistration@UwpWindowWrapperBase@@UEAA?AV?$shared_ptr@UViewEventRegistration@@@std@@XZ @ 0x18017D220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall UwpWindowWrapperBase::GetRegistration(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 264) + 232LL))(*(_QWORD *)(a1 + 264));
  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = *(_QWORD *)(a1 + 328);
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  *a2 = *(_QWORD *)(a1 + 320);
  a2[1] = *(_QWORD *)(a1 + 328);
  return a2;
}
