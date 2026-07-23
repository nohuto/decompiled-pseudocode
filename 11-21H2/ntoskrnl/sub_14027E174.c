/*
 * XREFs of sub_14027E174 @ 0x14027E174
 * Callers:
 *     sub_14023F658 @ 0x14023F658 (sub_14023F658.c)
 *     sub_14027F03C @ 0x14027F03C (sub_14027F03C.c)
 *     sub_14059854C @ 0x14059854C (sub_14059854C.c)
 * Callees:
 *     sub_14023C8A4 @ 0x14023C8A4 (sub_14023C8A4.c)
 *     sub_14023F9CC @ 0x14023F9CC (sub_14023F9CC.c)
 *     sub_14027B820 @ 0x14027B820 (sub_14027B820.c)
 *     sub_14027E474 @ 0x14027E474 (sub_14027E474.c)
 *     sub_14027E7A4 @ 0x14027E7A4 (sub_14027E7A4.c)
 *     sub_140286D4C @ 0x140286D4C (sub_140286D4C.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_1403342D0 @ 0x1403342D0 (sub_1403342D0.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14027E174(_QWORD *a1, __int64 a2, int a3, int a4)
{
  int v4; // ebp
  _QWORD *v5; // r12
  _BYTE *v6; // rcx
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v15; // r13
  KIRQL v16; // al
  volatile LONG *v17; // rcx
  unsigned __int64 v18; // rdi
  __int64 v19; // rax
  int v20; // r13d
  _QWORD *i; // rdi
  _QWORD *v22; // rdi
  unsigned int v23; // eax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  unsigned __int64 v27; // rdi
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  __int64 v30; // r8
  int v31; // eax
  bool v32; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v35; // r9
  int v36; // eax
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r10
  __int64 v39; // r9
  int v40; // eax
  _QWORD *v41; // [rsp+40h] [rbp-88h]
  _QWORD *v42; // [rsp+48h] [rbp-80h] BYREF
  __int64 v43; // [rsp+50h] [rbp-78h]
  __int64 v44; // [rsp+58h] [rbp-70h]
  _BYTE *v45; // [rsp+60h] [rbp-68h]
  _QWORD *v46; // [rsp+68h] [rbp-60h]
  __int64 v47; // [rsp+70h] [rbp-58h]
  int v51; // [rsp+E8h] [rbp+20h]

  v4 = 0;
  v5 = a1;
  v6 = (_BYTE *)a1[1];
  v42 = 0LL;
  v47 = 0LL;
  v8 = v5[3];
  v45 = v6;
  v51 = a4 & 1;
  v9 = *(_QWORD *)v8;
  if ( (a4 & 1) != 0 && (!*(_QWORD *)(v9 + 64) || (*(_DWORD *)(v9 + 56) & 0x20) != 0) )
    return 3221225608LL;
  v10 = sub_1403342D0(v8, v6, 0xFFFFFFFFLL);
  v11 = v5[2];
  v12 = v5[4];
  v44 = v10;
  v13 = sub_1403342D0(v12, v11, 0xFFFFFFFFLL);
  CurrentThread = KeGetCurrentThread();
  v43 = v13 + 4096;
  v15 = 0LL;
  v41 = 0LL;
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockSharedEx(v9 + 104, 0LL);
  v16 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v9 + 72));
  v17 = (volatile LONG *)(v9 + 72);
  v18 = v16;
  if ( *(_QWORD *)(v9 + 40) )
  {
    v46 = *(_QWORD **)(v9 + 8);
    ExReleaseSpinLockSharedFromDpcLevel(v17);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v18 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v35 = *((_QWORD *)CurrentPrcb + 4375);
          v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
          v32 = (v36 & *(_DWORD *)(v35 + 20)) == 0;
          *(_DWORD *)(v35 + 20) &= v36;
          if ( v32 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v18);
    if ( (*(_DWORD *)(v9 + 56) & 0x20) == 0 && *(_QWORD *)(v9 + 64) )
    {
      v19 = v5[4];
      while ( 1 )
      {
        v20 = 1;
        if ( v8 == v5[3] || v8 == v19 )
          goto LABEL_70;
        v27 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 72));
        if ( *(_DWORD *)(v8 + 104) && (int)sub_140286D4C(v8, 0LL) > 1 )
          v20 = 2;
        else
          v20 = 0;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v37 = KeGetCurrentIrql();
            if ( v37 <= 0xFu && (unsigned __int8)v27 <= 0xFu && v37 >= 2u )
            {
              v38 = KeGetCurrentPrcb();
              v39 = *((_QWORD *)v38 + 4375);
              v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v27 + 1));
              v32 = (v40 & *(_DWORD *)(v39 + 20)) == 0;
              *(_DWORD *)(v39 + 20) &= v40;
              if ( v32 )
                sub_140418E4C(v38);
            }
          }
        }
        __writecr8(v27);
        if ( v20 )
        {
LABEL_70:
          if ( !v51 && (a4 & 0x20) == 0 || (unsigned int)sub_14023C8A4(v8, v5) )
          {
            for ( i = *(_QWORD **)(v8 + 80); ; i = (_QWORD *)*i )
            {
              if ( i == (_QWORD *)(v8 + 80) )
              {
                v5 = a1;
                goto LABEL_13;
              }
              v4 = sub_14027E474(v9, a2, a4, (_DWORD)i, v44, v43, (__int64)&v42);
              if ( v4 < 0 )
                break;
              v25 = v42;
              if ( v42 )
              {
                *v42 = v41;
                v41 = v25;
              }
            }
            v5 = a1;
            v8 = a1[4];
LABEL_13:
            if ( v20 == 2 )
              sub_14023F9CC((__int64 *)v8);
          }
        }
        v19 = v5[4];
        if ( v8 == v19 )
          break;
        v8 = *(_QWORD *)(v8 + 16);
      }
      if ( v4 < 0 )
        goto LABEL_19;
      v15 = v41;
    }
    v22 = v46;
    if ( v46 != (_QWORD *)(v9 + 8) )
    {
      do
      {
        v4 = sub_14027E474(v9, a2, a4, (_DWORD)v22, v44, v43, (__int64)&v42);
        if ( v4 < 0 )
          break;
        v26 = v42;
        if ( v42 )
        {
          *v42 = v15;
          v15 = v26;
        }
        v22 = (_QWORD *)*v22;
      }
      while ( v22 != (_QWORD *)(v9 + 8) );
      v41 = v15;
    }
LABEL_19:
    sub_14027E7A4(v9);
    if ( a2 )
    {
      *(_QWORD *)(a2 + 8) = v41;
    }
    else
    {
      v23 = sub_14027B820(v41, a3, a4, v9, v45);
      if ( v4 >= 0 )
        return v23;
    }
    return (unsigned int)v4;
  }
  ExReleaseSpinLockSharedFromDpcLevel(v17);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v28 = KeGetCurrentIrql();
      if ( v28 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v28 >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        v30 = *((_QWORD *)v29 + 4375);
        v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
        v32 = (v31 & *(_DWORD *)(v30 + 20)) == 0;
        *(_DWORD *)(v30 + 20) &= v31;
        if ( v32 )
          sub_140418E4C(v29);
      }
    }
  }
  __writecr8(v18);
  sub_14027E7A4(v9);
  return 0LL;
}
