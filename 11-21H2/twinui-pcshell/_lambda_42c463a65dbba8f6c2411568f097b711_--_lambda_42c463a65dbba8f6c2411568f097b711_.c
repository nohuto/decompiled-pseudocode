/*
 * XREFs of _lambda_42c463a65dbba8f6c2411568f097b711_::_lambda_42c463a65dbba8f6c2411568f097b711_ @ 0x1803D4E08
 * Callers:
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x1803D7FC0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1803679E8 (--0-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgRefl_ea_1803679E8.c)
 */

__int64 __fastcall lambda_42c463a65dbba8f6c2411568f097b711_::_lambda_42c463a65dbba8f6c2411568f097b711_(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  v5 = a3[1];
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 16) = v5;
  *(_QWORD *)(a1 + 24) = a3[2];
  v7 = *a3;
  *a3 = 0LL;
  a3[2] = 0LL;
  a3[1] = 0LL;
  *(_QWORD *)(a1 + 8) = v7;
  *((_BYTE *)a3 + 24) = 1;
  v8 = a4[1];
  *(_BYTE *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 48) = v8;
  *(_QWORD *)(a1 + 56) = a4[2];
  v9 = *a4;
  *a4 = 0LL;
  a4[2] = 0LL;
  a4[1] = 0LL;
  *(_BYTE *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 40) = v9;
  *((_BYTE *)a4 + 24) = 1;
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 72,
    a5);
  *(_QWORD *)(a1 + 72) = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
  return a1;
}
