/*
 * XREFs of sub_1406D9780 @ 0x1406D9780
 * Callers:
 *     <none>
 * Callees:
 *     sub_14024BA7C @ 0x14024BA7C (sub_14024BA7C.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 */

void __fastcall sub_1406D9780(_QWORD *a1)
{
  _QWORD *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  struct _KTHREAD *CurrentThread; // rax
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v6, 0);
  v2 = a1 + 37;
  if ( (*v2 & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    sub_14024BA7C((ULONG_PTR)v2);
    sub_1402F9540((__int64)KeGetCurrentThread());
  }
  v3 = (void *)a1[39];
  if ( v3 )
    ObDereferenceObjectDeferDelete(v3);
  v4 = (void *)a1[41];
  if ( v4 )
    ObDereferenceObjectDeferDelete(v4);
}
