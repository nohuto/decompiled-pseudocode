/*
 * XREFs of ??1Completer@?$static_lazy@VCompositorTracing@@@details@wil@@QEAA@XZ @ 0x180024B20
 * Callers:
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x180024E64 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18002B43C (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800F0CD8 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 */

BOOL __fastcall wil::details::static_lazy<CompositorTracing>::Completer::~Completer(
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
