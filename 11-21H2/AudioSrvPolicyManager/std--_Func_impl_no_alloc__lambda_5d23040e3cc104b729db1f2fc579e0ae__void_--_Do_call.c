/*
 * XREFs of std::_Func_impl_no_alloc__lambda_5d23040e3cc104b729db1f2fc579e0ae__void_::_Do_call @ 0x1800281E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800095B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     ?SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z @ 0x18001C050 (-SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180021DB0 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::_Func_impl_no_alloc__lambda_5d23040e3cc104b729db1f2fc579e0ae__void_::_Do_call(__int64 a1)
{
  int v1; // ebp
  int v2; // r14d
  struct CProcess *v3; // rsi
  CApplicationManager *v4; // rbx
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  int v6; // ebx

  v1 = *(_DWORD *)(a1 + 20);
  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(struct CProcess **)(a1 + 8);
  v4 = g_ApplicationManager;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v6 = CApplicationManager::Register(v4, v3);
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xFu, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids, v6);
    }
    AudPolicyLogError("CApplicationManager::SetSmtcSubscriptionState", 644, v6);
  }
  else
  {
    CProcess::SetHasSmtcSubscription((__int64)v3, v2, v1);
  }
  if ( v5 )
    LeaveCriticalSection(v5);
}
