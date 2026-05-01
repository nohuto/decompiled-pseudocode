/*
 * XREFs of ?BeginWindowAnimation@CExperienceManagerAnimationHelper@@AEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x180748FA8
 * Callers:
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIApplicationFrameWrapper@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x180748D8C (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIApplicationFrameWrapper@@W4DWMTRANSITION_TAR.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x180748F0C (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@_ea_180748F0C.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CExperienceManagerAnimationHelper::BeginWindowAnimation(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( (int)DwmpBeginTransitionRequestWithGUID(*(unsigned int *)(a1 + 4), a1 + 8) < 0 )
    return 0LL;
  *(_BYTE *)a1 = 1;
  DwmpTransitionWindowWithRects(a2, a3 | 0x2000000u, a4, a5, a6, a7, a8);
  v12 = *(_QWORD *)(a1 + 24);
  if ( !v12 )
    return 0LL;
  v13 = DwmpTransitionWindow(*(_QWORD *)(v12 + 24), 4194347LL);
  v14 = v13;
  if ( v13 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x98,
    (int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanageranimationhelper.cpp",
    (const char *)(unsigned int)v13);
  return v14;
}
