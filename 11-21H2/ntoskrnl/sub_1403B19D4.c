/*
 * XREFs of sub_1403B19D4 @ 0x1403B19D4
 * Callers:
 *     sub_1403A4CC0 @ 0x1403A4CC0 (sub_1403A4CC0.c)
 *     sub_1403B1020 @ 0x1403B1020 (sub_1403B1020.c)
 *     sub_1403B1998 @ 0x1403B1998 (sub_1403B1998.c)
 * Callees:
 *     ExInterlockedInsertTailList @ 0x140223920 (ExInterlockedInsertTailList.c)
 *     ExTryQueueWorkItem @ 0x1402EEE50 (ExTryQueueWorkItem.c)
 *     sub_14035AD70 @ 0x14035AD70 (sub_14035AD70.c)
 */

__int64 __fastcall sub_1403B19D4(__int64 a1, _LIST_ENTRY *a2)
{
  __int64 result; // rax
  __int64 v4; // r9

  result = ExTryQueueWorkItem((__int64)a2, 0x30u);
  if ( !(_BYTE)result )
  {
    ExInterlockedInsertTailList(&stru_140C23DB0, a2, &qword_140C23DA8);
    return sub_14035AD70(dword_140C23DC0, 0LL, 1LL, v4, 0);
  }
  return result;
}
