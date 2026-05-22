/*
 * XREFs of ?SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKeyboardInputInfo@@@Z @ 0x18010DA24
 * Callers:
 *     ?AddMessage@KeyboardOverriderDispatcher@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@AEAUKeyboardInputInfo@@@Z @ 0x18010CD14 (-AddMessage@KeyboardOverriderDispatcher@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@AEAUKey.c)
 *     ?OnKeyProcessed@KeyboardOverriderDispatcher@@UEAAJ_N@Z @ 0x18010D530 (-OnKeyProcessed@KeyboardOverriderDispatcher@@UEAAJ_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_back_internal@AEBUKeyboardEvent@@@?$deque@UKeyboardEvent@@V?$allocator@UKeyboardEvent@@@std@@@std@@AEAAXAEBUKeyboardEvent@@@Z @ 0x18010CA78 (--$_Emplace_back_internal@AEBUKeyboardEvent@@@-$deque@UKeyboardEvent@@V-$allocator@UKeyboardEven.c)
 *     ?OnKey@SurrogateCharAccumulator@@QEAAXG_NAEA_NQEAGAEAH@Z @ 0x18010D460 (-OnKey@SurrogateCharAccumulator@@QEAAXG_NAEA_NQEAGAEAH@Z.c)
 *     ?CreateKeyboardEvent@InputServiceProcessor@@SA?AUKeyboardEvent@@QEBUKeyboardInputInfo@@@Z @ 0x18017E984 (-CreateKeyboardEvent@InputServiceProcessor@@SA-AUKeyboardEvent@@QEBUKeyboardInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall KeyboardOverriderDispatcher::SendMessageToNarrator(
        KeyboardOverriderDispatcher *this,
        const struct _MIT_KEYBOARD_INPUT_MESSAGE *a2,
        const struct KeyboardInputInfo *a3)
{
  __int128 *KeyboardEvent; // rax
  __int128 *v7; // rcx
  __int64 v8; // rdx
  __int16 v9; // ax
  unsigned int v10; // edi
  _WORD *v11; // rdx
  __int64 v12; // r8
  __int128 *v13; // rax
  __int128 *v14; // rcx
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  int Shared; // eax
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  DWORD WindowThreadProcessId; // edi
  HWND ForegroundWindow; // rax
  HKL dwhkl; // rax
  __int16 v26; // di
  WCHAR v27; // cx
  __int64 v28; // r11
  __int64 (__fastcall *v29)(__int64, _QWORD, _QWORD, _QWORD); // rbx
  WCHAR *v30; // rax
  int v31; // edx
  int v32; // eax
  int cchBuff; // [rsp+20h] [rbp-E0h]
  int cchBuffa; // [rsp+20h] [rbp-E0h]
  int cchBuffb; // [rsp+20h] [rbp-E0h]
  int cchBuffc; // [rsp+20h] [rbp-E0h]
  int cchBuffd; // [rsp+20h] [rbp-E0h]
  int cchBuffe; // [rsp+20h] [rbp-E0h]
  WCHAR pwszBuff[2]; // [rsp+50h] [rbp-B0h] BYREF
  bool v40; // [rsp+54h] [rbp-ACh] BYREF
  int v41[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v42[2]; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR *v43; // [rsp+68h] [rbp-98h]
  _BYTE v44[304]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v45; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned __int64 v46; // [rsp+1B0h] [rbp+B0h]
  __int64 v47; // [rsp+1B8h] [rbp+B8h]
  unsigned __int16 v48[4]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _OWORD v49[2]; // [rsp+2D8h] [rbp+1D8h] BYREF
  __int64 v50; // [rsp+2F8h] [rbp+1F8h]
  wil::details::in1diag3 *retaddr; // [rsp+338h] [rbp+238h]

  if ( !*((_BYTE *)this + 704) )
  {
    *((_BYTE *)this + 704) = 1;
    KeyboardEvent = (__int128 *)InputServiceProcessor::CreateKeyboardEvent(v44, a3);
    v7 = &v45;
    v8 = 2LL;
    do
    {
      *v7 = *KeyboardEvent;
      v7[1] = KeyboardEvent[1];
      v7[2] = KeyboardEvent[2];
      v7[3] = KeyboardEvent[3];
      v7[4] = KeyboardEvent[4];
      v7[5] = KeyboardEvent[5];
      v7[6] = KeyboardEvent[6];
      v7 += 8;
      *(v7 - 1) = KeyboardEvent[7];
      KeyboardEvent += 8;
      --v8;
    }
    while ( v8 );
    *v7 = *KeyboardEvent;
    v7[1] = KeyboardEvent[1];
    *((_QWORD *)v7 + 4) = *((_QWORD *)KeyboardEvent + 4);
    *(_QWORD *)v41 = 0LL;
    MsgBlobCreateShared((char *)this + 448, 256LL, v41);
    if ( (_DWORD)v45 )
    {
      if ( (_DWORD)v45 == 1 )
      {
        cchBuffd = v41[0];
        v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 55) + 32LL))(
                *((_QWORD *)this + 55),
                WORD4(v45),
                WORD1(v46),
                v47);
        if ( v22 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x100,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\keyboardove"
                 "rriderdispatcher.cpp",
            (const char *)(unsigned int)v22,
            cchBuffd);
      }
      else if ( (_DWORD)v45 == 2 )
      {
        v9 = *((_WORD *)a2 + 135);
        if ( (v9 & 0x100) != 0 )
        {
          std::deque<KeyboardEvent>::_Emplace_back_internal<KeyboardEvent const &>((_QWORD *)this + 89, &v45);
          (*(void (__fastcall **)(KeyboardOverriderDispatcher *, _QWORD))(*(_QWORD *)this + 32LL))(this, 0LL);
        }
        else
        {
          if ( (v9 & 0x200) != 0 )
          {
            memset(v49, 0, sizeof(v49));
            v50 = 0LL;
            v10 = 0;
            std::deque<KeyboardEvent>::_Emplace_back_internal<KeyboardEvent const &>((_QWORD *)this + 89, &v45);
            v11 = v49;
            while ( 1 )
            {
              v12 = *((_QWORD *)this + 93);
              if ( !v12 || v10 >= 0x14 )
                break;
              v13 = *(__int128 **)(*((_QWORD *)this + 90) + 8
                                                          * (*((_QWORD *)this + 92) & (*((_QWORD *)this + 91) - 1LL)));
              v14 = &v45;
              v15 = 2LL;
              do
              {
                *v14 = *v13;
                v14[1] = v13[1];
                v14[2] = v13[2];
                v14[3] = v13[3];
                v14[4] = v13[4];
                v14[5] = v13[5];
                v14[6] = v13[6];
                v14 += 8;
                *(v14 - 1) = v13[7];
                v13 += 8;
                --v15;
              }
              while ( v15 );
              *v14 = *v13;
              v14[1] = v13[1];
              *((_QWORD *)v14 + 4) = *((_QWORD *)v13 + 4);
              *((_QWORD *)this + 93) = v12 - 1;
              if ( v12 == 1 )
                *((_QWORD *)this + 92) = 0LL;
              else
                ++*((_QWORD *)this + 92);
              LOWORD(v16) = 0;
              if ( (_DWORD)v45 == 2 )
                v16 = HIDWORD(v46);
              if ( (BYTE8(v45) & 1) != 0 && (_WORD)v16 )
              {
                *v11 = v16;
                ++v10;
                ++v11;
              }
            }
            *(_QWORD *)v48 = 0LL;
            Shared = MsgStringCreateShared(v49, v10, v48);
            if ( Shared < 0 )
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0xD0,
                (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\keyboar"
                     "doverriderdispatcher.cpp",
                (const char *)(unsigned int)Shared,
                cchBuff);
            cchBuffa = *(_DWORD *)v48;
            v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 55) + 40LL))(
                    *((_QWORD *)this + 55),
                    5LL,
                    231LL);
            if ( v18 < 0 )
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0xD9,
                (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\keyboar"
                     "doverriderdispatcher.cpp",
                (const char *)(unsigned int)v18,
                cchBuffa);
            v19 = *(_QWORD *)v48;
          }
          else
          {
            *(_DWORD *)v48 = 0;
            v48[2] = 0;
            *(_DWORD *)pwszBuff = 0;
            SurrogateCharAccumulator::OnKey(
              (KeyboardOverriderDispatcher *)((char *)this + 434),
              *((_WORD *)a2 + 138),
              (BYTE8(v45) & 4) != 0,
              &v40,
              v48,
              (int *)pwszBuff);
            *(_QWORD *)v42 = 0LL;
            v20 = MsgStringCreateShared(v48, *(unsigned int *)pwszBuff, v42);
            if ( v20 < 0 )
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0xED,
                (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\keyboar"
                     "doverriderdispatcher.cpp",
                (const char *)(unsigned int)v20,
                cchBuffb);
            cchBuffc = v42[0];
            v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**((_QWORD **)this + 55) + 40LL))(
                    *((_QWORD *)this + 55),
                    WORD4(v45),
                    231LL,
                    (unsigned __int16)v46);
            if ( v21 < 0 )
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0xF6,
                (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\keyboar"
                     "doverriderdispatcher.cpp",
                (const char *)(unsigned int)v21,
                cchBuffc);
            v19 = *(_QWORD *)v42;
          }
          if ( v19 )
            MsgRelease();
        }
      }
    }
    else
    {
      WindowThreadProcessId = 0;
      ForegroundWindow = GetForegroundWindow();
      if ( ForegroundWindow )
        WindowThreadProcessId = GetWindowThreadProcessId(ForegroundWindow, 0LL);
      dwhkl = GetKeyboardLayout(WindowThreadProcessId);
      *(_DWORD *)pwszBuff = 0;
      v26 = v46;
      if ( ToUnicodeEx(
             *((unsigned __int16 *)a3 + 30),
             (unsigned __int16)v46,
             (const BYTE *)this + 448,
             pwszBuff,
             1,
             4u,
             dwhkl) == 1 )
      {
        v27 = pwszBuff[0];
      }
      else
      {
        v27 = 0;
        pwszBuff[0] = 0;
      }
      v28 = *((_QWORD *)this + 55);
      v29 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v28 + 24LL);
      v30 = pwszBuff;
      v43 = pwszBuff;
      v31 = 0;
      if ( v27 )
      {
        do
        {
          ++v30;
          ++v31;
        }
        while ( *v30 );
      }
      v42[0] = v31 | 0x80000000;
      LOWORD(cchBuffe) = v26;
      v32 = v29(v28, HIWORD(v46), WORD4(v45), *((unsigned __int16 *)a3 + 30));
      if ( v32 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x11B,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\keyboardoverr"
               "iderdispatcher.cpp",
          (const char *)(unsigned int)v32,
          cchBuffe);
    }
    if ( *(_QWORD *)v41 )
      MsgRelease();
  }
}
