/*
 * XREFs of sub_1405B06E0 @ 0x1405B06E0
 * Callers:
 *     sub_14032C1B0 @ 0x14032C1B0 (sub_14032C1B0.c)
 *     sub_1405C2A4C @ 0x1405C2A4C (sub_1405C2A4C.c)
 * Callees:
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_14030B860 @ 0x14030B860 (sub_14030B860.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

KIRQL __fastcall sub_1405B06E0(__int64 a1, __int64 a2, int a3)
{
  void *v4; // rsi
  __int64 v5; // r14
  PVOID v6; // rax
  volatile LONG *v7; // rbx
  KIRQL v8; // al
  KIRQL v9; // r15
  volatile LONG *v10; // rbx

  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
  {
    v10 = (volatile LONG *)sub_140282AD0(a1);
    v9 = ExAcquireSpinLockExclusive(v10);
    goto LABEL_10;
  }
  v4 = 0LL;
  v5 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL);
  if ( !*(_QWORD *)(v5 + 592) )
  {
    v6 = sub_14030B860(64LL, 0x800uLL, 0x6C53694Du, a3 | 0x80000000);
    v4 = v6;
    if ( v6 )
      memset(v6, 0, 0x800uLL);
  }
  v7 = (volatile LONG *)sub_140282AD0(a1);
  v8 = ExAcquireSpinLockExclusive(v7);
  *((_DWORD *)v7 + 1) = 0;
  v9 = v8;
  if ( v4 )
  {
    if ( !*(_QWORD *)(v5 + 592) )
    {
      *(_QWORD *)(v5 + 592) = v4;
      return v9;
    }
    sub_14030FA80(a1, v8);
    ExFreePoolWithTag(v4, 0);
    v10 = (volatile LONG *)sub_140282AD0(a1);
    ExAcquireSpinLockExclusive(v10);
LABEL_10:
    *((_DWORD *)v10 + 1) = 0;
  }
  return v9;
}
