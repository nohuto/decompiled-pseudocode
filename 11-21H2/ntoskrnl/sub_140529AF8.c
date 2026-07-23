/*
 * XREFs of sub_140529AF8 @ 0x140529AF8
 * Callers:
 *     sub_14051ABD8 @ 0x14051ABD8 (sub_14051ABD8.c)
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

__int64 __fastcall sub_140529AF8(__int64 a1, __int64 a2, int a3, __int64 a4, unsigned __int64 a5, unsigned __int64 a6)
{
  int v6; // r10d
  __int64 v7; // r15
  __int64 v8; // rbp
  unsigned __int64 v9; // r13
  int v10; // r14d
  __int64 v11; // rbx
  unsigned int v13; // r11d
  int v14; // r9d
  __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  void *v22; // rcx
  __int64 v23; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v26; // r9
  int v27; // eax
  bool v28; // zf
  unsigned int v29; // ecx
  __int64 v30; // r8
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  int v33; // r8d
  __int64 v34; // r10
  unsigned int v35; // esi
  int v36; // eax
  __int64 v37; // r9
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r9
  int v40; // eax
  __int64 v41; // r8
  unsigned int v43; // [rsp+30h] [rbp-A8h]
  char v44; // [rsp+34h] [rbp-A4h]
  unsigned int v45; // [rsp+38h] [rbp-A0h]
  __int64 v47; // [rsp+40h] [rbp-98h]
  __int64 v48; // [rsp+40h] [rbp-98h]
  __int64 v49; // [rsp+48h] [rbp-90h] BYREF
  __int64 v50; // [rsp+50h] [rbp-88h]
  PKSPIN_LOCK SpinLock; // [rsp+58h] [rbp-80h]
  __int64 v52; // [rsp+60h] [rbp-78h]
  _OWORD v53[3]; // [rsp+68h] [rbp-70h] BYREF

  v6 = *(_DWORD *)(a2 + 28);
  v7 = *(_QWORD *)(a2 + 16);
  v8 = 0LL;
  v9 = a6;
  memset(v53, 0, sizeof(v53));
  v10 = 1 << v6;
  LODWORD(v11) = 0;
  *(_QWORD *)&v53[0] = v7;
  v13 = 0;
  v50 = a4;
  v44 = v6;
  v45 = 1 << v6;
  v43 = 0;
  v52 = a6;
  v49 = 0LL;
  if ( !a5 )
    return 0LL;
  while ( 1 )
  {
    v14 = *(_DWORD *)(a2 + 24);
    if ( (unsigned int)v11 < v14 - 1 )
      break;
LABEL_22:
    v29 = *(_DWORD *)(a2 + 4LL * (unsigned int)v11 + 36);
    if ( a3 )
    {
      if ( v29 < 0x40 )
        v32 = (1LL << v29) - 1;
      else
        LODWORD(v32) = -1;
      v33 = v32 & (v9 >> *(_DWORD *)(a2 + 4LL * (unsigned int)v11 + 60));
      v34 = v7 + (unsigned int)(v33 << v6);
      v35 = (1 << *(_DWORD *)(a2 + 4LL * (unsigned int)(v14 - 1) + 36)) - v33;
      if ( (unsigned int)a5 - v13 <= v35 )
        v35 = a5 - v13;
      v48 = v34;
      v36 = sub_14042A5E0(v34, v50 + 8LL * v13);
      v8 += (unsigned int)(v36 << 12);
      v49 = v8;
      if ( v36 != v35 )
      {
        sub_14052A328(a2, &v49, v52);
        return 3221225485LL;
      }
      if ( !byte_140C4BE80 )
        KeInvalidateRangeAllCachesNoIpi(v48, v10 * v35);
      v13 = v43;
      LODWORD(v31) = v35;
      v30 = v9 + ((unsigned __int64)v35 << 12);
    }
    else
    {
      v30 = ~((1LL << ((unsigned __int8)v29 + 12)) - 1) & ((1LL << ((unsigned __int8)v29 + 12)) + v9);
      v31 = (v30 - v9) >> 12;
    }
    v13 += v31;
    v43 = v13;
    if ( (_DWORD)v11 )
    {
      do
      {
        v37 = (unsigned int)(v11 - 1);
        if ( ((1LL << *(_DWORD *)(a2 + 4 * v37 + 60)) & v30) == (v9 & (1LL << *(_DWORD *)(a2 + 4 * v37 + 60))) )
          break;
        LODWORD(v11) = v11 - 1;
      }
      while ( (_DWORD)v37 );
    }
    v9 = v30;
    v7 = *((_QWORD *)v53 + (unsigned int)v11);
    if ( v13 >= a5 )
      return 0LL;
    LOBYTE(v6) = v44;
  }
  v15 = (unsigned int)v11;
  while ( 1 )
  {
    v16 = *(_DWORD *)(a2 + 4 * v15 + 36);
    v17 = v7 + (1 << v16 << v6);
    if ( v16 < 0x40 )
      v18 = (1LL << v16) - 1;
    else
      LODWORD(v18) = -1;
    v19 = (unsigned int)v18 & (unsigned int)(v9 >> *(_DWORD *)(a2 + 4 * v15 + 60));
    v47 = v19;
    v20 = *(_QWORD *)(v17 + 8 * v19);
    if ( !v20 )
      break;
LABEL_20:
    v11 = (unsigned int)(v11 + 1);
    v7 = v20;
    v15 = (unsigned int)v11;
    *((_QWORD *)v53 + v11) = v20;
    if ( (unsigned int)v11 >= v14 - 1 )
    {
      v8 = v49;
      v10 = v45;
      v13 = v43;
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
    LOBYTE(v6) = v44;
    v20 = *(_QWORD *)(v17 + 8 * v47);
    goto LABEL_20;
  }
  v22 = sub_140529428(a2, (int)v11 + 1, 0LL);
  *(_QWORD *)(v17 + 8 * v19) = v22;
  if ( v22 )
  {
    MmGetPhysicalAddress(v22);
    v23 = v7 + (unsigned int)((_DWORD)v19 << v44);
    sub_14042A5E0(v23, (unsigned int)(*(_DWORD *)(a2 + 24) - v11 - 1));
    if ( !byte_140C4BE80 )
      KeInvalidateRangeAllCachesNoIpi(v23, v45);
    goto LABEL_12;
  }
  KeReleaseSpinLockFromDpcLevel(SpinLock);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v38 = KeGetCurrentIrql();
      if ( v38 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v38 >= 2u )
      {
        v39 = KeGetCurrentPrcb();
        v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
        v41 = *((_QWORD *)v39 + 4375);
        v28 = (v40 & *(_DWORD *)(v41 + 20)) == 0;
        *(_DWORD *)(v41 + 20) &= v40;
        if ( v28 )
          sub_140418E4C((__int64)v39);
      }
    }
  }
  __writecr8(v21);
  return 3221225626LL;
}
