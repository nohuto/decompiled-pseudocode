/*
 * XREFs of ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C01E22D4
 * Callers:
 *     zzzAnimateFade @ 0x1C01E2D24 (zzzAnimateFade.c)
 *     zzzShowFade @ 0x1C01E2E4C (zzzShowFade.c)
 * Callees:
 *     GreUpdateSprite @ 0x1C0020E98 (GreUpdateSprite.c)
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     zzzUpdateLayeredWindow @ 0x1C008FE60 (zzzUpdateLayeredWindow.c)
 */

void __fastcall zzzUpdateFade(
        struct tagPOINT *a1,
        struct tagSIZE *a2,
        HDC a3,
        struct tagPOINT *a4,
        struct _BLENDFUNCTION *a5)
{
  int v9; // eax
  __int64 v10; // rax
  struct tagWND *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v15; // [rsp+80h] [rbp-28h] BYREF
  __int64 v16; // [rsp+90h] [rbp-18h]

  v15 = 0LL;
  v16 = 0LL;
  v9 = gfade[6];
  if ( (v9 & 8) != 0 )
  {
    v10 = HMValidateHandleNoSecure(gfade[0], 1);
    v11 = (struct tagWND *)v10;
    if ( v10 )
    {
      ThreadLock(v10, (__int64 *)&v15);
      zzzUpdateLayeredWindow(v11, 0LL, a1, a2, a3, a4, 0, a5, 2u, 0LL);
      ThreadUnlock1(v13, v12, v14);
    }
  }
  else
  {
    GreUpdateSprite(
      *(HDEV *)(gpDispInfo + 40LL),
      0LL,
      (void *)gfade[0],
      0LL,
      a1,
      a2,
      a3,
      a4,
      HIDWORD(gfade[6]),
      a5,
      2 - ((v9 & 0x40) != 0),
      0LL,
      0LL,
      1,
      0);
  }
}
