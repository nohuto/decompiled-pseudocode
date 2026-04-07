/*
 * XREFs of ?StopImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ @ 0x1800B9040
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@@PEAPEAII@Z @ 0x18005E4F4 (-UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?clear@?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800B5764 (-clear@-$vector@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V-$al.c)
 */

__int64 __fastcall CDisplayMixedModeAnimatedVisual::StopImpl(CDisplayMixedModeAnimatedVisual *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  bool v4; // zf
  char v5; // al
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int *v9[3]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::clear((__int64 *)this + 55);
  std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::clear((__int64 *)this + 58);
  v3 = *((_QWORD *)this + 64);
  *((_QWORD *)this + 64) = 0LL;
  if ( v3 )
  {
    v4 = (*(_DWORD *)(v3 + 8))-- == 1;
    v2 = 1LL;
    v5 = CDesktopManager::s_fTimelineDirty;
    if ( v4 )
      v5 = 1;
    CDesktopManager::s_fTimelineDirty = v5;
  }
  v9[0] = (unsigned int *)((char *)this + 520);
  v9[1] = (unsigned int *)((char *)this + 524);
  v9[2] = (unsigned int *)((char *)this + 528);
  v6 = CDisplayAnimatedVisual::UnregisterForAnimationCompleteNotification(
         (CDisplayAnimatedVisual *)v2,
         (struct IAnimationListener *)(((unsigned __int64)this + 288) & -(__int64)(this != 0LL)),
         v9);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4D,
    (int)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
