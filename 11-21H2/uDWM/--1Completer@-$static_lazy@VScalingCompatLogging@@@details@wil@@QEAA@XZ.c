/*
 * XREFs of ??1Completer@?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAA@XZ @ 0x180109C5C
 * Callers:
 *     ?get@?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z @ 0x180109FAC (-get@-$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180012B40 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 */

BOOL __fastcall wil::details::static_lazy<ScalingCompatLogging>::Completer::~Completer(
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
      (const struct _tlgProvider_t *)(*a1)[4].Ptr,
      a3);
    v3 = *((_DWORD *)a1 + 2);
  }
  return InitOnceComplete_0(*a1, v3, &(*a1)[1]);
}
