/*
 * XREFs of ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180011C90
 * Callers:
 *     ?OnStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18000B400 (-OnStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 * Callees:
 *     std::forward_list_IAudioSessionInfo___std::allocator_IAudioSessionInfo_____::remove_if__lambda_ec276c8d07c939ab0e4b590e5bf4eac5___ @ 0x18000F2E0 (std--forward_list_IAudioSessionInfo___std--allocator_IAudioSessionInfo_____--remove_if__lambda_e.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDuckingManager::OnStateChanged(
        CDuckingManager *this,
        struct IAudioSessionInfo *a2,
        enum _AudioSessionState a3,
        enum _AudioSessionState a4)
{
  __int64 result; // rax
  const char *v7; // r9
  HANDLE ProcessHeap; // rax
  _QWORD *v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IAudioSessionInfo *v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = a2;
  if ( *((_BYTE *)this + 448) )
    return 0LL;
  try
  {
    if ( (*(unsigned int (**)(void))(*(_QWORD *)a2 + 40LL))() )
      return 0LL;
    if ( !(*(unsigned int (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v11 + 56LL))(v11)
      && !(*(unsigned int (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v11 + 48LL))(v11) )
    {
      if ( a4 == AudioSessionStateActive )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
        ProcessHeap = GetProcessHeap();
        v9 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
        v9[1] = v11;
        *v9 = *((_QWORD *)this + 8);
        *((_QWORD *)this + 8) = v9;
        if ( this == (CDuckingManager *)-24LL )
          return 0LL;
      }
      else
      {
        if ( a4 )
          return 0LL;
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
        std::forward_list_IAudioSessionInfo___std::allocator_IAudioSessionInfo_____::remove_if__lambda_ec276c8d07c939ab0e4b590e5bf4eac5___(
          (char ***)this + 8,
          &v11);
        if ( this == (CDuckingManager *)-24LL )
          return 0LL;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
      return 0LL;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x108,
                           (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
                           v7);
  }
  return result;
}
