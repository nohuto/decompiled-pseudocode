/*
 * XREFs of sub_140A8AAA4 @ 0x140A8AAA4
 * Callers:
 *     sub_140A80D10 @ 0x140A80D10 (sub_140A80D10.c)
 *     sub_140A8A9AC @ 0x140A8A9AC (sub_140A8A9AC.c)
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 */

PSLIST_ENTRY sub_140A8AAA4()
{
  PSLIST_ENTRY result; // rax
  unsigned __int8 CurrentIrql; // cl

  result = sub_140202234((__int64)&unk_140D59140);
  if ( result )
  {
    CurrentIrql = KeGetCurrentIrql();
    LOBYTE(result->Next) = CurrentIrql;
    HIDWORD(result->Next) = *((_DWORD *)KeGetCurrentThread() + 121);
  }
  return result;
}
