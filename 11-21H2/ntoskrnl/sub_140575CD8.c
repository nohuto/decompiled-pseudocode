/*
 * XREFs of sub_140575CD8 @ 0x140575CD8
 * Callers:
 *     sub_140560BB0 @ 0x140560BB0 (sub_140560BB0.c)
 *     KeDispatchSecondaryInterrupt @ 0x14056EBB0 (KeDispatchSecondaryInterrupt.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeGetCurrentProcessorNumberEx @ 0x140355110 (KeGetCurrentProcessorNumberEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045A41A @ 0x14045A41A (sub_14045A41A.c)
 *     sub_14045B728 @ 0x14045B728 (sub_14045B728.c)
 *     sub_14045B77E @ 0x14045B77E (sub_14045B77E.c)
 *     sub_140560798 @ 0x140560798 (sub_140560798.c)
 *     sub_140576200 @ 0x140576200 (sub_140576200.c)
 */

char __fastcall sub_140575CD8(int a1, unsigned int a2, char a3, __int128 *a4, int *a5)
{
  int v5; // r15d
  int v6; // r12d
  __int128 *v8; // rdi
  char v9; // r13
  unsigned __int8 v10; // bl
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rdi
  unsigned int v17; // ecx
  char v18; // r15
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  __int64 v21; // r9
  int v22; // eax
  bool v23; // zf
  KSPIN_LOCK *v24; // r14
  unsigned __int8 v25; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // r9
  __int64 v30; // r8
  __int64 v31; // r14
  int v32; // eax
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r9
  __int64 v35; // r8
  int v36; // eax
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r9
  __int64 v39; // r8
  int v40; // eax
  unsigned __int8 v42; // [rsp+20h] [rbp-61h] BYREF
  char v43; // [rsp+21h] [rbp-60h]
  int v44; // [rsp+24h] [rbp-5Dh]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+28h] [rbp-59h] BYREF
  unsigned int v46; // [rsp+2Ch] [rbp-55h]
  int v47; // [rsp+30h] [rbp-51h]
  PKSPIN_LOCK SpinLock; // [rsp+38h] [rbp-49h]
  unsigned int v49; // [rsp+40h] [rbp-41h]
  int v50; // [rsp+44h] [rbp-3Dh]
  __int128 *v51; // [rsp+48h] [rbp-39h]
  __int64 CurrentIrql; // [rsp+50h] [rbp-31h]
  int *v53; // [rsp+58h] [rbp-29h]
  _GROUP_AFFINITY Affinity; // [rsp+60h] [rbp-21h] BYREF
  __int128 v55; // [rsp+70h] [rbp-11h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+80h] [rbp-1h] BYREF

  v46 = a2;
  v44 = a1;
  v5 = a1;
  v42 = 0;
  v53 = a5;
  v6 = 0;
  ProcNumber = 0;
  v55 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v8 = &v55;
  v43 = 0;
  if ( a4 )
    v8 = a4;
  v47 = 0;
  v51 = v8;
  v9 = 0;
  PreviousAffinity = 0LL;
  *((_QWORD *)v8 + 1) = v8;
  *(_QWORD *)v8 = v8;
  if ( a1 )
  {
    v13 = a2 - 256;
    SpinLock = (PKSPIN_LOCK)(qword_140C2B0D8 + 48 * v13);
    sub_14045A41A(SpinLock, &v42);
    v12 = 0LL;
    if ( (unsigned int)v13 < 0x100 )
      v12 = *(_QWORD *)(qword_140C2B0D8 + 48 * v13 + 40);
    v5 = v44;
    goto LABEL_13;
  }
  SpinLock = 0LL;
  KeGetCurrentProcessorNumberEx(&ProcNumber);
  *(_QWORD *)&Affinity.Group = ProcNumber.Group;
  Affinity.Mask = 1LL << ProcNumber.Number;
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  v10 = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v10 <= 0xFu )
  {
    v11 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v11 + 20) |= (-1 << (v10 + 1)) & 0xFFFC;
  }
  v12 = 0LL;
  v42 = v10;
  if ( v46 <= 0xFF )
  {
    _mm_lfence();
    v12 = *((_QWORD *)KeGetCurrentPrcb() + v46 + 1664);
LABEL_13:
    v10 = v42;
  }
  if ( v12 )
  {
    v14 = 1LL;
    ++*(_WORD *)(v12 + 102);
    v15 = v12;
    if ( (a3 & 1) == 0 )
      goto LABEL_22;
    while ( *(_BYTE *)(v15 + 93) )
    {
      v16 = *(_QWORD *)(v15 + 8);
      if ( !v16 )
        goto LABEL_20;
      v15 = v16 - 8;
      if ( v15 == v12 )
      {
        if ( !*(_BYTE *)(v15 + 93) )
          break;
LABEL_20:
        v15 = 0LL;
        break;
      }
    }
    if ( v15 )
    {
LABEL_22:
      v17 = 0;
      v18 = 0;
      v50 = *(_DWORD *)(v12 + 108);
      while ( (unsigned __int8)CurrentIrql <= 2u || *(_BYTE *)(v15 + 93) )
      {
        if ( (*(_DWORD *)(v15 + 104) & 1) != 0 )
        {
          v31 = *(_QWORD *)(v15 + 8);
        }
        else
        {
          ++*(_WORD *)(v15 + 102);
          v49 = v17 + 1;
          if ( v44 )
          {
            v24 = SpinLock;
            KeReleaseSpinLockFromDpcLevel(SpinLock);
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v25 = KeGetCurrentIrql();
                if ( v25 <= 0xFu && v10 <= 0xFu && v25 >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v27 = *((_QWORD *)CurrentPrcb + 4375);
                  v10 = v42;
                  v14 = -1LL << (v42 + 1);
                  v28 = ~(unsigned __int16)v14;
                  v23 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
                  *(_DWORD *)(v27 + 20) &= v28;
                  if ( v23 )
                    sub_140418E4C((__int64)CurrentPrcb);
                }
              }
            }
          }
          else
          {
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v19 = KeGetCurrentIrql();
                if ( v19 <= 0xFu && v10 <= 0xFu && v19 >= 2u )
                {
                  v20 = KeGetCurrentPrcb();
                  v21 = *((_QWORD *)v20 + 4375);
                  v10 = v42;
                  v14 = -1LL << (v42 + 1);
                  v22 = ~(unsigned __int16)v14;
                  v23 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
                  *(_DWORD *)(v21 + 20) &= v22;
                  if ( v23 )
                    sub_140418E4C((__int64)v20);
                }
              }
            }
            v24 = SpinLock;
          }
          __writecr8(v10);
          LOBYTE(v14) = v10;
          v9 = sub_140576200(v15, v14, v46);
          v6 = 2;
          if ( v44 )
          {
            sub_14045A41A(v24, &v42);
            v10 = v42;
          }
          else
          {
            v10 = KeGetCurrentIrql();
            __writecr8(0xFuLL);
            if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v10 <= 0xFu )
            {
              v29 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
              *(_DWORD *)(v29 + 20) |= (-1 << (v10 + 1)) & 0xFFFC;
            }
            v42 = v10;
          }
          v30 = (__int64)v51;
          --*(_WORD *)(v15 + 102);
          v31 = *(_QWORD *)(v15 + 8);
          sub_14045B77E(v44, v15, v30);
          v17 = v49;
          v14 = 1LL;
        }
        v15 = v31 - 8;
        if ( v50 )
        {
          if ( v9 )
            v18 = 1;
          if ( v15 == v12 )
          {
            if ( !v18 || v17 <= 1 )
            {
              v9 = 1;
              goto LABEL_66;
            }
            v17 = 0;
            v18 = 0;
            v9 = 0;
          }
        }
        else if ( v9 || v15 == v12 )
        {
          goto LABEL_66;
        }
      }
      v32 = *(_DWORD *)(v15 + 88);
      v43 = 1;
      if ( v6 != 2 )
        v6 = 1;
      v47 = v32;
LABEL_66:
      v5 = v44;
    }
    --*(_WORD *)(v12 + 102);
    v8 = v51;
    sub_14045B77E(v5, v12, (__int64)v51);
  }
  if ( v5 )
  {
    KeReleaseSpinLockFromDpcLevel(SpinLock);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v37 = KeGetCurrentIrql();
        if ( v37 <= 0xFu && v10 <= 0xFu && v37 >= 2u )
        {
          v38 = KeGetCurrentPrcb();
          v39 = *((_QWORD *)v38 + 4375);
          v10 = v42;
          v40 = ~(unsigned __int16)(-1LL << (v42 + 1));
          v23 = (v40 & *(_DWORD *)(v39 + 20)) == 0;
          *(_DWORD *)(v39 + 20) &= v40;
          if ( v23 )
            sub_140418E4C((__int64)v38);
        }
      }
    }
    __writecr8(v10);
  }
  else
  {
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v33 = KeGetCurrentIrql();
        if ( v33 <= 0xFu && v10 <= 0xFu && v33 >= 2u )
        {
          v34 = KeGetCurrentPrcb();
          v35 = *((_QWORD *)v34 + 4375);
          v10 = v42;
          v36 = ~(unsigned __int16)(-1LL << (v42 + 1));
          v23 = (v36 & *(_DWORD *)(v35 + 20)) == 0;
          *(_DWORD *)(v35 + 20) &= v36;
          if ( v23 )
            sub_140418E4C((__int64)v34);
        }
      }
    }
    __writecr8(v10);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  }
  if ( v43 )
    sub_140560798();
  if ( (unsigned __int8)CurrentIrql < 2u )
    sub_14045B728(v8);
  if ( v53 )
    *v53 = v6;
  return v9;
}
