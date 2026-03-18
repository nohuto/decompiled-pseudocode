/*
 * XREFs of xxxRegisterGhostWindow @ 0x1C0144AD4
 * Callers:
 *     NtUserRegisterGhostWindow @ 0x1C01447F0 (NtUserRegisterGhostWindow.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     InternalRemoveProp @ 0x1C0069510 (InternalRemoveProp.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     IsHungWindow @ 0x1C0076670 (IsHungWindow.c)
 *     IsWindowBeingDestroyed @ 0x1C0083884 (IsWindowBeingDestroyed.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C0144CE8 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0144D6C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C014501C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?SetGhostFNID@@YAHPEAUtagWND@@H@Z @ 0x1C0145668 (-SetGhostFNID@@YAHPEAUtagWND@@H@Z.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01456A8 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxRegisterGhostWindow(HWND a1, HWND a2)
{
  unsigned int v4; // edi
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  struct tagWND *v7; // rbx
  __int64 v8; // rax
  struct tagWND *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int128 v20; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21; // [rsp+30h] [rbp-28h]
  __int128 v22; // [rsp+38h] [rbp-20h] BYREF
  __int64 v23; // [rsp+48h] [rbp-10h]

  v4 = 0;
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    UserSetLastError(5LL, v6);
    return v4;
  }
  v7 = (struct tagWND *)HMValidateHandleNoSecure((int)a2, 1);
  if ( v7 )
  {
    v20 = 0LL;
    v21 = 0LL;
    ThreadLock((__int64)v7, (__int64 *)&v20);
    if ( (unsigned int)_ShouldGhostWindow(v7) )
    {
      if ( GetProp((__int64)v7, *(unsigned __int16 *)(gpsi + 900LL), 1u) == -1 )
      {
        if ( (unsigned int)IsHungWindow(v7) )
        {
          v8 = HMValidateHandleNoSecure((int)a1, 1);
          v9 = (struct tagWND *)v8;
          if ( v8 )
          {
            if ( *(_QWORD *)(v8 + 16) == gptiCurrent
              && **(_WORD **)(*(_QWORD *)(v8 + 136) + 8LL) == *(_WORD *)(gpsi + 900LL) )
            {
              v22 = 0LL;
              v23 = 0LL;
              ThreadLock(v8, (__int64 *)&v22);
              if ( (unsigned int)SetGhostProp(v9, a2) )
              {
                if ( (unsigned int)SetGhostProp(v7, a1) )
                {
                  SetGhostFNID(v9, 1);
                  xxxShowGhostWindow(v9, v7);
                  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v9)
                    && !(unsigned int)IsWindowBeingDestroyed((__int64)v7)
                    && (HWND)GetProp((__int64)v9, *(unsigned __int16 *)(gpsi + 900LL), 1u) == a2
                    && (HWND)GetProp((__int64)v7, *(unsigned __int16 *)(gpsi + 900LL), 1u) == a1 )
                  {
                    v4 = 1;
                    ThreadUnlock1(v14, v13, v15);
LABEL_16:
                    ThreadUnlock1(v17, v16, v18);
                    return v4;
                  }
                  SetGhostFNID(v9, 0);
                  if ( (HWND)GetProp((__int64)v7, *(unsigned __int16 *)(gpsi + 900LL), 1u) == a1 )
                    InternalRemoveProp((__int64)v7, *(unsigned __int16 *)(gpsi + 900LL), 1u);
                  xxxHideGhostWindow(v9, v7);
                }
                InternalRemoveProp((__int64)v9, *(unsigned __int16 *)(gpsi + 900LL), 1u);
              }
              ThreadUnlock1(v11, v10, v12);
            }
          }
        }
      }
    }
    v4 = 0;
    if ( GetProp((__int64)v7, *(unsigned __int16 *)(gpsi + 900LL), 1u) == -1 )
      InternalRemoveProp((__int64)v7, *(unsigned __int16 *)(gpsi + 900LL), 1u);
    goto LABEL_16;
  }
  return v4;
}
