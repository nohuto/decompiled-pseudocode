/*
 * XREFs of wil::details::lambda_call__lambda_8d17588ca62941c116874c82e38215af___::_lambda_call__lambda_8d17588ca62941c116874c82e38215af___ @ 0x180123B48
 * Callers:
 *     ?GetPanelIdFromDeviceInterfaceId@PanelHelper@@SAJPEBG_KPEAG@Z @ 0x180123B80 (-GetPanelIdFromDeviceInterfaceId@PanelHelper@@SAJPEBG_KPEAG@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wil::details::lambda_call__lambda_8d17588ca62941c116874c82e38215af___::_lambda_call__lambda_8d17588ca62941c116874c82e38215af___(
        __int64 a1)
{
  _QWORD *result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    result = *(_QWORD **)a1;
    if ( **(_QWORD **)a1 )
      return (_QWORD *)DevFreeObjectProperties(**(unsigned int **)(a1 + 8));
  }
  return result;
}
