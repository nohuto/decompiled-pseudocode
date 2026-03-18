/*
 * XREFs of NtUserSetSystemCursor @ 0x1C01DCAB0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002D0F8 (HMValidateHandle.c)
 *     ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C01A8EE0 (-zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 */

__int64 __fastcall NtUserSetSystemCursor(__int64 a1, __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  struct tagCURSOR *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  EnterCrit(0LL, 0LL);
  v4 = HMValidateHandle(a1, 3u);
  v9 = 0LL;
  v10 = (struct tagCURSOR *)v4;
  if ( v4 )
  {
    v15 = 0LL;
    v16 = 0LL;
    ThreadLock(v4, &v15);
    v9 = (unsigned __int8)zzzSetSystemCursor(v10, a2);
    ThreadUnlock1(v12, v11, v13);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
