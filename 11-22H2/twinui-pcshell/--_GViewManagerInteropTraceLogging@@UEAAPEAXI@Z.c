/*
 * XREFs of ??_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z @ 0x18038D560
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_119a121fb38785c27806b92be2d82d86_@@CA@XZ @ 0x180393160 (-_lambda_invoker_cdecl_@_lambda_119a121fb38785c27806b92be2d82d86_@@CA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_e1ff718f598a6a7bf79a481d174755c1_@@CA@XZ @ 0x1803932D0 (-_lambda_invoker_cdecl_@_lambda_e1ff718f598a6a7bf79a481d174755c1_@@CA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_868f7fa048835520b2023eeceda2fa98_@@CA@XZ @ 0x1803EBBA0 (-_lambda_invoker_cdecl_@_lambda_868f7fa048835520b2023eeceda2fa98_@@CA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_975e4d64c8b5daac57efc1784b54d4a5_@@CA@XZ @ 0x1804B69D0 (-_lambda_invoker_cdecl_@_lambda_975e4d64c8b5daac57efc1784b54d4a5_@@CA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_1807517bb2a601749b2ae4fbbb57858f_@@CA@XZ @ 0x1804E2BB0 (-_lambda_invoker_cdecl_@_lambda_1807517bb2a601749b2ae4fbbb57858f_@@CA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_c916e9e9cdf81665e4682fd57ca742e1_@@CA@XZ @ 0x180507BC0 (-_lambda_invoker_cdecl_@_lambda_c916e9e9cdf81665e4682fd57ca742e1_@@CA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_1bb754991d9aec61d6443053699089ac_@@CA@XZ @ 0x180530380 (-_lambda_invoker_cdecl_@_lambda_1bb754991d9aec61d6443053699089ac_@@CA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_51d33002daa63bfc4d65f85f7f956340_@@CA@XZ @ 0x1805B7A30 (-_lambda_invoker_cdecl_@_lambda_51d33002daa63bfc4d65f85f7f956340_@@CA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x18038D28C (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
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
