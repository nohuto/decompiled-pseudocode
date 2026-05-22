/*
 * XREFs of ??1ApiTelemetryLogger@details@wil@@EEAA@XZ @ 0x1800ED804
 * Callers:
 *     ??_GApiTelemetryLogger@details@wil@@EEAAPEAXI@Z @ 0x1800ED930 (--_GApiTelemetryLogger@details@wil@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$FireEvent@$$V@ApiTelemetryLogger@details@wil@@SAXXZ @ 0x1800642C8 (--$FireEvent@$$V@ApiTelemetryLogger@details@wil@@SAXXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180064534 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??1?$unique_ptr@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@U?$default_delete@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@@wistd@@@wistd@@QEAA@XZ @ 0x180087168 (--1-$unique_ptr@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@U-$default_delete@UApiData@.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x1800E4224 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 */

void __fastcall wil::details::ApiTelemetryLogger::~ApiTelemetryLogger(
        wil::details::ApiTelemetryLogger *this,
        unsigned __int64 a2)
{
  wil *v3; // rcx
  struct _TP_TIMER *v4; // rcx
  void **v5; // rdi

  *(_QWORD *)this = &wil::details::ApiTelemetryLogger::`vftable';
  wil::details::ApiTelemetryLogger::FireEvent<>((unsigned __int8)this, a2);
  if ( wil::ProcessShutdownInProgress(v3) )
    *((_QWORD *)this + 6) = 0LL;
  v4 = (struct _TP_TIMER *)*((_QWORD *)this + 6);
  if ( v4 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v4);
  v5 = (void **)*((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  if ( v5 )
  {
    wistd::unique_ptr<wil::details::ApiTelemetryLogger::ApiDataList::ApiData,wistd::default_delete<wil::details::ApiTelemetryLogger::ApiDataList::ApiData>>::~unique_ptr<wil::details::ApiTelemetryLogger::ApiDataList::ApiData,wistd::default_delete<wil::details::ApiTelemetryLogger::ApiDataList::ApiData>>(v5 + 4);
    operator delete(v5);
  }
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
}
