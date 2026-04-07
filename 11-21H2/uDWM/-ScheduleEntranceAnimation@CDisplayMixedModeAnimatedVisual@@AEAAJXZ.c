/*
 * XREFs of ?ScheduleEntranceAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800B8D38
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ @ 0x1800B8CB0 (-OnGlobalTimeUpdatedImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800B4374 (--$_Emplace_reallocate@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800B4618 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B4EC4 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplayMixedModeAnimatedVisual::ScheduleEntranceAnimation(CDisplayMixedModeAnimatedVisual *this)
{
  const struct tagRECT *v2; // rdi
  const struct tagRECT *v3; // rbp
  int v4; // eax
  unsigned int v5; // esi
  _QWORD *v6; // rsi
  struct CAnimatedTransitionVisual **v7; // rdx
  struct CAnimatedTransitionVisual *v8; // rcx
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  unsigned int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct CAnimatedTransitionVisual *v15; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = 0LL;
  GetDesktopID(1LL, &v16);
  v2 = (const struct tagRECT *)*((_QWORD *)this + 61);
  v3 = (const struct tagRECT *)*((_QWORD *)this + 62);
  if ( v2 == v3 )
  {
    v6 = (_QWORD *)((char *)this + 464);
LABEL_14:
    v10 = CDisplayAnimatedVisual::ScheduleAnimation(
            (struct IAnimatedVisual *)*((unsigned int *)this + 89),
            v6,
            (CDisplayMixedModeAnimatedVisual *)((char *)this + 288),
            *((_DWORD *)this + 88),
            *((_DWORD *)this + 89),
            (unsigned int *)this + 132);
    v11 = v10;
    if ( v10 >= 0 )
    {
      v12 = CDisplayAnimatedVisual::ScheduleAnimation(
              (struct IAnimatedVisual *)*((unsigned int *)this + 89),
              (_QWORD *)this + 55,
              (CDisplayMixedModeAnimatedVisual *)((char *)this + 288),
              *((_DWORD *)this + 88),
              *((_DWORD *)this + 89),
              (unsigned int *)this + 131);
      v13 = v12;
      if ( v12 >= 0 )
      {
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x12F,
          (int)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
          (const char *)(unsigned int)v12);
        return v13;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x127,
        (int)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
        (const char *)(unsigned int)v10);
      return v11;
    }
  }
  else
  {
    while ( 1 )
    {
      v15 = 0LL;
      v4 = CDisplayAnimatedVisual::CaptureAndAddVisual(this, v16, v2, v2, &v15);
      v5 = v4;
      if ( v4 < 0 )
        break;
      v6 = (_QWORD *)((char *)this + 464);
      v7 = (struct CAnimatedTransitionVisual **)*((_QWORD *)this + 59);
      if ( v7 == *((struct CAnimatedTransitionVisual ***)this + 60) )
      {
        std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>(
          (const char *)this + 464,
          (__int64)v7,
          (__int64 *)&v15);
        v8 = v15;
      }
      else
      {
        v8 = 0LL;
        *v7 = v15;
        *((_QWORD *)this + 59) += 8LL;
      }
      if ( v8 )
        CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v8 + 8));
      if ( ++v2 == v3 )
        goto LABEL_14;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11D,
      (int)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
      (const char *)(unsigned int)v4);
    if ( v15 )
      CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v15 + 8));
    return v5;
  }
}
