/*
 * XREFs of ?OnInput@GameInputProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801AEA30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002BBF0 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?LazyInitialize@GameInputProcessor@@AEAAJXZ @ 0x180043840 (-LazyInitialize@GameInputProcessor@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetKeyboardInputData@KeyboardInputInfo@@QEAA?AU_KEYBOARD_INPUT_DATA@@XZ @ 0x180151C44 (-GetKeyboardInputData@KeyboardInputInfo@@QEAA-AU_KEYBOARD_INPUT_DATA@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GameInputProcessor::OnInput(
        __int64 **this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  int v8; // ebx
  int v9; // eax
  unsigned int v10; // r11d
  int (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rcx
  int v12; // eax
  int v13; // eax
  __int64 *v14; // rcx
  __int64 v15; // rax
  __int64 *v16; // rcx
  __int64 *v17; // r14
  unsigned int v18; // r11d
  int v20; // [rsp+20h] [rbp-78h]
  unsigned int v21; // [rsp+30h] [rbp-68h] BYREF
  __int64 v22; // [rsp+38h] [rbp-60h] BYREF
  struct _KEYBOARD_INPUT_DATA v23; // [rsp+40h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v8 = 0;
  if ( !gbIsDWMNoRawGameController )
  {
    v9 = GameInputProcessor::LazyInitialize((GameInputProcessor *)this);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        266LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\lib\\gam"
                 "einputprocessor.cpp",
        (const char *)(unsigned int)v9);
    v10 = 0;
    v21 = 0;
    v22 = 0LL;
    v11 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a3 + 2);
    if ( v11 )
    {
      if ( (**v11)(v11, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v22) >= 0 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v22 + 32LL))(v22, &v21);
        if ( v12 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x117,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\lib\\gam"
                 "einputprocessor.cpp",
            (const char *)(unsigned int)v12,
            v20);
      }
      v10 = v21;
    }
    v13 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 == 64 )
    {
      v14 = this[4];
      if ( v14 )
      {
        v15 = *v14;
        if ( *((_DWORD *)a2 + 6) <= 0x58u )
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v15 + 48))(v14, *((unsigned int *)a2 + 1), v10);
        else
          (*(void (__fastcall **)(__int64 *, char *, _QWORD))(v15 + 56))(v14, (char *)a2 + 88, v10);
      }
      *((_DWORD *)a4 + 2) = 3;
    }
    else
    {
      if ( v13 == 4096 )
      {
        v16 = this[4];
        if ( v16 )
          (*(void (__fastcall **)(__int64 *, _QWORD, char *, _QWORD))(*v16 + 40))(
            v16,
            *((unsigned int *)a2 + 1),
            (char *)a2 + 88,
            v10);
      }
      else
      {
        if ( v13 != 4 )
        {
          if ( v13 == 128 )
            v8 = 4;
          *((_DWORD *)a4 + 2) = v8;
          goto LABEL_26;
        }
        v17 = this[4];
        if ( v17 )
        {
          KeyboardInputInfo::GetKeyboardInputData(a2, &v23);
          (*(void (__fastcall **)(__int64 *, _QWORD, struct _KEYBOARD_INPUT_DATA *, _QWORD))(*v17 + 32))(
            v17,
            *((unsigned int *)a2 + 1),
            &v23,
            v18);
        }
      }
      *((_DWORD *)a4 + 2) = 4;
    }
LABEL_26:
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v22);
    return 0LL;
  }
  *((_DWORD *)a4 + 2) = 0;
  return 0LL;
}
