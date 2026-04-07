/*
 * XREFs of ?CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDisplayAnimatedVisual@@@Z @ 0x18005A8B0
 * Callers:
 *     ?CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ @ 0x18003BB2C (-CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x180037E58 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?Create@CDisplayDisconnectAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x18005A980 (-Create@CDisplayDisconnectAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDisplaySecondaryOnlyAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x18005AAA4 (-Create@CDisplaySecondaryOnlyAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDisplayBlackCurtainAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800B966C (-Create@CDisplayBlackCurtainAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDisplayDuplicateAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800B9788 (-Create@CDisplayDuplicateAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDisplayDuplicateToExtendAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800B98A4 (-Create@CDisplayDuplicateToExtendAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDisplayExtendAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800B99C0 (-Create@CDisplayExtendAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDisplayExtendToDuplicateAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800B9ADC (-Create@CDisplayExtendToDuplicateAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDisplayMixedModeAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800B9BF8 (-Create@CDisplayMixedModeAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800B9D14 (-Create@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDisplaySecondaryOnlyToExtendAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800B9E30 (-Create@CDisplaySecondaryOnlyToExtendAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CDisplayModeChangeHelper::CreateDisplayAnimatedVisual(
        int a1,
        struct CDisplayBlackCurtainAnimatedVisual **a2)
{
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // ebx
  int v13; // eax
  int v14; // ebx
  int v15; // ebx
  int v16; // eax
  CBaseObject *v17; // rcx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  struct CDisplayBlackCurtainAnimatedVisual *v26; // [rsp+38h] [rbp+18h] BYREF

  *a2 = 0LL;
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22)
    || (unsigned __int8)CDesktopManager::CheckAnyPreference(0x10u) )
  {
    v26 = 0LL;
    v24 = CDisplayBlackCurtainAnimatedVisual::Create(&v26);
    v11 = v24;
    if ( v24 >= 0 )
    {
      v17 = 0LL;
      *a2 = v26;
      v11 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B1,
        (int)"clientcore\\windows\\dwm\\udwm\\displaymodechangehelper.cpp",
        (const char *)(unsigned int)v24);
      v17 = v26;
    }
  }
  else
  {
    v4 = a1 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 3;
          if ( v7 )
          {
            v8 = v7 - 1;
            if ( v8 )
            {
              v9 = v8 - 3;
              if ( v9 )
              {
                v14 = v9 - 1;
                if ( v14 )
                {
                  v15 = v14 - 1;
                  if ( v15 )
                  {
                    if ( v15 != 2 )
                      return 0LL;
                    v26 = 0LL;
                    v16 = CDisplayMixedModeAnimatedVisual::Create(&v26);
                    v11 = v16;
                    if ( v16 >= 0 )
                    {
                      *a2 = v26;
                      return 0LL;
                    }
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x207,
                      (int)"clientcore\\windows\\dwm\\udwm\\displaymodechangehelper.cpp",
                      (const char *)(unsigned int)v16);
                  }
                  else
                  {
                    v26 = 0LL;
                    v18 = CDisplaySecondaryOnlyToExtendAnimatedVisual::Create(&v26);
                    v11 = v18;
                    if ( v18 >= 0 )
                    {
                      *a2 = v26;
                      return 0LL;
                    }
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x1FE,
                      (int)"clientcore\\windows\\dwm\\udwm\\displaymodechangehelper.cpp",
                      (const char *)(unsigned int)v18);
                  }
                }
                else
                {
                  v26 = 0LL;
                  v19 = CDisplaySecondaryOnlyToDuplicateAnimatedVisual::Create(&v26);
                  v11 = v19;
                  if ( v19 >= 0 )
                  {
                    *a2 = v26;
                    return 0LL;
                  }
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x1F4,
                    (int)"clientcore\\windows\\dwm\\udwm\\displaymodechangehelper.cpp",
                    (const char *)(unsigned int)v19);
                }
              }
              else
              {
                v26 = 0LL;
                v10 = CDisplaySecondaryOnlyAnimatedVisual::Create(&v26);
                v11 = v10;
                if ( v10 >= 0 )
                {
                  *a2 = v26;
                  return 0LL;
                }
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x1EA,
                  (int)"clientcore\\windows\\dwm\\udwm\\displaymodechangehelper.cpp",
                  (const char *)(unsigned int)v10);
              }
            }
            else
            {
              v26 = 0LL;
              v20 = CDisplayExtendToDuplicateAnimatedVisual::Create(&v26);
              v11 = v20;
              if ( v20 >= 0 )
              {
                *a2 = v26;
                return 0LL;
              }
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x1E1,
                (int)"clientcore\\windows\\dwm\\udwm\\displaymodechangehelper.cpp",
                (const char *)(unsigned int)v20);
            }
          }
          else
          {
            v26 = 0LL;
            v21 = CDisplayExtendAnimatedVisual::Create(&v26);
            v11 = v21;
            if ( v21 >= 0 )
            {
              *a2 = v26;
              return 0LL;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1D8,
              (int)"clientcore\\windows\\dwm\\udwm\\displaymodechangehelper.cpp",
              (const char *)(unsigned int)v21);
          }
        }
        else
        {
          v26 = 0LL;
          v22 = CDisplayDuplicateToExtendAnimatedVisual::Create(&v26);
          v11 = v22;
          if ( v22 >= 0 )
          {
            *a2 = v26;
            return 0LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1CF,
            (int)"clientcore\\windows\\dwm\\udwm\\displaymodechangehelper.cpp",
            (const char *)(unsigned int)v22);
        }
      }
      else
      {
        v26 = 0LL;
        v23 = CDisplayDuplicateAnimatedVisual::Create(&v26);
        v11 = v23;
        if ( v23 >= 0 )
        {
          *a2 = v26;
          return 0LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1C6,
          (int)"clientcore\\windows\\dwm\\udwm\\displaymodechangehelper.cpp",
          (const char *)(unsigned int)v23);
      }
    }
    else
    {
      v26 = 0LL;
      v13 = CDisplayDisconnectAnimatedVisual::Create(&v26);
      v11 = v13;
      if ( v13 >= 0 )
      {
        *a2 = v26;
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BD,
        (int)"clientcore\\windows\\dwm\\udwm\\displaymodechangehelper.cpp",
        (const char *)(unsigned int)v13);
    }
    v17 = v26;
  }
  if ( v17 )
    CBaseObject::Release(v17);
  return v11;
}
