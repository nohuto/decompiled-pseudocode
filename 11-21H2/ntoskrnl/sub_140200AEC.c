/*
 * XREFs of sub_140200AEC @ 0x140200AEC
 * Callers:
 *     sub_14065FFA0 @ 0x14065FFA0 (sub_14065FFA0.c)
 *     sub_14096D3A4 @ 0x14096D3A4 (sub_14096D3A4.c)
 * Callees:
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     sub_14030FE40 @ 0x14030FE40 (sub_14030FE40.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall sub_140200AEC(int a1, int a2, _QWORD *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rbx
  KIRQL v8; // al
  __int64 v9; // rdx
  _OWORD v11[3]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v12; // [rsp+60h] [rbp-28h]

  memset(v11, 0, sizeof(v11));
  v12 = 0LL;
  v6 = *((_QWORD *)KeGetCurrentThread() + 23);
  v7 = sub_140282AD0(v6 + 1664);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v7);
  *(_DWORD *)(v7 + 4) = 0;
  v9 = *(_QWORD *)(v6 + 1240);
  *a3 = v9;
  LOBYTE(v9) = v8;
  *(_QWORD *)(v6 + 1240) = a3;
  sub_14030FA80(v6 + 1664, v9);
  return sub_14030FE40(0, a1, a2, 0, (__int64)v11);
}
