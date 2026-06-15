/*
 * XREFs of ?RuntimeClassInitialize@CRTThreadManager@@QEAAJXZ @ 0x1400750C4
 * Callers:
 *     ??$MakeAndInitialize@VCRTThreadManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCRTThreadManager@@@Z @ 0x140074378 (--$MakeAndInitialize@VCRTThreadManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCRTThreadManager.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::details::lambda_call__lambda_3a505af978219ca7b9b1b9157321afb1___::_lambda_call__lambda_3a505af978219ca7b9b1b9157321afb1___ @ 0x1400746C8 (wil--details--lambda_call__lambda_3a505af978219ca7b9b1b9157321afb1___--_lambda_call__lambda_3a50.c)
 *     ?InitializeRTOperatingMode@CRTThreadManager@@AEAAJXZ @ 0x140074C24 (-InitializeRTOperatingMode@CRTThreadManager@@AEAAJXZ.c)
 */

__int64 __fastcall CRTThreadManager::RuntimeClassInitialize(CRTThreadManager *this)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v7; // [rsp+38h] [rbp+10h] BYREF
  char v8; // [rsp+39h] [rbp+11h]

  v2 = RtwqStartup();
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
  v8 = 1;
  v5 = CRTThreadManager::InitializeRTOperatingMode(this);
  v3 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
      (const char *)(unsigned int)v5);
    wil::details::lambda_call__lambda_3a505af978219ca7b9b1b9157321afb1___::_lambda_call__lambda_3a505af978219ca7b9b1b9157321afb1___((__int64)&v7);
    return v3;
  }
  *((_BYTE *)this + 96) = 1;
  return 0LL;
}
