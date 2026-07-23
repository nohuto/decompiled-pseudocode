/*
 * XREFs of sub_1405C0828 @ 0x1405C0828
 * Callers:
 *     sub_1405C14D4 @ 0x1405C14D4 (sub_1405C14D4.c)
 * Callees:
 *     sub_140200CF0 @ 0x140200CF0 (sub_140200CF0.c)
 *     sub_14026A28C @ 0x14026A28C (sub_14026A28C.c)
 *     sub_14026E05C @ 0x14026E05C (sub_14026E05C.c)
 *     sub_14026E1F4 @ 0x14026E1F4 (sub_14026E1F4.c)
 *     sub_1402E89B0 @ 0x1402E89B0 (sub_1402E89B0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14057F4C8 @ 0x14057F4C8 (sub_14057F4C8.c)
 *     sub_1405C1154 @ 0x1405C1154 (sub_1405C1154.c)
 *     sub_1405C14D4 @ 0x1405C14D4 (sub_1405C14D4.c)
 *     sub_1405C184C @ 0x1405C184C (sub_1405C184C.c)
 *     sub_1405C3044 @ 0x1405C3044 (sub_1405C3044.c)
 */

__int64 __fastcall sub_1405C0828(__int64 a1, int a2, unsigned __int64 a3, int a4, char a5, _QWORD *a6)
{
  _QWORD *v6; // r13
  int v7; // r14d
  int v8; // ebx
  unsigned int v11; // edi
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // r11
  int v15; // r10d
  int v16; // eax
  unsigned __int64 v17; // r15
  __int64 v18; // r9
  unsigned int v19; // r8d
  __int64 **v20; // r12
  volatile LONG *v21; // r14
  int v22; // esi
  unsigned __int64 i; // r13
  __int64 *v24; // rax
  __int64 v25; // rcx
  __int64 **v26; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v29; // r9
  int v30; // eax
  bool v31; // zf
  unsigned int v32; // r14d
  _QWORD *v33; // rsi
  unsigned __int64 v34; // rbx
  struct _KPRCB *v35; // r8
  __int64 v37; // rdx
  signed __int32 v38; // eax
  unsigned __int64 v39; // rbx
  _QWORD *v40; // rsi
  _QWORD *v41; // rcx
  _QWORD *v42; // rax
  KIRQL v43; // si
  unsigned int v44; // r9d
  _QWORD *j; // r8
  unsigned __int64 *v46; // rcx
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r9
  __int64 v49; // r8
  int v50; // eax
  int v51; // [rsp+20h] [rbp-C9h]
  int v52; // [rsp+54h] [rbp-95h]
  int v53; // [rsp+58h] [rbp-91h]
  __int64 v55; // [rsp+68h] [rbp-81h]
  __int64 v57; // [rsp+78h] [rbp-71h]
  _QWORD v59[12]; // [rsp+90h] [rbp-59h] BYREF

  v6 = a6;
  v7 = a2;
  v8 = a4;
  memset(v59, 0, sizeof(v59));
  v52 = sub_140200CF0(a1);
  v11 = 0;
  v12 = *((_QWORD *)KeGetCurrentThread() + 23);
  v53 = *(_DWORD *)(a1 + 48) & 0x1A00000;
  v55 = *(_QWORD *)(v12 + 1680) + 48LL;
  v13 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v12 + 1838));
  v57 = v13;
  if ( !*(_QWORD *)(*(_QWORD *)(v12 + 1680) + 328LL) && !sub_1405C184C(v13) )
    return 3221225626LL;
  if ( v8 )
  {
    if ( v8 - 1 >= (unsigned int)(unsigned __int16)word_140D05000 )
      return 3221225485LL;
  }
  else
  {
    sub_14057F4C8(a1);
  }
  sub_14026E1F4(v59);
  v16 = v15 * (unsigned __int16)word_140D05000;
  v17 = a3 >> 4;
  *(_DWORD *)(v18 + 24) = *(_DWORD *)(v13 + 15912);
  v20 = (__int64 **)(v18 + 8 * (v19 + (__int64)v16 + 2 * (v19 + (__int64)v16 + 2)));
  if ( v20[2] )
  {
    v21 = (volatile LONG *)(v14 + 288);
    v22 = 0;
    for ( i = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v14 + 288)); v17; --v17 )
    {
      v24 = *v20;
      if ( *v20 == (__int64 *)v20 )
        break;
      v25 = *v24;
      if ( (__int64 **)v24[1] != v20 )
        goto LABEL_53;
      if ( *(__int64 **)(v25 + 8) != v24 )
        goto LABEL_53;
      *v20 = (__int64 *)v25;
      *(_QWORD *)(v25 + 8) = v20;
      v20[2] = (__int64 *)((char *)v20[2] - 1);
      v26 = (__int64 **)a6[7];
      if ( *v26 != a6 + 6 )
        goto LABEL_53;
      *v24 = (__int64)(a6 + 6);
      v24[1] = (__int64)v26;
      *v26 = v24;
      a6[7] = v24;
      ++a6[8];
      if ( (v24[2] & 0x3E0) != 0 )
        ++v22;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v21);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)i <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v29 = *((_QWORD *)CurrentPrcb + 4375);
          v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)i + 1));
          v31 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
          *(_DWORD *)(v29 + 20) &= v30;
          if ( v31 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(i);
    v6 = a6;
    if ( v53 != 27262976 )
    {
      if ( v22 )
      {
        v32 = 0;
        v33 = (_QWORD *)a6[6];
        if ( a6[8] )
        {
          do
          {
            if ( (v33[2] & 0x3E0LL) != 0 )
            {
              sub_14026A28C((__int64)v33, 2u, v52);
              v33[2] &= 0xFFFFFFFFFFFFFC1FuLL;
            }
            v33 = (_QWORD *)*v33;
            ++v32;
          }
          while ( (unsigned __int64)v32 < a6[8] );
          v8 = a4;
        }
      }
    }
    if ( !v17 )
      return 0LL;
    v13 = v57;
    v7 = a2;
  }
  sub_14026E1F4(v59);
  v51 = v8;
  v34 = 512LL;
  if ( (int)sub_1405C14D4(a1, v7 & 0xFFE00000, 512, 512, v51, a5, 0LL, 16, (__int64)v59) < 0 )
    return 3221225626LL;
  if ( (ULONG_PTR *)v13 != &StartContext )
    goto LABEL_44;
  v35 = KeGetCurrentPrcb();
  v37 = *((int *)v35 + 8615);
  if ( (_DWORD)v37 == -1 )
    goto LABEL_44;
  if ( (unsigned __int64)(v37 + 512) <= 0x100 )
  {
    do
    {
      v38 = _InterlockedCompareExchange((volatile signed __int32 *)v35 + 8615, v37 + 512, v37);
      v31 = (_DWORD)v37 == v38;
      LODWORD(v37) = v38;
      if ( v31 )
        goto LABEL_45;
    }
    while ( v38 != -1 && (unsigned __int64)(v38 + 512LL) <= 0x100 );
  }
  if ( (int)v37 > 192 && (_DWORD)v37 == _InterlockedCompareExchange((volatile signed __int32 *)v35 + 8615, 192, v37) )
    v34 = (int)v37 - 192 + 512LL;
  if ( v34 )
LABEL_44:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 16960), v34);
LABEL_45:
  v39 = 32 - v17;
  if ( v17 )
  {
    v40 = v6 + 6;
    while ( 1 )
    {
      v41 = (_QWORD *)(48 * sub_1405C3044(v59, 2LL, v35) - 0x220000000000LL);
      v42 = (_QWORD *)v6[7];
      if ( (_QWORD *)*v42 != v40 )
        break;
      *v41 = v40;
      v41[1] = v42;
      *v42 = v41;
      v6[7] = v41;
      ++v6[8];
      if ( !--v17 )
        goto LABEL_49;
    }
LABEL_53:
    __fastfail(3u);
  }
LABEL_49:
  v43 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v55 + 288));
  if ( !v20[2] )
  {
    v44 = 0;
    for ( j = (_QWORD *)v59[6]; (unsigned __int64)v44 < v59[8]; ++v44 )
    {
      v46 = j + 2;
      if ( v53 == 27262976 )
        sub_1402E89B0(v46);
      else
        *v46 &= 0xFFFFFFFFFFFFFC1FuLL;
      j = (_QWORD *)*j;
    }
    sub_1405C1154(v20, &v59[6]);
    v39 = 0LL;
    v20[2] = (__int64 *)v59[8];
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v55 + 288));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v47 = KeGetCurrentIrql();
      if ( v47 <= 0xFu && v43 <= 0xFu && v47 >= 2u )
      {
        v48 = KeGetCurrentPrcb();
        v49 = *((_QWORD *)v48 + 4375);
        v50 = ~(unsigned __int16)(-1LL << (v43 + 1));
        v31 = (v50 & *(_DWORD *)(v49 + 20)) == 0;
        *(_DWORD *)(v49 + 20) &= v50;
        if ( v31 )
          sub_140418E4C((__int64)v48);
      }
    }
  }
  __writecr8(v43);
  if ( v39 )
  {
    LOBYTE(v11) = (*(_DWORD *)(a1 + 48) & 0x1A00000) == 27262976;
    sub_14026E05C(v57, (__int64)v59, v11, 0LL);
  }
  return 0LL;
}
