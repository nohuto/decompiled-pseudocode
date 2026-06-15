/*
 * XREFs of wil::details::lambda_call__lambda_4fd0a241c5179e385a4d638496098fc0___::_lambda_call__lambda_4fd0a241c5179e385a4d638496098fc0___ @ 0x14007470C
 * Callers:
 *     ?RuntimeClassInitialize@CLocalMmcssWorkQueue@@QEAAJXZ @ 0x14007502C (-RuntimeClassInitialize@CLocalMmcssWorkQueue@@QEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140038160 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_4fd0a241c5179e385a4d638496098fc0___::_lambda_call__lambda_4fd0a241c5179e385a4d638496098fc0___(
        _BYTE *a1)
{
  HRESULT v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[8] )
  {
    a1[8] = 0;
    v2 = RtwqUnlockWorkQueue(*(_DWORD *)(*(_QWORD *)a1 + 16LL));
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD6,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
        (const char *)(unsigned int)v2);
    *(_DWORD *)(*(_QWORD *)a1 + 16LL) = 0;
  }
}
