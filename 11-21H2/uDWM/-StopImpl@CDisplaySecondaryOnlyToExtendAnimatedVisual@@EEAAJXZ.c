/*
 * XREFs of ?StopImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BB790
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@@PEAPEAII@Z @ 0x18005E4F4 (-UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyToExtendAnimatedVisual::StopImpl(
        CDisplaySecondaryOnlyToExtendAnimatedVisual *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  bool v6; // zf
  char v7; // al
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int *v11[3]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *((_QWORD *)this + 55);
  *((_QWORD *)this + 55) = 0LL;
  if ( v2 )
    CBaseObject::Release((CBaseObject *)(v2 + 8));
  v3 = *((_QWORD *)this + 56);
  *((_QWORD *)this + 56) = 0LL;
  if ( v3 )
    CBaseObject::Release((CBaseObject *)(v3 + 8));
  v4 = *((_QWORD *)this + 57);
  *((_QWORD *)this + 57) = 0LL;
  if ( v4 )
    CBaseObject::Release((CBaseObject *)(v4 + 8));
  v5 = *((_QWORD *)this + 58);
  *((_QWORD *)this + 58) = 0LL;
  if ( v5 )
  {
    v6 = (*(_DWORD *)(v5 + 8))-- == 1;
    v4 = 1LL;
    v7 = CDesktopManager::s_fTimelineDirty;
    if ( v6 )
      v7 = 1;
    CDesktopManager::s_fTimelineDirty = v7;
  }
  v11[0] = (unsigned int *)((char *)this + 472);
  v11[1] = (unsigned int *)((char *)this + 476);
  v11[2] = (unsigned int *)((char *)this + 480);
  v8 = CDisplayAnimatedVisual::UnregisterForAnimationCompleteNotification(
         (CDisplayAnimatedVisual *)v4,
         (struct IAnimationListener *)(((unsigned __int64)this + 288) & -(__int64)(this != 0LL)),
         v11);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x77,
    (int)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoextendanimatedvisual.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
