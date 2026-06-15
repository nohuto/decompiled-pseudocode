/*
 * XREFs of ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x18001C748
 * Callers:
 *     ??0CAudioSession@@IEAA@XZ @ 0x1800195E4 (--0CAudioSession@@IEAA@XZ.c)
 *     ??0CVADServer@@QEAA@XZ @ 0x18003DC04 (--0CVADServer@@QEAA@XZ.c)
 *     AudioSessionManagerGetExistingSession @ 0x18004F9B0 (AudioSessionManagerGetExistingSession.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180052430 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800E84E0 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x1800E99D0 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18001CB14 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
CAudioSessionInstanceId *__fastcall CAudioSessionInstanceId::CAudioSessionInstanceId(CAudioSessionInstanceId *this)
{
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(this, &ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>((char *)this + 8, &ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>((char *)this + 16, &ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>((char *)this + 40, &ATL::g_strmgr);
  *(GUID *)((char *)this + 24) = GUID_00000000_0000_0000_0000_000000000000;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 15) = -1;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 16) = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>((char *)this + 72, &ATL::g_strmgr);
  return this;
}
