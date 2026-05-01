/*
 * XREFs of ??_EPenWorkspaceBrokerLogging@@UEAAPEAXI@Z @ 0x1804905A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x18038D28C (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
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
