/*
 * XREFs of ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x18003BF9C
 * Callers:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x18002C2F8 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180001BDC (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 */

void __fastcall wil::TraceLoggingProvider::Register(
        wil::TraceLoggingProvider *this,
        ULONGLONG *CallbackContext,
        void (*a3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))
{
  *((_QWORD *)this + 1) = CallbackContext;
  *((_BYTE *)this + 16) = 1;
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(CallbackContext);
  wil::TraceLoggingProvider::InternalInitialize(this);
}
