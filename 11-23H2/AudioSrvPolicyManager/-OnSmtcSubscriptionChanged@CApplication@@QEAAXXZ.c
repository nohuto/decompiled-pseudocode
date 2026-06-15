/*
 * XREFs of ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180028040
 * Callers:
 *     ?SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z @ 0x1800142B0 (-SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18002E128 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z @ 0x18000A360 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180010070 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180015328 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x1800259B0 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 */

void __fastcall CApplication::OnSmtcSubscriptionChanged(CApplication *this, unsigned int a2)
{
  CApplication::ApplySmtcRelatedPolicy(this, a2);
  if ( !(unsigned int)CApplication::HasSmtcSubscription((__int64)this, 0) )
    goto LABEL_8;
  if ( *((_DWORD *)this + 52) )
  {
LABEL_7:
    CApplicationManager::UpdateActiveMediaAppForSession(g_ApplicationManager, this, 0);
    return;
  }
  if ( (unsigned int)CApplication::HasSmtcSubscription((__int64)this, 1) )
  {
    if ( *((_DWORD *)this + 52)
      || (unsigned int)CApplication::IsBackgroundAudioCapable(this)
      && (unsigned int)CApplication::HasSmtcSubscription((__int64)this, 1) )
    {
      goto LABEL_7;
    }
  }
  else
  {
LABEL_8:
    TsSessionIdRemoveActiveMediaApp(*((_DWORD *)this + 53), this);
  }
}
