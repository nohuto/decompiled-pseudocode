/*
 * XREFs of ?HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEA_N@Z @ 0x180196398
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180196F10 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV?$vector@W4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@@Z @ 0x180197694 (-SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV-$vector@W4GameInputGamepadButtons@@V-$alloc.c)
 *     ?ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GameInputGamepadButtons@@PEA_N@Z @ 0x18019A3C0 (-ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GameInputGamepadButtons@@PEA_N@Z.c)
 */

__int64 __fastcall ControllerProcessor::HandleTaskSwitcherChordedKey(ControllerProcessor *this, bool *a2, __int64 a3)
{
  __int64 v4; // rcx
  unsigned int v6; // r10d
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0;
  v4 = *((_QWORD *)this + 973);
  if ( v4 && !*((_DWORD *)this + 70) )
  {
    v6 = *((_DWORD *)this + 45);
    if ( *(_DWORD *)(v4 + 16) )
    {
      v7 = v6 >> 1;
      LOBYTE(v7) = (*((_DWORD *)this + 45) & 2) != 0;
      LOBYTE(a3) = v6 & 1;
      if ( (_BYTE)v7 != ((*((_DWORD *)this + 61) & 2) != 0) || (_BYTE)a3 != (*((_DWORD *)this + 61) & 1) )
      {
        v8 = ViewMenuChordedKeyHandler::ChordedKeyStateMachine(v4, v7, a3, v6, a2);
        v9 = v8;
        if ( v8 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xAF,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
            (const char *)(unsigned int)v8);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1E3,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)v9);
          return v9;
        }
      }
    }
    if ( *(_BYTE *)(*((_QWORD *)this + 973) + 73LL) )
      ControllerProcessor::SendChordedKeyBuffer(this);
    v11 = *((_QWORD *)this + 973);
    if ( *(_BYTE *)(v11 + 72) )
      *(_QWORD *)(v11 + 56) = *(_QWORD *)(v11 + 48);
    *(_BYTE *)(v11 + 72) = 0;
  }
  return 0LL;
}
