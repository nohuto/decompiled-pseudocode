/*
 * XREFs of sub_1C0014F8C @ 0x1C0014F8C
 * Callers:
 *     sub_1C0014EE0 @ 0x1C0014EE0 (sub_1C0014EE0.c)
 *     sub_1C0065A40 @ 0x1C0065A40 (sub_1C0065A40.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall sub_1C0014F8C(union _SLIST_HEADER *a1, __int64 a2)
{
  PSLIST_ENTRY result; // rax

  result = (PSLIST_ENTRY)(unsigned int)_InterlockedCompareExchange(
                                         (volatile signed __int32 *)(a2 + 16),
                                         134684677,
                                         134684676);
  if ( (_DWORD)result != 134684676 )
  {
    *(_DWORD *)(a2 + 16) = 134684675;
    return ExpInterlockedPushEntrySList(a1 + 5, (PSLIST_ENTRY)a2);
  }
  return result;
}
