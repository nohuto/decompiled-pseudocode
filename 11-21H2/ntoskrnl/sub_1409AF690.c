/*
 * XREFs of sub_1409AF690 @ 0x1409AF690
 * Callers:
 *     <none>
 * Callees:
 *     sub_140257280 @ 0x140257280 (sub_140257280.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 */

LONG_PTR __fastcall sub_1409AF690(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx

  if ( *(_DWORD *)(a1 + 16) )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    sub_140257280(*(_QWORD *)a1, 0LL, *(_DWORD *)(a1 + 16));
    sub_1402F9540((__int64)CurrentThread);
  }
  return ObfDereferenceObjectWithTag(*(PVOID *)a1, 0x63507350u);
}
