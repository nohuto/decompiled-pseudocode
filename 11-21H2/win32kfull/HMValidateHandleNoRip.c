/*
 * XREFs of HMValidateHandleNoRip @ 0x1C00A3A40
 * Callers:
 *     EditionGetKeyStateUpdateParamsForRawInput @ 0x1C0003970 (EditionGetKeyStateUpdateParamsForRawInput.c)
 *     NtUserCsDdeUninitialize @ 0x1C0004150 (NtUserCsDdeUninitialize.c)
 *     xxxSetWindowData @ 0x1C004F920 (xxxSetWindowData.c)
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 *     FindQMsg @ 0x1C0057C00 (FindQMsg.c)
 *     DestroyWindowSmIcon @ 0x1C0060E08 (DestroyWindowSmIcon.c)
 *     _RegisterClassEx @ 0x1C0061460 (_RegisterClassEx.c)
 *     xxxCreateWindowSmIcon @ 0x1C00A1774 (xxxCreateWindowSmIcon.c)
 *     xxxClientLoadImage @ 0x1C00A2F18 (xxxClientLoadImage.c)
 *     xxxClientLoadMenu @ 0x1C00A3310 (xxxClientLoadMenu.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00A36F0 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxClientCopyImage @ 0x1C00A387C (xxxClientCopyImage.c)
 *     xxxEventWndProc @ 0x1C00A3980 (xxxEventWndProc.c)
 *     DWP_GetIcon @ 0x1C010836C (DWP_GetIcon.c)
 *     xxxSetClassData @ 0x1C0115230 (xxxSetClassData.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0145C84 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C014FD40 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     _GetWindowIcon @ 0x1C0150580 (_GetWindowIcon.c)
 *     ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01ED300 (-DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01EDC90 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     NtUserUpdateInstance @ 0x1C0200160 (NtUserUpdateInstance.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C0219D30 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C0219EB8 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C021A050 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     xxxMNKeyDown @ 0x1C0231A20 (xxxMNKeyDown.c)
 *     xxxSetClassIcon @ 0x1C0239060 (xxxSetClassIcon.c)
 *     xxxRealDrawMenuItem @ 0x1C0248CAC (xxxRealDrawMenuItem.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HMValidateHandleNoRip(__int64 a1, char a2)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  __int64 *v6; // rsi
  __int16 v7; // ax
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rdx
  __int16 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax

  v3 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v5 = gSharedInfo[1] + (unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2]);
    v6 = (__int64 *)HMPkheFromPhe(v5);
    v7 = WORD1(a1) & 0x7FFF;
    if ( (WORD1(a1) & 0x7FFF) == *(_WORD *)(v5 + 26) || v7 == 0x7FFF || !v7 && PsGetCurrentProcessWow64Process(0x7FFFLL) )
    {
      if ( (*(_BYTE *)(v5 + 25) & 1) == 0 && *(_BYTE *)(v5 + 24) == a2 )
        v3 = *v6;
      if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 488) & 0x20000000) != 0 )
      {
        if ( !(unsigned int)ValidateHandleSecure(a1, 3LL) )
          v3 = 0LL;
      }
      else
      {
        v8 = -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0);
        v3 &= v8;
      }
      if ( *(char *)(v5 + 25) < 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
        if ( CurrentProcessWin32Process )
        {
          v11 = gahti[12 * *(unsigned __int8 *)(v5 + 24) + 6];
          if ( (v11 & 2) != 0 )
          {
            v12 = v6[1];
          }
          else
          {
            if ( (v11 & 1) == 0 )
              return v3;
            v13 = v6[1];
            if ( !v13 )
              return v3;
            v12 = *(_QWORD *)(v13 + 424);
          }
          if ( v12 && v12 != CurrentProcessWin32Process )
            return 0LL;
        }
      }
    }
  }
  return v3;
}
