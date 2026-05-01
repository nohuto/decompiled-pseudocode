/*
 * XREFs of ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18022DEFE
 * Callers:
 *     _lambda_41fdec79629b933043b6dd44cc33a98f_::_lambda_41fdec79629b933043b6dd44cc33a98f_ @ 0x1801AF10C (_lambda_41fdec79629b933043b6dd44cc33a98f_--_lambda_41fdec79629b933043b6dd44cc33a98f_.c)
 *     _lambda_666d22edc2a9b06a02075e2b448fb99f_::_lambda_666d22edc2a9b06a02075e2b448fb99f_ @ 0x1801AF1B0 (_lambda_666d22edc2a9b06a02075e2b448fb99f_--_lambda_666d22edc2a9b06a02075e2b448fb99f_.c)
 *     _lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5_::_lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5_ @ 0x1801AF21C (_lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5_--_lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5_.c)
 *     _lambda_a8dc140887cec83d93fc1ab35d00b62d_::_lambda_a8dc140887cec83d93fc1ab35d00b62d_ @ 0x1801AF288 (_lambda_a8dc140887cec83d93fc1ab35d00b62d_--_lambda_a8dc140887cec83d93fc1ab35d00b62d_.c)
 *     _lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_::_lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_ @ 0x1801AF308 (_lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_--_lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_.c)
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z @ 0x180462D8C (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z.c)
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x180462F1C (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18046402C (-PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ??4?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x18022E0AC (--4-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
 */

__int64 __fastcall wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rcx

  *(_QWORD *)a1 = &wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a1;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  v4 = a1 + 56;
  *(_QWORD *)(a1 + 48) = a1 + 56;
  *(_DWORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 60) = 0;
  *(_BYTE *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 128) = 1LL;
  v5 = (_QWORD *)(a1 + 136);
  v5[19] = 0LL;
  v5[20] = 0LL;
  memset_0(v5, 0, 0x98uLL);
  *(_QWORD *)(v4 + 248) = 0LL;
  *(_QWORD *)(a1 + 312) = 0LL;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
    a1,
    a2);
  return a1;
}
