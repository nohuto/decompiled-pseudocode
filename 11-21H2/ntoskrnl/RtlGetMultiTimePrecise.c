/*
 * XREFs of RtlGetMultiTimePrecise @ 0x1402622C0
 * Callers:
 *     RtlConvertHostPerfCounterToPerfCounter @ 0x1405E3EC0 (RtlConvertHostPerfCounterToPerfCounter.c)
 *     sub_140633018 @ 0x140633018 (sub_140633018.c)
 *     sub_1406EFBC8 @ 0x1406EFBC8 (sub_1406EFBC8.c)
 *     sub_140B0433C @ 0x140B0433C (sub_140B0433C.c)
 * Callees:
 *     sub_140262490 @ 0x140262490 (sub_140262490.c)
 *     sub_140292B8C @ 0x140292B8C (sub_140292B8C.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall RtlGetMultiTimePrecise(LARGE_INTEGER *a1, int a2, int *a3)
{
  __int64 v3; // rbx
  char v4; // si
  __int64 v5; // rbp
  char v6; // r13
  int v7; // r14d
  __int64 v8; // r12
  __int64 v9; // r14
  LARGE_INTEGER PerformanceCounter; // rdx
  int v11; // edi
  LONGLONG v12; // rdx
  __int64 v14; // [rsp+28h] [rbp-80h]
  __int64 v15; // [rsp+30h] [rbp-78h]
  unsigned __int64 v16; // [rsp+38h] [rbp-70h]
  unsigned __int64 v17; // [rsp+40h] [rbp-68h]
  __int64 v18; // [rsp+48h] [rbp-60h]
  __int64 v19; // [rsp+50h] [rbp-58h]
  char v21; // [rsp+B8h] [rbp+10h]

  v21 = a2;
  v3 = 0LL;
  v4 = a2;
  v16 = 0LL;
  v5 = 0LL;
  v18 = 0LL;
  v6 = 0;
  v15 = 0LL;
  v14 = 0LL;
  v17 = 0LL;
  if ( a2 )
  {
    v7 = a2 & 4;
    v8 = sub_140262490();
    while ( 1 )
    {
      v19 = sub_140292B8C(0xFFFFF78000000340uLL);
      if ( v7 )
      {
        v16 = MEMORY[0xFFFFF78000000348];
        v17 = MEMORY[0xFFFFF78000000358];
        v6 = MEMORY[0xFFFFF78000000368];
        v18 = MEMORY[0xFFFFF78000000014];
      }
      if ( (v4 & 2) != 0 && v8 )
      {
        v14 = MEMORY[0xFFFFF780000003C7];
        do
        {
          do
          {
            v5 = *(_QWORD *)(v8 + 24);
            v9 = MEMORY[0xFFFFF780000003B8];
            v15 = MEMORY[0xFFFFF780000003B8];
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
          }
          while ( v5 != *(_QWORD *)(v8 + 24) );
        }
        while ( v9 != MEMORY[0xFFFFF780000003B8] );
        v7 = v4 & 4;
      }
      else
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
      }
      if ( MEMORY[0xFFFFF78000000340] == v19 )
        break;
      _mm_pause();
    }
    v11 = 0;
    if ( (v21 & 1) != 0 )
    {
      *a1 = PerformanceCounter;
      v11 = 1;
    }
    if ( (v4 & 2) != 0 && !v14 && v5 )
    {
      a1[1].QuadPart = v5 + PerformanceCounter.QuadPart - v15;
      v11 |= 2u;
    }
    if ( (v4 & 4) != 0 )
    {
      if ( PerformanceCounter.QuadPart > v16 )
      {
        v12 = PerformanceCounter.QuadPart - v16 - 1;
        if ( v6 )
          v12 <<= v6;
        v3 = ((unsigned __int64)v12 * (unsigned __int128)v17) >> 64;
      }
      a1[2].QuadPart = v3 + v18;
      v11 |= 4u;
    }
    *a3 = v11;
  }
  else
  {
    *a3 = 0;
  }
  return 0LL;
}
