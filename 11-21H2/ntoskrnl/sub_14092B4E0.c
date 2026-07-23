/*
 * XREFs of sub_14092B4E0 @ 0x14092B4E0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_14092B3A8 @ 0x14092B3A8 (sub_14092B3A8.c)
 *     sub_14092B55C @ 0x14092B55C (sub_14092B55C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14092B4E0(__int64 a1, __int64 a2, __int64 a3, void **a4, volatile signed __int32 **a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  void *v6; // rcx
  volatile signed __int32 *v7; // rbx

  CurrentThread = KeGetCurrentThread();
  v6 = *a4;
  v7 = *a5;
  if ( _InterlockedCompareExchange(*a5, 2, 0) )
  {
    ExFreePoolWithTag(v6, 0x704E534Bu);
  }
  else
  {
    if ( (int)sub_14092B55C(*((_QWORD *)v7 + 1), CurrentThread, *((_QWORD *)v7 + 3)) >= 0 )
      sub_14092B3A8(*((_QWORD *)v7 + 1), (__int64)CurrentThread, *((_DWORD **)v7 + 3));
    KeSetEvent((PRKEVENT)(v7 + 8), 0, 0);
  }
}
