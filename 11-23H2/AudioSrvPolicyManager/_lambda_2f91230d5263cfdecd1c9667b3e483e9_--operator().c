/*
 * XREFs of _lambda_2f91230d5263cfdecd1c9667b3e483e9_::operator() @ 0x18000FD90
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_2f91230d5263cfdecd1c9667b3e483e9__void_::_Do_call @ 0x180016020 (std--_Func_impl_no_alloc__lambda_2f91230d5263cfdecd1c9667b3e483e9__void_--_Do_call.c)
 * Callees:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180006E90 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18000C490 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateHostedAppState@CApplication@@QEAAJHPEAH@Z @ 0x18002AA60 (-UpdateHostedAppState@CApplication@@QEAAJHPEAH@Z.c)
 *     WPP_SF_Sis @ 0x18002FF8C (WPP_SF_Sis.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_2f91230d5263cfdecd1c9667b3e483e9_::operator()(__int64 a1, __int64 a2, int a3)
{
  int v3; // r14d
  int v4; // r13d
  __int64 v5; // r12
  const unsigned __int16 *v6; // rbx
  CApplicationManager *v7; // r15
  const char *v8; // rax
  int v9; // edi
  struct CApplication *v10; // rbp
  int Application; // ebx
  int v12; // [rsp+20h] [rbp-68h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  int v14; // [rsp+90h] [rbp+8h] BYREF
  int v15; // [rsp+98h] [rbp+10h] BYREF
  CApplication *v16; // [rsp+A0h] [rbp+18h] BYREF
  char *v17; // [rsp+A8h] [rbp+20h]

  v3 = *(_DWORD *)(a1 + 28);
  v4 = *(_DWORD *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(const unsigned __int16 **)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 24LL) >= 8uLL )
    v6 = *(const unsigned __int16 **)v6;
  v7 = g_ApplicationManager;
  if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v8 = "HAC_INTERACTIVE";
    if ( !v3 )
      v8 = "HAC_NON_INTERACTIVE";
    WPP_SF_Sis(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      (unsigned int)"HAC_NON_INTERACTIVE",
      a3,
      (_DWORD)v6,
      v5,
      (__int64)v8);
  }
  v9 = 0;
  v10 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v7 + 32));
  v17 = (char *)v7 + 32;
  v14 = 0;
  v15 = 0;
  Application = CApplicationManager::GetApplication(v7, v6, v5, v4, &v16, 1, &v14);
  if ( Application >= 0 )
  {
    Application = CApplication::UpdateHostedAppState(v16, v3, &v15);
    if ( Application >= 0 )
    {
      if ( v14 || v15 )
        v9 = 1;
      v10 = v16;
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
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)Application,
      v12);
  }
}
