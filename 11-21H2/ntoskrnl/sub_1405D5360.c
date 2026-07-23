/*
 * XREFs of sub_1405D5360 @ 0x1405D5360
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140354B48 @ 0x140354B48 (sub_140354B48.c)
 *     sub_140354BBC @ 0x140354BBC (sub_140354BBC.c)
 *     sub_1403565AC @ 0x1403565AC (sub_1403565AC.c)
 *     sub_14035666C @ 0x14035666C (sub_14035666C.c)
 *     sub_1403567F8 @ 0x1403567F8 (sub_1403567F8.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405D4A94 @ 0x1405D4A94 (sub_1405D4A94.c)
 */

void sub_1405D5360()
{
  __int64 v0; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 i; // rdi
  unsigned __int64 v3; // rbp
  unsigned __int8 v4; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v6; // r9
  int v7; // eax
  bool v8; // zf
  unsigned int v9; // r15d
  unsigned int j; // esi
  __int64 v11; // r10
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned int v14; // eax
  unsigned int *v15; // r10
  unsigned int v16; // eax
  unsigned __int8 CurrentIrql; // al
  __int64 v18; // r9
  int v19; // eax

  v0 = MEMORY[0xFFFFF78000000008];
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C20A30, 0LL);
  for ( i = qword_140C20A40; (__int64 *)i != &qword_140C20A40; i = *(_QWORD *)i )
  {
    if ( (*(_BYTE *)(i + 16) & 1) != 0 )
      continue;
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(i + 64));
    if ( *(_BYTE *)(i + 136) )
    {
      v9 = sub_1403565AC((unsigned int *)i, 0LL, 3);
      for ( j = 0; j < *(_DWORD *)(i + 180); ++j )
      {
        v11 = 208LL * j + i + 192;
        if ( *(_DWORD *)(v11 + 176) != *(_DWORD *)(v11 + 188) - 1
          && !**(_DWORD **)(v11 + 72)
          && !**(_DWORD **)(v11 + 80) )
        {
          v12 = *(_QWORD *)(v11 + 136);
          if ( v0 > v12 )
          {
            v13 = v0 - v12;
            if ( (unsigned __int64)(v0 - v12) > *(_QWORD *)(v11 + 120) )
            {
              *(_QWORD *)(v11 + 120) = v13;
              v14 = sub_140354BBC(v11, v13);
              if ( v15[40] != v14 )
              {
                v15[40] = v14;
                sub_140354B48(i, v15, 1);
              }
            }
          }
        }
      }
      sub_1403567F8(i, 0LL, 3);
      v16 = sub_1403565AC((unsigned int *)i, 0LL, 3);
      sub_14035666C(v9, v16);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(i + 64));
      if ( !dword_140D06B08 )
        goto LABEL_27;
      if ( (dword_140D06B08 & 1) == 0 )
        goto LABEL_27;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql > 0xFu )
        goto LABEL_27;
      if ( (unsigned __int8)v3 > 0xFu )
        goto LABEL_27;
      if ( CurrentIrql < 2u )
        goto LABEL_27;
      CurrentPrcb = KeGetCurrentPrcb();
      v18 = *((_QWORD *)CurrentPrcb + 4375);
      v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v8 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
      *(_DWORD *)(v18 + 20) &= v19;
      if ( !v8 )
        goto LABEL_27;
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(i + 64));
      if ( !dword_140D06B08 )
        goto LABEL_27;
      if ( (dword_140D06B08 & 1) == 0 )
        goto LABEL_27;
      v4 = KeGetCurrentIrql();
      if ( v4 > 0xFu )
        goto LABEL_27;
      if ( (unsigned __int8)v3 > 0xFu )
        goto LABEL_27;
      if ( v4 < 2u )
        goto LABEL_27;
      CurrentPrcb = KeGetCurrentPrcb();
      v6 = *((_QWORD *)CurrentPrcb + 4375);
      v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v8 = (v7 & *(_DWORD *)(v6 + 20)) == 0;
      *(_DWORD *)(v6 + 20) &= v7;
      if ( !v8 )
        goto LABEL_27;
    }
    sub_140418E4C((__int64)CurrentPrcb);
LABEL_27:
    __writecr8(v3);
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C20A30, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C20A30);
  sub_1402AFC00((ULONG_PTR)&qword_140C20A30);
  sub_1402F9540((__int64)KeGetCurrentThread());
  sub_1405D4A94(1);
}
