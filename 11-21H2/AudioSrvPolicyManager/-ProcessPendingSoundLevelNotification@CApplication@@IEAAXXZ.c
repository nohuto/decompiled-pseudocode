/*
 * XREFs of ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x180019414
 * Callers:
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@IH@Z @ 0x180016B1C (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMP.c)
 *     ?SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18001C3E0 (-SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIME.c)
 * Callees:
 *     ?SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18001BBC4 (-SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 */

void __fastcall CApplication::ProcessPendingSoundLevelNotification(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int v3; // esi

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 280);
  while ( 1 )
  {
    EnterCriticalSection(v2);
    if ( *((_DWORD *)this + 80) && *((_DWORD *)this + 80) != GetCurrentThreadId() )
    {
      if ( !v2 )
        return;
      goto LABEL_12;
    }
    if ( *((_DWORD *)this + 81) == *((_DWORD *)this + 82) && !*((_DWORD *)this + 171) )
      break;
    *((_DWORD *)this + 80) = GetCurrentThreadId();
    v3 = *((_DWORD *)this + 81);
    *((_DWORD *)this + 82) = v3;
    *((_DWORD *)this + 171) = 0;
    if ( v2 )
      LeaveCriticalSection(v2);
    CApplication::SendSoundLevelNotification(this, v3);
  }
  *((_DWORD *)this + 80) = 0;
  if ( !v2 )
    return;
LABEL_12:
  LeaveCriticalSection(v2);
}
