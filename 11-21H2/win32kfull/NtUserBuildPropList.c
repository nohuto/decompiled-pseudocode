/*
 * XREFs of NtUserBuildPropList @ 0x1C00E56A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     _BuildPropList @ 0x1C00E5788 (_BuildPropList.c)
 *     ??0EnterLeaveCritByVelocity@@QEAA@W4CritOptType@@W4HandleToObjILCheck@@@Z @ 0x1C00E6220 (--0EnterLeaveCritByVelocity@@QEAA@W4CritOptType@@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserBuildPropList(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ebx
  __int64 v16; // [rsp+20h] [rbp-28h] BYREF
  __int128 v17; // [rsp+28h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-10h]

  v17 = 0LL;
  v18 = 0LL;
  EnterLeaveCritByVelocity::EnterLeaveCritByVelocity(&v16, 3LL, 0LL);
  v9 = ValidateHwnd(a1);
  if ( v9 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v17 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v17;
    *((_QWORD *)&v17 + 1) = v9;
    HMLockObject(v9);
    if ( a2 )
      v14 = BuildPropList(v9, a3, a2, a4);
    else
      v14 = -1073741816;
    ThreadUnlock1(v12, v11, v13);
  }
  else
  {
    v14 = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v8);
  return v14;
}
