/*
 * XREFs of sub_1409ABBA8 @ 0x1409ABBA8
 * Callers:
 *     sub_1406CA8B0 @ 0x1406CA8B0 (sub_1406CA8B0.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     sub_1402237B8 @ 0x1402237B8 (sub_1402237B8.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 */

void __fastcall sub_1409ABBA8(__int64 a1)
{
  void *v2; // rcx
  char *v3; // rax

  if ( (unsigned int)sub_1402237B8(a1) != 3 )
    __int2c();
  ObfReferenceObject(v2);
  v3 = (char *)sub_140204738(a1);
  *((_QWORD *)v3 + 167) = 0LL;
  *((_QWORD *)v3 + 169) = sub_1409ABC00;
  *((_QWORD *)v3 + 170) = a1;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(v3 + 1336), DelayedWorkQueue);
}
