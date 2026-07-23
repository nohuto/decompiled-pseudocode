/*
 * XREFs of sub_1403AFA58 @ 0x1403AFA58
 * Callers:
 *     sub_1403AF5E4 @ 0x1403AF5E4 (sub_1403AF5E4.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140248E38 @ 0x140248E38 (sub_140248E38.c)
 *     sub_14024D740 @ 0x14024D740 (sub_14024D740.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1403AFE08 @ 0x1403AFE08 (sub_1403AFE08.c)
 *     sub_1403AFE88 @ 0x1403AFE88 (sub_1403AFE88.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1403AFA58(_QWORD *a1, unsigned int a2, unsigned int *a3, _BYTE *a4, __int64 a5)
{
  __int64 v5; // r13
  bool v6; // zf
  __int64 v9; // rcx
  char v10; // r15
  int v11; // r12d
  __int64 *PoolWithTag; // rax
  __int64 *v13; // rdi
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 i; // rbx
  int v18; // eax
  int v19; // r15d
  int v20; // r9d
  __int64 v21; // r8
  __int16 v22; // cx
  __int64 v23; // rax
  __int16 v24; // cx
  __int64 *v25; // rax
  __int64 v26; // rbx
  __int64 **v27; // rax
  KIRQL v28; // bl
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v36; // r9
  int v37; // eax
  unsigned int v38; // [rsp+40h] [rbp-20h] BYREF
  int v39; // [rsp+44h] [rbp-1Ch] BYREF
  __int128 v40; // [rsp+48h] [rbp-18h] BYREF
  KIRQL v42; // [rsp+B0h] [rbp+50h]

  v5 = a2;
  v6 = qword_140D00B48 == 0;
  v39 = 0;
  *a4 = 0;
  v40 = 0LL;
  if ( v6 )
    EtwRegister(&ProviderId, EnableCallback, 0LL, &qword_140D00B48);
  v9 = *a3;
  if ( !(_DWORD)v9 )
  {
    v38 = a3[14];
    if ( !(unsigned __int8)sub_14042A5E0(v9, v38) )
    {
      v10 = 1;
LABEL_6:
      v11 = v38;
      goto LABEL_7;
    }
    v10 = 0;
    if ( (int)sub_14042A5E0(a3, &v38) >= 0 )
      goto LABEL_6;
LABEL_35:
    v30 = *((unsigned __int16 *)a3 + 16);
    v31 = *((_QWORD *)a3 + 3);
    if ( LOWORD(dword_140C2AC40[0]) <= (unsigned __int16)v30 )
    {
      if ( HIWORD(dword_140C2AC40[0]) <= (unsigned __int16)v30 )
        return 0LL;
      LOWORD(dword_140C2AC40[0]) = v30 + 1;
    }
    *(_QWORD *)&dword_140C2AC40[2 * v30 + 2] |= v31;
    return 0LL;
  }
  if ( (_DWORD)v9 != 3 )
    goto LABEL_35;
  v11 = -1;
  v10 = 1;
  v38 = -1;
LABEL_7:
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x98uLL, 0x6B725449u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[4] = (__int64)a1;
  *((_DWORD *)PoolWithTag + 6) = v5;
  PoolWithTag[5] = 0LL;
  PoolWithTag[6] = 0LL;
  *((_BYTE *)PoolWithTag + 56) = v10;
  *((_OWORD *)PoolWithTag + 4) = *(_OWORD *)a3;
  *((_OWORD *)PoolWithTag + 5) = *((_OWORD *)a3 + 1);
  *((_OWORD *)PoolWithTag + 6) = *((_OWORD *)a3 + 2);
  *((_OWORD *)PoolWithTag + 7) = *((_OWORD *)a3 + 3);
  *((_OWORD *)PoolWithTag + 8) = *((_OWORD *)a3 + 4);
  PoolWithTag[18] = *((_QWORD *)a3 + 10);
  if ( (_DWORD)v5 )
  {
    v14 = a1;
    v15 = v5;
    do
    {
      v16 = (_QWORD *)*v14++;
      v16[22] = 0LL;
      v16[24] = 0LL;
      v16[25] = 0LL;
      v16[27] = 0LL;
      v16[21] = v13;
      --v15;
    }
    while ( v15 );
  }
  v42 = KeAcquireSpinLockRaiseToDpc(&qword_140C2AAF8);
  if ( !*a3 )
  {
    for ( i = qword_140C2AD50; ; i = *(_QWORD *)i )
    {
      if ( (ULONG_PTR *)i == &qword_140C2AD50 )
        goto LABEL_19;
      v18 = *(_DWORD *)(i + 32);
      if ( v18 == v11 && v18 != -1 )
        break;
    }
    if ( *(_DWORD *)(i + 128) != 2 )
      goto LABEL_18;
    *(_BYTE *)(*(_QWORD *)(i + 200) + 16LL) = 0;
    *(_DWORD *)(i + 128) = 0;
    *(_BYTE *)(i + 132) = 0;
    v32 = *((unsigned __int16 *)a3 + 16);
    v33 = *((_QWORD *)a3 + 3);
    if ( LOWORD(dword_140C2AC40[0]) <= (unsigned __int16)v32 )
    {
      if ( HIWORD(dword_140C2AC40[0]) <= (unsigned __int16)v32 )
      {
LABEL_18:
        v19 = 0;
        goto LABEL_27;
      }
      LOWORD(dword_140C2AC40[0]) = v32 + 1;
    }
    *(_QWORD *)&dword_140C2AC40[2 * v32 + 2] |= v33;
    goto LABEL_18;
  }
LABEL_19:
  i = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0xE0uLL, 0x6B725449u);
  if ( i )
  {
    v19 = sub_1403AFE88((_DWORD)a1, v5, (_DWORD)a3, v20, v10, (__int64)&v40, (__int64)&v39);
    if ( v19 >= 0 )
    {
      memset((void *)i, 0, 0xE0uLL);
      *(_DWORD *)(i + 32) = v11;
      *(_QWORD *)(i + 24) = i + 16;
      *(_QWORD *)(i + 16) = i + 16;
      *(_BYTE *)(i + 132) = 0;
      *(_QWORD *)(i + 152) = 0LL;
      v22 = *((_WORD *)a3 + 16);
      *(_QWORD *)(i + 136) = 0LL;
      *(_DWORD *)(i + 128) = v39;
      v23 = v40;
      *(_QWORD *)(i + 160) = v40;
      *(_QWORD *)(i + 176) = v23;
      *(_WORD *)(i + 144) = v22;
      v24 = WORD4(v40);
      *(_WORD *)(i + 168) = WORD4(v40);
      *(_WORD *)(i + 184) = v24;
      v6 = *(_DWORD *)(i + 128) == 2;
      *(_OWORD *)(i + 40) = *(_OWORD *)a3;
      *(_OWORD *)(i + 56) = *((_OWORD *)a3 + 1);
      *(_OWORD *)(i + 72) = *((_OWORD *)a3 + 2);
      *(_OWORD *)(i + 88) = *((_OWORD *)a3 + 3);
      *(_OWORD *)(i + 104) = *((_OWORD *)a3 + 4);
      *(_QWORD *)(i + 120) = *((_QWORD *)a3 + 10);
      if ( v6 )
        *(_QWORD *)(i + 200) = *(_QWORD *)(*a1 + 272LL);
      v25 = (__int64 *)qword_140C2AD58;
      if ( *(ULONG_PTR **)qword_140C2AD58 != &qword_140C2AD50 )
        goto LABEL_47;
      *(_QWORD *)i = &qword_140C2AD50;
      *(_QWORD *)(i + 8) = v25;
      *v25 = i;
      ++dword_140C2AD60;
      qword_140C2AD58 = i;
      sub_140248E38(i + 160, 0, v21);
      if ( *(_DWORD *)(i + 128) )
      {
        sub_14024D740(i);
        *a4 = 1;
        *(_WORD *)(a5 + 8) = *(_WORD *)(i + 168);
        *(_QWORD *)a5 = *(_QWORD *)(i + 160);
      }
    }
    if ( !v19 )
    {
LABEL_27:
      v13[2] = i;
      v26 = i + 16;
      v27 = *(__int64 ***)(v26 + 8);
      if ( *v27 == (__int64 *)v26 )
      {
        *v13 = v26;
        v13[1] = (__int64)v27;
        *v27 = v13;
        *(_QWORD *)(v26 + 8) = v13;
        sub_1403AFE08(v13, qword_1400103D0);
        goto LABEL_29;
      }
LABEL_47:
      __fastfail(3u);
    }
  }
  else
  {
    v19 = -1073741670;
  }
  ExFreePoolWithTag(v13, 0x6B725449u);
LABEL_29:
  KeReleaseSpinLockFromDpcLevel(&qword_140C2AAF8);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v28 = v42;
    if ( v42 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v36 = *((_QWORD *)CurrentPrcb + 4375);
      v37 = ~(unsigned __int16)(-1LL << (v42 + 1));
      v6 = (v37 & *(_DWORD *)(v36 + 20)) == 0;
      *(_DWORD *)(v36 + 20) &= v37;
      if ( v6 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  else
  {
    v28 = v42;
  }
  __writecr8(v28);
  return (unsigned int)v19;
}
