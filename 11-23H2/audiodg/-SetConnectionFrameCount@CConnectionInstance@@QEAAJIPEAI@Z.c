/*
 * XREFs of ?SetConnectionFrameCount@CConnectionInstance@@QEAAJIPEAI@Z @ 0x1400116AC
 * Callers:
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x14001148C (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??$?4UIAudioProcessingObject@@@?$CComPtr@UIAudioProcessingObjectVBR@@@ATL@@QEAAPEAUIAudioProcessingObjectVBR@@AEBV?$CComPtr@UIAudioProcessingObject@@@1@@Z @ 0x140014AE4 (--$-4UIAudioProcessingObject@@@-$CComPtr@UIAudioProcessingObjectVBR@@@ATL@@QEAAPEAUIAudioProcess.c)
 *     ?CopyTo@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x140015AC4 (-CopyTo@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x140052944 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DA4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CConnectionInstance::SetConnectionFrameCount(
        CConnectionInstance *this,
        unsigned int a2,
        unsigned int *a3)
{
  int v6; // ebx
  __int64 v7; // rax
  struct IUnknownVtbl *lpVtbl; // rax
  int v10; // eax
  struct IUnknown *v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  v6 = 0;
  *a3 = a2;
  v7 = *((_QWORD *)this + 4);
  if ( !v7 || *(_DWORD *)(v7 + 40) != 2 )
    goto LABEL_6;
  v6 = ATL::CComPtrBase<IAudioProcessingObject>::CopyTo(*(_QWORD *)(v7 + 32) + 40LL, &v12);
  if ( v6 >= 0 )
  {
    ATL::CComPtr<IAudioProcessingObjectVBR>::operator=<IAudioProcessingObject>(&v11);
    if ( !v11 )
    {
      v6 = 0;
LABEL_6:
      *((_DWORD *)this + 10) = *a3;
      goto LABEL_7;
    }
    lpVtbl = v11->lpVtbl;
    if ( *((_DWORD *)this + 4) )
      v10 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, unsigned int *))lpVtbl[1].AddRef)(v11, a2, a3);
    else
      v10 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, unsigned int *))lpVtbl[1].QueryInterface)(v11, a2, a3);
    v6 = v10;
    if ( v10 >= 0 )
      goto LABEL_6;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      12LL,
      &WPP_5af45e929a4337b0b73e98b99732a783_Traceguids,
      (unsigned int)v6);
  }
  AudDGTraceLoggingErrorHelper("CConnectionInstance::SetConnectionFrameCount", 0x38Fu, v6);
LABEL_7:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v11);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v12);
  return (unsigned int)v6;
}
