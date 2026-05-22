/*
 * XREFs of ?HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEA_N@Z @ 0x180176F64
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180177AE0 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV?$vector@W4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@@Z @ 0x180178260 (-SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV-$vector@W4GameInputGamepadButtons@@V-$alloc.c)
 *     ?ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GameInputGamepadButtons@@PEA_N@Z @ 0x18017B060 (-ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GameInputGamepadButtons@@PEA_N@Z.c)
 */

__int64 __fastcall ControllerProcessor::HandleTaskSwitcherChordedKey(ControllerProcessor *this, bool *a2, __int64 a3)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0;
  v4 = *((_QWORD *)this + 973);
  if ( v4 && !*((_DWORD *)this + 70) )
  {
    if ( *(_DWORD *)(v4 + 16) )
    {
      LOBYTE(a3) = *((_DWORD *)this + 45) & 1;
      if ( ((*((_DWORD *)this + 45) & 2) != 0) != ((*((_DWORD *)this + 61) & 2) != 0)
        || (_BYTE)a3 != (*((_DWORD *)this + 61) & 1) )
      {
        LOBYTE(a2) = (*((_DWORD *)this + 45) & 2) != 0;
        v5 = ViewMenuChordedKeyHandler::ChordedKeyStateMachine(v4, a2, a3);
        v6 = v5;
        if ( v5 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xAF,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
            (const char *)(unsigned int)v5);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1E3,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)v6);
          return v6;
        }
      }
    }
    v8 = *((_QWORD *)this + 973);
    if ( *(_BYTE *)(v8 + 73) )
    {
      ControllerProcessor::SendChordedKeyBuffer(this);
      v8 = *((_QWORD *)this + 973);
    }
    if ( *(_BYTE *)(v8 + 72) )
      *(_QWORD *)(v8 + 56) = *(_QWORD *)(v8 + 48);
    *(_BYTE *)(v8 + 72) = 0;
  }
  return 0LL;
}
