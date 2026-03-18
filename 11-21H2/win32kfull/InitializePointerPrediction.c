/*
 * XREFs of InitializePointerPrediction @ 0x1C01229D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 InitializePointerPrediction()
{
  __int64 result; // rax
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF

  result = gliQpcFreq;
  LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = 0;
  WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink = 0LL;
  v1 = 0LL;
  if ( gliQpcFreq )
  {
    result = ReadPointerDeviceSettings(156LL, &v1);
    if ( (_DWORD)result )
    {
      gPredictorRLSLambdaMin = 3865470464LL;
      gPredictorRLSLambdaMax = 4290672384LL;
      result = 4252017664LL;
      gPredictorRLSExpoSmoothAlpha = 4252017664LL;
      gPredictorRLSDelta = 4294968LL;
      gPredictorRLSLambdaLearningRate = 4294968LL;
    }
  }
  return result;
}
