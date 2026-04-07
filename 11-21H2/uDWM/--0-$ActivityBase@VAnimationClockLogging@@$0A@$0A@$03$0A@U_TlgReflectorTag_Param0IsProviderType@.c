/*
 * XREFs of ??0?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800A1798
 * Callers:
 *     ?Begin@CAnimationClock@@QEAAJK@Z @ 0x1800A1BB0 (-Begin@CAnimationClock@@QEAAJK@Z.c)
 *     ?Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x1800A1CD4 (-Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?End@CAnimationClock@@QEAAJXZ @ 0x1800A1ECC (-End@CAnimationClock@@QEAAJXZ.c)
 *     ?GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z @ 0x1800A2020 (-GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z.c)
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x1800A3DF8 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x1800A42BC (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800401A0 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     memset_0 @ 0x180060F40 (memset_0.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2)
{
  *(_QWORD *)a1 = &wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    (struct wil::details::IFailureCallback *)((char *)a1 + 96),
    0);
  *((_QWORD *)a1 + 6) = (char *)a1 + 56;
  *((_DWORD *)a1 + 14) = 0;
  *((_DWORD *)a1 + 24) = 0;
  *((_QWORD *)a1 + 14) = 0LL;
  *((_DWORD *)a1 + 33) = 0;
  *((_BYTE *)a1 + 60) = 0;
  *((_BYTE *)a1 + 120) = 0;
  *((_QWORD *)a1 + 13) = a2;
  *((_DWORD *)a1 + 32) = 1;
  *((_QWORD *)a1 + 36) = 0LL;
  *((_QWORD *)a1 + 37) = 0LL;
  memset_0((char *)a1 + 136, 0, 0x98uLL);
  *((_QWORD *)a1 + 38) = 0LL;
  *((_QWORD *)a1 + 39) = 0LL;
  return a1;
}
