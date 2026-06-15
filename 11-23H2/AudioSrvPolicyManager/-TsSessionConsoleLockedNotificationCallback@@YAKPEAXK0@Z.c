/*
 * XREFs of ?TsSessionConsoleLockedNotificationCallback@@YAKPEAXK0@Z @ 0x180037660
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800233A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_6d6c0a46572599aafa6340809d3efbaf_::_lambda_6d6c0a46572599aafa6340809d3efbaf_ @ 0x1800339F0 (_lambda_6d6c0a46572599aafa6340809d3efbaf_--_lambda_6d6c0a46572599aafa6340809d3efbaf_.c)
 *     _lambda_6d6c0a46572599aafa6340809d3efbaf_::operator() @ 0x180034488 (_lambda_6d6c0a46572599aafa6340809d3efbaf_--operator().c)
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
  v3 = lambda_6d6c0a46572599aafa6340809d3efbaf_::_lambda_6d6c0a46572599aafa6340809d3efbaf_(
         v6,
         (__int64)&v9,
         (__int64)&v8);
  v4 = lambda_6d6c0a46572599aafa6340809d3efbaf_::operator()((__int64)v3);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      2013LL,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v4);
  return 0LL;
}
