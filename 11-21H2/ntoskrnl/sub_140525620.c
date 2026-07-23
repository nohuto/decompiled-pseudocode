/*
 * XREFs of sub_140525620 @ 0x140525620
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140527410 @ 0x140527410 (sub_140527410.c)
 */

__int64 __fastcall sub_140525620(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  KIRQL v4; // r14
  unsigned __int8 CurrentIrql; // r15
  __int64 v6; // r9
  _QWORD *v7; // rsi
  _QWORD *i; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rsi
  _QWORD *j; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  bool v14; // zf
  unsigned int v15; // ebp
  __int64 v16; // r14
  __int64 v17; // rbp
  __int64 v18; // r8
  _QWORD *v19; // rdx
  __int64 v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  unsigned __int8 v23; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // rdx
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  __int64 v30; // r8
  int v31; // eax
  KIRQL v34; // [rsp+78h] [rbp+10h]

  v2 = *(_QWORD *)(a1 + 8);
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140C4A130);
  v34 = v4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v6 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v6 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 24));
  v7 = 0LL;
  for ( i = *(_QWORD **)(v2 + 40); i != (_QWORD *)(v2 + 40); i = (_QWORD *)*i )
  {
    v7 = i;
    if ( i[2] == *(_QWORD *)(a2 + 24) )
      break;
  }
  v9 = 0LL;
  v10 = v7 + 3;
  for ( j = (_QWORD *)*v10; j != v10; j = (_QWORD *)*j )
  {
    v9 = j;
    if ( j[5] == a2 )
      break;
  }
  v12 = *v9;
  v13 = (_QWORD *)v9[1];
  if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v13 != v9 )
    goto LABEL_46;
  v14 = byte_140C4BCBC == 0;
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  if ( !v14 )
  {
    v15 = *(_DWORD *)(v2 + 16);
    v16 = *(_QWORD *)(a2 + 40);
    if ( (unsigned int)sub_14042A5E0((unsigned int)v16, v15) == 3473497 )
      KeBugCheckEx(0x159u, 0x3001uLL, (unsigned int)v16, v15, 0LL);
    v4 = v34;
  }
  v17 = *(_QWORD *)(a2 + 24);
  if ( (_QWORD *)*v10 == v10 )
  {
    if ( byte_140C4BCBC )
      sub_140527410(a1, 0LL);
    else
      sub_14042A5E0(*(_QWORD *)(v17 + 16), *(_QWORD *)(a2 + 88));
  }
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a2 + 16));
  --*(_DWORD *)(a2 + 32);
  v18 = v9[2];
  v19 = (_QWORD *)v9[3];
  if ( *(_QWORD **)(v18 + 8) != v9 + 2 || (_QWORD *)*v19 != v9 + 2 )
    goto LABEL_46;
  *v19 = v18;
  *(_QWORD *)(v18 + 8) = v19;
  if ( !*(_DWORD *)(a2 + 32) && !byte_140C4BCBC )
  {
    sub_14042A5E0(*(_QWORD *)(v17 + 16), *(_QWORD *)(a2 + 40));
    v20 = *(_QWORD *)(a2 + 96);
    v21 = *(_QWORD **)(a2 + 104);
    if ( *(_QWORD *)(v20 + 8) == a2 + 96 && *v21 == a2 + 96 )
    {
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
      *(_QWORD *)(a2 + 88) = 0LL;
      goto LABEL_29;
    }
LABEL_46:
    __fastfail(3u);
  }
LABEL_29:
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a2 + 16));
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v2 + 24));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v23 = KeGetCurrentIrql();
      if ( v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v22 = (unsigned int)CurrentIrql + 1;
        v25 = *((_QWORD *)CurrentPrcb + 4375);
        v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v26 & *(_DWORD *)(v25 + 20)) == 0;
        *(_DWORD *)(v25 + 20) &= v26;
        if ( v14 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  v27 = v9[2056];
  if ( v27 )
    sub_1403B1B5C(v22, v27);
  sub_1403B1B5C(v22, (__int64)v9);
  KeReleaseSpinLockFromDpcLevel(&qword_140C4A130);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v28 = KeGetCurrentIrql();
      if ( v28 <= 0xFu && v4 <= 0xFu && v28 >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        v30 = *((_QWORD *)v29 + 4375);
        v31 = ~(unsigned __int16)(-1LL << (v4 + 1));
        v14 = (v31 & *(_DWORD *)(v30 + 20)) == 0;
        *(_DWORD *)(v30 + 20) &= v31;
        if ( v14 )
          sub_140418E4C((__int64)v29);
      }
    }
  }
  __writecr8(v4);
  return 0LL;
}
