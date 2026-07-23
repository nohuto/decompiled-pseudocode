/*
 * XREFs of sub_140371E18 @ 0x140371E18
 * Callers:
 *     sub_140371C50 @ 0x140371C50 (sub_140371C50.c)
 *     sub_140371D3C @ 0x140371D3C (sub_140371D3C.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140371F30 @ 0x140371F30 (sub_140371F30.c)
 *     sub_140371FF0 @ 0x140371FF0 (sub_140371FF0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140371E18(__int64 a1, __int64 a2, unsigned int a3)
{
  volatile LONG *v3; // rbp
  unsigned int v5; // ebx
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int16 v12; // cx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v18 = 0LL;
  v3 = (volatile LONG *)(a1 + 2144);
  v5 = a3 >> 20;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 2144));
  v9 = sub_140371F30(a1, a2, v5, &v18);
  v10 = v9;
  if ( v9 )
  {
    v12 = *(_WORD *)(v9 + 42);
    if ( v12 != -1 )
    {
      *(_WORD *)(v9 + 42) = v12 + 1;
      goto LABEL_5;
    }
    goto LABEL_10;
  }
  if ( v18 )
  {
    v10 = v18;
    if ( (int)sub_140371FF0(v18, a1, a2, a3, ((int)v18 - (int)a1 - 2160) / 48) >= 0 )
    {
      ++*(_DWORD *)(a1 + 2152);
      goto LABEL_5;
    }
LABEL_10:
    v10 = 0LL;
  }
LABEL_5:
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= v16;
        if ( v17 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  if ( v10 )
    return *(unsigned __int8 *)(v10 + 44);
  else
    return 0xFFFFFFFFLL;
}
