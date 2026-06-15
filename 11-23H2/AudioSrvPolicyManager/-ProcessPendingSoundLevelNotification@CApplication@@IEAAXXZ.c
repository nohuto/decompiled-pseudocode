/*
 * XREFs of ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x1800092E0
 * Callers:
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@IH@Z @ 0x180006730 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMP.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180006E90 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x180007E90 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 * Callees:
 *     ?SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180009B90 (-SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 */

void __fastcall CApplication::ProcessPendingSoundLevelNotification(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  DWORD CurrentThreadId; // eax
  unsigned int v4; // esi

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
    CurrentThreadId = GetCurrentThreadId();
    v4 = *((_DWORD *)this + 81);
    *((_DWORD *)this + 80) = CurrentThreadId;
    *((_DWORD *)this + 82) = v4;
    *((_DWORD *)this + 171) = 0;
    if ( v2 )
      LeaveCriticalSection(v2);
    CApplication::SendSoundLevelNotification(this, v4);
  }
  *((_DWORD *)this + 80) = 0;
  if ( !v2 )
    return;
LABEL_12:
  LeaveCriticalSection(v2);
}
