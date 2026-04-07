/*
 * XREFs of ?ScheduleEntranceAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800BC558
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ @ 0x1800BC4D0 (-OnGlobalTimeUpdatedImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800B7330 (--$_Emplace_reallocate@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800B7748 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B81B4 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplayMixedModeAnimatedVisual::ScheduleEntranceAnimation(
        CDisplayMixedModeAnimatedVisual *this,
        __int64 a2,
        __int64 a3)
{
  const struct tagRECT *v4; // rdi
  const struct tagRECT *v5; // rbp
  int v6; // eax
  unsigned int v7; // esi
  _QWORD *v8; // rsi
  struct CAnimatedTransitionVisual **v9; // rdx
  struct CAnimatedTransitionVisual *v10; // rcx
  int v12; // eax
  unsigned int v13; // edi
  int v14; // eax
  unsigned int v15; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct CAnimatedTransitionVisual *v17; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp+10h] BYREF

  v18 = 0LL;
  GetDesktopID(1LL, &v18, a3);
  v4 = (const struct tagRECT *)*((_QWORD *)this + 61);
  v5 = (const struct tagRECT *)*((_QWORD *)this + 62);
  if ( v4 == v5 )
  {
    v8 = (_QWORD *)((char *)this + 464);
LABEL_14:
    v12 = CDisplayAnimatedVisual::ScheduleAnimation(
            (CDisplayMixedModeAnimatedVisual *)((char *)this + 288),
            v8,
            (struct IAnimationListener *)(((unsigned __int64)this + 288) & -(__int64)(this != 0LL)),
            *((_DWORD *)this + 88),
            *((_DWORD *)this + 89),
            (unsigned int *)this + 132);
    v13 = v12;
    if ( v12 >= 0 )
    {
      v14 = CDisplayAnimatedVisual::ScheduleAnimation(
              (struct IAnimatedVisual *)*((unsigned int *)this + 89),
              (_QWORD *)this + 55,
              (struct IAnimationListener *)(((unsigned __int64)this + 288) & -(__int64)(this != 0LL)),
              *((_DWORD *)this + 88),
              *((_DWORD *)this + 89),
              (unsigned int *)this + 131);
      v15 = v14;
      if ( v14 >= 0 )
      {
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x12F,
          (__int64)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
          (const char *)(unsigned int)v14);
        return v15;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x127,
        (__int64)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
        (const char *)(unsigned int)v12);
      return v13;
    }
  }
  else
  {
    while ( 1 )
    {
      v17 = 0LL;
      v6 = CDisplayAnimatedVisual::CaptureAndAddVisual(this, v18, v4, v4, &v17);
      v7 = v6;
      if ( v6 < 0 )
        break;
      v8 = (_QWORD *)((char *)this + 464);
      v9 = (struct CAnimatedTransitionVisual **)*((_QWORD *)this + 59);
      if ( v9 == *((struct CAnimatedTransitionVisual ***)this + 60) )
      {
        std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>(
          (const char *)this + 464,
          (__int64)v9,
          (__int64 *)&v17);
        v10 = v17;
      }
      else
      {
        v10 = 0LL;
        *v9 = v17;
        *((_QWORD *)this + 59) += 8LL;
      }
      if ( v10 )
        CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v10 + 8));
      if ( ++v4 == v5 )
        goto LABEL_14;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11D,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
      (const char *)(unsigned int)v6);
    if ( v17 )
      CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v17 + 8));
    return v7;
  }
}
