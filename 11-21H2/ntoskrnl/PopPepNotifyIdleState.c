/*
 * XREFs of PopPepNotifyIdleState @ 0x14045E5E0
 * Callers:
 *     PopPluginComponentIdleState @ 0x14045DEFE (PopPluginComponentIdleState.c)
 * Callees:
 *     PopPepProcessEvent @ 0x140356454 (PopPepProcessEvent.c)
 *     PopPluginNotifyIdleState @ 0x14045DFDC (PopPluginNotifyIdleState.c)
 *     PopPlNotifyDeviceFState @ 0x14045EA32 (PopPlNotifyDeviceFState.c)
 */

char __fastcall PopPepNotifyIdleState(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  char v5; // bl
  int *v8; // rsi
  __int64 v10; // [rsp+20h] [rbp-18h]

  v5 = 0;
  v8 = (int *)(a1 + 208LL * a2);
  if ( !*(_BYTE *)(a1 + 124) || PopPluginNotifyIdleState(*(__int64 **)(a1 + 32), v8[50], v8[92], 1) )
  {
    v5 = PopPepProcessEvent(a1, (__int64)(v8 + 48), 1u, 6u, v10, a4);
    PopPlNotifyDeviceFState(*(_QWORD *)(a1 + 32), a2, v8[93], v8[92], 1);
  }
  return v5;
}
