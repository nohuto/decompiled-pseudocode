/*
 * XREFs of UserOnGreTextReady @ 0x1C00EE588
 * Callers:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00EE480 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 * Callees:
 *     SetIconMetrics @ 0x1C00C6CF4 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C00C6F10 (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C00C7060 (xxxSetWindowNCMetrics.c)
 *     xxxLW_LoadFonts @ 0x1C00EE740 (xxxLW_LoadFonts.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C00EF7F8 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 */

_BOOL8 UserOnGreTextReady()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  unsigned __int16 LogPixels; // ax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _UNICODE_STRING *v7; // rax
  __int64 v8; // rcx
  BOOL v9; // ebx
  struct _UNICODE_STRING *v10; // rsi
  BOOL v11; // edi
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v14 = 0LL;
  v13 = 0LL;
  EnterCrit(1LL, 0LL);
  LogPixels = DrvGetLogPixels(v1, v0, v2);
  UserReinitializeStockFonts(LogPixels, 0);
  xxxLW_LoadFonts(0LL);
  v7 = (struct _UNICODE_STRING *)CreateProfileUserName(&v13, v4, v5, v6);
  v9 = 0;
  v10 = v7;
  if ( v7 )
  {
    v11 = xxxSetWindowNCMetrics(v7, 0LL, -1);
    SetMinMetrics(v10, 0LL);
    v9 = (unsigned int)SetIconMetrics(v10, 0LL) != 0 && v11;
    FreeProfileUserName(v10, &v13);
  }
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
