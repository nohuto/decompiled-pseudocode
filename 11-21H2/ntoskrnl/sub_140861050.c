/*
 * XREFs of sub_140861050 @ 0x140861050
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x140232770 (ExNotifyCallback.c)
 */

struct _KTHREAD *__fastcall sub_140861050(PVOID Argument1)
{
  struct _KTHREAD *result; // rax

  ExNotifyCallback(qword_140C158D0, (PVOID)(unsigned int)Argument1, 0LL);
  result = KeGetCurrentThread();
  if ( *((_DWORD *)result + 121) )
    __fastfail(0x20u);
  return result;
}
