/*
 * XREFs of ?InitializeMeterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@I@Z @ 0x14000EEC8
 * Callers:
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x14001148C (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x140052944 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DA4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPipeInstance::InitializeMeterInterface(
        CPipeInstance *this,
        struct CProcessNode *a2,
        struct IAudioProcessingObject *a3,
        int a4)
{
  int v7; // ebx
  __int64 v9; // [rsp+20h] [rbp-29h] BYREF
  __int64 v10; // [rsp+28h] [rbp-21h] BYREF
  _OWORD v11[2]; // [rsp+30h] [rbp-19h] BYREF
  int v12; // [rsp+50h] [rbp+7h]
  _BYTE v13[16]; // [rsp+58h] [rbp+Fh] BYREF
  int v14; // [rsp+68h] [rbp+1Fh]
  float v15; // [rsp+74h] [rbp+2Bh]

  v9 = 0LL;
  memset(v11, 0, sizeof(v11));
  v12 = 0;
  v10 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_2b6a07f7_ea05_428b_a730_afb23c032f5c,
         &v10) >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(struct CProcessNode *, __int64 *))(*(_QWORD *)a2 + 8LL))(a2, &v9);
    if ( v7 < 0 )
      goto LABEL_9;
    v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v9 + 48LL))(v9, v13);
    if ( v7 < 0
      || (LODWORD(v11[0]) = 36,
          *(GUID *)((char *)v11 + 4) = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba,
          DWORD2(v11[1]) = (int)((float)((float)(v15 * 10.0) / 1000.0) + 0.5),
          v12 = a4,
          HIDWORD(v11[1]) = 10,
          DWORD1(v11[1]) = v14,
          v7 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _OWORD *))a3->lpVtbl->Initialize)(
                 a3,
                 36LL,
                 v11),
          v7 < 0) )
    {
LABEL_9:
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          42LL,
          &WPP_605b3f8256e536826e03e3a93e9cec6e_Traceguids,
          (unsigned int)v7);
      }
      AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeMeterInterface", 0xD59u, v7);
    }
  }
  else
  {
    v7 = 0;
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v10);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v9);
  return (unsigned int)v7;
}
