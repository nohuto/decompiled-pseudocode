/*
 * XREFs of HalpWdatStop @ 0x14051F7A0
 * Callers:
 *     <none>
 * Callees:
 *     WdInstrExecuteAction @ 0x14052AA2C (WdInstrExecuteAction.c)
 */

__int64 __fastcall HalpWdatStop(__int64 a1)
{
  __int64 result; // rax

  result = WdInstrExecuteAction(a1 + 48, *(unsigned int *)(a1 + 44), 11LL, 0LL);
  *(_BYTE *)(a1 + 40) = 0;
  return result;
}
