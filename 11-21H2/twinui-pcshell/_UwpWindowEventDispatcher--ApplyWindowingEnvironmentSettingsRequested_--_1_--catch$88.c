/*
 * XREFs of _UwpWindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::catch$88 @ 0x1803ECCAB
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1803198D0 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

__int64 __fastcall UwpWindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::catch_88(
        wil *a1,
        __int64 a2)
{
  __int64 v3; // rdi
  void (__fastcall *v4)(__int64, _QWORD); // rbx
  unsigned int v5; // eax

  v3 = *(_QWORD *)(a2 + 264);
  v4 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 64LL);
  v5 = wil::ResultFromCaughtException(a1);
  v4(v3, v5);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a2 + 120) + 56LL))(*(_QWORD *)(a2 + 120), 0LL);
  return 0LL;
}
