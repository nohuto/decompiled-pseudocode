/*
 * XREFs of ?BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJXZ @ 0x18017657C
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180177AE0 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV?$vector@W4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@@Z @ 0x180178260 (-SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV-$vector@W4GameInputGamepadButtons@@V-$alloc.c)
 * Callees:
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BuildMouseInputInfo@ControllerProcessor@@AEAA?AURawMouseInputInfo@@K@Z @ 0x180176724 (-BuildMouseInputInfo@ControllerProcessor@@AEAA-AURawMouseInputInfo@@K@Z.c)
 *     ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z @ 0x180178BF4 (-SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::BuildAndSendMouseInputInfo(ControllerProcessor *this)
{
  unsigned int v2; // r10d
  unsigned __int16 v3; // cx
  _DWORD *v4; // r8
  int v5; // edi
  unsigned int v6; // r11d
  __int64 v7; // r9
  _DWORD *v8; // rax
  int v9; // eax
  _DWORD *v10; // r8
  int v11; // edi
  unsigned int v12; // r11d
  __int64 v13; // r9
  _DWORD *v14; // rax
  int v15; // eax
  int v16; // eax
  int v18[136]; // [rsp+20h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]

  v2 = 0;
  v3 = 0;
  if ( *((_BYTE *)this + 276) )
  {
    v4 = &unk_18020DAA4;
    do
    {
      v5 = *((_DWORD *)this + 52) & *(v4 - 1);
      if ( (v5 != 0) != ((*(v4 - 1) & *((_DWORD *)this + 68)) != 0) )
      {
        v6 = 0;
        v7 = 0LL;
        v8 = &unk_1801FE8D0;
        while ( *v4 != *v8 )
        {
          ++v6;
          ++v7;
          v8 += 3;
          if ( v6 >= 5 )
            goto LABEL_12;
        }
        *((_DWORD *)this + v7 + 1881) = v5 != 0;
        if ( v5 )
          v9 = *((_DWORD *)&unk_1801FE8D0 + 3 * v7 + 2);
        else
          v9 = *((_DWORD *)&unk_1801FE8D0 + 3 * v7 + 1);
        v3 |= v9;
      }
LABEL_12:
      ++v2;
      v4 += 2;
    }
    while ( v2 < 2 );
  }
  else
  {
    v10 = &unk_18020DA94;
    do
    {
      v11 = *((_DWORD *)this + 45) & *(v10 - 1);
      if ( (v11 != 0) != ((*(v10 - 1) & *((_DWORD *)this + 61)) != 0) )
      {
        v12 = 0;
        v13 = 0LL;
        v14 = &unk_1801FE8D0;
        while ( *v10 != *v14 )
        {
          ++v12;
          ++v13;
          v14 += 3;
          if ( v12 >= 5 )
            goto LABEL_24;
        }
        *((_DWORD *)this + v13 + 1881) = v11 != 0;
        if ( v11 )
          v15 = *((_DWORD *)&unk_1801FE8D0 + 3 * v13 + 2);
        else
          v15 = *((_DWORD *)&unk_1801FE8D0 + 3 * v13 + 1);
        v3 |= v15;
      }
LABEL_24:
      ++v2;
      v10 += 2;
    }
    while ( v2 < 2 );
  }
  if ( v3 )
  {
    ControllerProcessor::BuildMouseInputInfo(this, v18, v3);
    v16 = ControllerProcessor::SendMouseInputInfo(this, (struct RawMouseInputInfo *)v18);
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x4A9,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v16,
        v18[0]);
  }
  return 0LL;
}
