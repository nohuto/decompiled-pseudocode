/*
 * XREFs of ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x140004118
 * Callers:
 *     ??1?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x14000430C (--1-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x14008FF14 (--1-$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ @ 0x14008FF80 (--1-$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140090178 (--1-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??_G?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400904F0 (--_G-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140090570 (--_G-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_GCCrossProcessBaseServerEndpoint@@UEAAPEAXI@Z @ 0x140090790 (--_GCCrossProcessBaseServerEndpoint@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002A38 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140002CC8 (-reset@-$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CCrossProcessBaseServerEndpoint::~CCrossProcessBaseServerEndpoint(
        CCrossProcessBaseServerEndpoint *this)
{
  __int64 *v2; // rdi
  char *v3; // rcx
  int v4; // edx
  int v5; // r8d

  *(_QWORD *)this = &CCrossProcessBaseServerEndpoint::`vftable'{for `IAudioEndpoint'};
  v2 = (__int64 *)((char *)this + 416);
  *((_QWORD *)this + 1) = &CCrossProcessBaseServerEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 51) = &CCrossProcessBaseServerEndpoint::`vftable';
  wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::reset((__int64 *)this + 52);
  v3 = (char *)*((_QWORD *)this + 54);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v3);
    *((_QWORD *)this + 54) = 0LL;
  }
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(v2);
  CCrossProcessBaseEndpoint::~CCrossProcessBaseEndpoint(this, v4, v5);
}
