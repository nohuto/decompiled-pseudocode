/*
 * XREFs of ExTryQueueWorkItem @ 0x1402EEE50
 * Callers:
 *     sub_140358140 @ 0x140358140 (sub_140358140.c)
 *     sub_1403B19D4 @ 0x1403B19D4 (sub_1403B19D4.c)
 * Callees:
 *     sub_1402EEE7C @ 0x1402EEE7C (sub_1402EEE7C.c)
 */

__int64 __fastcall ExTryQueueWorkItem(__int64 a1, unsigned int a2)
{
  return sub_1402EEE7C(*((_QWORD *)qword_140D06C40 + 2), a1, a2, 0LL);
}
