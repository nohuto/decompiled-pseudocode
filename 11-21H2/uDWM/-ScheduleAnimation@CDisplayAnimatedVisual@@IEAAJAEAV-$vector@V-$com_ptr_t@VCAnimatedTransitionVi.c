/*
 * XREFs of ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B4EC4
 * Callers:
 *     ?CaptureAndScheduleExitAnimation@CDisplayDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800B5CB8 (-CaptureAndScheduleExitAnimation@CDisplayDuplicateAnimatedVisual@@AEAAJXZ.c)
 *     ?OnGlobalTimeUpdatedImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800B5EE0 (-OnGlobalTimeUpdatedImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B6958 (-ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?ScheduleExitAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B6C98 (-ScheduleExitAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?CaptureAndScheduleExitAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800B73B8 (-CaptureAndScheduleExitAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?ScheduleEntranceAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800B7898 (-ScheduleEntranceAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?ScheduleEntranceAnimation@CDisplayExtendToDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800B7F78 (-ScheduleEntranceAnimation@CDisplayExtendToDuplicateAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800B8120 (-StartImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800B8778 (-CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 *     ?ScheduleEntranceAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800B8D38 (-ScheduleEntranceAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180015140 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180015930 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x180047D5C (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180048464 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDisplayAnimatedVisual::ScheduleAnimation(
        struct IAnimatedVisual *a1,
        _QWORD *a2,
        struct IAnimationListener *a3,
        int a4,
        int a5,
        unsigned int *a6)
{
  struct IAnimatedVisual ***v9; // rdx
  CAnimationEngine *v10; // rdi
  unsigned int v11; // ebx
  unsigned int v12; // r14d
  unsigned int v13; // ebx
  struct IAnimatedVisual **v14; // r15
  struct IAnimatedVisual **v15; // rsi
  int v16; // edi
  struct IAnimatedVisual *v17; // rax
  struct IAnimatedVisual *v18; // r8
  unsigned int v19; // edx
  int v20; // eax
  int started; // eax
  __int64 v22; // rdx
  struct IAnimatedVisual **v23[2]; // [rsp+30h] [rbp-20h] BYREF
  int v24; // [rsp+40h] [rbp-10h]
  __int64 v25; // [rsp+44h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  struct IAnimatedVisual *v27; // [rsp+90h] [rbp+40h] BYREF
  CAnimationEngine *v28; // [rsp+98h] [rbp+48h]

  v27 = a1;
  if ( *a2 == a2[1] )
    return 0LL;
  v10 = CDesktopManager::AcquireAnimationEngine();
  v28 = v10;
  if ( v10 )
  {
    *(_OWORD *)v23 = 0LL;
    v24 = 0;
    v12 = 0;
    v25 = 0LL;
    v13 = 0;
    v14 = v9[1];
    v15 = *v9;
    if ( *v9 != v14 )
    {
      v16 = a5;
      do
      {
        v17 = *v15;
        *((_DWORD *)v17 + 184) = a4;
        *((_DWORD *)v17 + 185) = v16;
        v18 = *v15;
        v27 = *v15;
        v19 = v13 + 1;
        if ( v13 + 1 >= v13 )
        {
          if ( v19 > v12 )
          {
            v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v23, 8u, 1, &v27);
            if ( v20 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0xC0u);
            v13 = HIDWORD(v25);
            v12 = v25;
          }
          else
          {
            v23[0][v13++] = v18;
            HIDWORD(v25) = v19;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        }
        ++v15;
      }
      while ( v15 != v14 );
      v10 = v28;
    }
    started = CAnimationEngine::ScheduleStartAnimation(v10, a4, v23[0], v13, a6);
    v11 = started;
    if ( started >= 0 )
    {
      started = CAnimationEngine::RegisterForAnimationCompleteNotification(v10, a3);
      v11 = started;
      if ( started >= 0 )
      {
        v11 = 0;
        goto LABEL_22;
      }
      v22 = 583LL;
    }
    else
    {
      v22 = 581LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
      (const char *)(unsigned int)started);
LABEL_22:
    DynArrayImpl<0>::~DynArrayImpl<0>(v23);
    goto LABEL_23;
  }
  v11 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x237,
    (int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
    (const char *)0x8007000ELL);
LABEL_23:
  if ( v10 )
    CAnimationEngine::Release(v10);
  return v11;
}
