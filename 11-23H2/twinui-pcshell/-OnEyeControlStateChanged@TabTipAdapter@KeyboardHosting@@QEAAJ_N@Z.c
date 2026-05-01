/*
 * XREFs of ?OnEyeControlStateChanged@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z @ 0x18018108C
 * Callers:
 *     ?UpdateEyeControlState@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180180FB8 (-UpdateEyeControlState@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     wistd::__function::__func__lambda_bc424067a4c17d1ca50457d76a1f10e4__void___cdecl(unsigned_long_const_&)_::operator() @ 0x18050D260 (wistd--__function--__func__lambda_bc424067a4c17d1ca50457d76a1f10e4__void___cdecl(un_ea_18050D260.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18014B338 (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEyeControlStateChanged(
        KeyboardHosting::TabTipAdapter *this,
        __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)this + 16) + 184LL))(
         *((_QWORD *)this + 16),
         a2,
         &v7);
  if ( v3 < 0 )
  {
    v4 = 2825LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  if ( v7 == 3 )
  {
    v3 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate((RTL_SRWLOCK *)this);
    if ( v3 < 0 )
    {
      v4 = 2829LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
