/*
 * XREFs of ?RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBGW4LIGHT_DISMISS_FLAGS@@1@Z @ 0x180474C20
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CBaseTrayFlyoutExperienceManager@@AEAAJPEAUIServiceProvider@@PEBG1@Z @ 0x1800E60DC (-Initialize@CBaseTrayFlyoutExperienceManager@@AEAAJPEAUIServiceProvider@@PEBG1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::RuntimeClassInitialize(
        CBaseTrayFlyoutExperienceManager *a1,
        struct IServiceProvider *a2,
        const unsigned __int16 *a3,
        int a4,
        unsigned __int16 *a5)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)a1 + 70) = a4;
  v5 = CBaseTrayFlyoutExperienceManager::Initialize(a1, a2, a3, a5);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57,
      (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
      (const char *)(unsigned int)v5);
  return v6;
}
