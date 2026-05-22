/*
 * XREFs of ?OnFocusRequest@GameInputProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801AE9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?LazyInitialize@GameInputProcessor@@AEAAJXZ @ 0x180043840 (-LazyInitialize@GameInputProcessor@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsLegacyPnpDevice@GameInputProcessor@@CA_NPEAUDeviceInfo@@@Z @ 0x1801AE8E0 (-IsLegacyPnpDevice@GameInputProcessor@@CA_NPEAUDeviceInfo@@@Z.c)
 */

__int64 __fastcall GameInputProcessor::OnFocusRequest(
        GameInputProcessor *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( gbIsDWMNoRawGameController )
  {
    *(_DWORD *)a4 = 0;
  }
  else
  {
    v6 = GameInputProcessor::LazyInitialize(this);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        216LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\lib\\gam"
                 "einputprocessor.cpp",
        (const char *)(unsigned int)v6);
    if ( (*((_BYTE *)a2 + 4) & 0x40) != 0 )
    {
      *(_DWORD *)a4 = 2;
    }
    else if ( (*((_BYTE *)a2 + 4) & 2) != 0 || GameInputProcessor::IsLegacyPnpDevice(a2) && *((_DWORD *)a2 + 1) == 4 )
    {
      *(_DWORD *)a4 = 3;
    }
    else
    {
      *(_DWORD *)a4 = 0;
    }
  }
  return 0LL;
}
