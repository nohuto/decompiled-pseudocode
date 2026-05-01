/*
 * XREFs of ??_EImmersiveIconsLogging@@UEAAPEAXI@Z @ 0x1803EF5E0
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_576b8a055e1eddaf8c0f48bcebe2427e_@@CA@XZ @ 0x180750C20 (-_lambda_invoker_cdecl_@_lambda_576b8a055e1eddaf8c0f48bcebe2427e_@@CA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801C7278 (--3@YAXPEAX@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x18038D28C (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

ImmersiveIconsLogging *__fastcall ImmersiveIconsLogging::`vector deleting destructor'(
        ImmersiveIconsLogging *this,
        char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
