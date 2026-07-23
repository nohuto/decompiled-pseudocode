/*
 * XREFs of sub_14062CA70 @ 0x14062CA70
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_1403D35C8 @ 0x1403D35C8 (sub_1403D35C8.c)
 */

__int64 sub_14062CA70()
{
  __int64 v0; // rbx

  v0 = qword_140D05008;
  if ( !*(_DWORD *)(qword_140D05008 + 4160) )
  {
    sub_1403D35C8(
      (_OWORD *)(qword_140D05008 + 4176),
      (PVOID *)(qword_140D05008 + 4216),
      (_WORD *)(qword_140D05008 + 4224),
      (_DWORD *)(qword_140D05008 + 4228),
      (_QWORD *)(qword_140D05008 + 4208),
      (_OWORD *)(qword_140D05008 + 4192));
    ExQueueWorkItem(*(PWORK_QUEUE_ITEM *)(v0 + 4168), NormalWorkQueue);
    *(_DWORD *)(v0 + 4160) = 1;
  }
  return 0LL;
}
