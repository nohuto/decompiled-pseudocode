/*
 * XREFs of ?ReadUInt32@RegistryDataHelper@@QEBAJPEBGIPEAI@Z @ 0x1801B12EC
 * Callers:
 *     CControlCenterExperienceManager::PrelaunchExperienceAsync$_ResumeCoro$1 @ 0x1801DF350 (CControlCenterExperienceManager--PrelaunchExperienceAsync$_ResumeCoro$1.c)
 *     ?IsStackedPriorityToastsDisabledViaRegistryOverride@ToastSettingsHelper@@SA_NXZ @ 0x180436880 (-IsStackedPriorityToastsDisabledViaRegistryOverride@ToastSettingsHelper@@SA_NXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180393038 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall RegistryDataHelper::ReadUInt32(
        RegistryDataHelper *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        unsigned int *a4)
{
  char *v4; // rbx
  const WCHAR *v9; // rdx
  unsigned int ValueW; // eax
  HKEY v11; // rcx
  int v13; // eax
  unsigned int v14; // ebx
  bool v15; // cf
  unsigned int v16; // [rsp+20h] [rbp-48h]
  _DWORD pvData[4]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  DWORD pcbData; // [rsp+70h] [rbp+8h] BYREF

  v4 = (char *)this + 8;
  pcbData = 4;
  v9 = (const WCHAR *)((char *)this + 8);
  if ( *((_QWORD *)this + 4) >= 8uLL )
    v9 = *(const WCHAR **)v4;
  ValueW = RegGetValueW(*(HKEY *)this, v9, a2, 0x18u, 0LL, pvData, &pcbData);
  if ( ValueW == 2 )
  {
    v11 = (HKEY)*((_QWORD *)this + 5);
    if ( !v11 )
      goto LABEL_5;
    v15 = *((_QWORD *)v4 + 3) < 8uLL;
    pcbData = 4;
    if ( !v15 )
      v4 = *(char **)v4;
    ValueW = RegGetValueW(v11, (LPCWSTR)v4, a2, 0x18u, 0LL, pvData, &pcbData);
    if ( ValueW == 2 )
    {
LABEL_5:
      *a4 = a3;
      return 0LL;
    }
  }
  if ( !ValueW )
  {
    *a4 = pvData[0];
    return 0LL;
  }
  v13 = wil::details::in1diag3::Return_Win32(
          retaddr,
          (void *)0x1A7,
          (unsigned int)"shellcommon\\internal\\shell\\inc\\RegistryDataHelper.h",
          (const char *)ValueW,
          v16);
  v14 = v13;
  if ( v13 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5F,
    (int)"shellcommon\\internal\\shell\\inc\\RegistryDataHelper.h",
    (const char *)(unsigned int)v13);
  return v14;
}
