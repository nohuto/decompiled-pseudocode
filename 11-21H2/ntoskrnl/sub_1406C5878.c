/*
 * XREFs of sub_1406C5878 @ 0x1406C5878
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x1402F1090 (RtlAddAtomToAtomTableEx.c)
 * Callees:
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1407A1AC0 @ 0x1407A1AC0 (sub_1407A1AC0.c)
 *     sub_1407A1CE8 @ 0x1407A1CE8 (sub_1407A1CE8.c)
 *     sub_1407A2B78 @ 0x1407A2B78 (sub_1407A2B78.c)
 */

char __fastcall sub_1406C5878(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned int v6; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rax

  v4 = sub_1407A1CE8(*(_QWORD *)(a1 + 16), a2, 0, 0, 0LL);
  v5 = v4;
  if ( v4 )
  {
    v6 = (unsigned int)v4 >> 2;
    if ( v6 <= 0xFFFF && v6 + 49152 >= v6 && v6 + 49152 <= 0xFFFF )
    {
      *(_WORD *)(a2 + 8) = v6;
      *(_WORD *)(a2 + 10) = v6 - 0x4000;
      return 1;
    }
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v9 = sub_1407A1AC0(*(_QWORD *)(a1 + 16), v5);
    sub_1407A2B78(*(_QWORD *)(a1 + 16), v5, v9);
    sub_1402F9540((__int64)KeGetCurrentThread());
  }
  return 0;
}
