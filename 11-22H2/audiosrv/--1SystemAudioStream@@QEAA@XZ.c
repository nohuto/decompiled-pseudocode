/*
 * XREFs of ??1SystemAudioStream@@QEAA@XZ @ 0x180016C84
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000F420 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     ??1CSharedStreamGroupProxy@@MEAA@XZ @ 0x180014170 (--1CSharedStreamGroupProxy@@MEAA@XZ.c)
 *     ?DeleteAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAXXZ @ 0x180014440 (-DeleteAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAXXZ.c)
 *     ?DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800186B0 (-DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800D8D34 (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV-$ComPtr@UIStreamGr.c)
 *     _CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup_::_1_::dtor$8 @ 0x1800D912A (_CAudioResourceManager--ConfigureAuxiliaryInputStreamForStreamGroup_--_1_--dtor$8.c)
 *     ?ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSystemAudioStream@@@Z @ 0x180106010 (-ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS.c)
 *     ?DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180106C40 (-DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?RemoveStreamAndResetAudioHandle@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180109924 (-RemoveStreamAndResetAudioHandle@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     _CBaseStreamGroupProxy::RemoveStreamAndResetAudioHandle_::_1_::dtor$0 @ 0x180109A32 (_CBaseStreamGroupProxy--RemoveStreamAndResetAudioHandle_--_1_--dtor$0.c)
 *     ?RemoveStreamAndResetAudioHandle@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180109A44 (-RemoveStreamAndResetAudioHandle@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     _CProcessSubmixProxy::RemoveStreamAndResetAudioHandle_::_1_::dtor$0 @ 0x180109B52 (_CProcessSubmixProxy--RemoveStreamAndResetAudioHandle_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180015DEC (--1-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall SystemAudioStream::~SystemAudioStream(SystemAudioStream *this)
{
  char *v2; // rcx

  wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>((__int64 *)this + 121);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 82);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 44);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 6);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 5);
  v2 = (char *)*((_QWORD *)this + 3);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
}
