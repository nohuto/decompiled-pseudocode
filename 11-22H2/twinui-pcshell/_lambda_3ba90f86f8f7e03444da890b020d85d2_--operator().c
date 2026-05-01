/*
 * XREFs of _lambda_3ba90f86f8f7e03444da890b020d85d2_::operator() @ 0x180061C78
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_3ba90f86f8f7e03444da890b020d85d2___::Run @ 0x180061C50 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_3ba90f86f8f7e03444da890b020d85d2___--.c)
 * Callees:
 *     ?PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x1800A01EC (-PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 */

__int64 lambda_3ba90f86f8f7e03444da890b020d85d2_::operator()()
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
                           (void *)0x143,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v0);
  }
  return result;
}
