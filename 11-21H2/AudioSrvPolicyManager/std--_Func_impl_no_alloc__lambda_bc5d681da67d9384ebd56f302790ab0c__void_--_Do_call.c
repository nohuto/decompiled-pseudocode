/*
 * XREFs of std::_Func_impl_no_alloc__lambda_bc5d681da67d9384ebd56f302790ab0c__void_::_Do_call @ 0x180025570
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAppState@CApplication@@QEAAXHPEAH@Z @ 0x18001CB5C (-UpdateAppState@CApplication@@QEAAXHPEAH@Z.c)
 *     WPP_SF_Sd @ 0x18001E018 (WPP_SF_Sd.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001F460 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180020BE8 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::_Func_impl_no_alloc__lambda_bc5d681da67d9384ebd56f302790ab0c__void_::_Do_call(__int64 a1)
{
  UINT32 v1; // r12d
  int v2; // r14d
  __int64 v3; // r13
  const wchar_t *v4; // rbx
  CApplicationManager *v5; // r15
  int v6; // edi
  struct CApplication *v7; // rsi
  int v8; // [rsp+90h] [rbp+8h] BYREF
  int v9; // [rsp+98h] [rbp+10h] BYREF
  CApplication *v10; // [rsp+A0h] [rbp+18h] BYREF
  char *v11; // [rsp+A8h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 36);
  v2 = *(_DWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(const wchar_t **)(a1 + 8);
  if ( *((_QWORD *)v4 + 3) >= 8uLL )
    v4 = *(const wchar_t **)v4;
  v5 = g_ApplicationManager;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xCu,
      &WPP_4eb0c1de174a3401e682efc3753af671_Traceguids,
      v4,
      *(_DWORD *)(a1 + 32));
  }
  v6 = 0;
  v7 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 32));
  v11 = (char *)v5 + 32;
  v8 = 0;
  v9 = 0;
  if ( (int)CApplicationManager::GetApplication(v5, v4, v3, v1, &v10, 1, &v8) >= 0 )
  {
    v7 = v10;
    CApplication::UpdateAppState(v10, v2, &v9);
    if ( v8 || v9 )
      v6 = 1;
  }
  if ( v5 != (CApplicationManager *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 32));
  if ( v6 )
    CApplicationManager::OnApplicationInteractivityChanged(v5, v7);
}
