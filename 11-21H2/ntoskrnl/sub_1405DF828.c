/*
 * XREFs of sub_1405DF828 @ 0x1405DF828
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

void sub_1405DF828()
{
  KIRQL v0; // al
  __int64 v1; // rdx
  int v2; // esi
  unsigned __int64 v3; // rbp
  void *v4; // rbx
  int v5; // ecx
  bool v6; // zf
  __int64 v7; // rdi
  _DWORD *Pool2; // rax
  _DWORD *v9; // r9
  __int64 i; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  int v14; // eax
  __int128 v15; // [rsp+30h] [rbp-28h] BYREF
  __int128 v16; // [rsp+40h] [rbp-18h]

  v15 = 0LL;
  v16 = 0LL;
  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140C1F590);
  v1 = qword_140C1F5A0;
  v2 = 0;
  v3 = v0;
  v4 = 0LL;
  if ( (__int64 *)qword_140C1F5A0 == &qword_140C1F5A0 )
    goto LABEL_13;
  do
  {
    v5 = v2++;
    v6 = *(_BYTE *)(v1 + 216) == 0;
    v1 = *(_QWORD *)v1;
    if ( v6 )
      v2 = v5;
  }
  while ( (__int64 *)v1 != &qword_140C1F5A0 );
  if ( !v2 )
  {
LABEL_13:
    v7 = 0LL;
  }
  else
  {
    v7 = 80LL * (unsigned int)(v2 - 1) + 96;
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, v7, 1111641936LL);
    v4 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = 1;
      v9 = Pool2 + 4;
      Pool2[1] = v7;
      Pool2[2] = v2;
      for ( i = qword_140C1F5A0; (__int64 *)i != &qword_140C1F5A0; i = *(_QWORD *)i )
      {
        if ( *(_BYTE *)(i + 216) )
        {
          *v9 = *(_DWORD *)(i + 16);
          *((_QWORD *)v9 + 9) = *(_QWORD *)(i + 304);
          v9[1] = (MEMORY[0xFFFFF78000000008] - *(_QWORD *)(i + 296)) / 0x2710uLL;
          v9[2] = *(_DWORD *)(i + 224);
          v9[3] = *(_DWORD *)(i + 232);
          *((_QWORD *)v9 + 2) = *(_QWORD *)(i + 240);
          *((_QWORD *)v9 + 3) = *(_QWORD *)(i + 248);
          *((_QWORD *)v9 + 4) = *(_QWORD *)(i + 256);
          *((_QWORD *)v9 + 5) = *(_QWORD *)(i + 264);
          *((_QWORD *)v9 + 8) = i + 224;
          *((_QWORD *)v9 + 6) = *(_QWORD *)(i + 280);
          *((_QWORD *)v9 + 7) = *(_QWORD *)(i + 288);
          v9 += 20;
        }
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C1F590);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = *((_QWORD *)CurrentPrcb + 4375);
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v6 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
        *(_DWORD *)(v13 + 20) &= v14;
        if ( v6 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  if ( v7 )
  {
    *(_QWORD *)&v16 = 0LL;
    *((_QWORD *)&v16 + 1) = 8LL;
    *(_QWORD *)&v15 = v4;
    *((_QWORD *)&v15 + 1) = (unsigned int)v7;
    sub_14074F950(94, (unsigned int)&v15, 32, 0, 0);
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x42424F50u);
}
