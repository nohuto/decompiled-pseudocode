/*
 * XREFs of _lambda_dd11dfcdb88fd6b586045c63ee127ae3_::operator() @ 0x1801F8D44
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_dd11dfcdb88fd6b586045c63ee127ae3___::Run @ 0x1801F9AF0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_dd11dfcdb88fd6b586045c63ee127ae3___--.c)
 * Callees:
 *     ?TryPushWindowResizingState@UwpWindowWrapperBase@@AEAAXXZ @ 0x1800A0E34 (-TryPushWindowResizingState@UwpWindowWrapperBase@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_dd11dfcdb88fd6b586045c63ee127ae3_::operator()(__int64 a1)
{
  UwpWindowWrapperBase *v2; // rcx
  _DWORD *v3; // rax
  const char *v4; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(UwpWindowWrapperBase **)a1;
  v3 = *(_DWORD **)(a1 + 8);
  LOBYTE(v3) = *v3 == 1;
  *((_BYTE *)v2 + 479) = (_BYTE)v3;
  try
  {
    UwpWindowWrapperBase::TryPushWindowResizingState(v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x468,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v4);
  }
  return result;
}
