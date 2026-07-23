/*
 * XREFs of sub_140542F50 @ 0x140542F50
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

struct _KTHREAD *__fastcall sub_140542F50(_QWORD *P)
{
  struct _KTHREAD *result; // rax

  *((_QWORD *)KeGetCurrentThread() + 162) = 1LL;
  sub_14042A5E0(P[5], P[6]);
  if ( P == (_QWORD *)&unk_140C48A40 )
    KeSetEvent(&stru_140C48A20, 0, 0);
  else
    ExFreePoolWithTag(P, 0);
  result = KeGetCurrentThread();
  *((_QWORD *)result + 162) = 0LL;
  return result;
}
