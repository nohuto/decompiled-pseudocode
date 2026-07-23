/*
 * XREFs of IoTryQueueWorkItem @ 0x140255440
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402EEE7C @ 0x1402EEE7C (sub_1402EEE7C.c)
 *     sub_1403467F0 @ 0x1403467F0 (sub_1403467F0.c)
 */

char __fastcall IoTryQueueWorkItem(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // rax
  char v7; // bl
  void *v9; // rcx

  v6 = sub_1403467F0(a1, a2, a4);
  v7 = sub_1402EEE7C(*((_QWORD *)qword_140D06C40 + 2), v6, a3, 1LL);
  if ( !v7 )
  {
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 40), 0x746C6644u);
    v9 = *(void **)(a1 + 56);
    if ( v9 )
    {
      ObfDereferenceObjectWithTag(v9, 0x746C6644u);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
  }
  return v7;
}
