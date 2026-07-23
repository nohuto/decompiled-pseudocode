/*
 * XREFs of sub_140852250 @ 0x140852250
 * Callers:
 *     sub_140851EBC @ 0x140851EBC (sub_140851EBC.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x140263730 (KeQueryNodeActiveAffinity.c)
 *     sub_140293268 @ 0x140293268 (sub_140293268.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     KeInitializeTimer2 @ 0x1403588D0 (KeInitializeTimer2.c)
 *     memset @ 0x140435E00 (memset.c)
 */

int __fastcall sub_140852250(__int64 a1, __int64 a2, __int64 a3)
{
  KAFFINITY Mask; // rdx
  KAFFINITY v7; // rax
  unsigned __int64 v8; // rax
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  Affinity = 0LL;
  memset((void *)(a1 + 16), 0, 0x108uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  KeInitializeEvent((PRKEVENT)(a1 + 16), SynchronizationEvent, 0);
  KeInitializeTimerEx((PKTIMER)(a1 + 40), SynchronizationTimer);
  KeInitializeEvent((PRKEVENT)(a1 + 104), SynchronizationEvent, 0);
  KeInitializeTimer2(a1 + 128, (__int64)sub_14025D6A0, a1, 8LL);
  KeQueryNodeActiveAffinity(**(_WORD **)(a1 + 8), &Affinity, 0LL);
  Mask = Affinity.Mask;
  v7 = (Affinity.Mask >> 1) & 0x5555555555555555LL;
  *(_WORD *)(a1 + 276) = 0;
  v8 = (0x101010101010101LL
      * ((((Mask - v7) & 0x3333333333333333LL)
        + (((Mask - v7) >> 2) & 0x3333333333333333LL)
        + ((((Mask - v7) & 0x3333333333333333LL) + (((Mask - v7) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  if ( (_BYTE)v8 )
  {
    LODWORD(v8) = sub_140293268((__int64)&Affinity, (_WORD *)(a1 + 276), 0LL, 0);
    *(_WORD *)(a1 + 276) = v8;
  }
  return v8;
}
