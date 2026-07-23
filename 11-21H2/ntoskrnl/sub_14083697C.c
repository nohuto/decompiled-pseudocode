/*
 * XREFs of sub_14083697C @ 0x14083697C
 * Callers:
 *     sub_140835844 @ 0x140835844 (sub_140835844.c)
 * Callees:
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 */

__int64 __fastcall sub_14083697C(PVOID DeferredContext, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = a2 + 448;
  KeInitializeDpc((PRKDPC)(a2 + 448), (PKDEFERRED_ROUTINE)sub_1406391E0, DeferredContext);
  *(_QWORD *)(v2 + 128) = 0LL;
  *(_QWORD *)(v2 + 144) = sub_1409F8250;
  *(_QWORD *)(v2 + 152) = DeferredContext;
  KeInitializeTimerEx((PKTIMER)(v2 + 64), NotificationTimer);
  KeInitializeDpc((PRKDPC)(a2 + 768), (PKDEFERRED_ROUTINE)sub_140639090, DeferredContext);
  *(_QWORD *)(a2 + 896) = 0LL;
  *(_QWORD *)(a2 + 912) = sub_1409F8250;
  *(_QWORD *)(a2 + 920) = DeferredContext;
  KeInitializeTimerEx((PKTIMER)(a2 + 832), NotificationTimer);
  KeInitializeDpc((PRKDPC)(a2 + 608), (PKDEFERRED_ROUTINE)sub_140378CF0, DeferredContext);
  *(_QWORD *)(a2 + 736) = 0LL;
  *(_QWORD *)(a2 + 752) = sub_1409F8250;
  *(_QWORD *)(a2 + 760) = DeferredContext;
  KeInitializeTimerEx((PKTIMER)(a2 + 672), NotificationTimer);
  result = 1LL;
  *(_OWORD *)(a2 + 944) = 0LL;
  *(_OWORD *)(a2 + 968) = 0LL;
  *(_DWORD *)(a2 + 946) = 65537;
  *(_WORD *)(a2 + 956) = 1;
  *(_DWORD *)(a2 + 970) = 65537;
  *(_WORD *)(a2 + 980) = 1;
  return result;
}
