/*
 * XREFs of sub_140200A64 @ 0x140200A64
 * Callers:
 *     sub_14065FFA0 @ 0x14065FFA0 (sub_14065FFA0.c)
 *     sub_14096D3A4 @ 0x14096D3A4 (sub_14096D3A4.c)
 * Callees:
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall sub_140200A64(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbp
  _QWORD **v4; // rdi
  __int64 v5; // rbx
  KIRQL v6; // al
  __int64 v7; // rdx
  _QWORD *i; // rax

  v2 = *((_QWORD *)KeGetCurrentThread() + 23);
  v3 = v2 + 1664;
  v4 = (_QWORD **)(v2 + 1240);
  v5 = sub_140282AD0(v2 + 1664);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v5);
  *(_DWORD *)(v5 + 4) = 0;
  LOBYTE(v7) = v6;
  for ( i = *v4; i != a1; i = (_QWORD *)*i )
    v4 = (_QWORD **)i;
  *v4 = (_QWORD *)*i;
  return sub_14030FA80(v3, v7);
}
