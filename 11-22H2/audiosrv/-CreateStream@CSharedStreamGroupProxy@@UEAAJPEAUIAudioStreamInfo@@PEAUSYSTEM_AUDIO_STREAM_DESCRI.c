/*
 * XREFs of ?CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSystemAudioStream@@@Z @ 0x1801065B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?move_initialize_from@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800427FC (-move_initialize_from@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z.c)
 *     ??4?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmixProxy@@@Z @ 0x180043E58 (--4-$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmixProxy@@@Z.c)
 *     ??$MakeAndInitialize@VCStreamInstanceProxy@@UIStreamInstanceProxy@@_J@Details@WRL@Microsoft@@YAJPEAPEAUIStreamInstanceProxy@@$$QEA_J@Z @ 0x180045ED4 (--$MakeAndInitialize@VCStreamInstanceProxy@@UIStreamInstanceProxy@@_J@Details@WRL@Microsoft@@YAJ.c)
 *     ?ValidateStreamForStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x18004B690 (-ValidateStreamForStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddStreamAndSetAudioHandle@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSystemAudioStream@@K@Z @ 0x18010587C (-AddStreamAndSetAudioHandle@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSystemAudioStr.c)
 *     ?UpdateCountOfFormatSensitiveClients@CBaseStreamGroupProxy@@IEAAXH@Z @ 0x18010A490 (-UpdateCountOfFormatSensitiveClients@CBaseStreamGroupProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfLazyRequestClients@CBaseStreamGroupProxy@@IEAAXH@Z @ 0x18010A590 (-UpdateCountOfLazyRequestClients@CBaseStreamGroupProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfPeriodicitySensitiveClients@CBaseStreamGroupProxy@@IEAAXH@Z @ 0x18010A690 (-UpdateCountOfPeriodicitySensitiveClients@CBaseStreamGroupProxy@@IEAAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSharedStreamGroupProxy::CreateStream(
        CSharedStreamGroupProxy *this,
        struct IAudioStreamInfo *a2,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a3,
        struct IAudioGraphCallback *a4,
        unsigned int a5,
        struct SystemAudioStream *a6)
{
  int v10; // esi
  __int64 v11; // rdx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v17[1264]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+578h] [rbp+478h]

  if ( g_UseNewStreamManagementCodePath )
  {
    v10 = CBaseStreamGroupProxy::ValidateStreamForStreamGroup(this, a2);
    if ( v10 < 0 )
    {
      v11 = 998LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v10);
      return (unsigned int)v10;
    }
    v15 = 0LL;
    v16 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 80LL))(a2);
    v13 = Microsoft::WRL::Details::MakeAndInitialize<CStreamInstanceProxy,IStreamInstanceProxy,__int64>(&v15, &v16);
    v10 = v13;
    if ( v13 < 0 )
    {
      v14 = 1001LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v13);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v15);
      return (unsigned int)v10;
    }
    v13 = (*(__int64 (__fastcall **)(__int64, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *, struct SystemAudioStream *))(*(_QWORD *)v15 + 24LL))(
            v15,
            a3,
            a4,
            a6);
    v10 = v13;
    if ( v13 < 0 )
    {
      v14 = 1004LL;
      goto LABEL_12;
    }
    (*(void (__fastcall **)(char *, struct SystemAudioStream *, _QWORD, __int64))(*((_QWORD *)a2 - 1) + 48LL))(
      (char *)a2 - 8,
      a6,
      a5,
      v15);
    v13 = (*(__int64 (__fastcall **)(__int64, struct IAudioStreamInfo *, unsigned __int64))(*(_QWORD *)v15 + 72LL))(
            v15,
            a2,
            (unsigned __int64)this & -(__int64)(this != (CSharedStreamGroupProxy *)8));
    v10 = v13;
    if ( v13 < 0 )
    {
      v14 = 1008LL;
      goto LABEL_12;
    }
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v15);
  }
  else
  {
    v10 = CBaseStreamGroupProxy::ValidateStreamForStreamGroup(this, a2);
    if ( v10 < 0 )
    {
      v11 = 1013LL;
      goto LABEL_4;
    }
    memset_0(v17, 0, 0x4E8uLL);
    v10 = (*(__int64 (__fastcall **)(_QWORD, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *, _BYTE *))(**((_QWORD **)this + 10) + 24LL))(
            *((_QWORD *)this + 10),
            a3,
            a4,
            v17);
    if ( v10 < 0 )
    {
      v11 = 1016LL;
      goto LABEL_4;
    }
    v10 = SystemAudioStream::move_initialize_from(a6, (struct SYSTEM_AUDIO_STREAM *)v17);
    if ( v10 < 0 )
    {
      v11 = 1019LL;
      goto LABEL_4;
    }
    wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::operator=(
      (__int64 *)a6 + 5,
      (unsigned __int64)this & ((unsigned __int128)-(__int128)((unsigned __int64)this - 8) >> 64));
    if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 128LL))(a2) )
      CBaseStreamGroupProxy::UpdateCountOfPeriodicitySensitiveClients(this, 1);
    if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 136LL))(a2) )
      CBaseStreamGroupProxy::UpdateCountOfFormatSensitiveClients(this, 1);
    if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 144LL))(a2) )
      CBaseStreamGroupProxy::UpdateCountOfLazyRequestClients(this, 1);
    CBaseStreamGroupProxy::AddStreamAndSetAudioHandle(this, a2, a6, a5);
  }
  return 0LL;
}
