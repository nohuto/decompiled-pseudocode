/*
 * XREFs of ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C012E0FC
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0043774 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxAddShadow @ 0x1C012DDE0 (xxxAddShadow.c)
 * Callees:
 *     zzzEndDeferWinEventNotify @ 0x1C0048944 (zzzEndDeferWinEventNotify.c)
 *     zzzUpdateLayeredWindow @ 0x1C008FE60 (zzzUpdateLayeredWindow.c)
 *     _GetLayeredWindowAttributes @ 0x1C012E478 (_GetLayeredWindowAttributes.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C012E518 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzApplyShadow(struct tagWND *a1, struct tagWND *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // r8
  unsigned int v7; // ebx
  HDC CompatibleDC; // rax
  HDC v10; // rdi
  HBITMAP WindowShadow; // r14
  __int64 v12; // rdx
  LONG v13; // r8d
  __int64 v15; // [rsp+50h] [rbp-18h] BYREF
  struct tagSIZE v16; // [rsp+58h] [rbp-10h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+38h] BYREF
  int v18; // [rsp+A8h] [rbp+40h] BYREF
  char v19; // [rsp+B0h] [rbp+48h] BYREF
  struct tagPOINT v20; // [rsp+B8h] [rbp+50h] BYREF

  v4 = *((_QWORD *)a1 + 5);
  v6 = *((_QWORD *)a2 + 5);
  v7 = 0;
  v15 = 0LL;
  v18 = 0;
  *(_DWORD *)(v6 + 288) = *(_DWORD *)(v4 + 288);
  CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL), a2, v6, a4);
  v10 = CompatibleDC;
  if ( !CompatibleDC )
    return 0LL;
  WindowShadow = GenerateWindowShadow(a1, CompatibleDC);
  if ( !WindowShadow )
  {
    GreDeleteDC(v10);
    return 0LL;
  }
  v12 = *((_QWORD *)a1 + 5);
  v13 = *(_DWORD *)(v12 + 88);
  v20.x = v13;
  v20.y = *(_DWORD *)(v12 + 92);
  v16.cx = *(_DWORD *)(v12 + 96) - *(_DWORD *)(v12 + 88) + 5;
  v16.cy = *(_DWORD *)(v12 + 100) - *(_DWORD *)(v12 + 92) + 5;
  if ( (*(_BYTE *)(v12 + 26) & 0x40) != 0 )
    v20.x = v13 - 5;
  LODWORD(v17) = 33488896;
  if ( !(unsigned int)GetLayeredWindowAttributes(a1, &v19, (char *)&v17 + 2, &v18) || (v18 & 2) == 0 )
    BYTE2(v17) = -1;
  ++gdwDeferWinEvent;
  LOBYTE(v7) = (int)zzzUpdateLayeredWindow(
                      a2,
                      0LL,
                      &v20,
                      &v16,
                      v10,
                      (struct tagPOINT *)&v15,
                      0,
                      (struct _BLENDFUNCTION *)&v17,
                      2u,
                      0LL) >= 0;
  GreDeleteDC(v10);
  GreDeleteObject(WindowShadow);
  zzzEndDeferWinEventNotify();
  return v7;
}
