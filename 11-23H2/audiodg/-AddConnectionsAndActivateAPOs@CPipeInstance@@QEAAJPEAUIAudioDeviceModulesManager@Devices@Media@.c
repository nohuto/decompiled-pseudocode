/*
 * XREFs of ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x140011338
 * Callers:
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140008030 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140019BC0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@AEAPEAU__POSITION@@@Z @ 0x140011684 (-GetNext@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?AddRenderConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x1400121A8 (-AddRenderConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z.c)
 *     ?GetPrev@?$CAtlList@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@@2@@ATL@@QEAAAEAPEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@2@AEAPEAU__POSITION@@@Z @ 0x14001373C (-GetPrev@-$CAtlList@PEAV-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionIns.c)
 *     ?SetModulesManagerOnAPOs@CPipeInstance@@AEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x1400148F4 (-SetModulesManagerOnAPOs@CPipeInstance@@AEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Window.c)
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x1400149E8 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::details::lambda_call__lambda_354c79de55cc29fd49902c957059698c___::_lambda_call__lambda_354c79de55cc29fd49902c957059698c___ @ 0x14005C054 (wil--details--lambda_call__lambda_354c79de55cc29fd49902c957059698c___--_lambda_call__lambda_354c.c)
 *     wil::details::lambda_call__lambda_41bc0ba21dd7e8abeb610ebfb99eb05f___::_lambda_call__lambda_41bc0ba21dd7e8abeb610ebfb99eb05f___ @ 0x14005C09C (wil--details--lambda_call__lambda_41bc0ba21dd7e8abeb610ebfb99eb05f___--_lambda_call__lambda_41bc.c)
 *     ?AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x1400612EC (-AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPipeInstance::AddConnectionsAndActivateAPOs(
        CPipeInstance *this,
        struct Windows::Media::Devices::IAudioDeviceModulesManager *a2)
{
  int v4; // eax
  __int64 *v5; // rcx
  unsigned int v6; // ebx
  __int64 **Prev; // rax
  CConnectionInstance **Next; // rax
  CConnectionInstance *v9; // rsi
  struct IAudioProcessor *v10; // rdx
  int v11; // eax
  int v12; // eax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // r9
  __int64 v17; // rdx
  __int128 v18; // [rsp+20h] [rbp-30h] BYREF
  char v19; // [rsp+30h] [rbp-20h]
  __int128 v20; // [rsp+38h] [rbp-18h] BYREF
  char v21; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned __int64 v23; // [rsp+80h] [rbp+30h] BYREF
  __int64 v24; // [rsp+90h] [rbp+40h] BYREF
  __int64 v25; // [rsp+98h] [rbp+48h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)this + 19) + 32LL))(
         *((_QWORD *)this + 19),
         &v23);
  v6 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB7E,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
      (const char *)(unsigned int)v4,
      v18);
    return v6;
  }
  *(_QWORD *)&v18 = this;
  *((_QWORD *)&v18 + 1) = &v23;
  v20 = v18;
  v21 = 1;
  v25 = *((_QWORD *)this + 9);
  if ( !v25 )
  {
LABEL_8:
    *(_QWORD *)&v18 = this;
    *((_QWORD *)&v18 + 1) = &v23;
    v19 = 1;
    v12 = CPipeInstance::SetModulesManagerOnAPOs(this, a2);
    v6 = v12;
    if ( v12 < 0 )
    {
      v14 = 2962LL;
    }
    else
    {
      v12 = CPipeInstance::ActivateAPOs(this, v23);
      v6 = v12;
      if ( v12 < 0 )
      {
        v14 = 2965LL;
      }
      else
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 19) + 40LL))(
                *((_QWORD *)this + 19),
                v23);
        v6 = v12;
        if ( v12 >= 0 )
        {
          *((_DWORD *)this + 29) = 1;
          return 0LL;
        }
        v14 = 2967LL;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
      (const char *)(unsigned int)v12,
      v18);
    wil::details::lambda_call__lambda_41bc0ba21dd7e8abeb610ebfb99eb05f___::_lambda_call__lambda_41bc0ba21dd7e8abeb610ebfb99eb05f___(&v18);
    goto LABEL_15;
  }
  while ( 1 )
  {
    Prev = (__int64 **)ATL::CAtlList<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *,ATL::CElementTraits<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *>>::GetPrev(
                         v5,
                         &v25);
    v5 = *Prev;
    v24 = **Prev;
    if ( v24 )
      break;
LABEL_7:
    if ( !v25 )
      goto LABEL_8;
  }
  while ( 1 )
  {
    Next = (CConnectionInstance **)ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetNext(
                                     v5,
                                     &v24);
    v9 = *Next;
    v10 = (struct IAudioProcessor *)*((_QWORD *)this + 19);
    if ( *((_DWORD *)*Next + 4) )
      break;
    v11 = CConnectionInstance::AddRenderConnection(*Next, v10, v23);
    v6 = v11;
    if ( v11 < 0 )
    {
      v16 = (unsigned int)v11;
      v17 = 241LL;
      goto LABEL_22;
    }
LABEL_6:
    *((_DWORD *)v9 + 1) = 1;
    if ( !v24 )
      goto LABEL_7;
  }
  if ( *((_DWORD *)v9 + 4) == 1 )
  {
    v15 = CConnectionInstance::AddCaptureConnection(*Next, v10, v23);
    v6 = v15;
    if ( v15 < 0 )
    {
      v16 = (unsigned int)v15;
      v17 = 245LL;
      goto LABEL_22;
    }
    goto LABEL_6;
  }
  v6 = -2147418113;
  v16 = 2147549183LL;
  v17 = 251LL;
LABEL_22:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
    (const char *)v16,
    v18);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB8B,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
    (const char *)v6,
    v18);
LABEL_15:
  wil::details::lambda_call__lambda_354c79de55cc29fd49902c957059698c___::_lambda_call__lambda_354c79de55cc29fd49902c957059698c___(&v20);
  return v6;
}
