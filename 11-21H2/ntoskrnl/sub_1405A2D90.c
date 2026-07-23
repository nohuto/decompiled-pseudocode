/*
 * XREFs of sub_1405A2D90 @ 0x1405A2D90
 * Callers:
 *     sub_140976DFC @ 0x140976DFC (sub_140976DFC.c)
 * Callees:
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_14028E8E0 @ 0x14028E8E0 (sub_14028E8E0.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall sub_1405A2D90(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rbp
  volatile LONG *v6; // rbx
  KIRQL v7; // al
  __int64 v8; // rdi
  _QWORD *v9; // rcx

  CurrentThread = KeGetCurrentThread();
  v5 = *((_QWORD *)CurrentThread + 23);
  --*((_WORD *)CurrentThread + 243);
  v6 = (volatile LONG *)sub_140282AD0(v5 + 1664);
  v7 = ExAcquireSpinLockExclusive(v6);
  *((_DWORD *)v6 + 1) = 0;
  v8 = a1 + 24;
  v9 = *(_QWORD **)(v8 + 8);
  if ( *v9 != v8 )
    __fastfail(3u);
  a2[1] = v9;
  *a2 = v8;
  *v9 = a2;
  *(_QWORD *)(v8 + 8) = a2;
  sub_14030FA80(v5 + 1664, v7);
  return sub_14028E8E0(a2[2], a2[3], 0LL, 0);
}
