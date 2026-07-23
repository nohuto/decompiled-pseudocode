/*
 * XREFs of sub_1402440B4 @ 0x1402440B4
 * Callers:
 *     sub_14028AE58 @ 0x14028AE58 (sub_14028AE58.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402BA130 @ 0x1402BA130 (sub_1402BA130.c)
 *     sub_1402D4530 @ 0x1402D4530 (sub_1402D4530.c)
 *     sub_1402E33D0 @ 0x1402E33D0 (sub_1402E33D0.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     sub_140356F50 @ 0x140356F50 (sub_140356F50.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140244120 (KeGetEffectiveIrql.c)
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall sub_1402440B4(signed __int64 a1)
{
  signed __int64 v1; // rdx
  signed __int64 i; // rax

  _m_prefetchw(&qword_140C24F08);
  v1 = qword_140C24F08;
  *(_QWORD *)(a1 + 8) = qword_140C24F08;
  for ( i = _InterlockedCompareExchange64(&qword_140C24F08, a1, v1);
        i != v1;
        i = _InterlockedCompareExchange64(&qword_140C24F08, a1, i) )
  {
    v1 = i;
    *(_QWORD *)(a1 + 8) = i;
  }
  if ( !v1 )
  {
    if ( (unsigned __int8)KeGetEffectiveIrql() > 2u )
      sub_140345190((ULONG_PTR)&dword_140C24F40, 0);
    else
      ExQueueWorkItem(&stru_140C24F20, CriticalWorkQueue);
  }
}
