/*
 * XREFs of sub_14074DA90 @ 0x14074DA90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14074DB0C @ 0x14074DB0C (sub_14074DB0C.c)
 *     sub_14074E73C @ 0x14074E73C (sub_14074E73C.c)
 */

char __fastcall sub_14074DA90(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  if ( a3 == 1 )
  {
    if ( (*(_DWORD *)(a2 + 256) & 0x100000) != 0 )
      goto LABEL_6;
    v5 = 0LL;
    if ( (*(_QWORD *)(a2 + 24) & 1) == 0 )
      v5 = *(_QWORD *)(a2 + 24);
    if ( v5 == a1 )
    {
LABEL_6:
      sub_14074DB0C(a2, a1);
      if ( (*(_DWORD *)(a2 + 256) & 0x1000) == 0 )
        sub_14074E73C(a2);
    }
  }
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
