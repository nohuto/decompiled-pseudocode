/*
 * XREFs of ?OnFocusRequest@RawButtonProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801B4910
 * Callers:
 *     <none>
 * Callees:
 *     ?FindRemoteEndpoint@RawButtonProcessor@@AEAAXXZ @ 0x1801B4654 (-FindRemoteEndpoint@RawButtonProcessor@@AEAAXXZ.c)
 */

__int64 __fastcall RawButtonProcessor::OnFocusRequest(
        RawButtonProcessor *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  int v4; // ebx
  _QWORD *v6; // rdi

  v4 = 0;
  if ( *((char *)a2 + 4) < 0 )
  {
    if ( (v6 = (_QWORD *)((char *)this + 32), *((_QWORD *)this + 5)) && *v6
      || (RawButtonProcessor::FindRemoteEndpoint(this), v6[1]) && *v6 )
    {
      v4 = 1;
    }
  }
  *(_DWORD *)a4 = v4;
  return 0LL;
}
