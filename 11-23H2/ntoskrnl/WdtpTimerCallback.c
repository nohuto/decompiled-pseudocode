/*
 * XREFs of WdtpTimerCallback @ 0x1406746E0
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1402AFE30 (KeResetEvent.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     WdtpArmTimer @ 0x14031DD04 (WdtpArmTimer.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

void __fastcall WdtpTimerCallback(__int64 a1, __int64 a2)
{
  int v3; // eax
  void (__fastcall *v4)(__int64); // rax
  int v5; // edx

  v3 = *(_DWORD *)(a2 + 136) + 1;
  *(_DWORD *)(a2 + 136) = v3;
  if ( v3 == 1 )
  {
    v4 = *(void (__fastcall **)(__int64))(a2 + 16);
    if ( v4 )
      v4(a2 + 141);
    if ( *(_QWORD *)(a2 + 24) )
    {
      KeResetEvent((PRKEVENT)(a2 + 96));
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 56), CriticalWorkQueue);
    }
    v5 = *(_DWORD *)(a2 + 36);
    if ( v5 )
      WdtpArmTimer(a2, v5 - *(_DWORD *)(a2 + 32));
  }
  else if ( v3 == 2 )
  {
    (*(void (__fastcall **)(__int64))(a2 + 40))(a2 + 141);
  }
}
