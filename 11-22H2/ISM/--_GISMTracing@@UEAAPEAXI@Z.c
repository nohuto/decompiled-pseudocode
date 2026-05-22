/*
 * XREFs of ??_GISMTracing@@UEAAPEAXI@Z @ 0x180061E20
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_7fd51406feab050c3f0aab483d3938ea_@@CA@XZ @ 0x1800B9570 (-_lambda_invoker_cdecl_@_lambda_7fd51406feab050c3f0aab483d3938ea_@@CA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_ffe5d831185bf77c783480ebf240a46d_@@CA@XZ @ 0x1800DA970 (-_lambda_invoker_cdecl_@_lambda_ffe5d831185bf77c783480ebf240a46d_@@CA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_260b9137d63ddd75627644ad4182c2ea_@@CA@XZ @ 0x1800E2AA0 (-_lambda_invoker_cdecl_@_lambda_260b9137d63ddd75627644ad4182c2ea_@@CA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_f655bc6deafeea110b0bcdbdac4bd35f_@@CA@XZ @ 0x1800E4A20 (-_lambda_invoker_cdecl_@_lambda_f655bc6deafeea110b0bcdbdac4bd35f_@@CA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1800A5198 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

ISMTracing *__fastcall ISMTracing::`scalar deleting destructor'(ISMTracing *this, char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
