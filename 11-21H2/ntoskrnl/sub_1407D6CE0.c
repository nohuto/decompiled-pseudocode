/*
 * XREFs of sub_1407D6CE0 @ 0x1407D6CE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14025AB54 @ 0x14025AB54 (sub_14025AB54.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_14035C864 @ 0x14035C864 (sub_14035C864.c)
 *     sub_1406E8628 @ 0x1406E8628 (sub_1406E8628.c)
 *     sub_1407D6EC0 @ 0x1407D6EC0 (sub_1407D6EC0.c)
 *     sub_1407D6F54 @ 0x1407D6F54 (sub_1407D6F54.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407D6CE0(__int64 a1, char a2, int *a3)
{
  unsigned int v5; // r14d
  __int64 v6; // r8
  __int64 v7; // rbx
  unsigned int v8; // esi
  bool v9; // r15
  int v10; // edi
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  __int16 v13; // di
  unsigned int v14; // edx
  char v15; // cl
  signed __int32 v17; // ett
  _DWORD *v18; // rdi
  void *v19; // rcx

  v5 = a1;
  if ( *((_BYTE *)KeGetCurrentThread() + 562) )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a3;
    *(_DWORD *)v6 = *(_DWORD *)v6;
  }
  v7 = *((_QWORD *)KeGetCurrentThread() + 23);
  v8 = 0;
  v9 = 1;
  LOBYTE(a1) = 1;
  sub_1407D6F54(a1);
  v10 = dword_140D06938;
  _m_prefetchw((const void *)(v7 + 1124));
  v11 = *(_DWORD *)(v7 + 1124);
  if ( a2 )
  {
    do
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 1124), v11 | 0x80001000, v11);
    }
    while ( v12 != v11 );
    v13 = v11;
    if ( v11 >= 0 )
      sub_14025AB54(v7);
    if ( (v13 & 0x1000) != 0 )
      v9 = v5 <= *(_DWORD *)(v7 + 2104);
    else
      ++dword_140D3CD38;
    if ( !*(_QWORD *)(v7 + 2096) || v5 < *(_DWORD *)(v7 + 2108) )
    {
      v18 = sub_1406E8628();
      if ( v18 )
      {
        v19 = *(void **)(v7 + 2096);
        if ( v19 )
          ExFreePoolWithTag(v19, 0x50455654u);
        *(_QWORD *)(v7 + 2096) = v18;
        *(_DWORD *)(v7 + 2108) = v5;
      }
    }
    *(_DWORD *)(v7 + 2104) = v5;
    sub_1407D6EC0(0LL, v7);
    if ( (*(_DWORD *)(v7 + 2172) & 0x4000000) != 0 )
    {
      v10 = dword_140D06984;
      goto LABEL_16;
    }
    v14 = v5;
    v15 = v9;
  }
  else
  {
    do
    {
      v17 = v11;
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 1124), v11 & 0xFFFFEFFF, v11);
    }
    while ( v17 != v11 );
    if ( (v11 & 0x1000) == 0 )
    {
      v8 = -1073741243;
      goto LABEL_16;
    }
    --dword_140D3CD38;
    *(_DWORD *)(v7 + 2104) = 0;
    sub_1407D6EC0(0LL, v7);
    v14 = 0;
    v15 = 0;
  }
  v10 = sub_14035C864(v15, v14, 0LL);
LABEL_16:
  ExReleaseResourceLite(&stru_140C15AC0);
  KeLeaveCriticalRegion();
  *a3 = v10;
  return v8;
}
