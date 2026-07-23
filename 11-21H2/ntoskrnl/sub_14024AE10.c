/*
 * XREFs of sub_14024AE10 @ 0x14024AE10
 * Callers:
 *     sub_14024AC78 @ 0x14024AC78 (sub_14024AC78.c)
 * Callees:
 *     sub_140347550 @ 0x140347550 (sub_140347550.c)
 */

int sub_14024AE10()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  if ( *(_BYTE *)(*((_QWORD *)CurrentThread + 23) + 912LL) == 1 )
  {
    LODWORD(CurrentThread) = KeGetPcr()[109].NtTib.ExceptionList;
    if ( ((unsigned __int8)CurrentThread & 2) == 0 )
      LODWORD(CurrentThread) = sub_140347550();
  }
  return (int)CurrentThread;
}
