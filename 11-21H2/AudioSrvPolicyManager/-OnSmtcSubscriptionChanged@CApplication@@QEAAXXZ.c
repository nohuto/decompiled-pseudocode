/*
 * XREFs of ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180019180
 * Callers:
 *     ?SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z @ 0x18001C050 (-SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180021714 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180015950 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z @ 0x180018048 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800182B0 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18002F6C0 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 */

void __fastcall CApplication::OnSmtcSubscriptionChanged(DWORD *this)
{
  CApplication::ApplySmtcRelatedPolicy((CApplication *)this);
  if ( !(unsigned int)CApplication::HasSmtcSubscription((__int64)this, 0) )
    goto LABEL_8;
  if ( this[52] )
  {
LABEL_7:
    CApplicationManager::UpdateActiveMediaAppForSession(g_ApplicationManager, (struct CApplication *)this, 0);
    return;
  }
  if ( (unsigned int)CApplication::HasSmtcSubscription((__int64)this, 1) )
  {
    if ( this[52]
      || (unsigned int)CApplication::IsBackgroundAudioCapable((CApplication *)this)
      && (unsigned int)CApplication::HasSmtcSubscription((__int64)this, 1) )
    {
      goto LABEL_7;
    }
  }
  else
  {
LABEL_8:
    TsSessionIdRemoveActiveMediaApp(this[53], (struct CApplication *)this);
  }
}
