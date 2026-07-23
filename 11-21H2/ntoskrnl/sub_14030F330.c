/*
 * XREFs of sub_14030F330 @ 0x14030F330
 * Callers:
 *     sub_1402F8870 @ 0x1402F8870 (sub_1402F8870.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     sub_1409663D0 @ 0x1409663D0 (sub_1409663D0.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402A86B0 @ 0x1402A86B0 (sub_1402A86B0.c)
 *     sub_1402ADD00 @ 0x1402ADD00 (sub_1402ADD00.c)
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_1402F1DC0 @ 0x1402F1DC0 (sub_1402F1DC0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_14030F6D0 @ 0x14030F6D0 (sub_14030F6D0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14030F870 @ 0x14030F870 (sub_14030F870.c)
 *     sub_14030F970 @ 0x14030F970 (sub_14030F970.c)
 *     sub_140310810 @ 0x140310810 (sub_140310810.c)
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_140344A30 @ 0x140344A30 (sub_140344A30.c)
 *     sub_140345C80 @ 0x140345C80 (sub_140345C80.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140428A30 @ 0x140428A30 (sub_140428A30.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 */

BOOLEAN __fastcall sub_14030F330(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // r15
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // esi
  char v8; // r13
  unsigned __int8 v9; // r12
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v11; // rcx
  char v12; // al
  struct _KPRCB *v13; // rsi
  _QWORD *v14; // r14
  __int64 v15; // rcx
  REGHANDLE v16; // rbx
  BOOLEAN result; // al
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r9
  int v21; // eax
  int v22; // eax
  int v23; // eax
  ULONG_PTR v24; // r13
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  struct _KPRCB *v28; // r14
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // r14
  __int64 v36; // r8
  struct _KPRCB *v37; // rcx
  __int64 v38; // rdx
  bool v39; // zf
  __int64 v40; // rdx
  struct _KPRCB *v41; // r10
  __int64 v42; // r9
  int v43; // eax
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r9
  __int64 v46; // r8
  int v47; // eax
  _QWORD *v48; // [rsp+40h] [rbp-29h] BYREF
  int v49; // [rsp+48h] [rbp-21h] BYREF
  int v50; // [rsp+4Ch] [rbp-1Dh] BYREF
  int v51; // [rsp+50h] [rbp-19h] BYREF
  int v52; // [rsp+54h] [rbp-15h] BYREF
  int v53[6]; // [rsp+58h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp+7h] BYREF
  int *v55; // [rsp+80h] [rbp+17h]
  __int64 v56; // [rsp+88h] [rbp+1Fh]

  if ( dword_140D05010 )
    sub_1405C5EC8(a1 - 48);
  sub_14030F6D0(a1 - 48);
  CurrentThread = KeGetCurrentThread();
  sub_1402A86B0((ULONG_PTR)CurrentThread);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v20 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v20 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
    sub_140461A66(&dword_140C1BEA4, CurrentIrql);
  else
    sub_14030F870(&dword_140C1BEA4, CurrentIrql);
  *((_QWORD *)CurrentThread + 194) = a1;
  v7 = *(char *)(a1 + 195);
  if ( v7 > 31 )
    LOBYTE(v7) = 31;
  v8 = 0;
  v48 = 0LL;
  v9 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v9 <= 0xFu )
  {
    v6 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    v4 = (-1LL << (v9 + 1)) & 4;
    v5 = (unsigned int)v4 | *(_DWORD *)(v6 + 20);
    *(_DWORD *)(v6 + 20) = v5;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v49 = 0;
  v11 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v11 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v21 = *(_DWORD *)(v11 + 24);
      *(_DWORD *)(v11 + 24) = v21 + 1;
      if ( v21 == -1 )
LABEL_41:
        sub_140418E4C(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)CurrentThread + 16, 0LL) )
  {
    v18 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v18 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v22 = *(_DWORD *)(v18 + 24) - 1;
        *(_DWORD *)(v18 + 24) = v22;
        if ( !v22 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v49, v4, v5, v6);
    while ( *((_QWORD *)CurrentThread + 8) );
    v19 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v19 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v23 = *(_DWORD *)(v19 + 24);
        *(_DWORD *)(v19 + 24) = v23 + 1;
        if ( v23 == -1 )
          goto LABEL_41;
      }
    }
  }
  *((_BYTE *)CurrentThread + 795) = v7;
  v12 = *((_BYTE *)CurrentThread + (char)v7 + 824);
  if ( v12 == -1 )
    KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, (char)v7, 1uLL, 0LL);
  *((_BYTE *)CurrentThread + (char)v7 + 824) = v12 + 1;
  *((_DWORD *)CurrentThread + 214) |= 1 << v7;
  if ( *((char *)CurrentThread + 195) < (char)v7 )
    sub_140344A30(CurrentThread, &v48, (unsigned int)(char)v7);
  sub_140224100((__int64)CurrentThread);
  v13 = KeGetCurrentPrcb();
  v14 = v48;
  if ( v48 )
  {
    v48 = (_QWORD *)*v48;
    do
    {
      sub_1403405E0(v13, v14 - 27, &v48);
      v14 = v48;
      ++v8;
      if ( v48 )
        v48 = (_QWORD *)*v48;
      if ( (v8 & 0xF) == 0 )
        sub_140340300((char *)v13 + 12760);
    }
    while ( v14 );
  }
  sub_140340300((char *)v13 + 12760);
  if ( v9 >= 2u )
  {
    if ( *((_QWORD *)v13 + 2) && !*((_BYTE *)v13 + 13242) )
    {
      if ( *((_BYTE *)v13 + 32) )
      {
        *((_BYTE *)v13 + 6) = 1;
      }
      else
      {
        v53[0] = 5;
        *(_OWORD *)&v53[1] = 0LL;
        sub_1402ADD00(v53, 0x2Fu);
      }
    }
    goto LABEL_17;
  }
  v24 = *((_QWORD *)v13 + 1);
  if ( *((_QWORD *)v13 + 2) )
  {
    sub_1402B4EC0(*((_QWORD *)v13 + 1), 0);
    v28 = KeGetCurrentPrcb();
    v50 = 0;
    v29 = *((_QWORD *)v28 + 4375);
    if ( v29 )
    {
      if ( *((_BYTE *)v28 + 32) <= 1u )
      {
        v30 = *(_DWORD *)(v29 + 24);
        *(_DWORD *)(v29 + 24) = v30 + 1;
        if ( v30 == -1 )
LABEL_59:
          sub_140418E4C(v28);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)v13 + 12, 0LL) )
    {
      v31 = *((_QWORD *)v28 + 4375);
      if ( v31 )
      {
        if ( *((_BYTE *)v28 + 32) <= 1u )
        {
          v32 = *(_DWORD *)(v31 + 24) - 1;
          *(_DWORD *)(v31 + 24) = v32;
          if ( !v32 )
            sub_140418E4C(v28);
        }
      }
      do
        sub_1402F32E0(&v50, v25, v26, v27);
      while ( *((_QWORD *)v13 + 6) );
      v33 = *((_QWORD *)v28 + 4375);
      if ( v33 )
      {
        if ( *((_BYTE *)v28 + 32) <= 1u )
        {
          v34 = *(_DWORD *)(v33 + 24);
          *(_DWORD *)(v33 + 24) = v34 + 1;
          if ( v34 == -1 )
            goto LABEL_59;
        }
      }
    }
    v35 = *((_QWORD *)v13 + 2);
    *((_QWORD *)v13 + 2) = 0LL;
    _disable();
    LOBYTE(v27) = 1;
    sub_140345C80(v13, v24, 0LL, v27);
    _enable();
    *((_QWORD *)v13 + 1) = v35;
    if ( *(_BYTE *)(v35 + 388) == 1 )
    {
      v36 = (unsigned int)(*(_DWORD *)(v35 + 132) - *(_DWORD *)(v35 + 436));
      *(_DWORD *)(v35 + 132) = v36 + MEMORY[0xFFFFF78000000320];
    }
    *(_BYTE *)(v35 + 388) = 2;
    *(_BYTE *)(v24 + 643) = 32;
    *(_BYTE *)(v24 + 390) = v9;
    sub_1402B9970((__int64)v13, v24, v36);
    if ( !(unsigned __int8)sub_140428A30(v24, v35, v9) )
      goto LABEL_85;
    if ( !dword_140D06B08 )
      goto LABEL_78;
    if ( (dword_140D06B08 & 1) == 0 )
      goto LABEL_78;
    if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
      goto LABEL_78;
    v37 = KeGetCurrentPrcb();
    v38 = *((_QWORD *)v37 + 4375);
    v39 = (*(_DWORD *)(v38 + 20) & 0xFFFF0003) == 0;
    *(_DWORD *)(v38 + 20) &= 0xFFFF0003;
    if ( !v39 )
      goto LABEL_78;
LABEL_77:
    sub_140418E4C(v37);
LABEL_78:
    __writecr8(1uLL);
    *(_DWORD *)(v24 + 116) &= ~0x40u;
    sub_1402F1DC0(0, 0LL, 0LL);
    goto LABEL_85;
  }
  if ( (*(_DWORD *)(v24 + 116) & 0x40) != 0 )
  {
    if ( !dword_140D06B08 )
      goto LABEL_78;
    if ( (dword_140D06B08 & 1) == 0 )
      goto LABEL_78;
    if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
      goto LABEL_78;
    v37 = KeGetCurrentPrcb();
    v40 = *((_QWORD *)v37 + 4375);
    v39 = (*(_DWORD *)(v40 + 20) & 0xFFFF0003) == 0;
    *(_DWORD *)(v40 + 20) &= 0xFFFF0003;
    if ( !v39 )
      goto LABEL_78;
    goto LABEL_77;
  }
LABEL_85:
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v41 = KeGetCurrentPrcb();
      v42 = *((_QWORD *)v41 + 4375);
      v43 = ~(unsigned __int16)(-1LL << (v9 + 1));
      v39 = (v43 & *(_DWORD *)(v42 + 20)) == 0;
      *(_DWORD *)(v42 + 20) &= v43;
      if ( v39 )
        sub_140418E4C(v41);
    }
  }
  __writecr8(v9);
LABEL_17:
  sub_14030F970(KeGetCurrentPrcb(), CurrentThread, a1);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C1BEA4);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v44 = KeGetCurrentIrql();
      if ( v44 <= 0xFu && CurrentIrql <= 0xFu && v44 >= 2u )
      {
        v45 = KeGetCurrentPrcb();
        v46 = *((_QWORD *)v45 + 4375);
        v47 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v39 = (v47 & *(_DWORD *)(v46 + 20)) == 0;
        *(_DWORD *)(v46 + 20) &= v47;
        if ( v39 )
          sub_140418E4C(v45);
      }
    }
  }
  __writecr8(CurrentIrql);
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1296LL);
  if ( v15 && *(_QWORD *)(v15 + 1208) )
    sub_140310810(CurrentThread);
  v16 = qword_140C15FF8;
  result = EtwEventEnabled(qword_140C15FF8, &stru_140010E38);
  if ( result )
  {
    v51 = 0;
    UserData.Ptr = (ULONGLONG)&v51;
    v52 = *(_DWORD *)(a1 + 1232);
    *(_QWORD *)&UserData.Size = 4LL;
    v55 = &v52;
    v56 = 4LL;
    return EtwWriteEx(v16, &stru_140010E38, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
  }
  return result;
}
