/*
 * XREFs of TS_AudioProtocolNotifyRundown @ 0x180031930
 * Callers:
 *     <none>
 * Callees:
 *     ?TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18002E8B8 (-TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TS_AudioProtocolNotifyRundown(struct AUDIOPROTOCOLNOTIFY *a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  TsSessionIdDeleteNotify(a1);
  if ( v2 )
    LeaveCriticalSection(v2);
}
