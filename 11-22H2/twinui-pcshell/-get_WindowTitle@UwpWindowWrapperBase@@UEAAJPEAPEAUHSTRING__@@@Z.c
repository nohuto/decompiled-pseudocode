/*
 * XREFs of ?get_WindowTitle@UwpWindowWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180061E30
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_02dfdf62ff9979f2c4eddec1c0b19b0c___ @ 0x1801F6540 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_02dfdf62ff9979f2c4eddec1c0b19b0c.c)
 */

__int64 __fastcall UwpWindowWrapperBase::get_WindowTitle(UwpWindowWrapperBase *this, HSTRING *a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx
  int v4; // eax
  const char *v6; // r9
  __int64 v7; // rdx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v10; // [rsp+40h] [rbp+8h]
  HSTRING *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v8[0] = &v11;
  v8[1] = (char *)this - 8;
  CurrentThreadId = GetCurrentThreadId();
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_02dfdf62ff9979f2c4eddec1c0b19b0c___(
         v3,
         CurrentThreadId,
         v8);
  if ( v4 < 0 )
  {
    try
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x44A,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v4,
        v8[0]);
    }
    catch ( ... )
    {
      *(_DWORD *)(v7 + 64) = wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x44E,
                               (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                               v6);
      return v10;
    }
  }
  return 0LL;
}
