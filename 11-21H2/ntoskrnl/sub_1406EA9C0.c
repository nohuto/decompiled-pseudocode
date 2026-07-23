/*
 * XREFs of sub_1406EA9C0 @ 0x1406EA9C0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406EA9C0(_QWORD *P)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  _QWORD *i; // rdi
  _QWORD *j; // rdi
  void *v6; // rcx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireFastMutexUnsafe(&stru_140CF6860);
  for ( i = qword_140D3B278; i; i = (_QWORD *)*i )
    sub_14042A5E0(P + 4, v3);
  for ( j = qword_140D3B318; j; j = (_QWORD *)*j )
    sub_14042A5E0(P + 4, P[5]);
  ExReleaseFastMutexUnsafe(&stru_140CF6860);
  sub_1402F9540((__int64)KeGetCurrentThread());
  v6 = (void *)P[5];
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x53466553u);
  ExFreePoolWithTag(P, 0);
}
