/*
 * XREFs of ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1802DA4AE
 * Callers:
 *     _lambda_0cfa17de80a192d7104afc8a843b7ae2_::_lambda_0cfa17de80a192d7104afc8a843b7ae2_ @ 0x1802062D8 (_lambda_0cfa17de80a192d7104afc8a843b7ae2_--_lambda_0cfa17de80a192d7104afc8a843b7ae2_.c)
 *     _lambda_24fd02bbee7f1f39dc6b2f1b639aabc2_::_lambda_24fd02bbee7f1f39dc6b2f1b639aabc2_ @ 0x180206364 (_lambda_24fd02bbee7f1f39dc6b2f1b639aabc2_--_lambda_24fd02bbee7f1f39dc6b2f1b639aabc2_.c)
 *     _lambda_259a1410ba958232e2f70f54c5d031d1_::_lambda_259a1410ba958232e2f70f54c5d031d1_ @ 0x1802063D0 (_lambda_259a1410ba958232e2f70f54c5d031d1_--_lambda_259a1410ba958232e2f70f54c5d031d1_.c)
 *     _lambda_58f4954a35e6992b2fe1d34b610efbe6_::_lambda_58f4954a35e6992b2fe1d34b610efbe6_ @ 0x180206474 (_lambda_58f4954a35e6992b2fe1d34b610efbe6_--_lambda_58f4954a35e6992b2fe1d34b610efbe6_.c)
 *     _lambda_825306615c33696f43f5a813d6c29089_::_lambda_825306615c33696f43f5a813d6c29089_ @ 0x1802064E0 (_lambda_825306615c33696f43f5a813d6c29089_--_lambda_825306615c33696f43f5a813d6c29089_.c)
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x18020AD94 (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@@Z @ 0x18020AF08 (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@@Z.c)
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@UViewOptions@@@Z @ 0x18020B060 (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@UViewOptions@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??4?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1802DAA64 (--4-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
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
