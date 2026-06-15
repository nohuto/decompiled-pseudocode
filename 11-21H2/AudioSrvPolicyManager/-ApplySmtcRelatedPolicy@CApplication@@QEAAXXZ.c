/*
 * XREFs of ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180015950
 * Callers:
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180019180 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180031D70 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     ?AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@Z @ 0x1800155EC (-AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x180017114 (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z @ 0x180018048 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800182B0 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800186B8 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18001F2CC (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18002F6C0 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::ApplySmtcRelatedPolicy(CApplication *this)
{
  int v2; // ebp
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  _QWORD *v4; // rdi
  CProcess *v5; // rcx

  v2 = 0;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v4 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v4 )
  {
    v5 = (CProcess *)v4[2];
    v4 = (_QWORD *)*v4;
    if ( !*((_DWORD *)v5 + 104) )
      v2 += CProcess::GetActiveRenderStreamCount(v5, 2u);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  if ( !v2 || (unsigned int)CApplication::HasSmtcSubscription(this, 1LL) )
  {
    if ( (unsigned int)CApplication::IsBackgroundAudioCapable(this)
      && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable(this)
      && !(unsigned int)CApplication::HasSmtcSubscription(this, 1LL) )
    {
      CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, this, 0xD1u, 0);
    }
  }
  else
  {
    CApplication::AddCategoryOverrideToProcesses((__int64)this, 4, 4, 1);
    CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, this, 0xD1u, 0);
    TsSessionIdRemoveActiveMediaApp(*((_DWORD *)this + 53), this);
  }
}
