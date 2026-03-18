/*
 * XREFs of CkptRestore @ 0x1C00C7A4C
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00C4E00 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     UpdateCheckpoint @ 0x1C00C79F4 (UpdateCheckpoint.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C01EBC7C (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01ED858 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EEA38 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F0D8C (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C01F3EB4 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F49BC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C0224FD4 (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 *     ?MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C023B904 (-MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 * Callees:
 *     DesktopAlloc @ 0x1C0065280 (DesktopAlloc.c)
 *     InternalSetProp @ 0x1C00C671C (InternalSetProp.c)
 *     CkptUpdate @ 0x1C00C7B24 (CkptUpdate.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 */

_DWORD *__fastcall CkptRestore(struct tagWND *a1, _OWORD *a2)
{
  _DWORD *Prop; // rbx
  _DWORD *v6; // rax

  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) == 0 )
  {
    Prop = (_DWORD *)GetProp(a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
    if ( Prop )
    {
LABEL_3:
      CkptUpdate(a1);
      return Prop;
    }
    v6 = DesktopAlloc(*((_QWORD *)a1 + 3), 0x34u);
    Prop = v6;
    if ( v6 )
    {
      if ( (unsigned int)InternalSetProp(
                           (__int64)a1,
                           *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1),
                           (__int64)v6,
                           9u) )
      {
        Prop[12] &= 0xFFFFFF80;
        Prop[8] = -1;
        Prop[9] = -1;
        Prop[10] = -1;
        Prop[11] = -1;
        *(_OWORD *)Prop = *a2;
        *((_OWORD *)Prop + 1) = *a2;
        goto LABEL_3;
      }
      RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 136LL), 0, Prop);
    }
  }
  return 0LL;
}
