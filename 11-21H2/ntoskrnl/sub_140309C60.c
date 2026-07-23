/*
 * XREFs of sub_140309C60 @ 0x140309C60
 * Callers:
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 * Callees:
 *     sub_140269570 @ 0x140269570 (sub_140269570.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140309C60(unsigned __int64 a1)
{
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r15
  __int64 v4; // rbx
  signed __int64 *v5; // rdx
  signed __int64 *v6; // r11
  signed __int64 v7; // r8
  unsigned __int64 v8; // r10
  signed __int64 *v9; // r9
  signed __int64 *v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  _BYTE *v17; // r14
  char v18; // al
  __int64 v20; // r9
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // r9
  unsigned __int64 *v23; // r14
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // r11
  unsigned __int64 v26; // r14
  unsigned __int64 v27; // r15
  __int64 *v28; // r8
  __int64 v29; // rax
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // r11
  unsigned __int64 v32; // r10
  volatile signed __int64 *v33; // rdi
  signed __int64 v34; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // rdi
  bool v38; // zf
  __int64 v39; // rcx
  unsigned int v40; // r14d
  unsigned __int64 v41; // rdi
  unsigned __int64 v42; // rcx
  __int64 v43; // rcx
  unsigned __int64 v44; // r15
  bool v45; // sf
  __int64 v46; // rdx
  unsigned int v47; // ecx
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r10
  __int64 v52; // r9
  int v53; // eax
  unsigned __int64 OldIrql; // r15
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r10
  __int64 v57; // r9
  int v58; // eax
  unsigned __int8 v59; // al
  struct _KPRCB *v60; // rax
  __int64 v61; // r9
  int v62; // edx
  __int128 v63; // [rsp+38h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-20h] BYREF

  v63 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v20 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v20 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0LL;
  v5 = (signed __int64 *)((char *)CurrentPrcb + 35248);
  if ( *((_QWORD *)CurrentPrcb + 4406) != -1LL )
    goto LABEL_3;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v50 = KeGetCurrentIrql();
      if ( v50 <= 0xFu && CurrentIrql <= 0xFu && v50 >= 2u )
      {
        v51 = KeGetCurrentPrcb();
        v52 = *((_QWORD *)v51 + 4375);
        v53 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v38 = (v53 & *(_DWORD *)(v52 + 20)) == 0;
        *(_DWORD *)(v52 + 20) &= v53;
        if ( v38 )
          sub_140418E4C(v51);
      }
    }
  }
  __writecr8(CurrentIrql);
  v21 = qword_140C534F8;
LABEL_25:
  while ( 2 )
  {
    v22 = qword_140C53500;
    v23 = (unsigned __int64 *)&qword_140C534C0;
    if ( qword_140C53500 )
    {
      while ( qword_140C534C0 < v22 )
      {
        KeAcquireInStackQueuedSpinLock(&qword_140C534E8, &LockHandle);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v55 = KeGetCurrentIrql();
            if ( v55 <= 0xFu && LockHandle.OldIrql <= 0xFu && v55 >= 2u )
            {
              v56 = KeGetCurrentPrcb();
              v57 = *((_QWORD *)v56 + 4375);
              v58 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v38 = (v58 & *(_DWORD *)(v57 + 20)) == 0;
              *(_DWORD *)(v57 + 20) &= v58;
              if ( v38 )
                sub_140418E4C(v56);
            }
          }
        }
        __writecr8(OldIrql);
        v22 = qword_140C53500;
        if ( !qword_140C53500 )
          goto LABEL_29;
      }
      v23 = (unsigned __int64 *)&v63;
      *(_QWORD *)&v63 = qword_140C534C0 - v22;
      *((_QWORD *)&v63 + 1) = qword_140C534C8 + 8 * (v22 >> 6);
      if ( v21 )
        v21 -= v22;
    }
LABEL_29:
    v24 = *v23;
    v25 = v21;
    v26 = v23[1];
    if ( v21 >= v24 )
      v25 = 0LL;
    v27 = v24 - 1;
    while ( 1 )
    {
      if ( v27 - v25 == -1LL )
        goto LABEL_71;
      v28 = (__int64 *)(v26 + 8 * (v25 >> 6));
      v29 = ((1LL << (v25 & 0x3F)) - 1) | *v28;
      if ( v29 != -1 )
        break;
      while ( (unsigned __int64)++v28 <= v26 + 8 * (v27 >> 6) )
      {
        v29 = *v28;
        if ( *v28 != -1 )
          goto LABEL_34;
      }
LABEL_71:
      if ( !v25 )
      {
        if ( !(unsigned int)sub_140269570((__int64)&qword_140C534C0, 0) )
          return 0LL;
        v21 = 0LL;
        goto LABEL_25;
      }
      v44 = v21 + 1;
      if ( v21 + 1 > v24 )
        v44 = v24;
      v27 = v44 - 1;
      v25 = 0LL;
    }
LABEL_34:
    _BitScanForward64((unsigned __int64 *)&v29, ~v29);
    v30 = v29 + ((__int64)((__int64)v28 - v26) >> 3 << 6);
    if ( v30 > v27 || v30 == -1LL )
      goto LABEL_71;
    v31 = (v30 + v22) & 0xFFFFFFFFFFFFFFC0uLL;
    v32 = *(_QWORD *)(qword_140C534C8 + 8 * (v31 >> 6));
    v33 = (volatile signed __int64 *)(qword_140C534C8 + 8 * (v31 >> 6));
    if ( v32 == -1LL )
    {
LABEL_98:
      v21 = v31 + 64;
      continue;
    }
    break;
  }
  while ( 1 )
  {
    v34 = _InterlockedCompareExchange64(v33, -1LL, v32);
    if ( v32 == v34 )
      break;
    v32 = v34;
    if ( v34 == -1 )
      goto LABEL_98;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v36 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v36 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = (signed __int64 *)((char *)CurrentPrcb + 35248);
  if ( *((_QWORD *)CurrentPrcb + 4406) == -1LL )
  {
    *v5 = v32;
    *((_DWORD *)CurrentPrcb + 8814) = v31;
    v35 = ~v32 - ((~v32 >> 1) & 0x5555555555555555LL);
    _InterlockedExchangeAdd64(
      &qword_140C53510,
      -(__int64)((0x101010101010101LL
                * (((v35 & 0x3333333333333333LL)
                  + ((v35 >> 2) & 0x3333333333333333LL)
                  + (((v35 & 0x3333333333333333LL) + ((v35 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
    qword_140C534F8 = v31 + 64;
  }
  else
  {
    _InterlockedAnd64(v33, v32);
  }
LABEL_3:
  *((_QWORD *)&v63 + 1) = v5;
  *(_QWORD *)&v63 = 64LL;
  v6 = v5;
  if ( !a1 )
  {
    v15 = 0LL;
    goto LABEL_14;
  }
  if ( a1 > 0x40 )
    goto LABEL_15;
  v7 = *v5;
  v8 = 63 - a1 + 1;
  v9 = &v5[v8 >> 6];
  v10 = v5;
  if ( a1 < 0x40 )
  {
    if ( a1 > 1 )
    {
      v37 = 0LL;
      while ( v7 != -1 )
      {
LABEL_46:
        v38 = !_BitScanForward64((unsigned __int64 *)&v39, v7);
        if ( v38 )
          LODWORD(v39) = 64;
        if ( (unsigned int)(v37 + v39) >= a1 )
        {
          v14 = -v37;
LABEL_53:
          v13 = (v10 - v5) << 6;
          goto LABEL_9;
        }
        v40 = a1;
        v41 = ~v7;
        while ( 1 )
        {
          v41 &= v41 >> (v40 >> 1);
          if ( !v41 )
            break;
          v40 -= v40 >> 1;
          if ( v40 <= 1 )
          {
            _BitScanForward64(&v42, v41);
            v14 = (unsigned int)v42;
            goto LABEL_53;
          }
        }
        if ( v10 == v5 )
          goto LABEL_15;
        v38 = !_BitScanReverse64((unsigned __int64 *)&v43, v7);
        if ( v38 )
          v37 = 64LL;
        else
          v37 = (unsigned int)(63 - v43);
        v7 = v10[1];
        ++v10;
      }
      while ( ++v10 <= v9 )
      {
        v7 = *v10;
        if ( *v10 != -1 )
        {
          v37 = 0LL;
          goto LABEL_46;
        }
      }
    }
    else if ( v7 == -1 )
    {
      while ( ++v10 <= v9 )
      {
        v7 = *v10;
        if ( *v10 != -1 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      _BitScanForward64(&v11, ~v7);
      v12 = v10 - v5;
      v13 = (unsigned int)v11;
      v14 = v12 << 6;
LABEL_9:
      v15 = v13 + v14;
      if ( v15 <= v8 )
        goto LABEL_10;
    }
    goto LABEL_15;
  }
  while ( 2 )
  {
    v45 = v7 < 0;
    while ( 1 )
    {
      if ( v45 )
      {
        do
        {
          if ( ++v10 > v9 )
            goto LABEL_15;
          v7 = *v10;
        }
        while ( *v10 < 0 );
      }
      v38 = !_BitScanReverse64((unsigned __int64 *)&v46, v7);
      if ( v38 )
        v47 = 64;
      else
        v47 = 63 - v46;
      v15 = ((v10 - v6 + 1) << 6) - v47;
      if ( v15 > v8 )
        goto LABEL_15;
      v48 = a1 - v47;
      if ( a1 == v47 )
        goto LABEL_10;
      v7 = v10[1];
      ++v10;
      if ( v48 < 0x40 )
        break;
      v45 = v7 < 0;
      if ( !v7 )
      {
        v48 -= 64LL;
        if ( !v48 )
          goto LABEL_10;
        v7 = v10[1];
        ++v10;
        break;
      }
    }
    v38 = !_BitScanForward64(&v49, v7);
    if ( v38 )
      v49 = 64LL;
    if ( v49 < v48 )
      continue;
    break;
  }
LABEL_10:
  if ( v15 != -1LL )
  {
    v16 = v15 & 7;
    v17 = (char *)v6 + (v15 >> 3);
    if ( v16 + a1 <= 8 )
    {
      v18 = byte_140018DF0[a1] << v16;
      goto LABEL_13;
    }
    if ( (v15 & 7) != 0 )
    {
      *v17++ |= byte_140015C40[v16];
      a1 -= (unsigned int)(8 - v16);
    }
    if ( a1 > 8 )
    {
      memset(v17, 255, a1 >> 3);
      v17 += a1 >> 3;
      a1 &= 7u;
    }
    if ( a1 )
    {
      v18 = byte_140018DF0[a1];
LABEL_13:
      *v17 |= v18;
    }
LABEL_14:
    v4 = qword_140C534D0 + 8 * (v15 + *((unsigned int *)CurrentPrcb + 8814));
  }
LABEL_15:
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v59 = KeGetCurrentIrql();
      if ( v59 <= 0xFu && CurrentIrql <= 0xFu && v59 >= 2u )
      {
        v60 = KeGetCurrentPrcb();
        v61 = *((_QWORD *)v60 + 4375);
        v62 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v38 = (v62 & *(_DWORD *)(v61 + 20)) == 0;
        *(_DWORD *)(v61 + 20) &= v62;
        if ( v38 )
          sub_140418E4C(v60);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v4;
}
