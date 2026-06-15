/*
 * XREFs of ?SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18001C3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x180019414 (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 */

void __fastcall CApplication::SoundLevelChangeCompletionCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        char *a2,
        struct _TP_TIMER *a3)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi

  v4 = (struct _RTL_CRITICAL_SECTION *)(a2 + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 224));
  *((_DWORD *)a2 + 68) = 0;
  if ( v4 )
    LeaveCriticalSection(v4);
  CApplication::ProcessPendingSoundLevelNotification((CApplication *)a2);
  CApplication::ProcessPendingPLMExemptionChange((CApplication *)a2);
}
