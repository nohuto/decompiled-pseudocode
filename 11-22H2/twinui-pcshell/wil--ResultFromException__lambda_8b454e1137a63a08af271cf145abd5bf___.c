/*
 * XREFs of wil::ResultFromException__lambda_8b454e1137a63a08af271cf145abd5bf___ @ 0x1805B2420
 * Callers:
 *     ?PositionViewForPositionerHandoff@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIApplicationViewOperation@@W4SHELL_POSITIONER_TYPE@@PEAUIAppLayout@@PEAUIUnknown@@@Z @ 0x1805B3BE8 (-PositionViewForPositionerHandoff@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIApplicatio.c)
 * Callees:
 *     _lambda_8b454e1137a63a08af271cf145abd5bf_::operator() @ 0x1805B274C (_lambda_8b454e1137a63a08af271cf145abd5bf_--operator().c)
 */

__int64 wil::ResultFromException__lambda_8b454e1137a63a08af271cf145abd5bf___()
{
  wil *v0; // rcx
  __int64 result; // rax

  try
  {
    lambda_8b454e1137a63a08af271cf145abd5bf_::operator()();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::ResultFromCaughtException(v0);
  }
  return result;
}
