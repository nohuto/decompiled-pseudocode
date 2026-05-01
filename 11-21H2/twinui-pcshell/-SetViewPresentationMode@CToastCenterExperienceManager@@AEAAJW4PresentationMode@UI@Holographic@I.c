/*
 * XREFs of ?SetViewPresentationMode@CToastCenterExperienceManager@@AEAAJW4PresentationMode@UI@Holographic@Internal@Windows@@@Z @ 0x180365290
 * Callers:
 *     ?MoveToastCenterViewToDesktop@CToastCenterExperienceManager@@AEAAJXZ @ 0x180363138 (-MoveToastCenterViewToDesktop@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?MoveToastCenterViewToHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x1803631D0 (-MoveToastCenterViewToHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CToastCenterExperienceManager::SetViewPresentationMode(__int64 a1, int a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  int v9[4]; // [rsp+20h] [rbp-98h] BYREF
  __int128 v10; // [rsp+30h] [rbp-88h]
  __int128 v11; // [rsp+40h] [rbp-78h]
  __int128 v12; // [rsp+50h] [rbp-68h]
  int v13[4]; // [rsp+60h] [rbp-58h] BYREF
  __int128 v14; // [rsp+70h] [rbp-48h]
  __int128 v15; // [rsp+80h] [rbp-38h]
  __int128 v16; // [rsp+90h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 128) + 440LL))(*(_QWORD *)(a1 + 128), v13);
  v4 = *(__int64 **)(a1 + 128);
  LODWORD(v15) = a2;
  *(_OWORD *)v9 = *(_OWORD *)v13;
  v5 = *v4;
  v10 = v14;
  v11 = v15;
  v12 = v16;
  v6 = (*(__int64 (__fastcall **)(__int64 *, int *))(v5 + 448))(v4, v9);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x652,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
