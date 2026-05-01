/*
 * XREFs of ?Resize@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@@Z @ 0x180515BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@@Z @ 0x18020AF08 (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::Resize(__int64 a1, unsigned int a2, float *a3)
{
  float v3; // xmm1_4
  float v4; // xmm0_4
  LONG v5; // eax
  float v6; // xmm1_4
  int v7; // eax
  unsigned int v8; // ebx
  struct tagRECT v10; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a3[1];
  v4 = *a3 + a3[2];
  v10.left = (int)*a3;
  v5 = (int)v3;
  v6 = v3 + a3[3];
  v10.top = v5;
  v10.right = (int)v4;
  v10.bottom = (int)v6;
  v7 = TouchKeyboardExperienceManager::OnInputAppRequestedResize((TouchKeyboardExperienceManager *)(a1 - 200), a2, &v10);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x18A9,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
