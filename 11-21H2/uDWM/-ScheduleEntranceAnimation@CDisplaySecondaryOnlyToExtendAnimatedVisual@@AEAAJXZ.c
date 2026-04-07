/*
 * XREFs of ?ScheduleEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ @ 0x1800BB2C4
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BAE80 (-OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     _tlgKeywordOn @ 0x18003E1A0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180096F94 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B50A0 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyToExtendAnimatedVisual::ScheduleEntranceAnimation(
        CDisplaySecondaryOnlyToExtendAnimatedVisual *this)
{
  struct IAnimationListener *v2; // rsi
  int v3; // edi
  __int64 v4; // rdx
  struct CAnimatedTransitionVisual *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v12[32]; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+60h] [rbp-18h]
  int v15; // [rsp+64h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = (struct IAnimationListener *)(((unsigned __int64)this + 288) & -(__int64)(this != 0LL));
  v3 = CDisplayAnimatedVisual::ScheduleAnimation(
         this,
         *((struct CAnimatedTransitionVisual **)this + 57),
         v2,
         *((unsigned int *)this + 88),
         *((_DWORD *)this + 89),
         (unsigned int *)this + 120);
  if ( v3 < 0 )
  {
    v4 = 165LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoextendanimatedvisual.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v6 = (struct CAnimatedTransitionVisual *)*((_QWORD *)this + 56);
  if ( v6 )
  {
    v3 = CDisplayAnimatedVisual::ScheduleAnimation(
           (CDisplayAnimatedVisual *)*((unsigned int *)this + 89),
           v6,
           v2,
           *((unsigned int *)this + 88),
           *((_DWORD *)this + 89),
           (unsigned int *)this + 119);
    if ( v3 < 0 )
    {
      v4 = 174LL;
      goto LABEL_3;
    }
  }
  if ( (unsigned int)dword_1801418A0 > 5 && tlgKeywordOn((__int64)&dword_1801418A0, 1LL) )
  {
    v8 = *((_QWORD *)this + 56);
    v15 = 0;
    v11 = v8;
    v14 = 8;
    v13 = &v11;
    tlgWriteTransfer_EtwEventWriteTransfer(v7, byte_18011FA61, 0LL, 0LL, 3, (__int64)v12);
  }
  v9 = VisualCollection::Remove(
         (CDisplaySecondaryOnlyToExtendAnimatedVisual *)((char *)this + 32),
         (struct CVisual *)((*((_QWORD *)this + 55) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this
                                                                                            + 55) >> 64)));
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB6,
    (int)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoextendanimatedvisual.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
