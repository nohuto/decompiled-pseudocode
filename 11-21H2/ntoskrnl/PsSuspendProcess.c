/*
 * XREFs of PsSuspendProcess @ 0x1409B2EF0
 * Callers:
 *     sub_1409B1740 @ 0x1409B1740 (sub_1409B1740.c)
 *     sub_1409B2E50 @ 0x1409B2E50 (sub_1409B2E50.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_1406E21F0 @ 0x1406E21F0 (sub_1406E21F0.c)
 *     sub_1407E7750 @ 0x1407E7750 (sub_1407E7750.c)
 *     sub_1409E6524 @ 0x1409E6524 (sub_1409E6524.c)
 */

__int64 __fastcall PsSuspendProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _EX_RUNDOWN_REF *v3; // r14
  _QWORD *v4; // rax
  unsigned int v5; // ebx
  _QWORD *v6; // rdi

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v3 = (struct _EX_RUNDOWN_REF *)(a1 + 1112);
  if ( sub_140347810((struct _EX_RUNDOWN_REF *)(a1 + 1112)) == 1 )
  {
    v4 = sub_1407E7750(a1, 0LL);
    v5 = 0;
    while ( 1 )
    {
      v6 = v4;
      if ( !v4 )
        break;
      if ( (*((_DWORD *)v4 + 29) & 0x200000) == 0 )
        sub_1406E21F0((__int64)v4, 0LL);
      v4 = sub_1407E7750(a1, v6);
    }
    sub_1402AD030(v3);
  }
  else
  {
    v5 = -1073741558;
  }
  if ( (*(_DWORD *)(a1 + 2172) & 0x80000) != 0 )
    sub_1409E6524(v5, CurrentThread, a1, 0LL);
  sub_1402F9540((__int64)CurrentThread);
  return v5;
}
