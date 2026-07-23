/*
 * XREFs of sub_14045BCA2 @ 0x14045BCA2
 * Callers:
 *     sub_1402F3AD0 @ 0x1402F3AD0 (sub_1402F3AD0.c)
 *     sub_1403737D0 @ 0x1403737D0 (sub_1403737D0.c)
 *     sub_1403CA3D0 @ 0x1403CA3D0 (sub_1403CA3D0.c)
 *     sub_14045BD30 @ 0x14045BD30 (sub_14045BD30.c)
 *     sub_14045BF60 @ 0x14045BF60 (sub_14045BF60.c)
 * Callees:
 *     sub_1402341A4 @ 0x1402341A4 (sub_1402341A4.c)
 *     sub_14027D2D8 @ 0x14027D2D8 (sub_14027D2D8.c)
 *     sub_14062B7FC @ 0x14062B7FC (sub_14062B7FC.c)
 */

__int64 __fastcall sub_14045BCA2(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 48);
  sub_1402341A4(a1);
  sub_14062B7FC(*(PEX_SPIN_LOCK *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2288LL));
  result = sub_14027D2D8(a1, v2, 0);
  if ( !(_DWORD)result )
    *a2 = 0;
  return result;
}
