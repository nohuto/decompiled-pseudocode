/*
 * XREFs of ?InitializeVolumeInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000F03C
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
__int64 __fastcall CPipeInstance::InitializeVolumeInterface(
        CPipeInstance *this,
        struct CProcessNode *a2,
        struct IAudioProcessingObject *a3)
{
  int v5; // ebx
  __int64 v7; // [rsp+20h] [rbp-60h] BYREF
  __int64 v8; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v9[24]; // [rsp+30h] [rbp-50h] BYREF
  int v10; // [rsp+48h] [rbp-38h]
  _BYTE v11[16]; // [rsp+50h] [rbp-30h] BYREF
  int v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-14h]

  v7 = 0LL;
  memset(v9, 0, sizeof(v9));
  v10 = 0;
  v8 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
         &v8) >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(struct CProcessNode *, __int64 *))(*(_QWORD *)a2 + 8LL))(a2, &v7);
    if ( v5 < 0
      || (v5 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v7 + 48LL))(v7, v11), v5 < 0)
      || (*(_DWORD *)v9 = 28,
          *(GUID *)&v9[4] = GUID_06587e71_f043_403a_bf49_cb591ba6e103,
          v10 = v13,
          *(_DWORD *)&v9[20] = v12,
          v5 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _BYTE *))a3->lpVtbl->Initialize)(
                 a3,
                 28LL,
                 v9),
          v5 < 0) )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          41LL,
          &WPP_605b3f8256e536826e03e3a93e9cec6e_Traceguids,
          (unsigned int)v5);
      }
      AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeVolumeInterface", 0xD10u, v5);
    }
  }
  else
  {
    v5 = 0;
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v8);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v7);
  return (unsigned int)v5;
}
