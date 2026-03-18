/*
 * XREFs of FinalUserInit @ 0x1C003E45C
 * Callers:
 *     xxxInitWindowStation @ 0x1C003DB88 (xxxInitWindowStation.c)
 * Callees:
 *     GreSetBkColor @ 0x1C0027760 (GreSetBkColor.c)
 *     GreSetTextColor @ 0x1C0027D58 (GreSetTextColor.c)
 *     MNSetupAnimationDC @ 0x1C003E6D0 (MNSetupAnimationDC.c)
 *     GetCharDimensions @ 0x1C007A270 (GetCharDimensions.c)
 *     DestroyClass @ 0x1C00EAB74 (DestroyClass.c)
 *     GreSetBkMode @ 0x1C0115C14 (GreSetBkMode.c)
 *     GreSelectFontInternal @ 0x1C0119F34 (GreSelectFontInternal.c)
 */

__int64 FinalUserInit()
{
  __int64 SessionDpiServerInfo; // rsi
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned __int64 v10; // rax

  SessionDpiServerInfo = GetSessionDpiServerInfo();
  *(_DWORD *)(SessionDpiServerInfo + 32) = GetCharDimensions(
                                             *(_QWORD *)(gpDispInfo + 64LL),
                                             SessionDpiServerInfo + 40,
                                             SessionDpiServerInfo + 36);
  v1 = Get96DpiServerInfo();
  v2 = GreSelectFontInternal(*(_QWORD *)(gpDispInfo + 64LL), *(_QWORD *)(v1 + 24), 1LL);
  *(_DWORD *)(v1 + 32) = GetCharDimensions(*(_QWORD *)(gpDispInfo + 64LL), v1 + 40, v1 + 36);
  GreSelectFontInternal(*(_QWORD *)(gpDispInfo + 64LL), v2, 1LL);
  *(_QWORD *)(gpDispInfo + 72LL) = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
  v3 = *(_QWORD *)(gpDispInfo + 72LL);
  if ( !v3 )
    return 0LL;
  GreSelectFontInternal(v3, *(_QWORD *)(SessionDpiServerInfo + 24), 1LL);
  GreSetDCOwnerEx(*(_QWORD *)(gpDispInfo + 72LL), 0LL, 0LL, 0LL);
  *(_DWORD *)(gpDispInfo + 88LL) = 40 * *(_DWORD *)(SessionDpiServerInfo + 32);
  *(_DWORD *)(gpDispInfo + 92LL) = *(_DWORD *)(SessionDpiServerInfo + 36) + 2;
  *(_QWORD *)(gpDispInfo + 80LL) = GreCreateBitmap(
                                     *(unsigned int *)(gpDispInfo + 88LL),
                                     *(unsigned int *)(gpDispInfo + 92LL),
                                     1LL,
                                     1LL,
                                     0LL);
  v4 = *(_QWORD *)(gpDispInfo + 80LL);
  if ( !v4 )
    return 0LL;
  GreSetBitmapOwner(v4, 0LL);
  GreSelectBitmap(*(_QWORD *)(gpDispInfo + 72LL), *(_QWORD *)(gpDispInfo + 80LL));
  GreSetTextColor(*(_QWORD *)(gpDispInfo + 72LL), 0);
  GreSelectBrush(*(_QWORD *)(gpDispInfo + 72LL), *(_QWORD *)(gpsi + 4944LL));
  GreSetBkMode(*(HDC *)(gpDispInfo + 72LL));
  GreSetBkColor(*(HDC *)(gpDispInfo + 72LL), 0xFFFFFF);
  MNSetupAnimationDC(gMenuState);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
  if ( CurrentProcessWin32Process )
  {
    v7 = -*(_QWORD *)CurrentProcessWin32Process;
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  }
  v8 = CurrentProcessWin32Process + 352;
  while ( *(_QWORD *)v8 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL) + 8LL) & 0x4000) == 0 )
  {
    v10 = PsGetCurrentProcessWin32Process(v7);
    if ( v10 )
      v10 &= -(__int64)(*(_QWORD *)v10 != 0LL);
    DestroyClass((struct tagPROCESSINFO *)v10);
  }
  return 1LL;
}
