/*
 * XREFs of ?StopImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800B8260
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@@PEAPEAII@Z @ 0x18005E4F4 (-UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?clear@?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800B5764 (-clear@-$vector@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V-$al.c)
 */

__int64 __fastcall CDisplayExtendToDuplicateAnimatedVisual::StopImpl(CDisplayExtendToDuplicateAnimatedVisual *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rax
  bool v5; // zf
  char v6; // al
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int *v10[4]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *((_QWORD *)this + 55);
  *((_QWORD *)this + 55) = 0LL;
  if ( v2 )
    CBaseObject::Release((CBaseObject *)(v2 + 8));
  std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::clear((__int64 *)this + 56);
  v4 = *((_QWORD *)this + 59);
  *((_QWORD *)this + 59) = 0LL;
  if ( v4 )
  {
    v5 = (*(_DWORD *)(v4 + 8))-- == 1;
    v3 = 1LL;
    v6 = CDesktopManager::s_fTimelineDirty;
    if ( v5 )
      v6 = 1;
    CDesktopManager::s_fTimelineDirty = v6;
  }
  v10[0] = (unsigned int *)((char *)this + 480);
  v10[1] = (unsigned int *)((char *)this + 484);
  v10[2] = (unsigned int *)((char *)this + 488);
  v10[3] = (unsigned int *)((char *)this + 492);
  v7 = CDisplayAnimatedVisual::UnregisterForAnimationCompleteNotification(
         (CDisplayAnimatedVisual *)v3,
         (struct IAnimationListener *)(((unsigned __int64)this + 288) & -(__int64)(this != 0LL)),
         v10);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x60,
    (int)"clientcore\\windows\\dwm\\udwm\\displayextendtoduplicateanimatedvisual.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
