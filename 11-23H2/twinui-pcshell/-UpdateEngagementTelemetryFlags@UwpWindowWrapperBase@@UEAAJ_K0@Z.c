/*
 * XREFs of ?UpdateEngagementTelemetryFlags@UwpWindowWrapperBase@@UEAAJ_K0@Z @ 0x180068260
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_c6bb0e10952129ac716da59740f7ac9f___ @ 0x1801F6FB0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_c6bb0e10952129ac716da59740f7ac9f.c)
 */

__int64 __fastcall UwpWindowWrapperBase::UpdateEngagementTelemetryFlags(
        UwpWindowWrapperBase *this,
        __int64 a2,
        __int64 a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  int v5; // eax
  const char *v7; // r9
  __int64 v8; // rdx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v11; // [rsp+50h] [rbp+8h]
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = a3;
  v12 = a2;
  if ( *((_QWORD *)this + 12) )
  {
    if ( a2 )
    {
      v9[0] = (char *)this - 16;
      v9[1] = &v12;
      v9[2] = &v13;
      CurrentThreadId = GetCurrentThreadId();
      v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_c6bb0e10952129ac716da59740f7ac9f___(
             v4,
             CurrentThreadId,
             v9);
      if ( v5 < 0 )
      {
        try
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x5D2,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
            (const char *)(unsigned int)v5,
            v9[0]);
        }
        catch ( ... )
        {
          *(_DWORD *)(v8 + 80) = wil::details::in1diag3::Return_CaughtException(
                                   retaddr,
                                   (void *)0x5D7,
                                   (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                                   v7);
          return v11;
        }
      }
    }
  }
  return 0LL;
}
