/*
 * XREFs of sub_140997E90 @ 0x140997E90
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x140232770 (ExNotifyCallback.c)
 */

struct _KTHREAD *sub_140997E90()
{
  struct _KTHREAD *result; // rax

  ExNotifyCallback(qword_140C158D0, (PVOID)1, (PVOID)(dword_140C232CC == 0));
  result = KeGetCurrentThread();
  if ( *((_DWORD *)result + 121) )
    __fastfail(0x20u);
  return result;
}
