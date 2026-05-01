/*
 * XREFs of _lambda_a6b32a0b6616cd8ad7d644a35fbdc2e5_::operator() @ 0x1804125E0
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a6b32a0b6616cd8ad7d644a35fbdc2e5___::Run @ 0x180416A10 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_a6b32a0b6616cd8ad7d644a35fbdc2e5___--.c)
 * Callees:
 *     ?PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x180415C18 (-PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 */

__int64 lambda_a6b32a0b6616cd8ad7d644a35fbdc2e5_::operator()()
{
  const char *v0; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    UwpWindowWrapperBase::PushBoundsToWindow();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x139,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v0);
  }
  return result;
}
