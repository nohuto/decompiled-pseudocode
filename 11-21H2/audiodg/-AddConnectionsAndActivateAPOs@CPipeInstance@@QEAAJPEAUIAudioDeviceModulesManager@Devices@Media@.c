/*
 * XREFs of ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x140018B80
 * Callers:
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400192A0 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14001BB60 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ?AddRenderConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x140018CF0 (-AddRenderConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z.c)
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x140018F70 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 *     ?SetModulesManagerOnAPOs@CPipeInstance@@AEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x140019110 (-SetModulesManagerOnAPOs@CPipeInstance@@AEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@AEAPEAU__POSITION@@@Z @ 0x14002BD58 (-GetNext@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetPrev@?$CAtlList@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@@2@@ATL@@QEAAAEAPEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@2@AEAPEAU__POSITION@@@Z @ 0x14005A04C (-GetPrev@-$CAtlList@PEAV-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionIns.c)
 *     ?AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x14005D2D4 (-AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z.c)
 *     ?RemoveConnections@CConnectionInstance@@QEAAXPEAUIAudioProcessor@@_K@Z @ 0x14005D7D4 (-RemoveConnections@CConnectionInstance@@QEAAXPEAUIAudioProcessor@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPipeInstance::AddConnectionsAndActivateAPOs(
        CPipeInstance *this,
        struct Windows::Media::Devices::IAudioDeviceModulesManager *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  char v6; // di
  __int64 v7; // r14
  int v8; // eax
  __int64 *v9; // rcx
  char v10; // al
  _QWORD *v12; // rax
  _QWORD *v13; // r15
  CConnectionInstance *v14; // r13
  struct IAudioProcessor *v15; // rdx
  int v16; // eax
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned __int64 v21; // r14
  __int64 **Prev; // rax
  CConnectionInstance **Next; // rax
  int v24; // [rsp+20h] [rbp-30h]
  int v25; // [rsp+20h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  unsigned __int64 v27; // [rsp+90h] [rbp+40h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+58h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)this + 19) + 32LL))(
         *((_QWORD *)this + 19),
         &v27);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB5A,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
      (const char *)(unsigned int)v4,
      v24);
    return v5;
  }
  v6 = 1;
  v7 = *((_QWORD *)this + 9);
LABEL_3:
  if ( v7 )
  {
    v12 = *(_QWORD **)(v7 + 16);
    v7 = *(_QWORD *)(v7 + 8);
    v13 = (_QWORD *)*v12;
    while ( 1 )
    {
      if ( !v13 )
        goto LABEL_3;
      v14 = (CConnectionInstance *)v13[2];
      v13 = (_QWORD *)*v13;
      v15 = (struct IAudioProcessor *)*((_QWORD *)this + 19);
      if ( *((_DWORD *)v14 + 4) )
      {
        if ( *((_DWORD *)v14 + 4) != 1 )
        {
          v5 = -2147418113;
          v18 = 2147549183LL;
          v19 = 252LL;
          goto LABEL_23;
        }
        v17 = CConnectionInstance::AddCaptureConnection(v14, v15, v27);
        v5 = v17;
        if ( v17 < 0 )
        {
          v18 = (unsigned int)v17;
          v19 = 246LL;
LABEL_23:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v19,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
            (const char *)v18,
            (int)this);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xB67,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
            (const char *)v5,
            v25);
          goto LABEL_9;
        }
      }
      else
      {
        v16 = CConnectionInstance::AddRenderConnection(v14, v15, v27);
        v5 = v16;
        if ( v16 < 0 )
        {
          v18 = (unsigned int)v16;
          v19 = 242LL;
          goto LABEL_23;
        }
      }
      *((_DWORD *)v14 + 1) = 1;
    }
  }
  v8 = CPipeInstance::SetModulesManagerOnAPOs(this, a2);
  v5 = v8;
  if ( v8 < 0 )
  {
    v20 = 2926LL;
  }
  else
  {
    v8 = CPipeInstance::ActivateAPOs(this, v27);
    v5 = v8;
    if ( v8 < 0 )
    {
      v20 = 2929LL;
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 19) + 40LL))(
             *((_QWORD *)this + 19),
             v27);
      v5 = v8;
      if ( v8 >= 0 )
      {
        *((_DWORD *)this + 29) = 1;
        v6 = 0;
        v5 = 0;
        v10 = 0;
        goto LABEL_8;
      }
      v20 = 2931LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
    (const char *)(unsigned int)v8,
    (int)this);
  v10 = 1;
LABEL_8:
  if ( v10 )
  {
    v21 = v27;
    v29 = *((_QWORD *)this + 9);
    while ( v29 )
    {
      Prev = (__int64 **)ATL::CAtlList<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *,ATL::CElementTraits<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *>>::GetPrev(
                           v9,
                           &v29);
      v9 = *Prev;
      v28 = **Prev;
      while ( v28 )
      {
        Next = (CConnectionInstance **)ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetNext(
                                         v9,
                                         &v28);
        CConnectionInstance::RemoveConnections(*Next, *((struct IAudioProcessor **)this + 19), v21);
      }
    }
  }
LABEL_9:
  if ( v6 )
    (*(void (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 19) + 48LL))(*((_QWORD *)this + 19), v27);
  return v5;
}
