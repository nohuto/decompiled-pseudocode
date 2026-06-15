/*
 * XREFs of ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x14001148C
 * Callers:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140007080 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?InitializeMeterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@I@Z @ 0x14000EEC8 (-InitializeMeterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@I@Z.c)
 *     ?InitializeVolumeInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000F03C (-InitializeVolumeInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z.c)
 *     ?InitializeLimiterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000F188 (-InitializeLimiterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z.c)
 *     ?InitializeSpatializerInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000F2D8 (-InitializeSpatializerInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject.c)
 *     ?InitializeDitherInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000F3C0 (-InitializeDitherInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z.c)
 *     ?InitializeSilenceMonitorInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000F480 (-InitializeSilenceMonitorInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObj.c)
 *     ?InitializePlaybackConstrictorInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000F670 (-InitializePlaybackConstrictorInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessi.c)
 *     ?GetNext@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@AEAPEAU__POSITION@@@Z @ 0x140011684 (-GetNext@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?SetConnectionFrameCount@CConnectionInstance@@QEAAJIPEAI@Z @ 0x1400116AC (-SetConnectionFrameCount@CConnectionInstance@@QEAAJIPEAI@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012E70 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?GetPrev@?$CAtlList@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@@2@@ATL@@QEAAAEAPEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@2@AEAPEAU__POSITION@@@Z @ 0x14001373C (-GetPrev@-$CAtlList@PEAV-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionIns.c)
 *     ?InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x140013A40 (-InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObje.c)
 *     ?InitializeMatrixInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x140013AFC (-InitializeMatrixInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z.c)
 *     ?GetPrev@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400148CC (-GetPrev@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?CopyTo@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x140015AC4 (-CopyTo@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_d @ 0x140052984 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPipeInstance::InitializeAPOInterfaces(CPipeInstance *this)
{
  __int64 v2; // r9
  struct IAudioProcessingObject **v3; // rcx
  __int64 Prev; // rax
  struct CProcessNode *v5; // rsi
  int v6; // eax
  CPipeInstance *v7; // rcx
  unsigned int v8; // ebx
  struct IAudioProcessingObject *v9; // rbx
  CPipeInstance *v10; // rcx
  int v11; // r14d
  struct CProcessNode *v12; // rdx
  CPipeInstance *v13; // rcx
  CPipeInstance *v14; // rcx
  int v15; // esi
  struct CProcessNode *v16; // rdx
  struct CProcessNode *v17; // rdx
  struct CProcessNode *v18; // rdx
  struct IAudioProcessingObject ***v19; // rax
  CConnectionInstance **Next; // rax
  int v21; // eax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  struct IAudioProcessingObject **v26; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  unsigned int v28; // [rsp+60h] [rbp+30h] BYREF
  struct IAudioProcessingObject *v29; // [rsp+68h] [rbp+38h] BYREF
  struct IUnknown *v30; // [rsp+70h] [rbp+40h] BYREF
  __int64 v31; // [rsp+78h] [rbp+48h] BYREF

  v2 = *((unsigned int *)this + 36);
  v28 = *((_DWORD *)this + 36);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 50LL, &WPP_605b3f8256e536826e03e3a93e9cec6e_Traceguids, v2);
  }
  v3 = (struct IAudioProcessingObject **)*((_QWORD *)this + 9);
  v26 = v3;
  v31 = *((_QWORD *)this + 3);
  if ( !v3 )
  {
LABEL_22:
    *((_DWORD *)this + 35) = v28;
    return 0LL;
  }
  while ( 1 )
  {
    if ( !v31 )
      goto LABEL_18;
    Prev = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetPrev(v3, &v31);
    v5 = *(struct CProcessNode **)Prev;
    if ( *(_DWORD *)(*(_QWORD *)Prev + 40LL) != 2 )
      goto LABEL_18;
    v29 = 0LL;
    v6 = ATL::CComPtrBase<IAudioProcessingObject>::CopyTo(*((_QWORD *)v5 + 4) + 40LL, &v29);
    v8 = v6;
    if ( v6 < 0 )
    {
      v23 = 4024LL;
LABEL_40:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
        (const char *)(unsigned int)v6,
        (int)v26);
      goto LABEL_41;
    }
    v9 = v29;
    v11 = CPipeInstance::InitializeVolumeInterface(v7, v5, v29);
    if ( v11 < 0 )
    {
      v25 = 4025LL;
      goto LABEL_38;
    }
    v11 = CPipeInstance::InitializeMeterInterface(v10, v5, v9, v28);
    if ( v11 < 0 )
    {
      v25 = 4026LL;
      goto LABEL_38;
    }
    v11 = CPipeInstance::InitializeDitherInterface(v13, v12, v9);
    if ( v11 < 0 )
    {
      v25 = 4027LL;
      goto LABEL_38;
    }
    v11 = CPipeInstance::InitializeRateConverterInterface(this, v5, v9);
    if ( v11 < 0 )
    {
      v25 = 4028LL;
      goto LABEL_38;
    }
    v11 = CPipeInstance::InitializeMatrixInterface(v14, v5, v9);
    if ( v11 < 0 )
    {
      v25 = 4029LL;
LABEL_38:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v25,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
        (const char *)(unsigned int)v11,
        (int)v26);
      v8 = v11;
      goto LABEL_41;
    }
    v15 = CPipeInstance::InitializeLimiterInterface(this, v5, v9);
    if ( v15 < 0 )
    {
      v24 = 4030LL;
LABEL_32:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v24,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
        (const char *)(unsigned int)v15,
        (int)v26);
      v8 = v15;
LABEL_41:
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v29);
      return v8;
    }
    v30 = 0LL;
    if ( *((_DWORD *)this + 30)
      && ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IUnknown **))v9->lpVtbl->QueryInterface)(
           v9,
           &GUID_6b54b2b5_45ee_4f11_9935_9ec3183ad534,
           &v30) >= 0
      && *((struct IUnknown **)this + 22) != v30 )
    {
      ATL::AtlComPtrAssign((struct IUnknown **)this + 22, v30);
    }
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v30);
    v15 = CPipeInstance::InitializePlaybackConstrictorInterface((struct IUnknown **)this, v16, v9);
    if ( v15 < 0 )
    {
      v24 = 4032LL;
      goto LABEL_32;
    }
    v15 = CPipeInstance::InitializeSilenceMonitorInterface(this, v17, v9);
    if ( v15 < 0 )
    {
      v24 = 4033LL;
      goto LABEL_32;
    }
    v6 = CPipeInstance::InitializeSpatializerInterface(this, v18, v9);
    v8 = v6;
    if ( v6 < 0 )
    {
      v23 = 4034LL;
      goto LABEL_40;
    }
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v29);
LABEL_18:
    v19 = (struct IAudioProcessingObject ***)ATL::CAtlList<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *,ATL::CElementTraits<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *>>::GetPrev(
                                               v3,
                                               &v26);
    v3 = *v19;
    v29 = **v19;
    if ( v29 )
      break;
LABEL_21:
    if ( !v26 )
      goto LABEL_22;
  }
  while ( 1 )
  {
    Next = (CConnectionInstance **)ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetNext(
                                     v3,
                                     &v29);
    v21 = CConnectionInstance::SetConnectionFrameCount(*Next, v28, &v28);
    v8 = v21;
    if ( v21 < 0 )
      break;
    if ( !v29 )
      goto LABEL_21;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFCC,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
    (const char *)(unsigned int)v21,
    (int)v26);
  return v8;
}
