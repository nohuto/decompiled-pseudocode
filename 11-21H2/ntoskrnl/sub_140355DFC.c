/*
 * XREFs of sub_140355DFC @ 0x140355DFC
 * Callers:
 *     sub_140356454 @ 0x140356454 (sub_140356454.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_1403563F8 @ 0x1403563F8 (sub_1403563F8.c)
 *     sub_1403565F8 @ 0x1403565F8 (sub_1403565F8.c)
 *     sub_14035666C @ 0x14035666C (sub_14035666C.c)
 *     sub_1403567F8 @ 0x1403567F8 (sub_1403567F8.c)
 *     sub_140356BCC @ 0x140356BCC (sub_140356BCC.c)
 */

char __fastcall sub_140355DFC(__int64 a1, __int64 a2)
{
  char v4; // di
  KIRQL v5; // al
  __int64 v6; // r8
  __int64 v7; // r9
  bool v8; // zf
  KIRQL v9; // r15
  unsigned int v10; // r14d

  v4 = 0;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  v8 = (*(_BYTE *)(a1 + 24) & 1) == 0;
  v9 = v5;
  *(_BYTE *)(a1 + 125) = 1;
  if ( v8 && !*(_DWORD *)(a1 + 140) && *(_BYTE *)(a1 + 136) && !**(_DWORD **)(a1 + 104) && !**(_DWORD **)(a1 + 112) )
  {
    v10 = *(_DWORD *)(a1 + 120);
    sub_140356BCC(a1, 0LL, 4LL, 0LL);
    sub_1403567F8(a1, 0LL, 1LL);
    if ( a2 && **(_DWORD **)(a1 + 104) == 2 )
      v4 = sub_1403563F8(a1, 0, (int)a1 + 72, 4, a1 + 120, a2);
    else
      sub_14035666C(v10, *(unsigned int *)(a1 + 120));
  }
  LOBYTE(v7) = v9;
  LOBYTE(v6) = 1;
  sub_1403565F8(a1, 0LL, v6, v7);
  return v4;
}
