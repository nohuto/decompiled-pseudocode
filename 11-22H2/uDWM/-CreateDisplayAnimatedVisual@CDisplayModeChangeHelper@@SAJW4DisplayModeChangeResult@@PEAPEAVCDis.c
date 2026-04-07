/*
 * XREFs of ?CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDisplayAnimatedVisual@@@Z @ 0x180047864
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18003BBE8 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CDisplayDisconnectAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800478EC (-Create@CDisplayDisconnectAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18004911C (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009EDE0 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Create@CDisplayBlackCurtainAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800BCEAC (-Create@CDisplayBlackCurtainAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDisplayDuplicateAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800BCFC8 (-Create@CDisplayDuplicateAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDisplayDuplicateToExtendAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800BD0E4 (-Create@CDisplayDuplicateToExtendAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDisplayExtendAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800BD200 (-Create@CDisplayExtendAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDisplayExtendToDuplicateAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800BD31C (-Create@CDisplayExtendToDuplicateAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDisplayMixedModeAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800BD438 (-Create@CDisplayMixedModeAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDisplaySecondaryOnlyAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800BD554 (-Create@CDisplaySecondaryOnlyAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800BD670 (-Create@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDisplaySecondaryOnlyToExtendAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800BD78C (-Create@CDisplaySecondaryOnlyToExtendAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CDisplayModeChangeHelper::CreateDisplayAnimatedVisual(int a1, CBaseObject **a2)
{
  int v4; // ebx
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  CBaseObject *v26; // [rsp+38h] [rbp+18h] BYREF

  *a2 = 0LL;
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22) || CDesktopManager::CheckAnyPreference(0x10u) )
  {
    v26 = 0LL;
    v23 = CDisplayBlackCurtainAnimatedVisual::Create(&v26);
    v6 = v23;
    if ( v23 >= 0 )
    {
      *a2 = v26;
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B1,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaymodechangehelper.cpp",
      (const char *)(unsigned int)v23,
      savedregs);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v26);
  }
  else
  {
    v4 = a1 - 1;
    if ( v4 )
    {
      v8 = v4 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 3;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              v12 = v11 - 3;
              if ( v12 )
              {
                v13 = v12 - 1;
                if ( v13 )
                {
                  v14 = v13 - 1;
                  if ( v14 )
                  {
                    if ( v14 != 2 )
                      return 0LL;
                    v26 = 0LL;
                    v15 = CDisplayMixedModeAnimatedVisual::Create(&v26);
                    v6 = v15;
                    if ( v15 >= 0 )
                    {
                      *a2 = v26;
                      return 0LL;
                    }
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x207,
                      (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaymodechangehelper.cpp",
                      (const char *)(unsigned int)v15,
                      savedregs);
                  }
                  else
                  {
                    v26 = 0LL;
                    v16 = CDisplaySecondaryOnlyToExtendAnimatedVisual::Create(&v26);
                    v6 = v16;
                    if ( v16 >= 0 )
                    {
                      *a2 = v26;
                      return 0LL;
                    }
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x1FE,
                      (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaymodechangehelper.cpp",
                      (const char *)(unsigned int)v16,
                      savedregs);
                  }
                }
                else
                {
                  v26 = 0LL;
                  v17 = CDisplaySecondaryOnlyToDuplicateAnimatedVisual::Create(&v26);
                  v6 = v17;
                  if ( v17 >= 0 )
                  {
                    *a2 = v26;
                    return 0LL;
                  }
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x1F4,
                    (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaymodechangehelper.cpp",
                    (const char *)(unsigned int)v17,
                    savedregs);
                }
              }
              else
              {
                v26 = 0LL;
                v18 = CDisplaySecondaryOnlyAnimatedVisual::Create(&v26);
                v6 = v18;
                if ( v18 >= 0 )
                {
                  *a2 = v26;
                  return 0LL;
                }
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x1EA,
                  (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaymodechangehelper.cpp",
                  (const char *)(unsigned int)v18,
                  savedregs);
              }
            }
            else
            {
              v26 = 0LL;
              v19 = CDisplayExtendToDuplicateAnimatedVisual::Create(&v26);
              v6 = v19;
              if ( v19 >= 0 )
              {
                *a2 = v26;
                return 0LL;
              }
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x1E1,
                (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaymodechangehelper.cpp",
                (const char *)(unsigned int)v19,
                savedregs);
            }
          }
          else
          {
            v26 = 0LL;
            v20 = CDisplayExtendAnimatedVisual::Create(&v26);
            v6 = v20;
            if ( v20 >= 0 )
            {
              *a2 = v26;
              return 0LL;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1D8,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaymodechangehelper.cpp",
              (const char *)(unsigned int)v20,
              savedregs);
          }
        }
        else
        {
          v26 = 0LL;
          v21 = CDisplayDuplicateToExtendAnimatedVisual::Create(&v26);
          v6 = v21;
          if ( v21 >= 0 )
          {
            *a2 = v26;
            return 0LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1CF,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaymodechangehelper.cpp",
            (const char *)(unsigned int)v21,
            savedregs);
        }
      }
      else
      {
        v26 = 0LL;
        v22 = CDisplayDuplicateAnimatedVisual::Create(&v26);
        v6 = v22;
        if ( v22 >= 0 )
        {
          *a2 = v26;
          return 0LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1C6,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaymodechangehelper.cpp",
          (const char *)(unsigned int)v22,
          savedregs);
      }
    }
    else
    {
      v26 = 0LL;
      v5 = CDisplayDisconnectAnimatedVisual::Create(&v26);
      v6 = v5;
      if ( v5 >= 0 )
      {
        *a2 = v26;
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BD,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaymodechangehelper.cpp",
        (const char *)(unsigned int)v5,
        savedregs);
    }
    if ( v26 )
      CBaseObject::Release(v26);
  }
  return v6;
}
