/*
 * XREFs of ??0?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18019B5FC
 * Callers:
 *     _lambda_b9b326c89cb8166a780ad4ef449f4933_::_lambda_b9b326c89cb8166a780ad4ef449f4933_ @ 0x18019B2B0 (_lambda_b9b326c89cb8166a780ad4ef449f4933_--_lambda_b9b326c89cb8166a780ad4ef449f4933_.c)
 *     _lambda_6e59436657fdc730ce46c13d2be9f9a3_::operator() @ 0x18019C240 (_lambda_6e59436657fdc730ce46c13d2be9f9a3_--operator().c)
 *     _lambda_b9b326c89cb8166a780ad4ef449f4933_::operator() @ 0x18019C64C (_lambda_b9b326c89cb8166a780ad4ef449f4933_--operator().c)
 *     _lambda_e09b1650d30d60aee5c16df43a188659_::operator() @ 0x18019CD40 (_lambda_e09b1650d30d60aee5c16df43a188659_--operator().c)
 *     ?ResetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@@Z @ 0x1801A0900 (-ResetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@@Z.c)
 *     ?SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1801A10D4 (-SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@A.c)
 * Callees:
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ??4?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x18019BF10 (--4-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProv.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rcx

  *(_QWORD *)a1 = &wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::`vftable';
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
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::operator=(a1, a2);
  return a1;
}
