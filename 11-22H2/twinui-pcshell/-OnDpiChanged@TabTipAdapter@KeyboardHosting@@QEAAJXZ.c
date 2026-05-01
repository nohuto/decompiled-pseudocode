/*
 * XREFs of ?OnDpiChanged@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x18014A270
 * Callers:
 *     wistd::__function::__func__lambda_2aaa3fcbc81a3c042074e76849eaaaa8__void___cdecl(void)_::operator() @ 0x18020CBD0 (wistd--__function--__func__lambda_2aaa3fcbc81a3c042074e76849eaaaa8__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18014B338 (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnDpiChanged(KeyboardHosting::TabTipAdapter *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 16) + 72LL))(*((_QWORD *)this + 16), &v6);
  if ( v2 < 0 )
  {
    v3 = 2687LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  if ( v6 == 3 )
  {
    v2 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate(this);
    if ( v2 < 0 )
    {
      v3 = 2691LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
