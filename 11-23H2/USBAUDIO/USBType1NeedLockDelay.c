/*
 * XREFs of USBType1NeedLockDelay @ 0x1C00397C4
 * Callers:
 *     USBType1StateChangePin @ 0x1C0004AB0 (USBType1StateChangePin.c)
 *     USBType1RenderCreatePin @ 0x1C0039350 (USBType1RenderCreatePin.c)
 * Callees:
 *     <none>
 */

char __fastcall USBType1NeedLockDelay(__int64 a1)
{
  __int64 v1; // rcx
  char result; // al

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 160LL);
  result = 0;
  if ( *(_BYTE *)(v1 + 4) )
  {
    if ( *(_WORD *)(v1 + 5) )
      return 1;
  }
  return result;
}
