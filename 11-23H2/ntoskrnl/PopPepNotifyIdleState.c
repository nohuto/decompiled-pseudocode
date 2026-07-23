/*
 * XREFs of PopPepNotifyIdleState @ 0x14035C660
 * Callers:
 *     PopPluginComponentIdleState @ 0x14035C600 (PopPluginComponentIdleState.c)
 * Callees:
 *     PopPepProcessEvent @ 0x140313B90 (PopPepProcessEvent.c)
 *     PopPlNotifyDeviceFState @ 0x14035C7D0 (PopPlNotifyDeviceFState.c)
 *     PopPluginNotifyIdleState @ 0x1404631CE (PopPluginNotifyIdleState.c)
 */

char __fastcall PopPepNotifyIdleState(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  char v5; // bl
  __int64 v6; // r14
  unsigned int *v8; // rsi
  __int64 v10; // [rsp+20h] [rbp-18h]

  v5 = 0;
  v6 = a4;
  v8 = (unsigned int *)(a1 + 208LL * a2);
  if ( !*(_BYTE *)(a1 + 124)
    || (LOBYTE(a4) = 1, (unsigned __int8)PopPluginNotifyIdleState(*(_QWORD *)(a1 + 32), v8[50], v8[92], a4)) )
  {
    v5 = PopPepProcessEvent(a1, (__int64)(v8 + 48), 1u, 6LL, v10, v6);
    PopPlNotifyDeviceFState(*(_QWORD *)(a1 + 32), a2, v8[93], v8[92], 1);
  }
  return v5;
}
