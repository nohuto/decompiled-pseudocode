/*
 * XREFs of ?HasWindowMoved@CRecalcState@@QEBA_NAEBUtagRECT@@@Z @ 0x1C00B0B88
 * Callers:
 *     ?xxxProcessTopologyChange@CRecalcProp@@AEAA?AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00AF100 (-xxxProcessTopologyChange@CRecalcProp@@AEAA-AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcConte.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dddddddddddd @ 0x1C023BEF8 (WPP_RECORDER_AND_TRACE_SF_dddddddddddd.c)
 */

char __fastcall CRecalcState::HasWindowMoved(CRecalcState *this, const struct tagRECT *a2)
{
  __int64 v2; // r8
  char v4; // al
  _UNKNOWN **v5; // r8
  int v6; // r9d

  if ( *((_BYTE *)this + 60) )
    return 0;
  v2 = *(_QWORD *)&a2->left - *(_QWORD *)((char *)this + 44);
  if ( *(_QWORD *)&a2->left == *(_QWORD *)((char *)this + 44) )
    v2 = *(_QWORD *)&a2->right - *(_QWORD *)((char *)this + 52);
  if ( !v2 )
    return 0;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || (v4 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v4 = 0;
  }
  v5 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v5) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v5) = 0;
  }
  if ( v4 || (_BYTE)v5 )
  {
    v6 = a2->bottom - a2->top;
    LOBYTE(a2) = v4;
    WPP_RECORDER_AND_TRACE_SF_dddddddddddd(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, (_DWORD)v5, v6);
  }
  return 1;
}
