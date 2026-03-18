/*
 * XREFs of xxxGetTitleBarInfoEx @ 0x1C000C37C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 * Callees:
 *     DwmSyncGetTitleBarInfo @ 0x1C000C49C (DwmSyncGetTitleBarInfo.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0062F3C (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00D3B08 (IsToplevelWindowDesktopComposed.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     xxxCalcCaptionButton @ 0x1C022BDD0 (xxxCalcCaptionButton.c)
 */

__int64 __fastcall xxxGetTitleBarInfoEx(struct tagWND *a1, struct tagTITLEBARINFO *a2)
{
  unsigned int v3; // esi
  void *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  NTSTATUS TitleBarInfo; // ebx
  __int64 CurrentThreadDpiAwarenessContext; // r15
  char *v12; // rbx
  __int64 v13; // rbp
  int v14; // eax
  ULONG v16; // eax
  _DWORD *v17; // rsi
  int v18; // ebx
  int v19; // edi
  int v20; // [rsp+70h] [rbp+18h] BYREF
  __int64 v21; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v20 = 0;
  if ( !(unsigned int)IsToplevelWindowDesktopComposed() )
    goto LABEL_9;
  v5 = (void *)ReferenceDwmApiPort();
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  TitleBarInfo = DwmSyncGetTitleBarInfo(v5);
  EnterCrit(1LL, 0LL);
  if ( TitleBarInfo < 0 )
  {
    v16 = RtlNtStatusToDosError(TitleBarInfo);
    UserSetLastError(v16);
    v14 = 1;
  }
  else
  {
    v3 = 1;
    v21 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
    CurrentThreadDpiAwarenessContext = (unsigned int)W32GetCurrentThreadDpiAwarenessContext();
    PhysicalToLogicalDPIRect((char *)a2 + 4, (char *)a2 + 4, CurrentThreadDpiAwarenessContext, &v21);
    v12 = (char *)a2 + 44;
    v13 = 6LL;
    do
    {
      PhysicalToLogicalDPIRect(v12, v12, (unsigned int)CurrentThreadDpiAwarenessContext, &v21);
      v12 += 16;
      --v13;
    }
    while ( v13 );
    v14 = v20;
  }
  if ( !v14 )
  {
LABEL_9:
    memset_0((char *)a2 + 20, 0, 0x78uLL);
    xxxCommonGetTitleBarInfo(a1, a2);
    v17 = (_DWORD *)((char *)a2 + 28);
    v18 = 2;
    v19 = (_DWORD)a2 + 76;
    do
    {
      if ( (*v17 & 0x8000) == 0 )
      {
        LOWORD(v20) = 0;
        LODWORD(v21) = 0;
        xxxCalcCaptionButton((_DWORD)a1, v18, (unsigned int)&v20, v19, (__int64)&v21, 1);
      }
      ++v18;
      v19 += 16;
      ++v17;
    }
    while ( v18 <= 5 );
    return 1;
  }
  return v3;
}
