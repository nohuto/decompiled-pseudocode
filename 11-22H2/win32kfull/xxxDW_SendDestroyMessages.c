/*
 * XREFs of xxxDW_SendDestroyMessages @ 0x1C00EB160
 * Callers:
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 *     xxxDW_SendDestroyMessages @ 0x1C00EB160 (xxxDW_SendDestroyMessages.c)
 * Callees:
 *     xxxDW_SendDestroyMessages @ 0x1C00EB160 (xxxDW_SendDestroyMessages.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C00EB2AC (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C01FCC58 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 */

void __fastcall xxxDW_SendDestroyMessages(const struct tagWND *a1)
{
  __int64 v2; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 v14; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+30h] [rbp-28h]
  __int128 v16; // [rsp+38h] [rbp-20h] BYREF
  __int64 v17; // [rsp+48h] [rbp-10h]

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  xxxMoveFocusAway(a1);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  v4 = *(_QWORD *)(CurrentProcessWin32Process + 656);
  if ( v4 && a1 == *(const struct tagWND **)(v4 + 112) )
  {
    xxxDisownClipboard(a1);
  }
  else if ( grpWinStaList && a1 == *(const struct tagWND **)(grpWinStaList + 112LL) )
  {
    HMAssignmentUnlock(grpWinStaList + 112LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 232LL) & 0x20) != 0 )
  {
    xxxSendMessage(a1, 626LL, 0LL, 0LL);
    *(_BYTE *)(*((_QWORD *)a1 + 5) + 232LL) &= ~0x20u;
  }
  xxxSendMessage(a1, 2LL, 0LL, 0LL);
  v5 = *((_QWORD *)a1 + 14);
  if ( v5 )
  {
    do
    {
      v6 = *(_QWORD *)(v5 + 88);
      ThreadLock(v6, &v14);
      ThreadLockAlways(v5, &v16);
      xxxDW_SendDestroyMessages(v5, v7);
      ThreadUnlock1(v9, v8, v10);
      v5 = v6;
    }
    while ( ThreadUnlock1(v12, v11, v13) && v6 );
  }
  xxxMoveFocusAway(a1);
}
