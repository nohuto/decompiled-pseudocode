/*
 * XREFs of ?CreateStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSystemAudioStream@@@Z @ 0x180106390
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?move_initialize_from@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800427FC (-move_initialize_from@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z.c)
 *     ??4?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmixProxy@@@Z @ 0x180043E58 (--4-$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmixProxy@@@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A64 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIAudioGraphCallback@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAudioGraphCallback@@@Z @ 0x180104A04 (--4-$ComPtr@UIAudioGraphCallback@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAudioGraphCallback@@@Z.c)
 *     ?AddStreamAndSetAudioHandle@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSystemAudioStream@@K@Z @ 0x18010582C (-AddStreamAndSetAudioHandle@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSystemAudioStr.c)
 */

__int64 __fastcall CExclusiveStreamGroupProxy::CreateStream(
        unsigned __int64 this,
        struct IAudioStreamInfo *a2,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a3,
        struct IAudioGraphCallback *a4,
        unsigned int a5,
        struct SystemAudioStream *a6)
{
  int v10; // esi
  __int64 v11; // rdx
  __int64 v13; // rcx
  _OWORD *v14; // rax
  __int128 v15; // xmm1
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rax
  _BYTE v19[1264]; // [rsp+30h] [rbp-538h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+568h] [rbp+0h]

  memset_0(v19, 0, 0x4E8uLL);
  v10 = (*(__int64 (__fastcall **)(_QWORD, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *, _BYTE *))(**(_QWORD **)(this + 80) + 24LL))(
          *(_QWORD *)(this + 80),
          a3,
          a4,
          v19);
  if ( v10 < 0 )
  {
    v11 = 2167LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  v10 = SystemAudioStream::move_initialize_from(a6, (struct SYSTEM_AUDIO_STREAM *)v19);
  if ( v10 < 0 )
  {
    v11 = 2170LL;
    goto LABEL_3;
  }
  v13 = 2LL;
  v14 = (_OWORD *)(this + 344);
  do
  {
    *v14 = *(_OWORD *)a3;
    v14[1] = *((_OWORD *)a3 + 1);
    v14[2] = *((_OWORD *)a3 + 2);
    v14[3] = *((_OWORD *)a3 + 3);
    v14[4] = *((_OWORD *)a3 + 4);
    v14[5] = *((_OWORD *)a3 + 5);
    v14[6] = *((_OWORD *)a3 + 6);
    v14 += 8;
    v15 = *((_OWORD *)a3 + 7);
    a3 = (struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *)((char *)a3 + 128);
    *(v14 - 1) = v15;
    --v13;
  }
  while ( v13 );
  *v14 = *(_OWORD *)a3;
  v14[1] = *((_OWORD *)a3 + 1);
  v14[2] = *((_OWORD *)a3 + 2);
  v14[3] = *((_OWORD *)a3 + 3);
  v14[4] = *((_OWORD *)a3 + 4);
  v14[5] = *((_OWORD *)a3 + 5);
  v16 = *(_QWORD *)(this + 48);
  *(_QWORD *)(this + 472) = v16;
  v17 = *(unsigned __int16 *)(v16 + 16);
  v18 = *(_QWORD *)(this + 56);
  *(_DWORD *)(this + 464) = v17 + 18;
  *(_QWORD *)(this + 496) = v18;
  Microsoft::WRL::ComPtr<IAudioGraphCallback>::operator=((__int64 *)(this + 696), (__int64)a4);
  wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::operator=(
    (__int64 *)a6 + 5,
    this & ((unsigned __int128)-(__int128)(this - 8) >> 64));
  CBaseStreamGroupProxy::AddStreamAndSetAudioHandle((CBaseStreamGroupProxy *)this, a2, a6, a5);
  return 0LL;
}
