/*
 * XREFs of _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::catch$84 @ 0x1803E2146
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1803198D0 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

__int64 __fastcall WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::catch_84(
        wil *a1,
        __int64 a2)
{
  __int64 v2; // rdi
  void (__fastcall *v3)(__int64, _QWORD); // rbx
  unsigned int v4; // eax

  v2 = *(_QWORD *)(a2 + 184);
  v3 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 80LL);
  v4 = wil::ResultFromCaughtException(a1);
  v3(v2, v4);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 72LL))(v2, 0LL);
  return 0LL;
}
