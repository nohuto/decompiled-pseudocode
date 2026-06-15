/*
 * XREFs of ?UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x18010A5E8
 * Callers:
 *     ?OnDisconnectedFromStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180016090 (-OnDisconnectedFromStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800186B0 (-DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?OnConnectedToStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180044860 (-OnConnectedToStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSystemAudioStream@@@Z @ 0x180045CC0 (-CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CProcessSubmixProxy::UpdateCountOfLazyRequestClients(__int64 this, int a2)
{
  int v3; // ecx

  v3 = *(_DWORD *)(this + 104);
  *(_DWORD *)(this + 104) = v3 + a2;
  if ( v3 != v3 + a2 && (!v3 || !(v3 + a2)) )
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(this + 200) + 352LL))(
      *(_QWORD *)(this + 200),
      (this + 8) & -(__int64)(this != 0),
      **(_QWORD **)(this + 200),
      -this);
}
