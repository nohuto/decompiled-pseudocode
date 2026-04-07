/*
 * XREFs of ??1CDisplayExtendAnimatedVisual@@MEAA@XZ @ 0x1800B725C
 * Callers:
 *     ??_ECDisplayExtendAnimatedVisual@@MEAAPEAXI@Z @ 0x1800B7350 (--_ECDisplayExtendAnimatedVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18005AC70 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800628A4 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800B425C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@w.c)
 */

void __fastcall CDisplayExtendAnimatedVisual::~CDisplayExtendAnimatedVisual(CDisplayExtendAnimatedVisual *this)
{
  int v2; // eax
  __int64 v3; // rax
  bool v4; // zf
  char v5; // al
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &CDisplayExtendAnimatedVisual::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 36) = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `IAnimationListener'};
  v2 = CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
  if ( v2 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x24,
      (int)"clientcore\\windows\\dwm\\udwm\\displayextendanimatedvisual.cpp",
      (const char *)(unsigned int)v2,
      v9);
  v3 = *((_QWORD *)this + 60);
  if ( v3 )
  {
    v4 = (*(_DWORD *)(v3 + 8))-- == 1;
    v5 = CDesktopManager::s_fTimelineDirty;
    if ( v4 )
      v5 = 1;
    CDesktopManager::s_fTimelineDirty = v5;
  }
  v6 = *((_QWORD *)this + 59);
  if ( v6 )
    CBaseObject::Release((CBaseObject *)(v6 + 8));
  v7 = *((_QWORD *)this + 56);
  if ( v7 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>>(
      v7,
      *((_QWORD *)this + 57));
    std::_Deallocate<16,0>(
      *((void **)this + 56),
      (*((_QWORD *)this + 58) - *((_QWORD *)this + 56)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 56) = 0LL;
    *((_QWORD *)this + 57) = 0LL;
    *((_QWORD *)this + 58) = 0LL;
  }
  v8 = *((_QWORD *)this + 55);
  if ( v8 )
    CBaseObject::Release((CBaseObject *)(v8 + 8));
  CDisplayAnimatedVisual::~CDisplayAnimatedVisual(this);
}
