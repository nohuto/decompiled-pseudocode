/*
 * XREFs of sub_140304A20 @ 0x140304A20
 * Callers:
 *     sub_14025D540 @ 0x14025D540 (sub_14025D540.c)
 * Callees:
 *     KeCountSetBitsAffinityEx @ 0x1402FFAC0 (KeCountSetBitsAffinityEx.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     sub_140304CE0 @ 0x140304CE0 (sub_140304CE0.c)
 *     sub_140345110 @ 0x140345110 (sub_140345110.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     sub_14039AF3C @ 0x14039AF3C (sub_14039AF3C.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x14039DAE0 (HvlUpdatePerformanceStateCountersForLp.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char sub_140304A20()
{
  __int64 v0; // rsi
  char v1; // r15
  __int64 i; // r13
  unsigned int j; // ebx
  __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned int v11; // r8d
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v19; // r14
  __int64 k; // rbx
  unsigned int m; // edi
  _DWORD *v22; // rcx
  __int64 v23; // [rsp+28h] [rbp-D8h]
  unsigned __int16 v24; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v25; // [rsp+30h] [rbp-D0h]
  _QWORD v26[34]; // [rsp+40h] [rbp-C0h] BYREF

  memset(&v26[1], 0, 0x100uLL);
  v0 = qword_140D06970;
  v1 = 0;
  for ( i = 0LL; (__int64 *)v0 != &qword_140D06970; v0 = *(_QWORD *)v0 )
  {
    for ( j = 0; j < *(_DWORD *)(v0 + 296); ++j )
    {
      v4 = *(_QWORD *)(v0 + 312) + 136LL * j;
      if ( *(_DWORD *)(v4 + 16) == 1 )
      {
        if ( !i )
          i = sub_14039AF3C();
        v19 = *(_QWORD *)v4;
        if ( (unsigned __int8)sub_140304CE0(*(_QWORD *)v4, 0LL, i - 50000) )
        {
          *(_BYTE *)(v19 + 72) = 0;
        }
        else
        {
          *(_BYTE *)(v19 + 72) = 1;
          HvlUpdatePerformanceStateCountersForLp(*(unsigned int *)(v4 + 20));
          v1 = 1;
        }
      }
    }
  }
  LODWORD(v26[0]) = 2097153;
  memset((char *)v26 + 4, 0, 0x104uLL);
  sub_140300030((__int64)v26, 0x20u, (unsigned __int16 *)&word_140C0B8E0);
  v5 = v26[1];
  v24 = 0;
  while ( 1 )
  {
    v6 = LOWORD(v26[0]);
    if ( !v5 )
      break;
LABEL_8:
    _BitScanForward64(&v7, v5);
    v23 = v5 & ~(1LL << v7);
    v8 = (unsigned int)dword_140D105E0[64 * v24 + (unsigned __int8)v7];
    v9 = (unsigned int)v8;
    if ( (unsigned int)v8 >= (unsigned int)dword_140D06884 )
      v10 = 0LL;
    else
      v10 = qword_140D088C0[v8];
    if ( (unsigned __int8)sub_140304CE0(v10 + 33968, 0LL, 0LL) )
    {
      v11 = dword_140D0E5E0[v9];
      v12 = v11 >> 6;
      if ( LOWORD(v26[0]) <= (unsigned int)v12 )
      {
        v5 = v23;
      }
      else
      {
        v13 = &v26[v12 + 1];
        v5 = v23;
        *v13 &= ~(1LL << (v11 & 0x3F));
      }
    }
    else
    {
      v5 = v23;
    }
  }
  while ( ++v24 < (unsigned int)LOWORD(v26[0]) )
  {
    v5 = v26[v24 + 1];
    if ( v5 )
      goto LABEL_8;
  }
  if ( v1 )
  {
    for ( k = qword_140D06970; (__int64 *)k != &qword_140D06970; k = *(_QWORD *)k )
    {
      for ( m = 0; m < *(_DWORD *)(k + 296); ++m )
      {
        v22 = (_DWORD *)(*(_QWORD *)(k + 312) + 136LL * m);
        if ( v22[4] == 1 && *(_BYTE *)(*(_QWORD *)v22 + 72LL) )
        {
          *(_BYTE *)(*(_QWORD *)v22 + 72LL) = 0;
          LOBYTE(v6) = 1;
          sub_140304CE0(*(_QWORD *)v22, v6, i);
        }
      }
    }
  }
  dword_140C204B0 = KeCountSetBitsAffinityEx(v26);
  if ( !dword_140C204B0 )
    return 1;
  v14 = v26[1];
  v25 = 0;
  while ( v14 )
  {
LABEL_19:
    _BitScanForward64(&v15, v14);
    v14 &= ~(1LL << v15);
    v16 = (unsigned int)dword_140D105E0[64 * v25 + (unsigned __int8)v15];
    if ( (unsigned int)v16 >= KeQueryActiveProcessorCountEx(0xFFFFu) )
      v17 = 0LL;
    else
      v17 = qword_140D088C0[v16];
    sub_140345110(v17, 0LL);
  }
  while ( ++v25 < (unsigned int)LOWORD(v26[0]) )
  {
    v14 = v26[v25 + 1];
    if ( v14 )
      goto LABEL_19;
  }
  return 0;
}
