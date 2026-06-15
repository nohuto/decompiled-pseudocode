/*
 * XREFs of ??1?$CComPtrBase@VPhoneTopology@@@ATL@@QEAA@XZ @ 0x180026530
 * Callers:
 *     ?CreateInstance@PhoneTopology@@SAJPEAUIMMDevice@@PEAUIEndpointCollection@@1PEAPEAUIPhoneTopology@@@Z @ 0x180026560 (-CreateInstance@PhoneTopology@@SAJPEAUIMMDevice@@PEAUIEndpointCollection@@1PEAPEAUIPhoneTopology.c)
 *     ?CreateInstance@EndpointDevice@@SAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x180026654 (-CreateInstance@EndpointDevice@@SAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 *     ?CreateInstance@AudioDeviceMgr@@SAJPEAUIEndpointNotificationCallback@@PEAPEAUIAudioDeviceMgr@@@Z @ 0x180059180 (-CreateInstance@AudioDeviceMgr@@SAJPEAUIEndpointNotificationCallback@@PEAPEAUIAudioDeviceMgr@@@Z.c)
 *     ?CreateInstance@EndpointCollection@@SAJPEAPEAUIEndpointCollection@@@Z @ 0x18005AC78 (-CreateInstance@EndpointCollection@@SAJPEAPEAUIEndpointCollection@@@Z.c)
 *     ?CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z @ 0x180063CCC (-CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z.c)
 *     ??1?$CComPtr@VEndpointDevice@@@ATL@@QEAA@XZ @ 0x18013BE08 (--1-$CComPtr@VEndpointDevice@@@ATL@@QEAA@XZ.c)
 *     ?CreateInstance@TelephonyController@@SAJPEAPEAUITelephonyController@@@Z @ 0x180166408 (-CreateInstance@TelephonyController@@SAJPEAPEAUITelephonyController@@@Z.c)
 *     ?CreateInstance@TelephonyControllerCallInstance@@SAJPEA_KPEAUIKsControl@@PEAU_TelephonyInstanceData@@PEAPEAUITelephonyControllerCallInstance@@@Z @ 0x18016802C (-CreateInstance@TelephonyControllerCallInstance@@SAJPEA_KPEAUIKsControl@@PEAU_TelephonyInstanceD.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComPtrBase<PhoneTopology>::~CComPtrBase<PhoneTopology>(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
