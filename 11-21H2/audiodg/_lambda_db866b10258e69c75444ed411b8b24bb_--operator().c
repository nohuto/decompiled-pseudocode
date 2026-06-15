/*
 * XREFs of _lambda_db866b10258e69c75444ed411b8b24bb_::operator() @ 0x1400591B0
 * Callers:
 *     wil::details::lambda_call__lambda_db866b10258e69c75444ed411b8b24bb___::_lambda_call__lambda_db866b10258e69c75444ed411b8b24bb___ @ 0x140059190 (wil--details--lambda_call__lambda_db866b10258e69c75444ed411b8b24bb___--_lambda_call__lambda_db86.c)
 * Callees:
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x140014BD0 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400265D0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall lambda_db866b10258e69c75444ed411b8b24bb_::operator()(__int64 **a1)
{
  __int64 v1; // r8
  unsigned int v2; // edx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = **a1;
  v2 = *(_DWORD *)(v1 + 4);
  if ( v2 )
  {
    v3 = TrackSystemEffectBehavior(a1[1][24], v2, 0, 0, v1 + 8, SLODWORD(FLOAT_1_0));
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xBE9,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
        (const char *)(unsigned int)v3);
  }
}
