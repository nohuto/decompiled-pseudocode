/*
 * XREFs of ?GetInstance@KernelContextProvider@@SAPEAV1@XZ @ 0x18001B208
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE_const___::_Do_call @ 0x18001B120 (std--_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_.c)
 *     ??$MakeAndInitialize@VShellGesturesProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVShellGesturesProcessor@@@Z @ 0x180047020 (--$MakeAndInitialize@VShellGesturesProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVShellGestu.c)
 * Callees:
 *     ?Create@KernelContextProvider@@CAJPEAPEAV1@@Z @ 0x18003B414 (-Create@KernelContextProvider@@CAJPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     _Init_thread_footer @ 0x18004AD68 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18004ADD0 (_Init_thread_header.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007DEDC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct KernelContextProvider *KernelContextProvider::GetInstance(void)
{
  const char *v0; // r9
  int LastError; // ebx
  int v3; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180242D60 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_180242D60);
    if ( dword_180242D60 == -1 )
    {
      atexit(KernelContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__);
      Init_thread_footer(&dword_180242D60);
    }
  }
  fPending = 0;
  if ( __std_init_once_begin_initialize(&InitOnce, 0, &fPending, 0LL) )
  {
    if ( !fPending )
    {
LABEL_4:
      LastError = 0;
      goto LABEL_5;
    }
    v3 = KernelContextProvider::Create(&qword_180242D58);
    LastError = v3;
    if ( v3 >= 0 )
    {
      InitOnceComplete(&InitOnce, 0, 0LL);
      goto LABEL_4;
    }
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x248, (unsigned int)"wil", (const char *)(unsigned int)v3, v4);
    InitOnceComplete(&InitOnce, 4u, 0LL);
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0x243, (unsigned int)"wil", v0);
  }
LABEL_5:
  if ( LastError < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x256,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/win32_helpers.h",
      (const char *)(unsigned int)LastError,
      v4);
  return qword_180242D58;
}
