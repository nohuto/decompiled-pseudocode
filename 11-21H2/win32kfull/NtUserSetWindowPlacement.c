/*
 * XREFs of NtUserSetWindowPlacement @ 0x1C0104480
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxSetWindowPlacement @ 0x1C01045D8 (xxxSetWindowPlacement.c)
 */

__int64 __fastcall NtUserSetWindowPlacement(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  struct tagWND *v6; // rdi
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v13; // [rsp+38h] [rbp-50h] BYREF
  __int64 v14; // [rsp+48h] [rbp-40h]
  __int128 v15; // [rsp+50h] [rbp-38h]
  __int128 v16; // [rsp+60h] [rbp-28h]
  __int64 v17; // [rsp+70h] [rbp-18h]
  int v18; // [rsp+78h] [rbp-10h]

  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  v13 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = (struct tagWND *)v4;
  v7 = 0;
  if ( v4 )
  {
    v5 = (*(_WORD *)(*(_QWORD *)(v4 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v5 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v13;
      *((_QWORD *)&v13 + 1) = v4;
      HMLockObject(v4);
      if ( a2 >= MmUserProbeAddress )
        a2 = MmUserProbeAddress;
      v15 = *(_OWORD *)a2;
      v16 = *(_OWORD *)(a2 + 16);
      v17 = *(_QWORD *)(a2 + 32);
      v18 = *(_DWORD *)(a2 + 40);
      if ( (_DWORD)v15 == 44 || *(_WORD *)(gptiCurrent + 632LL) < 0x400u )
        v7 = xxxSetWindowPlacement(v6);
      else
        UserSetLastError(87LL, v8);
      ThreadUnlock1(v10, v9, v11);
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v7;
}
