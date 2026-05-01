/*
 * XREFs of ??1Completer@?$static_lazy@VPenWorkspaceBrokerLogging@@@details@wil@@QEAA@XZ @ 0x1803B7308
 * Callers:
 *     ?get@?$static_lazy@VPenWorkspaceBrokerLogging@@@details@wil@@QEAAPEAVPenWorkspaceBrokerLogging@@P6AXXZ@Z @ 0x1803B952C (-get@-$static_lazy@VPenWorkspaceBrokerLogging@@@details@wil@@QEAAPEAVPenWorkspaceBrokerLogging@@.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x18013B604 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 */

BOOL __fastcall wil::details::static_lazy<PenWorkspaceBrokerLogging>::Completer::~Completer(
        LPINIT_ONCE *a1,
        __int64 a2,
        void (*a3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))
{
  DWORD v3; // edx

  v3 = *((_DWORD *)a1 + 2);
  if ( !v3 )
  {
    wil::TraceLoggingProvider::Register(
      (wil::TraceLoggingProvider *)&(*a1)[1],
      (const struct _tlgProvider_t *const)(*a1)[4].Ptr,
      a3);
    v3 = *((_DWORD *)a1 + 2);
  }
  return InitOnceComplete(*a1, v3, &(*a1)[1]);
}
