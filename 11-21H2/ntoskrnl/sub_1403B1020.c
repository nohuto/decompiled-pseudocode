/*
 * XREFs of sub_1403B1020 @ 0x1403B1020
 * Callers:
 *     PoFxReportDevicePoweredOn @ 0x1403B1000 (PoFxReportDevicePoweredOn.c)
 *     sub_1406198E0 @ 0x1406198E0 (sub_1406198E0.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x140229990 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140354990 @ 0x140354990 (sub_140354990.c)
 *     PoFxIdleComponent @ 0x1403557F0 (PoFxIdleComponent.c)
 *     sub_1403B11B0 @ 0x1403B11B0 (sub_1403B11B0.c)
 *     sub_1403B1624 @ 0x1403B1624 (sub_1403B1624.c)
 *     sub_1403B1794 @ 0x1403B1794 (sub_1403B1794.c)
 *     sub_1403B19D4 @ 0x1403B19D4 (sub_1403B19D4.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 *     sub_1405CBF94 @ 0x1405CBF94 (sub_1405CBF94.c)
 *     sub_140A50A10 @ 0x140A50A10 (sub_140A50A10.c)
 */

char __fastcall sub_1403B1020(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // rbp
  unsigned int v3; // eax
  __int64 v4; // r8
  volatile LONG *v5; // r14
  KIRQL v6; // al
  __int64 v7; // rsi
  int v8; // edi
  KIRQL v9; // r15
  int v10; // edx
  __int64 v11; // rdx
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  unsigned int v14; // eax
  __int64 v15; // rbp
  unsigned int i; // esi
  signed __int32 v17; // eax
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  unsigned __int32 v20; // eax
  __int64 v21; // rcx
  unsigned __int32 v22; // ett
  signed __int32 v23; // ett

  v1 = *(_QWORD *)(BugCheckParameter2 + 48);
  if ( !KeGetCurrentIrql() )
    goto LABEL_2;
  _m_prefetchw((const void *)(BugCheckParameter2 + 32));
  v20 = *(_DWORD *)(BugCheckParameter2 + 32);
  do
  {
    v21 = v20;
    v22 = v20;
    v20 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 32), v20, v20);
  }
  while ( v22 != v20 );
  if ( (v20 & 2) != 0 )
  {
    LOBYTE(v17) = sub_1403B19D4(v21, BugCheckParameter2 + 1208);
  }
  else
  {
LABEL_2:
    _m_prefetchw((const void *)(BugCheckParameter2 + 32));
    if ( (_InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFFFFD) & 2) != 0 )
    {
      v3 = sub_1403B1794(BugCheckParameter2);
      LOBYTE(v4) = 1;
      sub_1403B1624(*(_QWORD *)(BugCheckParameter2 + 56), 1LL, v4, v3);
      sub_1403B11B0(v1, 1LL);
    }
    v5 = (volatile LONG *)(v1 + 88);
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 88));
    v7 = 0LL;
    v8 = _InterlockedExchange((volatile __int32 *)(v1 + 124), 0);
    v9 = v6;
    if ( v8 > 0 )
    {
      v10 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 120LL);
      if ( v8 > v10 )
        sub_1405CAE6C(0x602uLL, v1, v8, 0LL);
      _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFF7FE);
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 120LL) = v10 - v8;
      v11 = *(_QWORD *)(BugCheckParameter2 + 48);
      _m_prefetchw((const void *)(v11 + 296));
      v12 = *(_DWORD *)(v11 + 296);
      do
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 296), v12, v12);
      }
      while ( v13 != v12 );
      if ( (v12 & 4) != 0 )
      {
        v14 = *(_DWORD *)(BugCheckParameter2 + 828);
        v15 = (unsigned int)v8;
        do
        {
          for ( i = 0; i < v14; ++i )
          {
            PoFxIdleComponent(BugCheckParameter2, i);
            v14 = *(_DWORD *)(BugCheckParameter2 + 828);
          }
          --v15;
        }
        while ( v15 );
      }
      v7 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 280LL);
    }
    ExReleaseSpinLockExclusive(v5, v9);
    v17 = *(_DWORD *)(BugCheckParameter2 + 824);
    if ( (v17 & 0x80u) != 0 )
    {
      _m_prefetchw((const void *)(BugCheckParameter2 + 32));
      v17 = *(_DWORD *)(BugCheckParameter2 + 32);
      do
      {
        v23 = v17;
        v17 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 32), v17, v17);
      }
      while ( v23 != v17 );
      if ( (v17 & 0x400) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFFBFF);
        LOBYTE(v17) = sub_140A50A10(0LL, v7, *(_QWORD *)(v7 + 72LL * *(char *)(v7 + 66) + 200));
      }
    }
    if ( !v8 )
    {
      _m_prefetchw((const void *)(BugCheckParameter2 + 32));
      v18 = *(_DWORD *)(BugCheckParameter2 + 32);
      do
      {
        v19 = v18;
        v18 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 32), v18, v18);
      }
      while ( v19 != v18 );
      if ( (v18 & 0x2000) != 0 )
        LOBYTE(v17) = sub_1405CBF94(BugCheckParameter2);
      else
        LOBYTE(v17) = sub_140354990(BugCheckParameter2, 0LL);
    }
  }
  return v17;
}
