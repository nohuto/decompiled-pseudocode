/*
 * XREFs of ??_GTouchGestureLogging@@UEAAPEAXI@Z @ 0x1802D6E20
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_75f51455afdd6deeb34ec28b1e80a524_@@CAXXZ @ 0x180301540 (-_lambda_invoker_cdecl_@_lambda_75f51455afdd6deeb34ec28b1e80a524_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_87ebf9cdbe9512ecf246e0e20380c4a1_@@CAXXZ @ 0x1803BEA00 (-_lambda_invoker_cdecl_@_lambda_87ebf9cdbe9512ecf246e0e20380c4a1_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_fac79a549a8b210f59d21e9b666a8346_@@CAXXZ @ 0x1803BF820 (-_lambda_invoker_cdecl_@_lambda_fac79a549a8b210f59d21e9b666a8346_@@CAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1802D6AEC (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

TouchGestureLogging *__fastcall TouchGestureLogging::`scalar deleting destructor'(TouchGestureLogging *this, char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
