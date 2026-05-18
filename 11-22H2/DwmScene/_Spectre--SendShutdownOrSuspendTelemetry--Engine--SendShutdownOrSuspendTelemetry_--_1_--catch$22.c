/*
 * XREFs of _Spectre::SendShutdownOrSuspendTelemetry::Engine::SendShutdownOrSuspendTelemetry_::_1_::catch$22 @ 0x1800E5FD9
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180011BA0 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Spectre::SendShutdownOrSuspendTelemetry::Engine::SendShutdownOrSuspendTelemetry_::_1_::catch_22(
        __int64 a1,
        __int64 a2)
{
  _BYTE *v3; // rax
  size_t v4; // r8

  v3 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 80) + 8LL))(*(_QWORD *)(a2 + 80));
  v4 = -1LL;
  do
    ++v4;
  while ( v3[v4] );
  std::string::assign((void **)(a2 + 128), v3, v4);
  return 0LL;
}
