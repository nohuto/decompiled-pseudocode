/*
 * XREFs of ??1Completer@?$static_lazy@VTaskbarContentDeliveryPinningTelemetry@@@details@wil@@QEAA@XZ @ 0x18002905C
 * Callers:
 *     ??$TaskbarOutOfSpaceForPin@AEBQEBG@TaskbarContentDeliveryPinningTelemetry@@SAXAEBQEBG@Z @ 0x180025DD8 (--$TaskbarOutOfSpaceForPin@AEBQEBG@TaskbarContentDeliveryPinningTelemetry@@SAXAEBQEBG@Z.c)
 * Callees:
 *     ?Provider@TaskbarLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18003C0DC (-Provider@TaskbarLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

BOOL __fastcall wil::details::static_lazy<TaskbarContentDeliveryPinningTelemetry>::Completer::~Completer(__int64 a1)
{
  DWORD v1; // edx
  LPINIT_ONCE v3; // rbx
  union _RTL_RUN_ONCE v4; // rax

  v1 = *(_DWORD *)(a1 + 8);
  if ( !v1 )
  {
    v3 = *(LPINIT_ONCE *)a1;
    v3[2].Ptr = TaskbarLogging::Provider();
    v4.Ptr = v3[1].Ptr;
    LOBYTE(v3[3].Ptr) = 0;
    HIDWORD(v3[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v4.Ptr + 1))(v3 + 1);
    v1 = *(_DWORD *)(a1 + 8);
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, v1, (LPVOID)(*(_QWORD *)a1 + 8LL));
}
