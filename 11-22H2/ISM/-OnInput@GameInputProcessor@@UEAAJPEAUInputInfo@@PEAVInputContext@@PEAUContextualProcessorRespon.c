/*
 * XREFs of ?OnInput@GameInputProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801DA720
 * Callers:
 *     <none>
 * Callees:
 *     ?LazyInitialize@GameInputProcessor@@AEAAJXZ @ 0x18004E2F0 (-LazyInitialize@GameInputProcessor@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTargetProcessId@GameInputProcessor@@CAKPEAVInputContext@@@Z @ 0x180077650 (-GetTargetProcessId@GameInputProcessor@@CAKPEAVInputContext@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetKeyboardInputData@KeyboardInputInfo@@QEAA?AU_KEYBOARD_INPUT_DATA@@XZ @ 0x18017ECAC (-GetKeyboardInputData@KeyboardInputInfo@@QEAA-AU_KEYBOARD_INPUT_DATA@@XZ.c)
 */

__int64 __fastcall GameInputProcessor::OnInput(
        __int64 **this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  int v8; // ebx
  int v9; // eax
  unsigned int TargetProcessId; // eax
  __int64 *v11; // rcx
  __int64 v12; // r9
  unsigned int v13; // eax
  unsigned int v14; // eax
  struct _KEYBOARD_INPUT_DATA v16; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v8 = 0;
  if ( gbIsDWMNoRawGameController )
  {
    *((_DWORD *)a4 + 2) = 0;
    return 0LL;
  }
  v9 = GameInputProcessor::LazyInitialize((GameInputProcessor *)this);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x102,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\lib\\gameinputprocessor.cpp",
      (const char *)(unsigned int)v9);
  switch ( *(_DWORD *)a2 )
  {
    case 0x40:
      if ( this[4] )
      {
        TargetProcessId = GameInputProcessor::GetTargetProcessId(a3);
        v11 = this[4];
        v12 = *v11;
        if ( *((_DWORD *)a2 + 6) <= 0x58u )
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v12 + 48))(
            v11,
            *((unsigned int *)a2 + 1),
            TargetProcessId);
        else
          (*(void (__fastcall **)(__int64 *, char *, _QWORD))(v12 + 56))(v11, (char *)a2 + 88, TargetProcessId);
      }
      *((_DWORD *)a4 + 2) = 3;
      return 0LL;
    case 0x1000:
      if ( this[4] )
      {
        v13 = GameInputProcessor::GetTargetProcessId(a3);
        (*(void (__fastcall **)(__int64 *, _QWORD, char *, _QWORD))(*this[4] + 40))(
          this[4],
          *((unsigned int *)a2 + 1),
          (char *)a2 + 88,
          v13);
      }
LABEL_17:
      *((_DWORD *)a4 + 2) = 4;
      return 0LL;
    case 4:
      if ( this[4] )
      {
        KeyboardInputInfo::GetKeyboardInputData(a2, &v16);
        v14 = GameInputProcessor::GetTargetProcessId(a3);
        (*(void (__fastcall **)(__int64 *, _QWORD, struct _KEYBOARD_INPUT_DATA *, _QWORD))(*this[4] + 32))(
          this[4],
          *((unsigned int *)a2 + 1),
          &v16,
          v14);
      }
      goto LABEL_17;
    case 0x80:
      v8 = 4;
      break;
  }
  *((_DWORD *)a4 + 2) = v8;
  return 0LL;
}
