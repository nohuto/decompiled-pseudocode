/*
 * XREFs of std::_Func_impl_no_alloc__lambda_55bbdd01f859b2b681de89e14de0bd19__void_::_Do_call @ 0x180027EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x18001AB8C (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001F460 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x180020A38 (-OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     WPP_SF_Ss @ 0x180025BB4 (WPP_SF_Ss.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall std::_Func_impl_no_alloc__lambda_55bbdd01f859b2b681de89e14de0bd19__void_::_Do_call(__int64 a1)
{
  int v1; // esi
  UINT32 v2; // r14d
  __int64 v3; // r15
  const wchar_t *v4; // rdi
  CApplicationManager *v5; // rbp
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 v7; // r8
  const char *v8; // rax
  CApplication *v9; // rsi
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  CApplication *v12; // [rsp+70h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+78h] [rbp+10h]

  v1 = *(_DWORD *)(a1 + 36);
  v2 = *(_DWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(const wchar_t **)(a1 + 8);
  if ( *((_QWORD *)v4 + 3) >= 8uLL )
    v4 = *(const wchar_t **)v4;
  v5 = g_ApplicationManager;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v13 = v6;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v8 = "LAUNCHED";
    if ( v1 )
      v8 = "PENDING_TERMINATION";
    WPP_SF_Ss(*((_QWORD *)WPP_GLOBAL_Control + 2), (__int64)"PENDING_TERMINATION", v7, v4, v8);
  }
  v12 = 0LL;
  if ( (int)CApplicationManager::GetApplication(v5, v4, v3, v2, &v12, 0, 0LL) < 0 )
  {
    if ( !v6 )
      return;
    goto LABEL_24;
  }
  if ( v1 )
  {
    if ( v1 == 1 )
    {
      v9 = v12;
      if ( *((_DWORD *)v12 + 52) )
        CApplicationManager::OnApplicationClosed(v5, v4, *((_QWORD *)v12 + 87), v2);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)v9 + 32));
      v10 = (_QWORD *)*((_QWORD *)v9 + 9);
      while ( v10 )
      {
        v11 = v10[2];
        v10 = (_QWORD *)*v10;
        if ( !*(_DWORD *)(v11 + 416) )
          *(_DWORD *)(v11 + 416) = 1;
      }
      if ( v9 != (CApplication *)-32LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v9 + 32));
    }
  }
  else
  {
    CApplication::ReviveProcessesPendingTermination(v12);
  }
  if ( v6 )
LABEL_24:
    LeaveCriticalSection(v6);
}
