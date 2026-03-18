/*
 * XREFs of CreateOrGetRedirectionBitmap @ 0x1C001F528
 * Callers:
 *     SetRedirectedWindow @ 0x1C001F9FC (SetRedirectedWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C008F778 (RecreateRedirectionBitmap.c)
 *     zzzDwmStartRedirection @ 0x1C0098F14 (zzzDwmStartRedirection.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C00205C0 (IsDesktopWindow.c)
 *     GreDereferenceObject @ 0x1C002669C (GreDereferenceObject.c)
 *     GreReferenceObject @ 0x1C0026D68 (GreReferenceObject.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     _GetTopLevelWindow @ 0x1C0075BF0 (_GetTopLevelWindow.c)
 *     IsWindowContentProtected @ 0x1C0077D48 (IsWindowContentProtected.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0090C1C (GreCreateCompatibleBitmapInternal.c)
 *     GreSetRedirection @ 0x1C00B42C4 (GreSetRedirection.c)
 *     GreGetSpriteAttributes @ 0x1C00B5B04 (GreGetSpriteAttributes.c)
 *     DesktopFromDesktopWindow @ 0x1C00CE71C (DesktopFromDesktopWindow.c)
 *     GreGetDxSharedSurface @ 0x1C00ED940 (GreGetDxSharedSurface.c)
 *     GetWindowMonitorAdapterLuid @ 0x1C00EDD08 (GetWindowMonitorAdapterLuid.c)
 *     GreSetRedirectionBitmapOwner @ 0x1C0105B50 (GreSetRedirectionBitmapOwner.c)
 */

__int64 __fastcall CreateOrGetRedirectionBitmap(__int64 a1, int a2, int a3, HSURF *a4)
{
  __int64 v4; // r10
  int v5; // esi
  char v8; // al
  int v10; // ecx
  int v11; // ebx
  HWND v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  HSURF CompatibleBitmapInternal; // rbx
  __int64 TopLevelWindow; // r14
  __int64 v17; // [rsp+40h] [rbp-20h] BYREF
  struct _BLENDFUNCTION v18[2]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+A0h] [rbp+40h] BYREF
  HSURF *v21; // [rsp+B8h] [rbp+58h]

  v21 = a4;
  v4 = *(_QWORD *)(a1 + 40);
  v5 = 0;
  v19 = 0LL;
  LODWORD(v17) = 0;
  v8 = *(_BYTE *)(v4 + 26);
  if ( (v8 & 0x20) != 0 )
  {
    *a4 = 0LL;
    return 0LL;
  }
  v10 = *(_DWORD *)(a1 + 320);
  v11 = 0x4000000;
  if ( (v10 & 0x20000) != 0 )
    goto LABEL_41;
  if ( a3 )
  {
    *(_DWORD *)(a1 + 320) = v10 | 0x20000;
    v8 = *(_BYTE *)(v4 + 26);
LABEL_41:
    v11 = 201326592;
  }
  if ( (v8 & 8) == 0 || (unsigned int)IsDesktopWindow(a1) )
  {
    v11 |= 0x1000000u;
  }
  else
  {
    v12 = *(HWND *)a1;
    v18[0] = 0;
    v20 = 0;
    if ( (unsigned int)GreGetSpriteAttributes(*(HDEV *)(gpDispInfo + 40LL), v12, v18, &v20, 1) && (v20 & 1) != 0 )
      v11 |= 0x1000000u;
  }
  if ( !a2 && (unsigned int)IsDesktopWindow(a1) )
  {
    CompatibleBitmapInternal = *(HSURF *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) + 120LL);
  }
  else
  {
    LOWORD(v20) = 96;
    if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 8LL) + 64LL) & 1) != 0 )
        {
          v13 = *(_QWORD *)(a1 + 40);
          v14 = *(_DWORD *)(v13 + 288);
          if ( (v14 & 0xF) == 0 && (v14 & 0x40000000) != 0 && *(_WORD *)(v13 + 284) != 96 )
            LOWORD(v20) = GreGetScaledLogPixels();
        }
      }
    }
    if ( (v11 & 0x1000000) == 0 )
    {
      v18[0] = 0;
      if ( (*(_DWORD *)(a1 + 320) & 0x20000) == 0
        || (int)GreGetDxSharedSurface(*(HWND *)a1, (__int64)v18, (__int64)&v17) < 0 )
      {
        GetWindowMonitorAdapterLuid(a1, &v19);
      }
    }
    CompatibleBitmapInternal = (HSURF)GreCreateCompatibleBitmapInternal(
                                        *(HDC *)(gpDispInfo + 56LL),
                                        (__int64)&v19,
                                        (__int64)&v20);
    LODWORD(v17) = 1;
  }
  if ( !CompatibleBitmapInternal )
  {
    v5 = -2143354872;
    goto LABEL_34;
  }
  TopLevelWindow = GetTopLevelWindow(a1);
  if ( (unsigned int)IsWindowContentProtected(a1)
    || !TopLevelWindow
    || a1 == TopLevelWindow
    || !(unsigned int)IsWindowContentProtected(TopLevelWindow)
    || *(_QWORD *)(*(_QWORD *)(TopLevelWindow + 16) + 424LL) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) )
  {
    if ( (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF) == 0x29D )
      DesktopFromDesktopWindow(a1);
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    if ( (_DWORD)v17 )
    {
      v5 = GreReferenceObject(CompatibleBitmapInternal);
      if ( v5 < 0 )
        goto LABEL_32;
    }
    if ( (unsigned int)GreMarkUndeletableBitmap(CompatibleBitmapInternal) )
    {
      if ( !(unsigned int)GreSetRedirection(CompatibleBitmapInternal)
        || !(unsigned int)GreSetRedirectionBitmapOwner(CompatibleBitmapInternal) )
      {
        GreMarkDeletableBitmap(CompatibleBitmapInternal);
        v5 = -2143354871;
      }
      if ( v5 >= 0 )
        goto LABEL_32;
    }
    else
    {
      v5 = -2143354871;
    }
    GreDereferenceObject(CompatibleBitmapInternal);
LABEL_32:
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    if ( v5 < 0 )
    {
      GreDeleteObject(CompatibleBitmapInternal);
      CompatibleBitmapInternal = 0LL;
    }
    goto LABEL_34;
  }
  GreDeleteObject(CompatibleBitmapInternal);
  CompatibleBitmapInternal = 0LL;
  v5 = -1073741790;
LABEL_34:
  *v21 = CompatibleBitmapInternal;
  return (unsigned int)v5;
}
