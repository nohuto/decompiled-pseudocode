/*
 * XREFs of sub_140392084 @ 0x140392084
 * Callers:
 *     sub_140391E54 @ 0x140391E54 (sub_140391E54.c)
 * Callees:
 *     sub_14029C6F4 @ 0x14029C6F4 (sub_14029C6F4.c)
 *     sub_14029C790 @ 0x14029C790 (sub_14029C790.c)
 */

__int64 __fastcall sub_140392084(struct _KTHREAD **a1, int a2, int a3)
{
  unsigned int v4; // ebx
  struct _KTHREAD *CurrentThread; // rcx

  v4 = 0;
  CurrentThread = *a1;
  if ( !CurrentThread )
  {
    CurrentThread = KeGetCurrentThread();
    *a1 = CurrentThread;
  }
  if ( a3 )
    sub_14029C790((__int64)CurrentThread, a2);
  else
    return (unsigned int)sub_14029C6F4((__int64)CurrentThread, a2);
  return v4;
}
