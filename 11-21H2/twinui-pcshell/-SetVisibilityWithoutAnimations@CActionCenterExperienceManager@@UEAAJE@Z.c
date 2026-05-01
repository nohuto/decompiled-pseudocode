/*
 * XREFs of ?SetVisibilityWithoutAnimations@CActionCenterExperienceManager@@UEAAJE@Z @ 0x18034F800
 * Callers:
 *     _lambda_2e8c3009fb6c7eb5169b41625b9541b8_::operator() @ 0x18034D410 (_lambda_2e8c3009fb6c7eb5169b41625b9541b8_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put_IsVisible@CActionCenterExperienceManager@@UEAAJE@Z @ 0x180351720 (-put_IsVisible@CActionCenterExperienceManager@@UEAAJE@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::SetVisibilityWithoutAnimations(
        CActionCenterExperienceManager *this,
        unsigned __int8 a2)
{
  int IsVisible; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_BYTE *)this + 400) = 1;
  IsVisible = CActionCenterExperienceManager::put_IsVisible(this, a2);
  v4 = IsVisible;
  if ( IsVisible >= 0 )
    v4 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CF,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)IsVisible);
  *((_BYTE *)this + 400) = 0;
  return v4;
}
