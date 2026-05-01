/*
 * XREFs of ??_GTouchGestureLogging@@UEAAPEAXI@Z @ 0x180261520
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_75f51455afdd6deeb34ec28b1e80a524_@@CA@XZ @ 0x1803BD5B0 (-_lambda_invoker_cdecl_@_lambda_75f51455afdd6deeb34ec28b1e80a524_@@CA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_87ebf9cdbe9512ecf246e0e20380c4a1_@@CA@XZ @ 0x180497A90 (-_lambda_invoker_cdecl_@_lambda_87ebf9cdbe9512ecf246e0e20380c4a1_@@CA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_fac79a549a8b210f59d21e9b666a8346_@@CA@XZ @ 0x180498810 (-_lambda_invoker_cdecl_@_lambda_fac79a549a8b210f59d21e9b666a8346_@@CA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x18038D28C (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

TouchGestureLogging *__fastcall TouchGestureLogging::`scalar deleting destructor'(TouchGestureLogging *this, char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
