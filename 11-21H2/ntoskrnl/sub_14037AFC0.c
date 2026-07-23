/*
 * XREFs of sub_14037AFC0 @ 0x14037AFC0
 * Callers:
 *     sub_1403CFD20 @ 0x1403CFD20 (sub_1403CFD20.c)
 * Callees:
 *     sub_14020C810 @ 0x14020C810 (sub_14020C810.c)
 *     sub_14025B8B0 @ 0x14025B8B0 (sub_14025B8B0.c)
 *     sub_14025FB48 @ 0x14025FB48 (sub_14025FB48.c)
 *     sub_14025FD40 @ 0x14025FD40 (sub_14025FD40.c)
 *     sub_14028C230 @ 0x14028C230 (sub_14028C230.c)
 *     sub_14028C82C @ 0x14028C82C (sub_14028C82C.c)
 *     sub_14028C9B4 @ 0x14028C9B4 (sub_14028C9B4.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_14037B44C @ 0x14037B44C (sub_14037B44C.c)
 *     sub_14037BAD4 @ 0x14037BAD4 (sub_14037BAD4.c)
 *     sub_14037BB78 @ 0x14037BB78 (sub_14037BB78.c)
 *     sub_14037E048 @ 0x14037E048 (sub_14037E048.c)
 *     sub_14037E338 @ 0x14037E338 (sub_14037E338.c)
 *     sub_14037E43C @ 0x14037E43C (sub_14037E43C.c)
 *     sub_14037E554 @ 0x14037E554 (sub_14037E554.c)
 *     sub_140389840 @ 0x140389840 (sub_140389840.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14059A568 @ 0x14059A568 (sub_14059A568.c)
 *     sub_14059B62C @ 0x14059B62C (sub_14059B62C.c)
 *     sub_14059CCB4 @ 0x14059CCB4 (sub_14059CCB4.c)
 */

char __fastcall sub_14037AFC0(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r15
  __int64 v3; // r13
  unsigned int v4; // ebx
  __int16 v5; // cx
  unsigned __int64 v6; // rdi
  __int16 v7; // ax
  unsigned __int64 v8; // r12
  unsigned int v9; // edi
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // edi
  unsigned int v13; // r12d
  _QWORD *v14; // r13
  unsigned int v15; // eax
  __int64 v16; // r13
  int v17; // edi
  unsigned int v18; // edi
  int v19; // ecx
  unsigned __int64 v20; // rax
  int v21; // eax
  unsigned __int64 v22; // rcx
  _QWORD *v23; // rax
  struct _KTHREAD *v24; // rdx
  unsigned __int64 v25; // r13
  struct _KTHREAD *v26; // rcx
  bool v27; // zf
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  __int64 v30; // r9
  int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // r10d
  unsigned __int64 v34; // rcx
  unsigned int v35; // r15d
  _QWORD *v36; // r13
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r10
  __int64 v39; // r9
  int v40; // eax
  unsigned __int64 v41; // r13
  _QWORD *v42; // r15
  __int64 v43; // rdi
  unsigned __int8 v44; // al
  unsigned __int8 v45; // di
  struct _KPRCB *v46; // r10
  __int64 v47; // r9
  int v48; // eax
  int v49; // ecx
  _DWORD *v50; // r13
  unsigned __int8 v51; // di
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r9
  __int64 v54; // r8
  int v55; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v58; // r8
  int v59; // eax
  unsigned int v61; // [rsp+60h] [rbp-29h]
  unsigned int v62; // [rsp+60h] [rbp-29h]
  int v63; // [rsp+60h] [rbp-29h]
  unsigned int v64; // [rsp+64h] [rbp-25h] BYREF
  unsigned int v65; // [rsp+68h] [rbp-21h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-19h]
  _QWORD *v67; // [rsp+78h] [rbp-11h]
  unsigned __int64 v68; // [rsp+80h] [rbp-9h]
  __int64 v69; // [rsp+88h] [rbp-1h]
  __int64 v70; // [rsp+98h] [rbp+Fh]
  KIRQL v72; // [rsp+F8h] [rbp+6Fh]
  unsigned int v73; // [rsp+F8h] [rbp+6Fh]
  KIRQL v74; // [rsp+F8h] [rbp+6Fh]
  unsigned __int8 v75; // [rsp+F8h] [rbp+6Fh]
  int v76; // [rsp+100h] [rbp+77h] BYREF
  unsigned int v77; // [rsp+108h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 144);
  v2 = a1;
  v64 = 0;
  v70 = v1;
  v3 = *(_QWORD *)(v1 + 248);
  v69 = v3;
  CurrentThread = KeGetCurrentThread();
  if ( !*(_QWORD *)(v1 + 24) )
  {
    LOBYTE(v23) = sub_14059CCB4(v1, a1);
    return (char)v23;
  }
  v4 = 0;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_DWORD *)(a1 + 216) = 131120;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  v5 = *(_WORD *)(v1 + 204);
  v67 = (_QWORD *)(v2 + 256);
  if ( *(_DWORD *)(v3 + 1176) )
    v4 = 4;
  v6 = *(_QWORD *)(88LL * (v5 & 0xF) + v3 + 3712);
  v7 = *(_WORD *)(v1 + 204);
  if ( !_bittest16(&v7, 4u) && (v4 & 4) != 0 && (v8 = *(_QWORD *)(88LL * *(unsigned int *)(v3 + 1172) + v3 + 3712)) != 0 )
  {
    v4 |= 2u;
  }
  else
  {
    if ( *(_DWORD *)(v3 + 1168) )
    {
LABEL_46:
      v25 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 232));
      *(_BYTE *)(v1 + 206) |= 1u;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 232));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v25 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v58 = *((_QWORD *)CurrentPrcb + 4375);
            v59 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v25 + 1));
            v27 = (v59 & *(_DWORD *)(v58 + 20)) == 0;
            *(_DWORD *)(v58 + 20) &= v59;
            if ( v27 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v25);
      LOBYTE(v23) = 17;
      *(_QWORD *)v2 = 2575857425LL;
      goto LABEL_42;
    }
    v8 = *(_QWORD *)(v3 + 3584);
  }
  if ( !v6 && (!v8 || (*(_BYTE *)(v1 + 204) & 0x10) != 0) )
    goto LABEL_46;
  if ( (v4 & 2) == 0
    && v8
    && (*(_BYTE *)(v1 + 204) & 0x10) == 0
    && (!v6
     || (*(_BYTE *)(v1 + 207) & 1) != 0
     || (unsigned int)sub_14025FD40(v1) >= *(_DWORD *)(v1 + 136) >> 2
     && (v8 >= (unsigned __int64)(unsigned int)dword_140D051CC >> 2 || v8 >= v6)) )
  {
    v4 |= 2u;
  }
  v9 = dword_140D051CC;
  v76 = dword_140D051CC;
  if ( (v4 & 2) != 0 )
  {
    if ( v8 < (unsigned int)dword_140D051CC )
      v9 = v8;
    v76 = v9;
  }
  if ( *(_BYTE *)(v3 + 1024) )
  {
    v63 = 0;
    v74 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 1020));
    if ( *(_BYTE *)(v3 + 1026) )
    {
      *(_BYTE *)(v3 + 1026) = 0;
      *(_BYTE *)(v3 + 1024) = 0;
      v63 = 1;
    }
    else if ( *(_BYTE *)(v3 + 1024) )
    {
      v9 = *(unsigned __int8 *)(v3 + 1024);
      v76 = v9;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 1020));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v28 = KeGetCurrentIrql();
        if ( v28 <= 0xFu && v74 <= 0xFu && v28 >= 2u )
        {
          v29 = KeGetCurrentPrcb();
          v30 = *((_QWORD *)v29 + 4375);
          v31 = ~(unsigned __int16)(-1LL << (v74 + 1));
          v27 = (v31 & *(_DWORD *)(v30 + 20)) == 0;
          *(_DWORD *)(v30 + 20) &= v31;
          if ( v27 )
            sub_140418E4C(v29);
          v9 = v76;
        }
      }
    }
    __writecr8(v74);
    if ( v63 )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&stru_14000EEA8);
  }
  if ( (*(_DWORD *)(v2 + 40) & 0x1Cu) < 8 )
  {
    if ( v9 > 0x100 )
      v9 = 256;
    v76 = v9;
  }
  v4 |= 1u;
  --*((_WORD *)CurrentThread + 242);
  if ( (v4 & 2) != 0 )
  {
    v65 = 0;
    sub_14037E048(v1, &v65, &v76, 0LL);
    if ( !v76 )
    {
      LOBYTE(v23) = sub_14059CCB4(v1, v2);
      goto LABEL_42;
    }
    v10 = sub_14037E554(v3, v67);
    v77 = v10;
    v11 = v10;
  }
  else
  {
    v77 = v9;
    v32 = sub_14059B62C(v67, v1, &v77, &v64);
    v11 = v64;
    v65 = v32;
    v10 = v77;
  }
  if ( v10 )
  {
    v76 = v10;
    v61 = v11 - 1;
    v12 = v10;
    v64 = v11 - 1;
    v72 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 232));
    if ( (v4 & 2) != 0 )
    {
      sub_14037E048(v1, &v65, &v76, 1LL);
      v12 = v76;
    }
    else
    {
      sub_140389840(v1, v65, v77);
      v33 = -1;
      v34 = (unsigned __int64)&v67[v77];
      v68 = v34;
      if ( (unsigned __int64)v67 < v34 )
      {
        v35 = v65;
        v36 = v67;
        do
        {
          if ( *v36 != qword_140C53278
            || (v34 = v68, _bittest64(*(const signed __int64 **)(*(_QWORD *)(v1 + 112) + 32LL), v35)) )
          {
            if ( v33 != -1 )
            {
              sub_14025FB48(v1, v33, v35 - v33, 0LL);
              v34 = v68;
              v33 = -1;
            }
          }
          else if ( v33 == -1 )
          {
            v33 = v35;
          }
          ++v35;
          ++v36;
        }
        while ( (unsigned __int64)v36 < v34 );
        v2 = a1;
      }
      *(_DWORD *)(v1 + 136) = v12 + *(_DWORD *)(v1 + 136) - (*(_DWORD *)(v1 + 136) >> 2);
    }
    sub_14037BB78(v1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 232));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v37 = KeGetCurrentIrql();
        if ( v37 <= 0xFu && v72 <= 0xFu && v37 >= 2u )
        {
          v38 = KeGetCurrentPrcb();
          v39 = *((_QWORD *)v38 + 4375);
          v40 = ~(unsigned __int16)(-1LL << (v72 + 1));
          v27 = (v40 & *(_DWORD *)(v39 + 20)) == 0;
          *(_DWORD *)(v39 + 20) &= v40;
          if ( v27 )
            sub_140418E4C(v38);
          v12 = v76;
          v61 = v64;
        }
      }
    }
    __writecr8(v72);
    sub_1402F9540((__int64)CurrentThread);
    v4 &= ~1u;
    if ( v12 != v77 )
    {
      v41 = (unsigned __int64)&v67[v77];
      v42 = &v67[v12];
      do
      {
        v43 = 48LL * *v42 - 0x220000000000LL;
        v75 = sub_1402F2700(v43);
        sub_14028C82C(v43, 1LL);
        _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v44 = KeGetCurrentIrql(), v44 <= 0xFu) )
        {
          v45 = v75;
          if ( v75 <= 0xFu && v44 >= 2u )
          {
            v46 = KeGetCurrentPrcb();
            v47 = *((_QWORD *)v46 + 4375);
            v48 = ~(unsigned __int16)(-1LL << (v75 + 1));
            v27 = (v48 & *(_DWORD *)(v47 + 20)) == 0;
            *(_DWORD *)(v47 + 20) &= v48;
            if ( v27 )
              sub_140418E4C(v46);
          }
        }
        else
        {
          v45 = v75;
        }
        __writecr8(v45);
        ++v42;
      }
      while ( (unsigned __int64)v42 < v41 );
      v12 = v76;
      v61 = v76 - v77 + v64;
      v64 = v61;
      sub_14028C9B4(v69, v77 - v76, 0);
      v1 = v70;
      v2 = a1;
    }
    v13 = v65;
    v14 = v67;
    *(_DWORD *)(v2 + 248) = v12 << 12;
    *(_DWORD *)(v2 + 136) = v12 << 12;
    *(_DWORD *)(v2 + 140) = v61;
    v15 = 0;
    v73 = 0;
    v77 = v12;
    v62 = v13;
    do
    {
      if ( *v14 != qword_140C53278 )
      {
        sub_14037BAD4(48LL * *v14 - 0x220000000000LL, v1, v13, 0LL);
        v15 = v73;
      }
      ++v15;
      ++v14;
      ++v13;
      v73 = v15;
      v76 = v15;
    }
    while ( v15 < v12 );
    v16 = v69;
    v65 = v13;
    *(_WORD *)(a1 + 216) = 8 * (dword_140D051CC + 6);
    *(_DWORD *)(a1 + 40) &= ~2u;
    v17 = *(_DWORD *)(a1 + 40) >> 2;
    *(_QWORD *)(a1 + 184) = MEMORY[0xFFFFF78000000014];
    v18 = v17 & 7;
    v19 = *(_DWORD *)(v16 + 884);
    v20 = *(_QWORD *)(v16 + 16896);
    if ( v19 )
    {
      v49 = v19 - 1;
      if ( v20 < 0x420 )
        v18 = 4;
      *(_DWORD *)(v16 + 884) = v20 < 0x420 ? v49 : 0;
      goto LABEL_37;
    }
    if ( v20 < 0xA0 )
    {
      *(_DWORD *)(v16 + 884) = 32;
    }
    else
    {
      if ( v20 >= 0x120 )
        goto LABEL_37;
      *(_DWORD *)(v16 + 884) = 8;
    }
    v18 = 4;
LABEL_37:
    *(_DWORD *)(a1 + 40) = (4 * v18) | *(_DWORD *)(a1 + 40) & 0xFFFFFFE3;
    if ( v18 < 2 )
    {
      v26 = CurrentThread;
      --*((_WORD *)CurrentThread + 243);
      ++*(_DWORD *)(v16 + 716);
      v27 = (*((_WORD *)v26 + 243))++ == 0xFFFF;
      if ( v27 && *((struct _KTHREAD **)v26 + 19) != (struct _KTHREAD *)((char *)v26 + 152) )
        KiCheckForKernelApcDelivery();
    }
    sub_14037E43C(a1, a1 + 184, v18, ((v4 >> 1) & 1) == 0, -1);
    v21 = *(_DWORD *)(v16 + 872);
    v22 = *(_QWORD *)(v16 + 864);
    if ( v21 == 512 )
      v22 -= v22 >> 9;
    else
      *(_DWORD *)(v16 + 872) = v21 + 1;
    *(_QWORD *)(v16 + 864) = v22 + v77;
    *(_DWORD *)(a1 + 40) &= ~0x20u;
    *(_QWORD *)(a1 + 176) = (unsigned __int64)v62 << 12;
    if ( v4 >= 4 )
    {
      LODWORD(v23) = sub_14037B44C(a1);
      if ( (int)v23 >= 0 )
        goto LABEL_42;
    }
    __incgsdword(0x2EACu);
    __addgsdword(0x2EA8u, v77);
    sub_14037E338(v1, a1 + 208, 0LL, v62, v77);
    v50 = (_DWORD *)(a1 + 16);
    if ( _bittest16((const signed __int16 *)(v1 + 204), 0xBu) )
    {
      sub_14059A568(v1, a1 + 208, *(_QWORD *)(a1 + 176) >> 12, 0LL);
      *v50 = 0;
      *(_QWORD *)(a1 + 24) = *(unsigned int *)(a1 + 248);
LABEL_119:
      v51 = KeGetCurrentIrql();
      __writecr8(1uLL);
      sub_14028C230(a1, (int *)(a1 + 16), 0);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v52 = KeGetCurrentIrql();
          if ( v52 <= 0xFu && v51 <= 0xFu && v52 >= 2u )
          {
            v53 = KeGetCurrentPrcb();
            v54 = *((_QWORD *)v53 + 4375);
            v55 = ~(unsigned __int16)(-1LL << (v51 + 1));
            v27 = (v55 & *(_DWORD *)(v54 + 20)) == 0;
            *(_DWORD *)(v54 + 20) &= v55;
            if ( v27 )
              sub_140418E4C(v53);
          }
        }
      }
      LOBYTE(v23) = v51;
      __writecr8(v51);
      goto LABEL_42;
    }
    LODWORD(v23) = sub_14020C810(
                     *(struct _FILE_OBJECT **)(v1 + 56),
                     (struct _MDL *)(a1 + 208),
                     (LARGE_INTEGER *)(a1 + 176),
                     (LARGE_INTEGER)sub_14028C230,
                     (void *)a1,
                     v18,
                     *(_DWORD *)(v1 + 200),
                     0,
                     0LL,
                     (struct _IO_STATUS_BLOCK *)(a1 + 16),
                     (IRP **)(a1 + 32));
    if ( ((unsigned int)v23 & 0xC0000000) == 0xC0000000 )
    {
      *v50 = (_DWORD)v23;
      *(_QWORD *)(a1 + 24) = 0LL;
      goto LABEL_119;
    }
LABEL_42:
    v24 = CurrentThread;
    goto LABEL_43;
  }
  --*((_WORD *)CurrentThread + 243);
  LOBYTE(v23) = (unsigned __int8)sub_14025B8B0((_QWORD *)v2);
  v27 = (*((_WORD *)v24 + 243))++ == 0xFFFF;
  if ( v27 )
  {
    v23 = (_QWORD *)((char *)v24 + 152);
    if ( (_QWORD *)*v23 != v23 )
    {
      LOBYTE(v23) = KiCheckForKernelApcDelivery();
      goto LABEL_42;
    }
  }
LABEL_43:
  if ( (v4 & 1) != 0 )
    LOBYTE(v23) = sub_1402F9540((__int64)v24);
  return (char)v23;
}
