/*
 * XREFs of ?GetInstance@KernelContextProvider@@SAPEAV1@XZ @ 0x18001DBE4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE_const___::_Do_call @ 0x18001DCC0 (std--_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_.c)
 *     ??0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180038C00 (--0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?RuntimeClassInitialize@ShellGesturesProcessor@@QEAAJXZ @ 0x180038DE4 (-RuntimeClassInitialize@ShellGesturesProcessor@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@KernelContextProvider@@CAJPEAPEAV1@@Z @ 0x1800376B0 (-Create@KernelContextProvider@@CAJPEAPEAV1@@Z.c)
 *     atexit @ 0x180056E08 (atexit.c)
 *     _Init_thread_footer @ 0x180057938 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800579A0 (_Init_thread_header.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A7C6C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
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

  if ( dword_180278250 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_180278250);
    if ( dword_180278250 == -1 )
    {
      atexit(KernelContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__);
      Init_thread_footer(&dword_180278250);
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
    v3 = KernelContextProvider::Create(&qword_180278248);
    LastError = v3;
    if ( v3 >= 0 )
    {
      InitOnceComplete(&InitOnce, 0, 0LL);
      goto LABEL_4;
    }
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x258, (unsigned int)"wil", (const char *)(unsigned int)v3, v4);
    InitOnceComplete(&InitOnce, 4u, 0LL);
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0x253, (unsigned int)"wil", v0);
  }
LABEL_5:
  if ( LastError < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x266,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/win32_helpers.h",
      (const char *)(unsigned int)LastError,
      v4);
  return qword_180278248;
}
