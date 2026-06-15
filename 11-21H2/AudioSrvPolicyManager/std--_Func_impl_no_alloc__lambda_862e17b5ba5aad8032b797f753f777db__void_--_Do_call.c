/*
 * XREFs of std::_Func_impl_no_alloc__lambda_862e17b5ba5aad8032b797f753f777db__void_::_Do_call @ 0x1800282C0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x180024F20 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall std::_Func_impl_no_alloc__lambda_862e17b5ba5aad8032b797f753f777db__void_::_Do_call(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rdi
  CApplicationManager *v3; // r15
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  struct CApplication *v5; // rbp
  int v6; // eax
  int v7; // edx
  int v8; // eax

  v1 = *(_DWORD *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = g_ApplicationManager;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v5 = *(struct CApplication **)(v2 + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 24));
  v6 = *(_DWORD *)(v2 + 488);
  v7 = v6 - 1;
  v8 = v6 + 1;
  if ( v1 )
    v8 = v7;
  *(_DWORD *)(v2 + 488) = v8;
  if ( v2 != -24 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 24));
  if ( v5 )
    CApplicationManager::UpdateActiveMediaAppForSession(v3, v5, 0);
  if ( v4 )
    LeaveCriticalSection(v4);
}
