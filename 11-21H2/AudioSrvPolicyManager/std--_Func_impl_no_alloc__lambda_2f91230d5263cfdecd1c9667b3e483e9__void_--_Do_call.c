/*
 * XREFs of std::_Func_impl_no_alloc__lambda_2f91230d5263cfdecd1c9667b3e483e9__void_::_Do_call @ 0x180026B10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateHostedAppState@CApplication@@QEAAJHPEAH@Z @ 0x18001CC60 (-UpdateHostedAppState@CApplication@@QEAAJHPEAH@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001F460 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180020BE8 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     WPP_SF_Sis @ 0x180025AF0 (WPP_SF_Sis.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::_Func_impl_no_alloc__lambda_2f91230d5263cfdecd1c9667b3e483e9__void_::_Do_call(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // r15d
  UINT32 v4; // r13d
  __int64 v5; // r12
  const wchar_t *v6; // rbx
  CApplicationManager *v7; // r14
  const char *v8; // rax
  int v9; // edi
  struct CApplication *v10; // rbp
  int Application; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  int v13; // [rsp+90h] [rbp+8h] BYREF
  int v14; // [rsp+98h] [rbp+10h] BYREF
  CApplication *v15; // [rsp+A0h] [rbp+18h] BYREF
  char *v16; // [rsp+A8h] [rbp+20h]

  v3 = *(_DWORD *)(a1 + 36);
  v4 = *(_DWORD *)(a1 + 32);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(const wchar_t **)(a1 + 8);
  if ( *((_QWORD *)v6 + 3) >= 8uLL )
    v6 = *(const wchar_t **)v6;
  v7 = g_ApplicationManager;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v8 = "HAC_INTERACTIVE";
    if ( !v3 )
      v8 = "HAC_NON_INTERACTIVE";
    WPP_SF_Sis(*((_QWORD *)WPP_GLOBAL_Control + 2), (__int64)"HAC_NON_INTERACTIVE", a3, v6, v5, v8);
  }
  v9 = 0;
  v10 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v7 + 32));
  v16 = (char *)v7 + 32;
  v13 = 0;
  v14 = 0;
  Application = CApplicationManager::GetApplication(v7, v6, v5, v4, &v15, 1, &v13);
  if ( Application >= 0 )
  {
    Application = CApplication::UpdateHostedAppState(v15, v3, &v14);
    if ( Application >= 0 )
    {
      if ( v13 || v14 )
        v9 = 1;
      v10 = v15;
    }
  }
  if ( v7 != (CApplicationManager *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v7 + 32));
  if ( Application >= 0 )
  {
    if ( v9 )
      CApplicationManager::OnApplicationInteractivityChanged(v7, v10);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA41,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)Application);
  }
}
