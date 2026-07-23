/*
 * XREFs of sub_140A6CA38 @ 0x140A6CA38
 * Callers:
 *     sub_140997674 @ 0x140997674 (sub_140997674.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_14036AAF4 @ 0x14036AAF4 (sub_14036AAF4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14056DF08 @ 0x14056DF08 (sub_14056DF08.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

bool __fastcall sub_140A6CA38(
        unsigned __int64 a1,
        unsigned __int64 a2,
        char a3,
        unsigned __int64 *a4,
        unsigned __int64 **a5)
{
  __int64 v6; // r12
  unsigned __int64 *v7; // r14
  __int64 v8; // rbx
  __int64 *v9; // r13
  __int64 v11; // rbp
  unsigned __int64 v12; // rdi
  KIRQL v13; // al
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  __int64 v17; // rax
  unsigned __int8 CurrentIrql; // al
  KIRQL v19; // bp
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v21; // r9
  int v22; // eax
  bool v23; // zf
  unsigned __int64 *PoolWithTag; // rax
  SIZE_T NumberOfBytes; // [rsp+20h] [rbp-68h] BYREF
  __int64 v27; // [rsp+28h] [rbp-60h]
  PKSPIN_LOCK SpinLock; // [rsp+30h] [rbp-58h]
  KIRQL v29; // [rsp+98h] [rbp+10h]

  NumberOfBytes = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = MEMORY[0xFFFFF78000000014];
  v9 = (__int64 *)qword_140C11730;
  v27 = MEMORY[0xFFFFF78000000008];
  if ( (__int64 *)qword_140C11730 == &qword_140C11730 )
    goto LABEL_27;
  do
  {
    v11 = (__int64)(v9 - 33);
    v9 = (__int64 *)*v9;
    v12 = 0LL;
    SpinLock = (PKSPIN_LOCK)(v11 + 64);
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 64));
    v16 = *(_QWORD *)(v11 + 256);
    v29 = v13;
    if ( a3 && (*(_BYTE *)(v11 + 304) & 4) == 0 )
      goto LABEL_12;
    if ( (*(_BYTE *)(v11 + 304) & 2) != 0 )
    {
      v17 = *(_QWORD *)(v11 + 312);
      if ( *(_BYTE *)(v11 + 248) == 1 )
      {
        if ( v17 )
          v12 = v17 - v8 + v27;
        goto LABEL_10;
      }
    }
    else
    {
      v17 = sub_14056DF08(v11, 0LL, v14, v15);
    }
    v12 = v17;
LABEL_10:
    if ( v12 < a1 )
      v12 = 0LL;
LABEL_12:
    KeReleaseSpinLockFromDpcLevel(SpinLock);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v19 = v29;
      if ( v29 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v21 = *((_QWORD *)CurrentPrcb + 4375);
        v22 = ~(unsigned __int16)(-1LL << (v29 + 1));
        v23 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
        *(_DWORD *)(v21 + 20) &= v22;
        if ( v23 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    else
    {
      v19 = v29;
    }
    __writecr8(v19);
    if ( v12 - 1 >= a2 - 1 )
    {
      v12 = a2;
      v16 = v6;
    }
    v6 = v16;
    a2 = v12;
  }
  while ( v9 != &qword_140C11730 );
  v7 = 0LL;
  if ( v16 )
  {
    sub_14036AAF4(v16, 0LL, &NumberOfBytes);
    PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x53577254u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( (int)sub_14036AAF4(v16, PoolWithTag, &NumberOfBytes) < 0 )
      {
        ExFreePoolWithTag(v7, 0x53577254u);
        v7 = 0LL;
      }
    }
  }
LABEL_27:
  *a4 = a2;
  *a5 = v7;
  return v6 != 0;
}
