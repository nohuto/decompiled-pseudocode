/*
 * XREFs of ?FireInputPaneShowing@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@0@Z @ 0x18050F870
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z @ 0x180209468 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::FireInputPaneShowing(
        __int64 a1,
        const struct tagRECT *a2,
        float *a3,
        float *a4)
{
  float v4; // xmm1_4
  float v5; // xmm0_4
  LONG v6; // eax
  float v7; // xmm1_4
  LONG v8; // eax
  float v9; // xmm0_4
  LONG v10; // eax
  float v11; // xmm1_4
  LONG v12; // eax
  float v13; // xmm0_4
  LONG v14; // eax
  float v15; // xmm1_4
  int v16; // eax
  unsigned int v17; // ebx
  struct tagRECT v19; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT v20; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a4[1];
  v5 = *a4 + a4[2];
  v19.left = (int)*a4;
  v6 = (int)v4;
  v7 = v4 + a4[3];
  v19.top = v6;
  v8 = (int)v5;
  v9 = *a3;
  v19.right = v8;
  v10 = (int)v7;
  v11 = a3[1];
  v19.bottom = v10;
  v12 = (int)v9;
  v13 = v9 + a3[2];
  v20.left = v12;
  v14 = (int)v11;
  v15 = v11 + a3[3];
  v20.top = v14;
  v20.right = (int)v13;
  v20.bottom = (int)v15;
  v16 = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
          (KeyboardHosting::TabTipAdapter **)(a1 - 200),
          a2,
          &v20,
          &v19);
  v17 = v16;
  if ( v16 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x18BB,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v16);
  return v17;
}
