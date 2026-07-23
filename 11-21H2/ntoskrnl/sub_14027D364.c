/*
 * XREFs of sub_14027D364 @ 0x14027D364
 * Callers:
 *     sub_14024076C @ 0x14024076C (sub_14024076C.c)
 *     sub_14027A1F0 @ 0x14027A1F0 (sub_14027A1F0.c)
 *     sub_14027FEF8 @ 0x14027FEF8 (sub_14027FEF8.c)
 *     sub_140334C40 @ 0x140334C40 (sub_140334C40.c)
 *     sub_1405A7608 @ 0x1405A7608 (sub_1405A7608.c)
 *     sub_1405C3C6C @ 0x1405C3C6C (sub_1405C3C6C.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_14027D6E0 @ 0x14027D6E0 (sub_14027D6E0.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 */

char __fastcall sub_14027D364(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  char v6; // r14
  unsigned __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  char v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = 0LL;
  if ( !a2 )
    goto LABEL_5;
  v6 = sub_1402CF4F0(*a1);
  v7 = sub_14027D6E0(v2, a2 << 25 >> 16, &v11);
  v3 = v7;
  if ( v7 != a2 )
  {
    sub_14020D8D0(v2, v7);
    LOBYTE(v9) = v6;
    sub_1402B0CE0(v2, v9);
    v3 = 0LL;
    goto LABEL_5;
  }
  if ( !v7 )
  {
LABEL_5:
    *((_BYTE *)a1 + 13) |= 1u;
    v8 = sub_140282AD0(v2);
    LOBYTE(v7) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v8);
    *(_DWORD *)(v8 + 4) = 0;
  }
  a1[2] = v3;
  return v7;
}
