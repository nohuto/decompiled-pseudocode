/*
 * XREFs of NtUserDisableImmersiveOwner @ 0x1C01F2550
 * Callers:
 *     <none>
 * Callees:
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     IsWindowBeingDestroyed @ 0x1C0083884 (IsWindowBeingDestroyed.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00AECA8 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C01000F4 (IsImmersiveBandOrShellManaged.c)
 */

__int64 __fastcall NtUserDisableImmersiveOwner(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v10 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = v2;
  if ( v2 )
  {
    *(_QWORD *)&v10 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v10;
    *((_QWORD *)&v10 + 1) = v2;
    HMLockObject(v2);
    if ( (unsigned int)IsImmersiveBandOrShellManaged(v5)
      && IsTopLevelWindow(v5)
      && !(unsigned int)IsWindowBeingDestroyed(v5)
      && (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x18) == 0x10
      && ((unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 424LL))
       || *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(*(_QWORD *)(v5 + 16) + 424LL))
      && !(unsigned int)xxxEnableWindowWorker((struct tagWND *)v5, 0) )
    {
      *(_DWORD *)(v5 + 320) |= 0x100u;
      v4 = 1LL;
    }
    else
    {
      UserSetLastError(5LL, v6);
    }
    ThreadUnlock1(v7, v6, v8);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
