/*
 * XREFs of ??_EPenWorkspaceBrokerLogging@@UEAAPEAXI@Z @ 0x1803B74C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1802D6AEC (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

PenWorkspaceBrokerLogging *__fastcall PenWorkspaceBrokerLogging::`vector deleting destructor'(
        PenWorkspaceBrokerLogging *this,
        char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
