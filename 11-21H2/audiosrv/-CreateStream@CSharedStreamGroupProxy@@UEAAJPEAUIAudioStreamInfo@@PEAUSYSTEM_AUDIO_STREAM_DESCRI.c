/*
 * XREFs of ?CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSystemAudioStream@@@Z @ 0x1800F8A20
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateStreamForStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x18000FAF0 (-ValidateStreamForStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?move_initialize_from@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800F0C08 (-move_initialize_from@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z.c)
 *     ??4?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmixProxy@@@Z @ 0x1800F7598 (--4-$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmixProxy@@@Z.c)
 *     ?AddStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSystemAudioStream@@K@Z @ 0x1800F8180 (-AddStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSystemAudioStream@@K@Z.c)
 *     ?UpdateCountOfFormatSensitiveClients@CBaseStreamGroupProxy@@IEAAXH@Z @ 0x1800FAB40 (-UpdateCountOfFormatSensitiveClients@CBaseStreamGroupProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfLazyRequestClients@CBaseStreamGroupProxy@@IEAAXH@Z @ 0x1800FAC30 (-UpdateCountOfLazyRequestClients@CBaseStreamGroupProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfPeriodicitySensitiveClients@CBaseStreamGroupProxy@@IEAAXH@Z @ 0x1800FAD20 (-UpdateCountOfPeriodicitySensitiveClients@CBaseStreamGroupProxy@@IEAAXH@Z.c)
 */

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
  _BYTE v13[1264]; // [rsp+30h] [rbp-538h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+568h] [rbp+0h]

  v10 = CBaseStreamGroupProxy::ValidateStreamForStreamGroup(this, a2);
  if ( v10 < 0 )
  {
    v11 = 818LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  memset_0(v13, 0, 0x4E8uLL);
  v10 = (*(__int64 (__fastcall **)(_QWORD, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *, _BYTE *))(**((_QWORD **)this + 10) + 24LL))(
          *((_QWORD *)this + 10),
          a3,
          a4,
          v13);
  if ( v10 < 0 )
  {
    v11 = 821LL;
    goto LABEL_3;
  }
  v10 = SystemAudioStream::move_initialize_from(a6, (struct SYSTEM_AUDIO_STREAM *)v13);
  if ( v10 < 0 )
  {
    v11 = 824LL;
    goto LABEL_3;
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
  CBaseStreamGroupProxy::AddStream(this, a2, a6, a5);
  return 0LL;
}
