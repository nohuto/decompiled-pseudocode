/*
 * XREFs of ?RegisterForStoryboardEvents@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardListener@@@Z @ 0x18009521C
 * Callers:
 *     ??0TouchKeyboardExperienceManager@@QEAA@XZ @ 0x18009448C (--0TouchKeyboardExperienceManager@@QEAA@XZ.c)
 *     ??0CStartExperienceManager@@QEAA@_N@Z @ 0x180135958 (--0CStartExperienceManager@@QEAA@_N@Z.c)
 * Callees:
 *     ??$MakeAndInitialize@VDummyWindow@CExperienceManagerAnimationHelper@@V12@AEAPEAUIDWMStoryboardListener@@@Details@WRL@Microsoft@@YAJPEAPEAVDummyWindow@CExperienceManagerAnimationHelper@@AEAPEAUIDWMStoryboardListener@@@Z @ 0x180095254 (--$MakeAndInitialize@VDummyWindow@CExperienceManagerAnimationHelper@@V12@AEAPEAUIDWMStoryboardLi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CExperienceManagerAnimationHelper::RegisterForStoryboardEvents(
        CExperienceManagerAnimationHelper *this,
        struct IDWMStoryboardListener *a2)
{
  _QWORD *v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IDWMStoryboardListener *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v2 = (_QWORD *)((char *)this + 24);
  if ( *v2 )
    return 0LL;
  v3 = Microsoft::WRL::Details::MakeAndInitialize<CExperienceManagerAnimationHelper::DummyWindow,CExperienceManagerAnimationHelper::DummyWindow,IDWMStoryboardListener * &>(
         v2,
         &v8);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAC,
    (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanageranimationhelper.cpp",
    (const char *)(unsigned int)v3,
    v6);
  return v4;
}
