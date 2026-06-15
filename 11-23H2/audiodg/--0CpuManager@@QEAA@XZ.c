/*
 * XREFs of ??0CpuManager@@QEAA@XZ @ 0x140052E68
 * Callers:
 *     ??$MakeAndInitialize@VCpuManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z @ 0x140052D38 (--$MakeAndInitialize@VCpuManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x140005270 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?UpdateRehashThresholds@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEAAXXZ @ 0x14000A848 (-UpdateRehashThresholds@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy.c)
 *     ??0HandleRegistrations@GraphStreamingResourceManager@@QEAA@XZ @ 0x14001C56C (--0HandleRegistrations@GraphStreamingResourceManager@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CpuManager *__fastcall CpuManager::CpuManager(CpuManager *this)
{
  __int64 v2; // rdx
  __int64 v3; // rdx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>((__int64)this);
  *(_QWORD *)this = &CpuManager::`vftable';
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 16), 0, 0);
  GraphStreamingResourceManager::HandleRegistrations::HandleRegistrations((CpuManager *)((char *)this + 56), v2);
  GraphStreamingResourceManager::HandleRegistrations::HandleRegistrations((CpuManager *)((char *)this + 128), v3);
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 54) = 17;
  *((_QWORD *)this + 29) = 0xFFFFFFFFLL;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 62) = 0;
  *((_DWORD *)this + 63) = 10;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 55) = 1061158912;
  *((_DWORD *)this + 56) = 1048576000;
  *((_DWORD *)this + 57) = 1074790400;
  ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::UpdateRehashThresholds((__int64)this + 200);
  return this;
}
