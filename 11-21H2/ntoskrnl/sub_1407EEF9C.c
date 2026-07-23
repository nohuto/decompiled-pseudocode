/*
 * XREFs of sub_1407EEF9C @ 0x1407EEF9C
 * Callers:
 *     sub_1407EEF7C @ 0x1407EEF7C (sub_1407EEF7C.c)
 *     sub_140864570 @ 0x140864570 (sub_140864570.c)
 *     sub_14099A120 @ 0x14099A120 (sub_14099A120.c)
 *     sub_140B03434 @ 0x140B03434 (sub_140B03434.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall sub_1407EEF9C(int a1)
{
  _m_prefetchw(&dword_140CE2140);
  if ( _InterlockedOr(&dword_140CE2140, a1 | 0x80000000) >= 0 )
    ExQueueWorkItem(&stru_140CF6020, DelayedWorkQueue);
}
