/*
 * XREFs of sub_1406913F4 @ 0x1406913F4
 * Callers:
 *     sub_140690FEC @ 0x140690FEC (sub_140690FEC.c)
 *     sub_1407F6200 @ 0x1407F6200 (sub_1407F6200.c)
 * Callees:
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 */

char __fastcall sub_1406913F4(__int64 a1)
{
  _QWORD *v1; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rax

  v1 = (_QWORD *)(a1 + 40);
  if ( *v1 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  *v1 = KeGetCurrentThread();
  v3 = sub_140347C10((__int64)v1, 0LL);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  return 1;
}
