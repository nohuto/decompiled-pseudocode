/*
 * XREFs of xxxSetLayeredWindow @ 0x1C00CEB30
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     ComposeWindow @ 0x1C00C8A84 (ComposeWindow.c)
 *     xxxSetWindowStyle @ 0x1C00EB620 (xxxSetWindowStyle.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01BBFB0 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 * Callees:
 *     GreGetSprite @ 0x1C0013DE0 (GreGetSprite.c)
 *     xxxRedrawWindow @ 0x1C0031604 (xxxRedrawWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00317F0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     SendDwmIconChange @ 0x1C00625D0 (SendDwmIconChange.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x1C0077D38 (-GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     GreUpdateSpriteClipRgn @ 0x1C0077DA8 (GreUpdateSpriteClipRgn.c)
 *     DwmAsyncTextChange @ 0x1C0095860 (DwmAsyncTextChange.c)
 *     ?IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z @ 0x1C00A7840 (-IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C8EAC (DwmAsyncChildStyleChange.c)
 *     CreateVisRgnTracker @ 0x1C00CD0F8 (CreateVisRgnTracker.c)
 *     CreateSprite @ 0x1C00CD224 (CreateSprite.c)
 *     IsWindowBeingDestroyed @ 0x1C00CF084 (IsWindowBeingDestroyed.c)
 *     _GetTopLevelWindow @ 0x1C00CFFB0 (_GetTopLevelWindow.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00D3B08 (IsToplevelWindowDesktopComposed.c)
 *     TrackLayeredZorder @ 0x1C00D3BE0 (TrackLayeredZorder.c)
 *     IsDesktopWindow @ 0x1C00D3DF0 (IsDesktopWindow.c)
 *     UpdateWindowSpriteMonitor @ 0x1C00D3F28 (UpdateWindowSpriteMonitor.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x1C00F403C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C0118F90 (UserGetRedirectedWindowOrigin.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 *     zzzUpdateLayeredWindow @ 0x1C01BD720 (zzzUpdateLayeredWindow.c)
 *     xxxUpdateWindows @ 0x1C02151D0 (xxxUpdateWindows.c)
 */

__int64 __fastcall xxxSetLayeredWindow(struct tagWND **a1, int a2, __int64 *a3)
{
  int v3; // esi
  struct tagWND *TopLevelWindow; // rax
  Gre::Base *v8; // rcx
  __int64 v9; // r8
  __int64 result; // rax
  unsigned int updated; // esi
  tagWND *v12; // rcx
  HRGN ExplicitClipRgn; // rax
  Gre::Base *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  void *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 Sprite; // rax
  struct tagWND *v22; // rcx
  struct tagWND *v23; // rax
  __int64 v24; // rdi
  int v25; // ebx
  void *v26; // rax
  __int64 DCEx; // rax
  __int64 v28; // rbx
  struct tagWND *v29; // rcx
  __int64 RectRgnIndirect; // rax
  struct tagWND *v31; // rbx
  HRGN v32; // r14
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int128 v36; // [rsp+60h] [rbp-20h] BYREF
  __int64 v37; // [rsp+70h] [rbp-10h]
  __int64 v38; // [rsp+C0h] [rbp+40h] BYREF
  int v39; // [rsp+C8h] [rbp+48h] BYREF
  int v40; // [rsp+CCh] [rbp+4Ch]

  v3 = 0;
  if ( a3 )
    *a3 = 0LL;
  TopLevelWindow = (struct tagWND *)GetTopLevelWindow(a1);
  if ( TopLevelWindow
    && (TopLevelWindow == (struct tagWND *)a1
     || *((_WORD *)a1 + 128) >= 0x602u
     || IsChildWindowDpiIsolationEnabled((struct tagWND *)a1, a1[13])
     && IsChildWindowDpiBoundary((const struct tagWND *)a1)) )
  {
    v3 = 1;
  }
  if ( (!(unsigned int)IsDesktopWindow(a1) || !(unsigned int)IsWindowDesktopComposed(v8)) && !v3 )
    return 2151546883LL;
  if ( (*((_DWORD *)a1[5] + 58) & 2) == 0 )
  {
    if ( !(unsigned int)IsWindowBeingDestroyed(a1) )
    {
      result = CreateSprite(*(HDEV *)(gpDispInfo + 40LL), (__int64)a1, (struct tagRECT *)(v9 + 88), a3);
      updated = result;
      if ( (int)result >= 0 )
      {
        SetOrClrWF(1LL, a1, 2568LL, 1LL);
        CreateVisRgnTracker((struct tagWND *)a1, 1);
        TrackLayeredZorder((struct tagWND *)a1);
        if ( (unsigned int)IsTopLevelWindow(a1) )
        {
          ExplicitClipRgn = tagWND::GetExplicitClipRgn(v12);
          if ( ExplicitClipRgn )
            GreUpdateSpriteClipRgn(v14, (HWND)*a1, ExplicitClipRgn, 0);
        }
        v15 = ValidateHmonitorNoRip(*((_QWORD *)a1[5] + 32));
        UpdateWindowSpriteMonitor(a1, v15);
        if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
        {
          SendDwmIconChange((ULONG_PTR)a1);
          v16 = (__int64)*a1;
          v18 = (void *)ReferenceDwmApiPort(v17);
          DwmAsyncTextChange(v18, v16);
        }
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v38);
        zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 17, 0LL);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v38, v19, v20);
        if ( (*((_BYTE *)a1[5] + 31) & 0x10) != 0 && a2 )
        {
          DCEx = _GetDCEx(a1[13], 0LL, 3LL);
          v28 = DCEx;
          if ( DCEx )
          {
            v38 = 0LL;
            UserGetRedirectedWindowOrigin(DCEx, &v38);
            v29 = a1[5];
            v39 = *((_DWORD *)v29 + 22) - v38;
            v40 = *((_DWORD *)v29 + 23) - HIDWORD(v38);
            updated = zzzUpdateLayeredWindow((struct tagWND *)a1, v28, (__int64)&v39, 0, 0LL, 12, 0LL);
            _ReleaseDC(v28);
          }
          RectRgnIndirect = GreCreateRectRgnIndirect((char *)a1[5] + 88);
          v31 = a1[13];
          v32 = (HRGN)RectRgnIndirect;
          v37 = 0LL;
          v36 = 0LL;
          if ( v31 )
          {
            ThreadLock(v31, &v36);
            GreOffsetRgn(
              v32,
              (unsigned int)-*(_DWORD *)(*((_QWORD *)v31 + 5) + 104LL),
              (unsigned int)-*(_DWORD *)(*((_QWORD *)v31 + 5) + 108LL));
          }
          xxxRedrawWindow(v31, 0LL, (__int64)v32, 1157);
          if ( v31 )
            ThreadUnlock1(v34, v33, v35);
          xxxUpdateWindows((struct tagWND *)a1, v32);
          GreDeleteObject(v32);
        }
        return updated;
      }
      return result;
    }
    return 2151546883LL;
  }
  Sprite = GreGetSprite(v8, (HWND)*a1);
  v22 = a1[5];
  *((_DWORD *)v22 + 58) &= ~2u;
  *((_DWORD *)a1 + 80) |= 0x8000u;
  if ( a3 )
    *a3 = Sprite;
  v23 = a1[5];
  v24 = (__int64)*a1;
  v25 = *((_DWORD *)v23 + 58);
  v26 = (void *)ReferenceDwmApiPort(v22);
  DwmAsyncChildStyleChange(v26, v24, -268435456, v25);
  return 0LL;
}
