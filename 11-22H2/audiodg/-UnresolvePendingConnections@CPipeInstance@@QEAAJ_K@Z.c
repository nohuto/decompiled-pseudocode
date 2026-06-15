/*
 * XREFs of ?UnresolvePendingConnections@CPipeInstance@@QEAAJ_K@Z @ 0x1400071AC
 * Callers:
 *     ?RemovePipeInternal@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_K@Z @ 0x140005B60 (-RemovePipeInternal@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_K@Z.c)
 *     ?DeleteExistingFormatConverter@CSubmixImpl@@IEAAJXZ @ 0x140007160 (-DeleteExistingFormatConverter@CSubmixImpl@@IEAAJXZ.c)
 *     ?RemovePipeFromMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140007770 (-RemovePipeFromMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?DisconnectFromRightPipe@CSubmixImpl@@UEAAJ_K@Z @ 0x140068040 (-DisconnectFromRightPipe@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?RemovePipeFromLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140068A40 (-RemovePipeFromLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?DisconnectFromRightPipe@CStreamInstance@@UEAAJ_K@Z @ 0x140077950 (-DisconnectFromRightPipe@CStreamInstance@@UEAAJ_K@Z.c)
 * Callees:
 *     ?SetHandle@CConnectionInstance@@QEAAJ_K@Z @ 0x140008824 (-SetHandle@CConnectionInstance@@QEAAJ_K@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@AEAPEAU__POSITION@@@Z @ 0x140011684 (-GetNext@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400381A0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CPipeInstance::UnresolvePendingConnections(CPipeInstance *this, __int64 a2)
{
  __int64 Next; // rax
  int v5; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = *((_QWORD *)this + 31);
  while ( v8 )
  {
    Next = ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetNext(this, &v8);
    this = *(CPipeInstance **)Next;
    if ( *(_QWORD *)(*(_QWORD *)Next + 8LL) == a2 )
    {
      v5 = CConnectionInstance::SetHandle(this, *((_QWORD *)this + 8));
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x122B,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
          (const char *)(unsigned int)v5,
          v6);
    }
  }
  return 0LL;
}
