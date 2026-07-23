/*
 * XREFs of sub_140287450 @ 0x140287450
 * Callers:
 *     sub_1406F3FDC @ 0x1406F3FDC (sub_1406F3FDC.c)
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 *     sub_14097CD04 @ 0x14097CD04 (sub_14097CD04.c)
 * Callees:
 *     sub_140217454 @ 0x140217454 (sub_140217454.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140287450(__int64 a1)
{
  volatile LONG *v1; // rsi
  KIRQL i; // di
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  int v8; // eax
  bool v9; // zf
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r9
  __int64 v12; // r8
  int v13; // eax
  __int128 v14; // [rsp+20h] [rbp-30h] BYREF
  __int128 v15; // [rsp+30h] [rbp-20h] BYREF
  char *v16; // [rsp+40h] [rbp-10h]

  v1 = (volatile LONG *)(a1 + 72);
  v16 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  for ( i = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
        (*(_DWORD *)(a1 + 56) & 4) != 0;
        i = ExAcquireSpinLockExclusive(v1) )
  {
    DWORD1(v15) = 0;
    v16 = (char *)&v15 + 8;
    DWORD2(v14) = 2;
    *((_QWORD *)&v15 + 1) = (char *)&v15 + 8;
    *(_QWORD *)&v14 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = &v14;
    LOWORD(v15) = 263;
    BYTE2(v15) = 6;
    ExReleaseSpinLockExclusiveFromDpcLevel(v1);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && i <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v7 = *((_QWORD *)CurrentPrcb + 4375);
          v8 = ~(unsigned __int16)(-1LL << (i + 1));
          v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
          *(_DWORD *)(v7 + 20) &= v8;
          if ( v9 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(i);
    sub_140217454((__int64)&v15, 0x12u);
  }
  ++*(_QWORD *)(a1 + 40);
  ++*(_QWORD *)(a1 + 48);
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v10 = KeGetCurrentIrql();
      if ( v10 <= 0xFu && i <= 0xFu && v10 >= 2u )
      {
        v11 = KeGetCurrentPrcb();
        v12 = *((_QWORD *)v11 + 4375);
        v13 = ~(unsigned __int16)(-1LL << (i + 1));
        v9 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
        *(_DWORD *)(v12 + 20) &= v13;
        if ( v9 )
          sub_140418E4C(v11);
      }
    }
  }
  result = i;
  __writecr8(i);
  return result;
}
