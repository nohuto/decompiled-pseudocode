/*
 * XREFs of NtUserMinMaximize @ 0x1C01D79E0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x1C00C3EC4 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 */

__int64 __fastcall NtUserMinMaximize(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // edi
  __int64 v12; // rbx
  int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int128 v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+30h] [rbp-18h]

  v18 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  v11 = 0;
  v12 = v6;
  if ( v6 )
  {
    v8 = *(_QWORD *)(v6 + 40);
    v7 = (*(_WORD *)(v8 + 42) & 0x2FFFu) - 669;
    if ( (v7 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v18 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v18;
      *((_QWORD *)&v18 + 1) = v6;
      HMLockObject(v6);
      LOBYTE(v11) = a3 != 0;
      v13 = v11 | 0x10;
      if ( a2 != 3 )
        v13 = v11;
      xxxMinMaximize(v12, a2, gdwPUDFlags & 0x10000 | (unsigned int)v13);
      ThreadUnlock1(v15, v14, v16);
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return 0LL;
}
