/*
 * XREFs of sub_14062B1A8 @ 0x14062B1A8
 * Callers:
 *     sub_1409D8CF8 @ 0x1409D8CF8 (sub_1409D8CF8.c)
 *     sub_1409DA4D0 @ 0x1409DA4D0 (sub_1409DA4D0.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14045F804 @ 0x14045F804 (sub_14045F804.c)
 *     sub_140629910 @ 0x140629910 (sub_140629910.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14062B1A8(volatile LONG *SpinLock, _QWORD *a2, unsigned __int64 a3)
{
  int v6; // ebx
  unsigned __int64 v7; // r13
  PVOID PoolWithTag; // r15
  _QWORD *v9; // r14
  unsigned __int8 v10; // bl
  unsigned __int64 v11; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // eax
  bool v16; // zf
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r10
  __int64 v19; // r8
  int v20; // eax
  __int64 v22; // [rsp+30h] [rbp-40h]
  __int64 v23; // [rsp+38h] [rbp-38h]
  __int128 v24; // [rsp+40h] [rbp-30h] BYREF
  __int128 v25; // [rsp+50h] [rbp-20h] BYREF
  __int64 v26; // [rsp+60h] [rbp-10h]
  unsigned __int64 v27; // [rsp+B0h] [rbp+40h] BYREF
  ULONG_PTR v28; // [rsp+C8h] [rbp+58h]

  v22 = *((_QWORD *)SpinLock + 9);
  v24 = 0LL;
  if ( v22 == -1 || (v28 = sub_1403614FC((struct _EX_RUNDOWN_REF *)qword_140C18EA8)) == 0 )
  {
    return (unsigned int)-1073741667;
  }
  else
  {
    v27 = 0LL;
    v7 = a3;
    if ( a3 >= 0x2000 )
      v7 = 0x2000LL;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * v7, 0x72506D56u);
    if ( PoolWithTag )
    {
      v9 = &a2[2 * a3];
      v26 = 0LL;
      v25 = 0LL;
      v10 = sub_14045F804(SpinLock);
      while ( a2 < v9 )
      {
        v11 = ((*a2 + (((*a2 & 0xFFFLL) + a2[1] + 4095LL) & 0xFFFFFFFFFFFFF000uLL)) >> 12) - (*a2 >> 12);
        *(_QWORD *)&v24 = *a2 >> 12;
        *((_QWORD *)&v24 + 1) = v11;
        while ( *((_QWORD *)&v24 + 1) )
        {
          sub_140629910(
            (__int64)SpinLock,
            (unsigned __int64 *)&v24,
            (__int64)PoolWithTag,
            (__int64 *)&v27,
            v7,
            (__int64 *)&v25);
          if ( v27 >= v7 )
          {
            v23 = *((_QWORD *)SpinLock + 5);
            ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v14 = *((_QWORD *)CurrentPrcb + 4375);
                  v15 = ~(unsigned __int16)(-1LL << (v10 + 1));
                  v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
                  *(_DWORD *)(v14 + 20) &= v15;
                  if ( v16 )
                    sub_140418E4C((__int64)CurrentPrcb);
                }
              }
            }
            __writecr8(v10);
            v6 = sub_14042A5E0(PoolWithTag, v27);
            if ( v6 < 0 )
              goto LABEL_34;
            v27 = 0LL;
            v10 = sub_14045F804(SpinLock);
            if ( v23 != *((_QWORD *)SpinLock + 5) )
            {
              v25 = 0LL;
              v26 = 0LL;
            }
          }
        }
        a2 += 2;
      }
      ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v17 = KeGetCurrentIrql();
          if ( v17 <= 0xFu && v10 <= 0xFu && v17 >= 2u )
          {
            v18 = KeGetCurrentPrcb();
            v19 = *((_QWORD *)v18 + 4375);
            v20 = ~(unsigned __int16)(-1LL << (v10 + 1));
            v16 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
            *(_DWORD *)(v19 + 20) &= v20;
            if ( v16 )
              sub_140418E4C((__int64)v18);
          }
        }
      }
      __writecr8(v10);
      if ( !v27 || (v6 = sub_14042A5E0(PoolWithTag, v27), v6 >= 0) )
        v6 = 0;
    }
    else
    {
      v6 = -1073741670;
    }
LABEL_34:
    sub_1402AD030((struct _EX_RUNDOWN_REF *)(qword_140C18EA8 + 64));
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return (unsigned int)v6;
}
