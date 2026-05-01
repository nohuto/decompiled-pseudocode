/*
 * XREFs of ?CDelayedTileActivation_CreateInstance@@YAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@AEBU_GUID@@PEAPEAX@Z @ 0x1804E783C
 * Callers:
 *     ?_PackageActivationArguments@CSwitchController@@AEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@_NPEAPEAUIDelayedAppActivation@@@Z @ 0x1804E5784 (-_PackageActivationArguments@CSwitchController@@AEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERN.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActivation@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActivation@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1804E6704 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActi.c)
 *     ??$MakeAndInitialize@VCDelayedTileActivation@@V1@AEAPEBGAEAPEBGAEAPEBGAEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Details@WRL@Microsoft@@YAJPEAPEAVCDelayedTileActivation@@AEAPEBG11AEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1804E6AFC (--$MakeAndInitialize@VCDelayedTileActivation@@V1@AEAPEBGAEAPEBGAEAPEBGAEAPEAUIUnknown@@AEAW4ACTI.c)
 *     ?InternalRelease@?$ComPtr@VCDelayedTileActivation@@@WRL@Microsoft@@IEAAKXZ @ 0x1804E835C (-InternalRelease@-$ComPtr@VCDelayedTileActivation@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDelayedTileActivation_CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        CDelayedTileActivation *a7)
{
  CDelayedTileActivation *v7; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v13; // [rsp+50h] [rbp+20h] BYREF
  __int64 v14; // [rsp+58h] [rbp+28h] BYREF
  __int64 v15; // [rsp+60h] [rbp+30h] BYREF
  __int64 v16; // [rsp+68h] [rbp+38h] BYREF

  v16 = a4;
  v15 = a3;
  v14 = a2;
  v13 = a1;
  v7 = a7;
  *(_QWORD *)a7 = 0LL;
  a7 = 0LL;
  Microsoft::WRL::ComPtr<CDelayedTileActivation>::InternalRelease(&a7);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<CDelayedTileActivation,CDelayedTileActivation,unsigned short const * &,unsigned short const * &,unsigned short const * &,IUnknown * &,enum ACTIVATEOPTIONSINTERNAL &>(
         &a7,
         &v13,
         &v14,
         &v15,
         &v16,
         &a5);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 274LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_6;
  }
  v8 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDelayedAppActivation,Microsoft::WRL::FtmBase>>(
         (__int64)a7,
         &GUID_688a9333_462e_4715_9651_62bb62432419,
         v7);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 275LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<CDelayedTileActivation>::InternalRelease(&a7);
  return v9;
}
