/*
 * XREFs of PoFxNotifySurprisePowerOn @ 0x140397A80
 * Callers:
 *     sub_140619520 @ 0x140619520 (sub_140619520.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140397B04 @ 0x140397B04 (sub_140397B04.c)
 *     sub_1403A4868 @ 0x1403A4868 (sub_1403A4868.c)
 *     sub_1405C9E88 @ 0x1405C9E88 (sub_1405C9E88.c)
 */

int __fastcall PoFxNotifySurprisePowerOn(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rdx

  v2 = a1;
  if ( a1 )
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  LOBYTE(a2) = 1;
  v3 = sub_1403A4868(a1, a2);
  v4 = v3;
  if ( v3 )
  {
    LODWORD(v3) = sub_140397B04(*(_QWORD *)(v3 + 56));
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 244), 0xFFFFFFFF) == 1 )
      LODWORD(v3) = KeSetEvent((PRKEVENT)(v4 + 248), 0, 0);
    if ( v2 )
    {
      v3 = *(_QWORD *)(v2 + 312);
      v5 = *(_QWORD *)(v3 + 40);
      if ( v5 )
      {
        LODWORD(v3) = *(_DWORD *)(v5 + 760);
        if ( (v3 & 0x30000) != 0 )
          LODWORD(v3) = sub_1405C9E88(1LL);
      }
    }
  }
  return v3;
}
