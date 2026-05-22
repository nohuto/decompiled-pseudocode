/*
 * XREFs of ?InvalidateKeyboardModifiers@KeyboardProcessor@@AEAAJXZ @ 0x1801B1394
 * Callers:
 *     ?OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801B1550 (-OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z @ 0x1801B3054 (-UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z.c)
 */

__int64 __fastcall KeyboardProcessor::InvalidateKeyboardModifiers(KeyboardProcessor *this)
{
  int v1; // eax
  _QWORD *v2; // rdi
  int updated; // esi
  __int64 v5; // rdx
  int v7; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 14);
  v2 = (_QWORD *)((char *)this + 48);
  if ( (v1 & 1) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*v2, 1LL, 0LL);
    if ( updated < 0 )
    {
      v5 = 109LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
    *((_DWORD *)this + 14) &= ~1u;
    v1 = *((_DWORD *)this + 14);
  }
  if ( (v1 & 2) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*v2, 2LL, 0LL);
    if ( updated < 0 )
    {
      v5 = 117LL;
      goto LABEL_4;
    }
    *((_DWORD *)this + 14) &= ~2u;
    v1 = *((_DWORD *)this + 14);
  }
  if ( (v1 & 4) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*v2, 4LL, 0LL);
    if ( updated < 0 )
    {
      v5 = 125LL;
      goto LABEL_4;
    }
    *((_DWORD *)this + 14) &= ~4u;
    v1 = *((_DWORD *)this + 14);
  }
  if ( (v1 & 8) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*v2, 8LL, 0LL);
    if ( updated < 0 )
    {
      v5 = 133LL;
      goto LABEL_4;
    }
    *((_DWORD *)this + 14) &= ~8u;
    v1 = *((_DWORD *)this + 14);
  }
  if ( (v1 & 0x10) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*v2, 16LL, 0LL);
    if ( updated < 0 )
    {
      v5 = 141LL;
      goto LABEL_4;
    }
    *((_DWORD *)this + 14) &= ~0x10u;
    v1 = *((_DWORD *)this + 14);
  }
  if ( (v1 & 0x20) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*v2, 32LL, 0LL);
    if ( updated < 0 )
    {
      v5 = 149LL;
      goto LABEL_4;
    }
    *((_DWORD *)this + 14) &= ~0x20u;
    v1 = *((_DWORD *)this + 14);
  }
  if ( (v1 & 0x40) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*v2, 64LL, 0LL);
    if ( updated < 0 )
    {
      v5 = 157LL;
      goto LABEL_4;
    }
    *((_DWORD *)this + 14) &= ~0x40u;
    v1 = *((_DWORD *)this + 14);
  }
  if ( (v1 & 0x80u) != 0 )
  {
    v7 = KeyboardModifierState::UpdateKeyModifierArray(*v2, 128LL, 0LL);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA5,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
    *((_DWORD *)this + 14) &= ~0x80u;
  }
  return 0LL;
}
