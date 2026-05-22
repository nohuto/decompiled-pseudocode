/*
 * XREFs of ??_GInputTraceLogging@@UEAAPEAXI@Z @ 0x180099550
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1800EB128 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

InputTraceLogging *__fastcall InputTraceLogging::`scalar deleting destructor'(InputTraceLogging *this, char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
