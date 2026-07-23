/*
 * XREFs of sub_14062AE30 @ 0x14062AE30
 * Callers:
 *     sub_1409D9740 @ 0x1409D9740 (sub_1409D9740.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045F78C @ 0x14045F78C (sub_14045F78C.c)
 *     sub_1409D8E00 @ 0x1409D8E00 (sub_1409D8E00.c)
 *     sub_1409DA070 @ 0x1409DA070 (sub_1409DA070.c)
 *     sub_1409DA634 @ 0x1409DA634 (sub_1409DA634.c)
 */

__int64 __fastcall sub_14062AE30(
        PEX_SPIN_LOCK SpinLock,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v9; // r15
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rbx
  __int64 v13; // rsi
  bool v14; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v17; // r9
  int v18; // eax
  int v19; // edi
  __int64 v20; // rax
  int v21; // ecx
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  __int64 v24; // r8
  int v25; // eax
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  __int64 v29; // r8
  int v30; // eax
  __int64 v32; // [rsp+48h] [rbp-31h] BYREF
  __int64 v33; // [rsp+50h] [rbp-29h] BYREF
  BOOL v34; // [rsp+58h] [rbp-21h]
  unsigned __int64 v35; // [rsp+60h] [rbp-19h]
  __int128 v36; // [rsp+68h] [rbp-11h] BYREF

  v32 = 0LL;
  v36 = 0LL;
  v35 = a2;
  v33 = a3;
  v9 = sub_14045F78C(SpinLock);
  if ( *((_QWORD *)SpinLock + 9) != a6 )
    __int2c();
  v10 = *((_QWORD *)SpinLock + 1);
  if ( (SpinLock[4] & 1) != 0 && v10 )
    v10 ^= (unsigned __int64)(SpinLock + 2);
  while ( 1 )
  {
    if ( !v10 )
    {
      v12 = 0LL;
LABEL_17:
      __int2c();
      goto LABEL_18;
    }
    if ( a2 > *(_QWORD *)(v10 + 32) )
    {
      v11 = *(_QWORD *)(v10 + 8);
      goto LABEL_11;
    }
    if ( a2 >= *(_QWORD *)(v10 + 24) )
      break;
    v11 = *(_QWORD *)v10;
LABEL_11:
    if ( (SpinLock[4] & 1) != 0 && v11 )
      v10 ^= v11;
    else
      v10 = v11;
  }
  v12 = (_QWORD *)(v10 - 24);
  if ( v10 == 24 )
    goto LABEL_17;
LABEL_18:
  if ( v12[6] != a2 )
    __int2c();
  if ( v12[7] != a4 + a2 - 1 )
    __int2c();
  if ( (v12[8] & 1) != 0 )
    __int2c();
  v13 = v12[2];
  if ( *(_QWORD *)(v13 + 24) != v33 )
    __int2c();
  v14 = *(_QWORD *)(v13 + 56) == 0LL;
  v34 = (a5 & 2) != 0;
  if ( !v14 )
    goto LABEL_56;
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v17 = *((_QWORD *)CurrentPrcb + 4375);
        v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v14 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
        *(_DWORD *)(v17 + 20) &= v18;
        if ( v14 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8((unsigned __int8)v9);
  v19 = sub_1409DA070((_DWORD)SpinLock, v33, a4, (a5 & 2) != 0, (__int64)&v32);
  if ( v19 >= 0 )
  {
    v9 = sub_14045F78C(SpinLock);
    if ( (v12[8] & 1) != 0 )
      __int2c();
    if ( !*(_QWORD *)(v13 + 56) )
    {
      v20 = v32;
      v32 = 0LL;
      *(_QWORD *)(v13 + 56) = v20;
      if ( (a5 & 2) != 0 )
      {
        *(_DWORD *)(v13 + 64) |= 1u;
        goto LABEL_40;
      }
LABEL_57:
      v21 = 1;
      goto LABEL_41;
    }
LABEL_56:
    if ( (a5 & 2) == 0 )
      goto LABEL_57;
LABEL_40:
    v21 = 0;
LABEL_41:
    if ( v21 == ((*(_DWORD *)(v13 + 64) & 1) == 0) )
    {
      *((_DWORD *)v12 + 16) |= 1u;
      ++*((_QWORD *)SpinLock + 5);
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v27 = KeGetCurrentIrql();
          if ( v27 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v27 >= 2u )
          {
            v28 = KeGetCurrentPrcb();
            v29 = *((_QWORD *)v28 + 4375);
            v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v14 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
            *(_DWORD *)(v29 + 20) &= v30;
            if ( v14 )
              sub_140418E4C((__int64)v28);
          }
        }
      }
      __writecr8((unsigned __int8)v9);
      *(_QWORD *)&v36 = v35;
      *((_QWORD *)&v36 + 1) = a4;
      sub_1409D8E00(&v36, &v33, 1LL, a5, 0, 0, a6);
      v19 = 0;
    }
    else
    {
      __int2c();
      v19 = -1073741755;
      if ( v9 != -1 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v22 = KeGetCurrentIrql();
            if ( v22 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v22 >= 2u )
            {
              v23 = KeGetCurrentPrcb();
              v24 = *((_QWORD *)v23 + 4375);
              v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
              v14 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
              *(_DWORD *)(v24 + 20) &= v25;
              if ( v14 )
                sub_140418E4C((__int64)v23);
            }
          }
        }
        __writecr8((unsigned __int8)v9);
      }
    }
  }
  if ( v32 )
    sub_1409DA634(SpinLock, v32);
  return (unsigned int)v19;
}
