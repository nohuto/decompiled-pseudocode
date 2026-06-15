/*
 * XREFs of wil::details::lambda_call__lambda_3a505af978219ca7b9b1b9157321afb1___::_lambda_call__lambda_3a505af978219ca7b9b1b9157321afb1___ @ 0x140074718
 * Callers:
 *     ?RuntimeClassInitialize@CRTThreadManager@@QEAAJXZ @ 0x140075114 (-RuntimeClassInitialize@CRTThreadManager@@QEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400381A0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_3a505af978219ca7b9b1b9157321afb1___::_lambda_call__lambda_3a505af978219ca7b9b1b9157321afb1___(
        __int64 a1)
{
  HRESULT v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 1) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    v1 = RtwqShutdown();
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x48,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
        (const char *)(unsigned int)v1);
  }
}
