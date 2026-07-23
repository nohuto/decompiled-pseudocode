/*
 * XREFs of sub_14085D190 @ 0x14085D190
 * Callers:
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 */

void sub_14085D190()
{
  _QWORD *v0; // rbx
  __int64 v1; // rdi

  KeInitializeEvent(&stru_140C497C0, NotificationEvent, 0);
  v0 = &unk_140C025C8;
  v1 = 7LL;
  do
  {
    *(v0 - 2) = 0LL;
    *(v0 - 1) = 0LL;
    v0[1] = v0;
    *v0 = v0;
    KeInitializeEvent((PRKEVENT)(v0 - 5), NotificationEvent, 0);
    v0 += 23;
    --v1;
  }
  while ( v1 );
}
