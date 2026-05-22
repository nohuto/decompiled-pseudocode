/*
 * XREFs of ?OnDeviceRemoval@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x1801AE900
 * Callers:
 *     <none>
 * Callees:
 *     ?LazyInitialize@GameInputProcessor@@AEAAJXZ @ 0x180043840 (-LazyInitialize@GameInputProcessor@@AEAAJXZ.c)
 *     memmove_0 @ 0x18004E99F (memmove_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsLegacyPnpDevice@GameInputProcessor@@CA_NPEAUDeviceInfo@@@Z @ 0x1801AE8E0 (-IsLegacyPnpDevice@GameInputProcessor@@CA_NPEAUDeviceInfo@@@Z.c)
 */

void __fastcall GameInputProcessor::OnDeviceRemoval(GameInputProcessor *this, struct DeviceInfo *a2)
{
  int v4; // eax
  _DWORD *i; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = GameInputProcessor::LazyInitialize(this);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      464LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\lib\\gamei"
               "nputprocessor.cpp",
      (const char *)(unsigned int)v4);
  if ( GameInputProcessor::IsLegacyPnpDevice(a2) && ((*((_DWORD *)a2 + 1) - 2) & 0xFFFFFFFD) == 0 )
  {
    for ( i = (_DWORD *)*((_QWORD *)this + 21); i != *((_DWORD **)this + 22); ++i )
    {
      if ( *i == *(_DWORD *)a2 )
      {
        memmove_0(i, i + 1, *((_QWORD *)this + 22) - (_QWORD)(i + 1));
        *((_QWORD *)this + 22) -= 4LL;
        return;
      }
    }
  }
}
