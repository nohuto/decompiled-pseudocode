/*
 * XREFs of ?InitializeLimiterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000F188
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
__int64 __fastcall CPipeInstance::InitializeLimiterInterface(
        CPipeInstance *this,
        struct CProcessNode *a2,
        struct IAudioProcessingObject *a3)
{
  int v6; // ebx
  __int64 v8; // [rsp+20h] [rbp-60h] BYREF
  __int64 v9; // [rsp+28h] [rbp-58h] BYREF
  _OWORD v10[2]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v11[16]; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v12; // [rsp+60h] [rbp-20h]
  unsigned int v13; // [rsp+6Ch] [rbp-14h]

  v9 = 0LL;
  memset(v10, 0, sizeof(v10));
  v8 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_7df8824c_aec7_4119_9425_e6979172a8ae,
         &v9) >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(struct CProcessNode *, __int64 *))(*(_QWORD *)a2 + 8LL))(a2, &v8);
    if ( v6 < 0
      || (v6 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v8 + 48LL))(v8, v11), v6 < 0)
      || (LODWORD(v10[0]) = 32,
          *(GUID *)((char *)v10 + 4) = GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
          *(_QWORD *)((char *)&v10[1] + 4) = __PAIR64__(v13, v12),
          HIDWORD(v10[1]) = *(_QWORD *)this == 0LL,
          v6 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _OWORD *))a3->lpVtbl->Initialize)(
                 a3,
                 32LL,
                 v10),
          v6 < 0) )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          48LL,
          &WPP_605b3f8256e536826e03e3a93e9cec6e_Traceguids,
          (unsigned int)v6);
      }
      AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeLimiterInterface", 0xF0Cu, v6);
    }
  }
  else
  {
    v6 = 0;
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v8);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v9);
  return (unsigned int)v6;
}
