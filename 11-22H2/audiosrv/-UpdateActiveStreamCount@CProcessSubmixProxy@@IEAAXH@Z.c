/*
 * XREFs of ?UpdateActiveStreamCount@CProcessSubmixProxy@@IEAAXH@Z @ 0x180048374
 * Callers:
 *     ?OnDisconnectedFromStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180016090 (-OnDisconnectedFromStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?OnConnectedToStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180044860 (-OnConnectedToStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?OnStreamStarted@CProcessSubmixProxy@@UEAAJPEAUIStreamInstance@@@Z @ 0x1800482C0 (-OnStreamStarted@CProcessSubmixProxy@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?OnStreamStopped@CProcessSubmixProxy@@UEAAJPEAUIStreamInstance@@@Z @ 0x180048320 (-OnStreamStopped@CProcessSubmixProxy@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?StartStream@CProcessSubmixProxy@@UEAAJ_K@Z @ 0x18010A190 (-StartStream@CProcessSubmixProxy@@UEAAJ_K@Z.c)
 *     ?StopStream@CProcessSubmixProxy@@UEAAJ_K@Z @ 0x18010A320 (-StopStream@CProcessSubmixProxy@@UEAAJ_K@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CProcessSubmixProxy::UpdateActiveStreamCount(__int64 this, int a2)
{
  int v3; // ecx
  int v4; // eax

  v3 = *(_DWORD *)(this + 128);
  v4 = v3 + a2;
  *(_DWORD *)(this + 128) = v3 + a2;
  if ( v3 )
  {
    if ( v3 == 1 && !v4 )
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(this + 200) + 368LL))(
        *(_QWORD *)(this + 200),
        (this + 8) & -(__int64)(this != 0),
        **(_QWORD **)(this + 200),
        -this);
  }
  else if ( v4 == 1 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(this + 200) + 360LL))(
      *(_QWORD *)(this + 200),
      (this + 8) & -(__int64)(this != 0),
      **(_QWORD **)(this + 200),
      -this);
  }
}
