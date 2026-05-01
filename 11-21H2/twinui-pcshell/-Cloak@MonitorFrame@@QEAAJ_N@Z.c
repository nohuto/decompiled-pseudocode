/*
 * XREFs of ?Cloak@MonitorFrame@@QEAAJ_N@Z @ 0x180432230
 * Callers:
 *     ??R_lambda_44f2a899e44ce20919ad94180e8373fc_@@QEBAXXZ @ 0x18042F5E4 (--R_lambda_44f2a899e44ce20919ad94180e8373fc_@@QEBAXXZ.c)
 *     _lambda_baaea9c5454d5217874bd274f7881db0_::operator() @ 0x18042FDDC (_lambda_baaea9c5454d5217874bd274f7881db0_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindow@MonitorFrame@@QEAAPEAUHWND__@@XZ @ 0x18043473C (-GetWindow@MonitorFrame@@QEAAPEAUHWND__@@XZ.c)
 */

__int64 __fastcall MonitorFrame::Cloak(MonitorFrame *this)
{
  HWND Window; // rax
  HRESULT v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int pvAttribute; // [rsp+38h] [rbp+10h] BYREF

  pvAttribute = 0;
  Window = MonitorFrame::GetWindow(this);
  v2 = DwmSetWindowAttribute(Window, 0xDu, &pvAttribute, 4u);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x30,
    (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\MonitorFrame.h",
    (const char *)(unsigned int)v2);
  return v3;
}
