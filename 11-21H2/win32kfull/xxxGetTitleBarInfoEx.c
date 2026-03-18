/*
 * XREFs of xxxGetTitleBarInfoEx @ 0x1C00CC5FC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 * Callees:
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0066D38 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C006FF18 (IsToplevelWindowDesktopComposed.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     DwmSyncGetTitleBarInfo @ 0x1C00CC71C (DwmSyncGetTitleBarInfo.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     xxxCalcCaptionButton @ 0x1C0242FA8 (xxxCalcCaptionButton.c)
 */

__int64 __fastcall xxxGetTitleBarInfoEx(struct tagWND *a1, struct tagTITLEBARINFO *a2)
{
  unsigned int v3; // esi
  __int64 v5; // rcx
  void *v6; // rbx
  __int64 v7; // rcx
  NTSTATUS TitleBarInfo; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 CurrentThreadDpiAwarenessContext; // r15
  char *v12; // rbx
  __int64 v13; // rbp
  int v14; // eax
  ULONG v16; // eax
  __int64 v17; // rdx
  _DWORD *v18; // rsi
  int v19; // ebx
  int v20; // edi
  int v21; // [rsp+70h] [rbp+18h] BYREF
  __int64 v22; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v21 = 0;
  if ( !(unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
    goto LABEL_9;
  v6 = (void *)ReferenceDwmApiPort(v5);
  UserSessionSwitchLeaveCrit(v7);
  TitleBarInfo = DwmSyncGetTitleBarInfo(v6);
  EnterCrit(1LL, 0LL);
  if ( TitleBarInfo < 0 )
  {
    v16 = RtlNtStatusToDosError(TitleBarInfo);
    UserSetLastError(v16, v17);
    v14 = 1;
  }
  else
  {
    v3 = 1;
    v22 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
    CurrentThreadDpiAwarenessContext = (unsigned int)W32GetCurrentThreadDpiAwarenessContext(v10, v9);
    PhysicalToLogicalDPIRect((char *)a2 + 4, (char *)a2 + 4, CurrentThreadDpiAwarenessContext, &v22);
    v12 = (char *)a2 + 44;
    v13 = 6LL;
    do
    {
      PhysicalToLogicalDPIRect(v12, v12, (unsigned int)CurrentThreadDpiAwarenessContext, &v22);
      v12 += 16;
      --v13;
    }
    while ( v13 );
    v14 = v21;
  }
  if ( !v14 )
  {
LABEL_9:
    memset((char *)a2 + 20, 0, 0x78uLL);
    xxxCommonGetTitleBarInfo(a1, a2);
    v18 = (_DWORD *)((char *)a2 + 28);
    v19 = 2;
    v20 = (_DWORD)a2 + 76;
    do
    {
      if ( (*v18 & 0x8000) == 0 )
      {
        LOWORD(v21) = 0;
        LODWORD(v22) = 0;
        xxxCalcCaptionButton((_DWORD)a1, v19, (unsigned int)&v21, v20, (__int64)&v22, 1);
      }
      ++v19;
      v20 += 16;
      ++v18;
    }
    while ( v19 <= 5 );
    return 1;
  }
  return v3;
}
