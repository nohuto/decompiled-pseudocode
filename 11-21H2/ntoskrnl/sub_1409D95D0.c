/*
 * XREFs of sub_1409D95D0 @ 0x1409D95D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1409D9FC0 @ 0x1409D9FC0 (sub_1409D9FC0.c)
 *     sub_1409DA014 @ 0x1409DA014 (sub_1409DA014.c)
 */

struct _KTHREAD *sub_1409D95D0()
{
  struct _KTHREAD *result; // rax
  __int64 v1; // rcx
  void *v2; // rax

  result = KeGetCurrentThread();
  v1 = *(_QWORD *)(*((_QWORD *)result + 23) + 2288LL);
  if ( v1 )
  {
    v2 = (void *)sub_1409D9FC0(v1);
    return (struct _KTHREAD *)sub_1409DA014(v2);
  }
  else
  {
    __int2c();
  }
  return result;
}
