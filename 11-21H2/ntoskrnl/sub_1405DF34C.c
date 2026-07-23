/*
 * XREFs of sub_1405DF34C @ 0x1405DF34C
 * Callers:
 *     sub_1409A0C98 @ 0x1409A0C98 (sub_1409A0C98.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void sub_1405DF34C()
{
  unsigned int v0; // edi
  void *v1; // rbx
  unsigned __int64 v2; // rbp
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rsi
  _DWORD *Pool2; // rax
  _DWORD *v7; // r8
  __int64 *i; // r9
  unsigned __int64 v9; // kr00_8
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf
  __int128 v18; // [rsp+30h] [rbp-28h] BYREF
  __int128 v19; // [rsp+40h] [rbp-18h]

  v18 = 0LL;
  v0 = 0;
  v1 = 0LL;
  v19 = 0LL;
  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C23CE0);
  v3 = (__int64 *)qword_140C23CF0;
  if ( (__int64 *)qword_140C23CF0 == &qword_140C23CF0 )
    goto LABEL_13;
  do
  {
    v3 = (__int64 *)*v3;
    v4 = v0++;
  }
  while ( v3 != &qword_140C23CF0 );
  if ( !v0 )
  {
LABEL_13:
    v5 = 0LL;
  }
  else
  {
    v5 = 48 * v4 + 64;
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, v5, 1111641936LL);
    v1 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = 1;
      v7 = Pool2 + 4;
      Pool2[1] = v5;
      Pool2[2] = v0;
      for ( i = (__int64 *)qword_140C23CF0; i != &qword_140C23CF0; v7 += 12 )
      {
        v9 = MEMORY[0xFFFFF78000000008] - i[20];
        *((_QWORD *)v7 + 1) = i;
        *v7 = v9 / 0x2710;
        *((_QWORD *)v7 + 2) = i[18];
        v10 = i[19];
        *((_QWORD *)v7 + 3) = v10;
        if ( v10 )
        {
          v7[8] = *(_DWORD *)v10;
          if ( v10 != -8 )
          {
            v11 = *(_QWORD *)(v10 + 8);
            if ( v11 )
            {
              v12 = *(_QWORD *)(v11 + 64);
              if ( v12 )
                *((_QWORD *)v7 + 5) = *(_QWORD *)(v12 + 96);
            }
          }
        }
        i = (__int64 *)*i;
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C23CE0);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= v16;
        if ( v17 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  if ( v5 )
  {
    *(_QWORD *)&v19 = 0LL;
    *((_QWORD *)&v19 + 1) = 7LL;
    *(_QWORD *)&v18 = v1;
    *((_QWORD *)&v18 + 1) = (unsigned int)v5;
    sub_14074F950(94, (unsigned int)&v18, 32, 0, 0);
  }
  if ( v1 )
    ExFreePoolWithTag(v1, 0x42424F50u);
}
