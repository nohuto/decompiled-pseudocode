/*
 * XREFs of ??1Completer@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAA@XZ @ 0x180008830
 * Callers:
 *     ?Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180008B94 (-Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180001200 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18000E180 (_guard_xfg_dispatch_icall_nop.c)
 */

BOOL __fastcall wil::details::static_lazy<InputTraceLogging>::Completer::~Completer(LPINIT_ONCE *a1)
{
  DWORD v1; // edx
  LPINIT_ONCE v3; // rbx
  ULONGLONG *Ptr; // rcx
  union _RTL_RUN_ONCE v5; // rax

  v1 = *((_DWORD *)a1 + 2);
  if ( !v1 )
  {
    v3 = *a1;
    Ptr = (ULONGLONG *)(*a1)[4].Ptr;
    v3[2].Ptr = Ptr;
    LOBYTE(v3[3].Ptr) = 1;
    TraceLoggingRegisterEx_EventRegister_EventSetInformation(Ptr);
    v5.Ptr = v3[1].Ptr;
    HIDWORD(v3[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v5.Ptr + 1))(v3 + 1);
    v1 = *((_DWORD *)a1 + 2);
  }
  return InitOnceComplete(*a1, v1, &(*a1)[1]);
}
