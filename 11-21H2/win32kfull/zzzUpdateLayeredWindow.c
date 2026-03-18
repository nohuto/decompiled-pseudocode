/*
 * XREFs of zzzUpdateLayeredWindow @ 0x1C008FE60
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C0082DD4 (xxxSetLayeredWindow.c)
 *     NtUserUpdateLayeredWindow @ 0x1C008FA50 (NtUserUpdateLayeredWindow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C012E0FC (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     zzzUpdateShadowAlpha @ 0x1C012E250 (zzzUpdateShadowAlpha.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C01E22D4 (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     zzzMoveShadow @ 0x1C0239998 (zzzMoveShadow.c)
 * Callees:
 *     UpdateSprite @ 0x1C0020D60 (UpdateSprite.c)
 *     GetRedirectionBitmap @ 0x1C0049330 (GetRedirectionBitmap.c)
 *     GreClientRgnUpdated @ 0x1C00496B4 (GreClientRgnUpdated.c)
 *     GreUpdateSpriteVisRgn @ 0x1C004A690 (GreUpdateSpriteVisRgn.c)
 *     DwmChildRectChange @ 0x1C006BCDC (DwmChildRectChange.c)
 *     DirtyVisRgnTrackers @ 0x1C006C250 (DirtyVisRgnTrackers.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     OffsetChildren @ 0x1C00848F0 (OffsetChildren.c)
 *     RecreateRedirectionBitmap @ 0x1C008F778 (RecreateRedirectionBitmap.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C0090220 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     GetRedirectionFlags @ 0x1C0090390 (GetRedirectionFlags.c)
 *     UnsetRedirectedWindow @ 0x1C00B40A4 (UnsetRedirectedWindow.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00B4214 (DeleteOrSetRedirectionBitmap.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01E216C (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     InvalidateGDIWindows @ 0x1C01E30E0 (InvalidateGDIWindows.c)
 */

__int64 __fastcall zzzUpdateLayeredWindow(
        struct tagWND *a1,
        HDC a2,
        const struct tagPOINT *a3,
        struct tagSIZE *a4,
        HDC a5,
        struct tagPOINT *a6,
        unsigned int a7,
        struct _BLENDFUNCTION *a8,
        unsigned int a9,
        struct tagRECT *a10)
{
  HBITMAP v10; // rdi
  struct tagSIZE *v11; // r14
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rcx
  BOOL v18; // esi
  char RedirectionFlags; // al
  unsigned int v20; // r12d
  _DWORD *v21; // rdx
  int v23; // r15d
  int v24; // eax
  int updated; // r14d
  __int64 v26; // r8
  int v27; // esi
  __int64 v28; // rdx
  int v29; // r8d
  unsigned int v30; // r13d
  int v31; // ecx
  int v32; // [rsp+60h] [rbp-71h] BYREF
  int v33; // [rsp+64h] [rbp-6Dh] BYREF
  HBITMAP v34; // [rsp+68h] [rbp-69h] BYREF
  struct tagSIZE *v35; // [rsp+70h] [rbp-61h]
  HDC v36; // [rsp+78h] [rbp-59h]
  struct tagRECT *v37; // [rsp+80h] [rbp-51h]
  struct _BLENDFUNCTION *v38; // [rsp+88h] [rbp-49h]
  struct tagPOINT *v39; // [rsp+90h] [rbp-41h]
  struct tagPOINT *v40; // [rsp+98h] [rbp-39h]
  HDC v41; // [rsp+A0h] [rbp-31h]
  __int128 v42; // [rsp+A8h] [rbp-29h]
  __int128 v43; // [rsp+B8h] [rbp-19h]

  v10 = 0LL;
  v32 = 0;
  v11 = a4;
  v33 = 0;
  v36 = a5;
  v39 = a6;
  v38 = a8;
  v37 = a10;
  v14 = *((_QWORD *)a1 + 5);
  v35 = a4;
  v40 = (struct tagPOINT *)a3;
  v41 = a2;
  v15 = *(_OWORD *)(v14 + 88);
  v34 = 0LL;
  v16 = *(_OWORD *)(v14 + 104);
  v42 = v15;
  v43 = v16;
  if ( (unsigned int)IsWindowDesktopComposed(a1) && (*((_DWORD *)a1 + 80) & 0x8000) != 0 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 0x20) != 0 )
      UnsetRedirectedWindow(a1);
    *((_DWORD *)a1 + 80) &= ~0x8000u;
  }
  v17 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v17 + 26) & 8) != 0 && (*(_DWORD *)(v17 + 232) & 2) == 0 )
  {
    v18 = GetRedirectionBitmap((__int64)a1) != 0;
    RedirectionFlags = GetRedirectionFlags(a1);
    if ( !v18 || (RedirectionFlags & 8) != 0 )
    {
      v20 = a9;
      if ( (a9 & 8) != 0 )
      {
        if ( v11 )
        {
          v21 = (_DWORD *)*((_QWORD *)a1 + 5);
          if ( v11->cx != v21[24] - v21[22] || v11->cy != v21[25] - v21[23] )
          {
            UserSetLastError(1462LL, (__int64)v21);
            return 2151546881LL;
          }
        }
        v20 = a9 & 0xFFFFFFF7;
      }
      UpdateWindowRects(a1, a3, v11, &v32, &v33);
      v23 = v32;
      if ( v18 && v32 )
      {
        v24 = RecreateRedirectionBitmap(a1, 0, 0, 0, 0, (HSURF *)&v34);
        v10 = v34;
        updated = v24;
        if ( v24 < 0 )
          goto LABEL_44;
        v11 = v35;
      }
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      v27 = v33;
      if ( v23 || v33 )
      {
        if ( (unsigned int)IsWindowDesktopComposed(a1) )
        {
          DwmChildRectChange((__int64 *)a1, v28, v29);
          DirtyVisRgnTrackers(a1);
        }
        if ( *((_DWORD *)&WPP_MAIN_CB.DeviceQueue.1 + 1) )
        {
          InvalidateGDIWindows(a1);
          GreClientRgnUpdated(1);
        }
        GreUpdateSpriteVisRgn(*(HDEV *)(gpDispInfo + 40LL), 0);
      }
      v30 = v20 | 0x20000000;
      if ( !v36 )
        v30 = v20;
      updated = UpdateSprite(*(HDEV *)(gpDispInfo + 40LL), a1, v26, v41, v40, v11, v36, v39, a7, v38, v30, v37);
      if ( updated >= 0 && v27 )
        OffsetChildren(
          a1,
          *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL) - v42,
          *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL) - DWORD1(v42),
          0LL);
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      if ( updated >= 0 )
      {
        if ( v10 )
          DeleteOrSetRedirectionBitmap(a1, v10, 1LL);
        if ( v23 || v27 )
          GenerateMouseMove(0LL);
        if ( (v30 & 0x20) == 0 || v23 || v27 )
        {
          v31 = 3;
          if ( !gdwDeferWinEvent )
            v31 = 1;
          xxxWindowEvent(0x800Bu, a1, 0, 0, v31);
        }
        return (unsigned int)updated;
      }
LABEL_44:
      *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL) = v42;
      *(_OWORD *)(*((_QWORD *)a1 + 5) + 104LL) = v43;
      if ( v10 && !(unsigned int)RestoreOldRedirectionBitmap(a1, v10) )
        DeleteOrSetRedirectionBitmap(a1, v10, 1LL);
      return (unsigned int)updated;
    }
  }
  return 3221225485LL;
}
