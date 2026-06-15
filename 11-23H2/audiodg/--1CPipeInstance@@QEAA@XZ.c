/*
 * XREFs of ??1CPipeInstance@@QEAA@XZ @ 0x140004B14
 * Callers:
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x140006804 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002A38 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RemoveAll@?$CAtlList@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@@2@@ATL@@QEAAXXZ @ 0x140004B98 (-RemoveAll@-$CAtlList@PEAV-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionI.c)
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x14000D480 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000D6AC (-RemoveAll@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 */

void __fastcall CPipeInstance::~CPipeInstance(CPipeInstance *this)
{
  CPipeInstance::Cleanup(this);
  ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::RemoveAll((char *)this + 248);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 30);
  CoTaskMemFree(*((LPVOID *)this + 24));
  *((_QWORD *)this + 24) = 0LL;
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((char *)this + 184);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((char *)this + 176);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)this + 19);
  ATL::CAtlList<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *,ATL::CElementTraits<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *>>::RemoveAll((char *)this + 64);
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((char *)this + 16);
}
