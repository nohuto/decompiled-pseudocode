/*
 * XREFs of ??_ENUIAudioTracing@@UEAAPEAXI@Z @ 0x180151CE0
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_904e72f60f56877f633fc2ab0ce9f5f8_@@CAXXZ @ 0x180151BD0 (-_lambda_invoker_cdecl_@_lambda_904e72f60f56877f633fc2ab0ce9f5f8_@@CAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800084A0 (--3@YAXPEAX@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1800C1120 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

NUIAudioTracing *__fastcall NUIAudioTracing::`vector deleting destructor'(NUIAudioTracing *this, char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
