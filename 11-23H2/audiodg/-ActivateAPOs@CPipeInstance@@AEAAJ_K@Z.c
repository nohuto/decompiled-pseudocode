/*
 * XREFs of ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x1400149E8
 * Callers:
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x140011338 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 * Callees:
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@J_NAEBU_GUID@@M@Z @ 0x14000CFD8 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@J_NAEBU_GUID@@M@Z.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?GetPrev@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400148CC (-GetPrev@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?CopyTo@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x140015AC4 (-CopyTo@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 *     _lambda_383acdc0f755edce25ec95f47577e0dd_::operator() @ 0x14002B274 (_lambda_383acdc0f755edce25ec95f47577e0dd_--operator().c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140038160 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPipeInstance::ActivateAPOs(CPipeInstance *this, __int64 a2)
{
  CPipeInstance *v2; // rdi
  __int64 Prev; // rax
  int v4; // eax
  int v5; // ebx
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v9; // eax
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-40h]
  _QWORD v13[4]; // [rsp+30h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v15; // [rsp+80h] [rbp+20h] BYREF
  __int64 v16; // [rsp+88h] [rbp+28h] BYREF
  __int64 v17; // [rsp+90h] [rbp+30h] BYREF
  __int64 v18; // [rsp+98h] [rbp+38h] BYREF

  v16 = a2;
  v2 = this;
  v18 = *((_QWORD *)this + 3);
  if ( !v18 )
    return 0LL;
  while ( 1 )
  {
    Prev = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetPrev((__int64)this, &v18);
    this = *(CPipeInstance **)Prev;
    if ( *(_DWORD *)(*(_QWORD *)Prev + 40LL) != 2 )
      goto LABEL_7;
    v17 = *((_QWORD *)this + 4);
    v15 = 0LL;
    v4 = ATL::CComPtrBase<IAudioProcessingObject>::CopyTo(v17 + 40, &v15);
    v5 = v4;
    if ( v4 < 0 )
      break;
    v13[0] = v2;
    v13[1] = &v16;
    v13[2] = &v15;
    v13[3] = &v17;
    v6 = lambda_383acdc0f755edce25ec95f47577e0dd_::operator()(v13);
    v5 = v6;
    v7 = *(_DWORD *)(v17 + 4);
    if ( v7 )
    {
      v9 = TrackSystemEffectBehavior(*((_QWORD *)v2 + 24), v7, v6, 0, v17 + 8, SLODWORD(FLOAT_1_0));
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xC1C,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
          (const char *)(unsigned int)v9,
          v12);
    }
    if ( v5 < 0 )
    {
      v10 = (unsigned int)v5;
      v11 = 3102LL;
      goto LABEL_13;
    }
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v15);
LABEL_7:
    if ( !v18 )
      return 0LL;
  }
  v10 = (unsigned int)v4;
  v11 = 3079LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
    (const char *)v10,
    v12);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v15);
  return (unsigned int)v5;
}
