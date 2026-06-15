/*
 * XREFs of ?OnDefaultDeviceChanged@PhoneCallAudio@@UEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x1800037F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SwitchActivePhoneCallEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x18013D6F4 (-SwitchActivePhoneCallEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PhoneCallAudio::OnDefaultDeviceChanged(
        __int64 a1,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        int a3,
        struct IEndpointDevice *a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi

  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 80);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 80));
  if ( *(_QWORD *)(a1 + 40) && *(_DWORD *)(a1 + 68) && a3 == 2 )
    PhoneCallAudio::SwitchActivePhoneCallEndpoint((PhoneCallAudio *)a1, a2, a4);
  LeaveCriticalSection(v8);
}
