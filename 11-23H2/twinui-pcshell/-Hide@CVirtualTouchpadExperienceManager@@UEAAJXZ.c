/*
 * XREFs of ?Hide@CVirtualTouchpadExperienceManager@@UEAAJXZ @ 0x180073900
 * Callers:
 *     CVirtualTouchpadExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x1801E3DA0 (CVirtualTouchpadExperienceManager--DismissRequested$_ResumeCoro$1.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x180453214 (-HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::Hide(CVirtualTouchpadExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 190) != 2 )
    return 0LL;
  v2 = CVirtualTouchpadExperienceManager::HideInternal(this);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x293,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)(unsigned int)v2,
    v4);
  return v3;
}
