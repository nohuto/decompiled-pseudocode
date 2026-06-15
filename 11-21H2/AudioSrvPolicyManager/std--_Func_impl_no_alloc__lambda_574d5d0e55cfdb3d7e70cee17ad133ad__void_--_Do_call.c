/*
 * XREFs of std::_Func_impl_no_alloc__lambda_574d5d0e55cfdb3d7e70cee17ad133ad__void_::_Do_call @ 0x180028060
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x18000E8E8 (WPP_SF_.c)
 *     ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x180015DD8 (-CastingStateChanged@CApplication@@QEAAXH@Z.c)
 *     WPP_SF_Sd @ 0x18001E018 (WPP_SF_Sd.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180020BE8 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180021DB0 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::_Func_impl_no_alloc__lambda_574d5d0e55cfdb3d7e70cee17ad133ad__void_::_Do_call(__int64 a1)
{
  int v1; // r14d
  __int64 v2; // rbx
  CApplicationManager *v3; // rbp
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  struct CApplication *v5; // rdi
  BOOL v6; // r15d
  int v7; // ecx
  bool v8; // sf
  int v9; // [rsp+20h] [rbp-28h]

  v1 = *(_DWORD *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = g_ApplicationManager;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v5 = *(struct CApplication **)(v2 + 224);
  if ( v5
    || (CApplicationManager::Register(v3, (struct CProcess *)v2), (v5 = *(struct CApplication **)(v2 + 224)) != 0LL) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v9 = v1;
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x29u,
        &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids,
        *(const wchar_t **)(v2 + 176),
        v9);
    }
    v6 = *((_DWORD *)v5 + 52) != 0;
    if ( !*(_DWORD *)(v2 + 416) )
    {
      v7 = v1 != 0 ? -1 : 1;
      v8 = v7 + *(_DWORD *)(v2 + 508) < 0;
      *(_DWORD *)(v2 + 508) += v7;
      if ( v8 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x31u, &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids);
        }
        *(_DWORD *)(v2 + 508) = 0;
      }
      else
      {
        CApplication::CastingStateChanged(*(CApplication **)(v2 + 224), v1 != 0 ? -1 : 1);
      }
    }
    if ( v6 != (*((_DWORD *)v5 + 52) != 0) )
      CApplicationManager::OnApplicationInteractivityChanged(v3, v5);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
}
