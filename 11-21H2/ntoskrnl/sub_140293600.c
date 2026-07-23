/*
 * XREFs of sub_140293600 @ 0x140293600
 * Callers:
 *     sub_140293444 @ 0x140293444 (sub_140293444.c)
 * Callees:
 *     sub_14029394C @ 0x14029394C (sub_14029394C.c)
 *     sub_140293988 @ 0x140293988 (sub_140293988.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall sub_140293600(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rax
  unsigned int v4; // ebx
  BOOL v5; // r13d
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  __int64 v11; // r14
  LARGE_INTEGER v12; // rbp
  unsigned int v13; // r12d
  int v14; // r8d
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned int *v18; // r9
  __int64 v19; // r8
  unsigned int i; // r14d
  unsigned int v21; // ecx
  __int64 v22; // rdx
  _DWORD *v23; // rdx
  _QWORD *v24; // rbp
  __int64 v25; // rcx
  unsigned int *v26; // [rsp+20h] [rbp-68h]
  signed __int64 v27; // [rsp+28h] [rbp-60h]
  unsigned __int64 v28; // [rsp+30h] [rbp-58h]
  _QWORD *v29; // [rsp+38h] [rbp-50h]
  _DWORD *v30; // [rsp+40h] [rbp-48h]
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp-40h]
  int v32; // [rsp+90h] [rbp+8h]
  __int64 v33; // [rsp+A8h] [rbp+20h]

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  v27 = 0LL;
  v28 = 0LL;
  v5 = CurrentPrcb != (struct _KPRCB *)a1;
  v30 = 0LL;
  v29 = 0LL;
  if ( CurrentPrcb != (struct _KPRCB *)a1 )
  {
    _m_prefetchw((const void *)(a1 + 33632));
    v9 = *(_QWORD *)(a1 + 33632);
    do
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 33632), v9, v9);
    }
    while ( v10 != v9 );
    v27 = v9;
    if ( (v9 & 1) == 0 )
      return (unsigned int)-1073741823;
    v28 = *(_QWORD *)(a1 + 33640);
  }
  v11 = *(_QWORD *)(a1 + 33600);
  v26 = *(unsigned int **)(a1 + 33608);
  v33 = v11;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v12 = PerformanceCounter;
  v13 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 652LL);
  v32 = *(_DWORD *)(a1 + 33092);
  if ( a2 )
  {
    v18 = v26;
    *(_OWORD *)a2 = 0LL;
    *(_OWORD *)(a2 + 16) = 0LL;
    *(_OWORD *)(a2 + 32) = 0LL;
    if ( v26 )
    {
      v19 = v11;
      if ( v11 )
      {
        for ( i = 0; ; ++i )
        {
          v21 = *v18;
          if ( *v18 >= *(_DWORD *)(v19 + 32) )
            v21 = *(_DWORD *)(v19 + 32);
          if ( i >= v21 )
          {
            v12 = PerformanceCounter;
            v11 = v33;
            *(_QWORD *)a2 = sub_14029394C(*((_QWORD *)v18 + 3), qword_140D069F8, 10000000LL);
            goto LABEL_8;
          }
          v22 = 344LL * i;
          if ( *(_BYTE *)(v22 + v19 + 1440) )
            break;
          if ( !*(_BYTE *)(v22 + v19 + 1443) )
            goto LABEL_53;
          if ( *(_BYTE *)(v22 + v19 + 1444) != 0 )
          {
LABEL_31:
            v23 = (_DWORD *)(a2 + 32);
            v24 = (_QWORD *)(a2 + 8);
            goto LABEL_34;
          }
          if ( !*(_BYTE *)(v22 + v19 + 1444) )
          {
LABEL_33:
            v23 = (_DWORD *)(a2 + 36);
            v24 = (_QWORD *)(a2 + 16);
            goto LABEL_34;
          }
          if ( -(*(_BYTE *)(v22 + v19 + 1444) != 0) == 1 )
            goto LABEL_53;
          v23 = 0LL;
          v24 = 0LL;
LABEL_34:
          if ( i == *(_DWORD *)(v19 + 20) )
          {
            v29 = v24;
            v30 = v23;
          }
          if ( v23 && v24 )
          {
            *v23 += v18[250 * i + 13] + v18[250 * i + 14];
            v25 = *(_QWORD *)&v18[250 * i + 10];
            if ( *(_DWORD *)(v19 + 20) == i )
              v25 += *(_QWORD *)(a1 + 33616);
            *v24 += sub_14029394C(v25, qword_140D069F8, 10000000LL);
            v19 = v33;
            v18 = v26;
          }
        }
        if ( *(_BYTE *)(v22 + v19 + 1440) == 1 )
          goto LABEL_31;
        if ( *(_BYTE *)(v22 + v19 + 1440) == 2 )
          goto LABEL_33;
LABEL_53:
        v23 = (_DWORD *)(a2 + 40);
        v24 = (_QWORD *)(a2 + 24);
        goto LABEL_34;
      }
      v11 = 0LL;
    }
  }
LABEL_8:
  if ( a3 )
  {
    if ( !v5 )
      ((void (__fastcall *)(_QWORD, _QWORD))sub_140293988)(a1, (LARGE_INTEGER)v12.QuadPart);
    *(_QWORD *)(a3 + 8) = sub_14029394C(*(_QWORD *)(a1 + 33808), qword_140D069F8, 10000000LL);
  }
  if ( !v5 )
    goto LABEL_13;
  _m_prefetchw((const void *)(a1 + 33632));
  if ( v27 != _InterlockedOr64((volatile signed __int64 *)(a1 + 33632), 0LL) )
    return (unsigned int)-1073741823;
  if ( v12.QuadPart > v28 )
  {
    v16 = sub_14029394C(v12.QuadPart - v28, qword_140D069F8, 10000000LL);
    if ( v29 && v30 )
    {
      ++*v30;
      *v29 += v16;
    }
    v14 = v32;
    if ( v16 > DesiredTime )
    {
      v17 = v16 / DesiredTime;
      v13 = v17 + v13 - 1;
      v14 = v17 + v32 - 1;
    }
  }
  else
  {
LABEL_13:
    v14 = v32;
  }
  if ( a2 )
  {
    if ( v26 && v11 )
      *(_QWORD *)a2 += *(_QWORD *)(a2 + 8) + *(_QWORD *)(a2 + 16) + *(_QWORD *)(a2 + 24);
    else
      *(_QWORD *)a2 = v13 * (unsigned __int64)DesiredTime;
  }
  if ( a3 )
  {
    *(_DWORD *)a3 = v13;
    *(_DWORD *)(a3 + 4) = v14;
  }
  return v4;
}
