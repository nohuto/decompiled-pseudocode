/*
 * XREFs of ?CaptureExistingExtendedDisplays@CDisplayAnimatedVisual@@IEAAJ_KPEBVCDWMDisplay@@AEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800B48A4
 * Callers:
 *     ?CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual@@PEBVCDWMDisplay@@AEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800B4C4C (-CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x18003DED8 (-IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 *     ?GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z @ 0x18003EAB0 (-GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180045F18 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800B4374 (--$_Emplace_reallocate@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800B4618 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     ?clear@?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800B5764 (-clear@-$vector@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V-$al.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplayAnimatedVisual::CaptureExistingExtendedDisplays(
        CDisplayAnimatedVisual *this,
        __int64 a2,
        struct CDWMDisplay *a3,
        __int64 a4)
{
  CDWMDisplaySet *v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  const struct CDWMDisplay *MatchedPhysicalDisplayNoRef; // rbp
  int v14; // eax
  unsigned int v15; // ebx
  struct tagRECT v16; // xmm6
  CAnimatedTransitionVisual *v17; // rbx
  CAnimatedTransitionVisual **v18; // rdx
  CAnimatedTransitionVisual *v19; // rcx
  CAnimatedTransitionVisual *v21; // [rsp+30h] [rbp-88h] BYREF
  struct tagRECT v22; // [rsp+38h] [rbp-80h] BYREF
  struct tagRECT v23; // [rsp+48h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::clear(a4);
  v8 = (CDWMDisplaySet *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 17);
  v9 = 0LL;
  v10 = *((_QWORD *)this + 40);
  if ( !*(_DWORD *)(v10 + 64) )
    return 0LL;
  while ( 1 )
  {
    v11 = *(_QWORD *)(v10 + 40);
    v12 = *(_QWORD *)(v11 + 8 * v9);
    if ( *(_BYTE *)(v12 + 252) || a3 && CDWMDisplay::IsSamePhysicalDisplay(*(CDWMDisplay **)(v11 + 8 * v9), a3) )
      goto LABEL_12;
    MatchedPhysicalDisplayNoRef = CDWMDisplaySet::GetMatchedPhysicalDisplayNoRef(v8, (const struct CDWMDisplay *)v12);
    if ( !MatchedPhysicalDisplayNoRef )
      goto LABEL_12;
    v23 = *(struct tagRECT *)(v12 + 56);
    v21 = 0LL;
    v14 = CDisplayAnimatedVisual::CaptureAndAddVisual(this, a2, &v23, &v23, &v21);
    v15 = v14;
    if ( v14 < 0 )
      break;
    v22 = *(struct tagRECT *)((char *)MatchedPhysicalDisplayNoRef + 56);
    v16 = v22;
    v17 = v21;
    CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v21, &v22);
    *(struct tagRECT *)((char *)v17 + 872) = v16;
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v17 + 8), 4096);
    v18 = *(CAnimatedTransitionVisual ***)(a4 + 8);
    if ( v18 == *(CAnimatedTransitionVisual ***)(a4 + 16) )
    {
      std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>(
        (const char *)a4,
        (__int64)v18,
        (__int64 *)&v21);
      v19 = v21;
    }
    else
    {
      v19 = 0LL;
      *v18 = v17;
      *(_QWORD *)(a4 + 8) += 8LL;
    }
    if ( v19 )
      CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v19 + 8));
LABEL_12:
    v9 = (unsigned int)(v9 + 1);
    v10 = *((_QWORD *)this + 40);
    if ( (unsigned int)v9 >= *(_DWORD *)(v10 + 64) )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3C3,
    (int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
    (const char *)(unsigned int)v14);
  if ( v21 )
    CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v21 + 8));
  return v15;
}
