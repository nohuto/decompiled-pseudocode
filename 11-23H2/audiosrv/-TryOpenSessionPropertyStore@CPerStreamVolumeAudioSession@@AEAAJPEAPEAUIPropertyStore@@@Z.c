/*
 * XREFs of ?TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z @ 0x180013834
 * Callers:
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180013570 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 * Callees:
 *     ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x180013C14 (-GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x18001C8FC (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18001CB14 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CE68 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::details::lambda_call__lambda_74f3b6a8456f822ec0b17303298bac28___::_lambda_call__lambda_74f3b6a8456f822ec0b17303298bac28___ @ 0x180070CE8 (wil--details--lambda_call__lambda_74f3b6a8456f822ec0b17303298bac28___--_lambda_call__lambda_74f3.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPerStreamVolumeAudioSession::TryOpenSessionPropertyStore(
        CPerStreamVolumeAudioSession *this,
        struct IPropertyStore **a2)
{
  int v4; // eax
  unsigned int AudioSessionPropertyStore; // ebx
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  char v8; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v11, &ATL::g_strmgr);
  v4 = CAudioSessionInstanceId::ToPersistedString((char *)this + 584, &v11, 1LL);
  AudioSessionPropertyStore = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF8C,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v4,
      v7[0]);
  }
  else
  {
    v10 = -2147023728;
    v7[0] = &v11;
    v7[1] = &v10;
    v8 = 1;
    AudioSessionPropertyStore = CPolicyConfig::GetAudioSessionPropertyStore(
                                  g_PolicyConfig,
                                  (struct IAudioSessionInfo *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL)),
                                  a2);
    v10 = AudioSessionPropertyStore;
    wil::details::lambda_call__lambda_74f3b6a8456f822ec0b17303298bac28___::_lambda_call__lambda_74f3b6a8456f822ec0b17303298bac28___(v7);
  }
  ATL::CStringData::Release((ATL::CStringData *)(v11 - 24));
  return AudioSessionPropertyStore;
}
