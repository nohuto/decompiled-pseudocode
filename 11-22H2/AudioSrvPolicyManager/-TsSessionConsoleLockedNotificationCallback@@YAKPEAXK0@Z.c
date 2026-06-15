/*
 * XREFs of ?TsSessionConsoleLockedNotificationCallback@@YAKPEAXK0@Z @ 0x180038300
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180023594 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_f89467a453fb6f478a02f7a30062da1c_::_lambda_f89467a453fb6f478a02f7a30062da1c_ @ 0x180033B6C (_lambda_f89467a453fb6f478a02f7a30062da1c_--_lambda_f89467a453fb6f478a02f7a30062da1c_.c)
 *     _lambda_f89467a453fb6f478a02f7a30062da1c_::operator() @ 0x180034BD4 (_lambda_f89467a453fb6f478a02f7a30062da1c_--operator().c)
 */

__int64 __fastcall TsSessionConsoleLockedNotificationCallback(void *a1, __int64 a2, void *a3)
{
  _QWORD *v3; // rax
  int v4; // eax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v8; // [rsp+40h] [rbp+8h] BYREF
  void *v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  v8 = a1;
  v3 = lambda_f89467a453fb6f478a02f7a30062da1c_::_lambda_f89467a453fb6f478a02f7a30062da1c_(
         v6,
         (__int64)&v9,
         (__int64)&v8);
  v4 = lambda_f89467a453fb6f478a02f7a30062da1c_::operator()((__int64)v3);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      2066LL,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v4);
  return 0LL;
}
