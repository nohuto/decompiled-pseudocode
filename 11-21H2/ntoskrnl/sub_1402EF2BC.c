/*
 * XREFs of sub_1402EF2BC @ 0x1402EF2BC
 * Callers:
 *     sub_1402EEE7C @ 0x1402EEE7C (sub_1402EEE7C.c)
 *     sub_1402EF254 @ 0x1402EF254 (sub_1402EF254.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140346260 @ 0x140346260 (sub_140346260.c)
 */

LONG __fastcall sub_1402EF2BC(__int64 a1, __int64 a2, __int64 a3)
{
  LONG result; // eax
  unsigned __int16 *v4; // r9
  __int64 v5; // r10

  result = sub_140346260(a3, *(unsigned int *)(a3 + 720), a3, a2);
  if ( (_BYTE)result )
    return KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 8LL * *v4) + 16LL), 0, 0);
  return result;
}
