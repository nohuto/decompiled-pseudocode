/*
 * XREFs of wil::ResultFromException__lambda_1345ebecd25b457b52b4ea936c5f1c91___ @ 0x1804EA340
 * Callers:
 *     ShellPositionerManager::DoWorkForEachMonitor__lambda_818fa40c33a0f4ba0d57a43a0a00bca6___ @ 0x1804E9FD0 (ShellPositionerManager--DoWorkForEachMonitor__lambda_818fa40c33a0f4ba0d57a43a0a00bca6___.c)
 * Callees:
 *     _lambda_1345ebecd25b457b52b4ea936c5f1c91_::operator() @ 0x1804EA80C (_lambda_1345ebecd25b457b52b4ea936c5f1c91_--operator().c)
 */

__int64 wil::ResultFromException__lambda_1345ebecd25b457b52b4ea936c5f1c91___()
{
  wil *v0; // rcx
  __int64 result; // rax

  try
  {
    lambda_1345ebecd25b457b52b4ea936c5f1c91_::operator()();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::ResultFromCaughtException(v0);
  }
  return result;
}
