/*
 * XREFs of wil::ResultFromException__lambda_be0384f6ee63f5b395346d60b9e3dbc6___ @ 0x18012D04C
 * Callers:
 *     ?GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@Z @ 0x18003FD1C (-GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@.c)
 *     ?ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z @ 0x18012CDC8 (-ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z.c)
 * Callees:
 *     _lambda_be0384f6ee63f5b395346d60b9e3dbc6_::operator() @ 0x18012D174 (_lambda_be0384f6ee63f5b395346d60b9e3dbc6_--operator().c)
 */

__int64 wil::ResultFromException__lambda_be0384f6ee63f5b395346d60b9e3dbc6___()
{
  wil *v0; // rcx
  __int64 result; // rax

  try
  {
    lambda_be0384f6ee63f5b395346d60b9e3dbc6_::operator()();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::ResultFromCaughtException(v0);
  }
  return result;
}
