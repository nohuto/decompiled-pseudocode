/*
 * XREFs of sub_1409E971C @ 0x1409E971C
 * Callers:
 *     sub_1406ECACC @ 0x1406ECACC (sub_1406ECACC.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1402E10FC @ 0x1402E10FC (sub_1402E10FC.c)
 *     sub_1402E1C80 @ 0x1402E1C80 (sub_1402E1C80.c)
 *     sub_1402E1CBC @ 0x1402E1CBC (sub_1402E1CBC.c)
 *     sub_1402E29C8 @ 0x1402E29C8 (sub_1402E29C8.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140634830 @ 0x140634830 (sub_140634830.c)
 *     sub_1406C1524 @ 0x1406C1524 (sub_1406C1524.c)
 *     sub_1406F0614 @ 0x1406F0614 (sub_1406F0614.c)
 *     sub_1406F1AC4 @ 0x1406F1AC4 (sub_1406F1AC4.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_140790CF8 @ 0x140790CF8 (sub_140790CF8.c)
 *     sub_1407968D0 @ 0x1407968D0 (sub_1407968D0.c)
 *     sub_140798BE4 @ 0x140798BE4 (sub_140798BE4.c)
 *     sub_140798C10 @ 0x140798C10 (sub_140798C10.c)
 *     sub_140798CFC @ 0x140798CFC (sub_140798CFC.c)
 *     sub_140798D30 @ 0x140798D30 (sub_140798D30.c)
 *     sub_1408836B4 @ 0x1408836B4 (sub_1408836B4.c)
 */

__int64 __fastcall sub_1409E971C(unsigned int *a1)
{
  unsigned int v1; // r15d
  __int64 v3; // r12
  unsigned int v4; // r14d
  signed int v6; // r13d
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD **v10; // r14
  __int16 v11; // dx
  _QWORD *i; // rsi
  __int64 v13; // rsi
  __int64 v14; // rbx
  unsigned int v15; // ebx
  __int64 v16; // rcx
  _QWORD *v17; // r8
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int32 v20; // eax
  signed __int64 j; // rcx
  signed __int64 v22; // rax
  __int64 v23; // r14
  _QWORD *v24; // r13
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rax
  signed __int32 v29; // r15d
  signed __int32 v30; // esi
  unsigned int *v31; // rsi
  unsigned __int64 v32; // rdx
  __int64 v33; // r8
  char *k; // rax
  unsigned int *v35; // rcx
  int v36; // ecx
  signed __int32 v37; // eax
  unsigned int v38; // r10d
  signed __int64 v39; // rsi
  unsigned int v40; // edx
  __int64 v41; // r8
  signed __int64 v42; // r9
  signed __int64 v43; // rax
  signed __int64 v44; // rtt
  __int64 m; // rbx
  unsigned int *n; // rax
  signed __int64 v47; // r8
  __int64 v48; // r9
  signed __int64 v49; // rax
  signed __int64 v50; // rtt
  unsigned int *v51; // rdx
  void *v52; // rcx
  int v53; // [rsp+28h] [rbp-59h]
  unsigned int v54; // [rsp+2Ch] [rbp-55h] BYREF
  _DWORD v55[30]; // [rsp+30h] [rbp-51h] BYREF

  v1 = a1[1];
  v3 = *a1;
  v54 = 0;
  v4 = sub_1402E1C80((__int64)a1);
  if ( (unsigned __int8)byte_140C15F70 > 3u )
    _InterlockedOr((volatile signed __int32 *)a1 + 204, 4u);
  if ( !*((_QWORD *)a1 + 24) )
    return 0LL;
  v53 = sub_1406F0614((CEnumMediaTypes *)a1, 0, 0LL);
  v6 = v53;
  if ( v53 < 0 )
    goto LABEL_104;
  if ( (a1[3] & 0x40000) != 0 )
  {
    memset(v55, 0, sizeof(v55));
    v7 = sub_140347DB0();
    v8 = sub_1407968D0(v7[108], qword_140041DB8, 0);
    if ( v8 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v8 + 51), 0LL);
      v10 = (_QWORD **)(v8 + 7);
      v8[52] = KeGetCurrentThread();
      if ( *v10 == v10 || !sub_1402E10FC((__int64)v8, *a1, &v54) )
      {
        v8[52] = 0LL;
        ExReleasePushLockEx((ULONG_PTR)(v8 + 51), 0LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        v55[0] = 3;
        v55[28] = 2;
        v55[18] = 2;
        HIWORD(v55[19]) = v11;
        for ( i = *v10; i != v10; i = (_QWORD *)*i )
          sub_140790CF8((__int64)i, (__int64)v55);
        v8[52] = 0LL;
        ExReleasePushLockEx((ULONG_PTR)(v8 + 51), 0LL);
        KeLeaveCriticalRegion();
        v13 = _InterlockedExchange64((volatile __int64 *)a1 + 16, 0LL);
        if ( v13 )
        {
          do
          {
            v14 = *(_QWORD *)(v13 + 32);
            sub_140798CFC(v13);
            v6 = sub_140798C10((__int64)a1, (unsigned int *)v13, v14 == 0);
            sub_140798BE4((__int64)a1, v13, v6);
            v13 = v14;
          }
          while ( v14 );
        }
        sub_1406F1AC4((__int64)a1, 0);
      }
    }
    goto LABEL_104;
  }
  if ( v4 )
  {
    v15 = v54;
    v16 = 0LL;
    do
    {
      if ( (a1[3] & 0x10000000) != 0 )
      {
        v17 = a1 + 32;
      }
      else
      {
        v18 = *((_QWORD *)a1 + 137);
        if ( v18 == qword_140D05008 )
          v17 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_140348800(v15) + 34472) + 320LL) + 8 * v3);
        else
          v17 = (_QWORD *)(*(_QWORD *)((v16 << 6) + *(_QWORD *)(v18 + 4144)) + 8 * v3);
      }
      v19 = *v17 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v19 )
      {
        v20 = _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 8), v1);
        if ( v20 <= v1 )
          *(_DWORD *)(v19 + 4) = v20;
        _m_prefetchw(v17);
        for ( j = *v17; (v19 ^ j) <= 0xF; j = v22 )
        {
          v22 = _InterlockedCompareExchange64(v17, 0LL, j);
          if ( j == v22 )
            break;
        }
        if ( (j & 0xFFFFFFFFFFFFFFF0uLL) == v19 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)((j & 0xFFFFFFFFFFFFFFF0uLL) + 12), -(j & 0xF));
          sub_1402E1CBC((__int64)a1, v19);
        }
        v15 = v54;
      }
      v54 = ++v15;
      v16 = v15;
    }
    while ( v15 < v4 );
  }
  sub_1402E29C8((__int64)a1);
  if ( (a1[3] & 0x4000000) != 0 )
  {
    sub_140634830((__int64)a1);
    v23 = *((_QWORD *)a1 + 101) + 1LL;
    if ( v23 < 0 )
      goto LABEL_58;
    v24 = a1 + 20;
    while ( 1 )
    {
      --v23;
      v25 = 0LL;
      v26 = *v24 - 56LL;
      if ( (_QWORD *)*v24 == v24 )
        v26 = 0LL;
      if ( !v26 )
        goto LABEL_57;
      while ( 1 )
      {
        v27 = *(_QWORD *)(v26 + 24);
        if ( v27 == v23 )
          break;
        if ( v27 < v23 && (!v25 || v27 > *(_QWORD *)(v25 + 24)) )
          v25 = v26;
        v28 = *(_QWORD **)(v26 + 56);
        v26 = (__int64)(v28 - 7);
        if ( v28 == v24 )
          v26 = 0LL;
        if ( !v26 )
          goto LABEL_51;
      }
      v25 = v26;
LABEL_51:
      if ( !v25 )
      {
LABEL_57:
        v6 = v53;
        goto LABEL_58;
      }
      v29 = *(_DWORD *)(v25 + 44);
      if ( (unsigned int)(v29 - 4) <= 1 )
      {
        v30 = _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 44), 3, v29);
        if ( v29 == v30 )
        {
          if ( *(_QWORD *)(v25 + 24) == v23 )
          {
            sub_140798CFC(v25);
            if ( v30 == 5 )
            {
              if ( *(_DWORD *)(v25 + 8) == 72 )
              {
                _InterlockedExchange((volatile __int32 *)(v25 + 44), 0);
                goto LABEL_56;
              }
              v31 = (unsigned int *)(v25 + 72);
              v32 = v25 + *(unsigned int *)(v25 + 8);
              *(_QWORD *)(v25 + 104) = 0LL;
              v33 = *(unsigned int *)(v25 + 72);
              for ( k = (char *)(v25 + 72 + v33); (unsigned __int64)k < v32; k = (char *)v31 + *v31 )
              {
                v35 = v31;
                v31 = (unsigned int *)((char *)v31 + (unsigned int)v33);
                *((_QWORD *)v31 + 4) = v35;
                LODWORD(v33) = *v31;
              }
              do
              {
                if ( (unsigned int)sub_140798D30((__int64)a1, (__int64)v31, 64) == -2147483614 )
                {
                  v36 = v53;
                }
                else
                {
                  v36 = sub_1406C1524((__int64)a1, v31);
                  v53 = v36;
                }
                v31 = (unsigned int *)*((_QWORD *)v31 + 4);
              }
              while ( v31 );
              v24 = a1 + 20;
              v37 = 5;
            }
            else
            {
              if ( v30 != 4 )
                goto LABEL_56;
              if ( (unsigned int)sub_140798D30((__int64)a1, v25, 0) == -2147483614 )
              {
                v36 = v53;
              }
              else
              {
                v36 = sub_1406C1524((__int64)a1, (unsigned int *)v25);
                v53 = v36;
              }
              v37 = 4;
            }
            _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 44), v29, v37);
            if ( v36 < 0 )
              goto LABEL_57;
          }
          else
          {
            _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 44), v29, 3);
          }
        }
      }
LABEL_56:
      if ( v23 < 0 )
        goto LABEL_57;
    }
  }
  v38 = sub_1402E1C80((__int64)a1);
  v39 = 0LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 164, *((_QWORD *)a1 + 101), -1LL) != -1 )
    return 3221225539LL;
  if ( *((_QWORD *)a1 + 162) )
  {
    v40 = 0;
    if ( v38 )
    {
      v41 = 0LL;
      do
      {
        v42 = *(_QWORD *)(v41 + *((_QWORD *)a1 + 162));
        v43 = *(_QWORD *)(v41 + *((_QWORD *)a1 + 163));
        if ( v42 > v43 )
        {
          do
          {
            v44 = v43;
            v43 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(*((_QWORD *)a1 + 163) + 8LL * v40),
                    v42,
                    v43);
          }
          while ( v44 != v43 && v42 > v43 );
        }
        ++v40;
        v41 += 8LL;
      }
      while ( v40 < v38 );
    }
  }
  for ( m = sub_1408836B4((__int64)a1, *((_QWORD *)a1 + 164)); m; m = sub_1408836B4((__int64)a1, *((_QWORD *)a1 + 164)) )
  {
    sub_140798CFC(m);
    if ( (unsigned int)sub_140798D30((__int64)a1, m, 0) != -2147483614 )
    {
      v6 = sub_1406C1524((__int64)a1, (unsigned int *)m);
      if ( !v39 )
        v39 = *(_QWORD *)(m + 16);
    }
    _InterlockedDecrement64((volatile signed __int64 *)a1 + 164);
    _InterlockedExchange((volatile __int32 *)(m + 44), 0);
    if ( v6 < 0 )
      break;
  }
  if ( *((_QWORD *)a1 + 163) )
  {
    for ( n = (unsigned int *)*((_QWORD *)a1 + 10); ; n = (unsigned int *)*((_QWORD *)v51 + 7) )
    {
      v51 = n - 14;
      if ( n == a1 + 20 )
        v51 = 0LL;
      if ( !v51 )
        break;
      v47 = *((_QWORD *)v51 + 2);
      v48 = *((unsigned __int16 *)v51 + 20);
      if ( v47 < v39 && *((_QWORD *)v51 + 3) <= *((_QWORD *)a1 + 164) )
      {
        v49 = *(_QWORD *)(*((_QWORD *)a1 + 163) + 8 * v48);
        do
        {
          if ( v47 <= v49 )
            break;
          v50 = v49;
          v49 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)a1 + 163) + 8 * v48), v47, v49);
        }
        while ( v50 != v49 );
      }
    }
  }
LABEL_58:
  sub_1406F1AC4((__int64)a1, 0);
  *((_QWORD *)a1 + 164) = -1LL;
  a1[62] = 0;
LABEL_104:
  v52 = (void *)*((_QWORD *)a1 + 100);
  if ( v52 )
  {
    ZwClose(v52);
    *((_QWORD *)a1 + 100) = 0LL;
  }
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 38));
  return (unsigned int)v6;
}
