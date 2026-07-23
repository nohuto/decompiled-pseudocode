/*
 * XREFs of sub_140529F08 @ 0x140529F08
 * Callers:
 *     sub_14051AA64 @ 0x14051AA64 (sub_14051AA64.c)
 *     sub_14051AC2C @ 0x14051AC2C (sub_14051AC2C.c)
 *     sub_140A61BE0 @ 0x140A61BE0 (sub_140A61BE0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x140268B50 (KeInvalidateRangeAllCachesNoIpi.c)
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140529428 @ 0x140529428 (sub_140529428.c)
 *     sub_14052A328 @ 0x14052A328 (sub_14052A328.c)
 */

__int64 __fastcall sub_140529F08(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, unsigned __int64 a6)
{
  int v6; // r11d
  unsigned __int64 v8; // r14
  __int64 v9; // rbx
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rsi
  __int64 v12; // r10
  __int64 v13; // rbp
  int v14; // r9d
  __int64 v15; // rdx
  unsigned int v16; // r8d
  unsigned __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rbp
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rsi
  void *v22; // rcx
  __int64 v23; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v26; // r9
  int v27; // eax
  bool v28; // zf
  unsigned int v29; // ecx
  unsigned __int64 v30; // r8
  __int64 v31; // rax
  int v32; // r8d
  unsigned __int64 v33; // rdx
  __int64 v34; // r15
  unsigned int v35; // esi
  unsigned __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rsi
  __int64 v39; // r9
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r9
  int v42; // eax
  __int64 v43; // r8
  char v45; // [rsp+30h] [rbp-C8h]
  int v46; // [rsp+34h] [rbp-C4h]
  unsigned int v47; // [rsp+38h] [rbp-C0h]
  __int64 v48; // [rsp+40h] [rbp-B8h]
  __int64 v49; // [rsp+48h] [rbp-B0h]
  __int64 v50; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int64 v51; // [rsp+58h] [rbp-A0h]
  __int64 v52; // [rsp+60h] [rbp-98h]
  PKSPIN_LOCK SpinLock; // [rsp+68h] [rbp-90h]
  unsigned __int64 v54; // [rsp+70h] [rbp-88h]
  _OWORD v55[3]; // [rsp+78h] [rbp-80h] BYREF

  v6 = *(_DWORD *)(a2 + 28);
  v8 = a6;
  LODWORD(v9) = 0;
  v52 = a1;
  v10 = *(_QWORD *)(a2 + 16);
  v11 = a6 + ((a5 + 4095) & 0xFFFFFFFFFFFFF000uLL);
  v46 = a3;
  v45 = v6;
  v51 = v11;
  v54 = a6;
  v47 = 1 << v6;
  v55[0] = v10;
  v12 = a4 & -(__int64)(a3 != 0);
  v13 = 0LL;
  v49 = v12;
  v50 = 0LL;
  memset(&v55[1], 0, 32);
  if ( a6 >= v11 )
    return 0LL;
  while ( 1 )
  {
    v14 = *(_DWORD *)(a2 + 24);
    if ( (unsigned int)v9 < v14 - 1 )
      break;
LABEL_22:
    v29 = *(_DWORD *)(a2 + 4LL * (unsigned int)v9 + 36);
    if ( a3 )
    {
      if ( v29 < 0x40 )
        v31 = (1LL << v29) - 1;
      else
        LODWORD(v31) = -1;
      v32 = v31 & (v8 >> *(_DWORD *)(a2 + 4LL * (unsigned int)v9 + 60));
      v33 = v11 - v8;
      v34 = v10 + (unsigned int)(v32 << v6);
      v35 = (1 << *(_DWORD *)(a2 + 4LL * (unsigned int)(v14 - 1) + 36)) - v32;
      v36 = v33 >> 12;
      if ( (unsigned int)v36 <= v35 )
        v35 = v36;
      v37 = sub_14042A5E0(v10 + (unsigned int)(v32 << v6), v12);
      v13 += (unsigned int)(v37 << 12);
      v50 = v13;
      if ( v37 != v35 )
      {
        sub_14052A328(a2, &v50, v54);
        return 3221225485LL;
      }
      if ( !byte_140C4BE80 )
        KeInvalidateRangeAllCachesNoIpi(v34, v47 * v35);
      v38 = v35 << 12;
      v12 = (unsigned int)v38 + v49;
      v49 = v12;
      v30 = v38 + v8;
    }
    else
    {
      v30 = ~((1LL << ((unsigned __int8)v29 + 12)) - 1) & ((1LL << ((unsigned __int8)v29 + 12)) + v8);
    }
    if ( (_DWORD)v9 )
    {
      do
      {
        v39 = (unsigned int)(v9 - 1);
        if ( ((1LL << *(_DWORD *)(a2 + 4 * v39 + 60)) & v30) == (v8 & (1LL << *(_DWORD *)(a2 + 4 * v39 + 60))) )
          break;
        LODWORD(v9) = v9 - 1;
      }
      while ( (_DWORD)v39 );
    }
    v11 = v51;
    v8 = v30;
    v10 = *((_QWORD *)v55 + (unsigned int)v9);
    if ( v30 >= v51 )
      return 0LL;
    LOBYTE(v6) = v45;
    a3 = v46;
  }
  v15 = (unsigned int)v9;
  while ( 1 )
  {
    v16 = *(_DWORD *)(a2 + 4 * v15 + 36);
    v17 = v10 + (1 << v16 << v6);
    if ( v16 < 0x40 )
      v18 = (1LL << v16) - 1;
    else
      LODWORD(v18) = -1;
    v19 = (unsigned int)v18 & (unsigned int)(v8 >> *(_DWORD *)(a2 + 4 * v15 + 60));
    v48 = v19;
    v20 = *(_QWORD *)(v17 + 8 * v19);
    if ( !v20 )
      break;
LABEL_20:
    v10 = v20;
    v9 = (unsigned int)(v9 + 1);
    v15 = (unsigned int)v9;
    *((_QWORD *)v55 + v9) = v20;
    if ( (unsigned int)v9 >= v14 - 1 )
    {
      v13 = v50;
      v12 = v49;
      v11 = v51;
      a3 = v46;
      goto LABEL_22;
    }
  }
  SpinLock = (PKSPIN_LOCK)(a2 + 8);
  v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 8));
  if ( *(_QWORD *)(v17 + 8 * v19) )
  {
LABEL_12:
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a2 + 8));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v21 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v26 = *((_QWORD *)CurrentPrcb + 4375);
          v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
          v28 = (v27 & *(_DWORD *)(v26 + 20)) == 0;
          *(_DWORD *)(v26 + 20) &= v27;
          if ( v28 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v21);
    v14 = *(_DWORD *)(a2 + 24);
    LOBYTE(v6) = v45;
    v20 = *(_QWORD *)(v17 + 8 * v48);
    goto LABEL_20;
  }
  v22 = sub_140529428(a2, (int)v9 + 1, v52);
  *(_QWORD *)(v17 + 8 * v19) = v22;
  if ( v22 )
  {
    MmGetPhysicalAddress(v22);
    v23 = v10 + (unsigned int)((_DWORD)v19 << v45);
    sub_14042A5E0(v23, (unsigned int)(*(_DWORD *)(a2 + 24) - v9 - 1));
    if ( !byte_140C4BE80 )
      KeInvalidateRangeAllCachesNoIpi(v23, v47);
    goto LABEL_12;
  }
  KeReleaseSpinLockFromDpcLevel(SpinLock);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v40 = KeGetCurrentIrql();
      if ( v40 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v40 >= 2u )
      {
        v41 = KeGetCurrentPrcb();
        v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
        v43 = *((_QWORD *)v41 + 4375);
        v28 = (v42 & *(_DWORD *)(v43 + 20)) == 0;
        *(_DWORD *)(v43 + 20) &= v42;
        if ( v28 )
          sub_140418E4C((__int64)v41);
      }
    }
  }
  __writecr8(v21);
  return 3221225626LL;
}
