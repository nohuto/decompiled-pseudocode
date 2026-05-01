/*
 * XREFs of wil::ResultFromException__lambda_be0384f6ee63f5b395346d60b9e3dbc6___ @ 0x1800743E4
 * Callers:
 *     ?GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@Z @ 0x18007439C (-GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@.c)
 * Callees:
 *     _lambda_be0384f6ee63f5b395346d60b9e3dbc6_::operator() @ 0x180074404 (_lambda_be0384f6ee63f5b395346d60b9e3dbc6_--operator().c)
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
