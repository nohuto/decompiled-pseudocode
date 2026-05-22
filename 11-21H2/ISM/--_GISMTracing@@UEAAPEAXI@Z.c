/*
 * XREFs of ??_GISMTracing@@UEAAPEAXI@Z @ 0x18007B8D0
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_7fd51406feab050c3f0aab483d3938ea_@@CAXXZ @ 0x18008FFF0 (-_lambda_invoker_cdecl_@_lambda_7fd51406feab050c3f0aab483d3938ea_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_ffe5d831185bf77c783480ebf240a46d_@@CAXXZ @ 0x1800B24F0 (-_lambda_invoker_cdecl_@_lambda_ffe5d831185bf77c783480ebf240a46d_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_260b9137d63ddd75627644ad4182c2ea_@@CAXXZ @ 0x1800BAA20 (-_lambda_invoker_cdecl_@_lambda_260b9137d63ddd75627644ad4182c2ea_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_f655bc6deafeea110b0bcdbdac4bd35f_@@CAXXZ @ 0x1800BCC20 (-_lambda_invoker_cdecl_@_lambda_f655bc6deafeea110b0bcdbdac4bd35f_@@CAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x18007B6E4 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

ISMTracing *__fastcall ISMTracing::`scalar deleting destructor'(ISMTracing *this, char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
