/*
 * XREFs of ??_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z @ 0x18019D710
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_119a121fb38785c27806b92be2d82d86_@@CAXXZ @ 0x1802DBBF0 (-_lambda_invoker_cdecl_@_lambda_119a121fb38785c27806b92be2d82d86_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_e1ff718f598a6a7bf79a481d174755c1_@@CAXXZ @ 0x1802DBD80 (-_lambda_invoker_cdecl_@_lambda_e1ff718f598a6a7bf79a481d174755c1_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_868f7fa048835520b2023eeceda2fa98_@@CAXXZ @ 0x18031D820 (-_lambda_invoker_cdecl_@_lambda_868f7fa048835520b2023eeceda2fa98_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_975e4d64c8b5daac57efc1784b54d4a5_@@CAXXZ @ 0x1803DA910 (-_lambda_invoker_cdecl_@_lambda_975e4d64c8b5daac57efc1784b54d4a5_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_1807517bb2a601749b2ae4fbbb57858f_@@CAXXZ @ 0x180407BE0 (-_lambda_invoker_cdecl_@_lambda_1807517bb2a601749b2ae4fbbb57858f_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_c916e9e9cdf81665e4682fd57ca742e1_@@CAXXZ @ 0x1804579E0 (-_lambda_invoker_cdecl_@_lambda_c916e9e9cdf81665e4682fd57ca742e1_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_1bb754991d9aec61d6443053699089ac_@@CAXXZ @ 0x18047F000 (-_lambda_invoker_cdecl_@_lambda_1bb754991d9aec61d6443053699089ac_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_51d33002daa63bfc4d65f85f7f956340_@@CAXXZ @ 0x1804FF190 (-_lambda_invoker_cdecl_@_lambda_51d33002daa63bfc4d65f85f7f956340_@@CAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1802D6AEC (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

ViewManagerInteropTraceLogging *__fastcall ViewManagerInteropTraceLogging::`scalar deleting destructor'(
        ViewManagerInteropTraceLogging *this,
        char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
