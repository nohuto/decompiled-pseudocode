/*
 * XREFs of sub_140A67430 @ 0x140A67430
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     RtlSetBitsEx @ 0x14030B740 (RtlSetBitsEx.c)
 *     RtlFindNextForwardRunClearEx @ 0x14045EF10 (RtlFindNextForwardRunClearEx.c)
 *     sub_14058CAEC @ 0x14058CAEC (sub_14058CAEC.c)
 */

__int64 __fastcall sub_140A67430(unsigned __int64 a1, __int64 a2)
{
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v3; // rsi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rax
  unsigned __int64 NextForwardRunClear; // r12
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // r13
  __int64 v13; // rcx
  LONGLONG v14; // rax
  _QWORD v16[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v17; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-38h]
  unsigned __int64 v19; // [rsp+80h] [rbp+8h] BYREF

  v19 = 0LL;
  PerformanceCounter.QuadPart = 0LL;
  v3 = qword_140D018D8;
  if ( (*(_DWORD *)(qword_140D018D8 + 80) & 0x80u) != 0 )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v6 = *(_QWORD *)(v3 + 576);
  v7 = a1 >> 12;
  v8 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v9 = v8 + v7 - 1;
  if ( v7 < v6 )
  {
    if ( v9 >= v6 )
    {
      v9 = v6 - 1;
      v8 = v6 - v7;
    }
    if ( v8 )
    {
      v16[0] = v9 + 1;
      v16[1] = *(_QWORD *)(v3 + 584);
      while ( 1 )
      {
        NextForwardRunClear = RtlFindNextForwardRunClearEx((__int64)v16, v7, &v19);
        v11 = NextForwardRunClear ? v19 - v7 : v8;
        if ( v11 )
          break;
LABEL_22:
        if ( v8 > v11 + NextForwardRunClear )
        {
          v7 = NextForwardRunClear + v19;
          v8 = v8 - v11 - NextForwardRunClear;
          if ( v8 )
            continue;
        }
        goto LABEL_24;
      }
      v12 = v11;
      while ( 1 )
      {
        if ( (*(_DWORD *)(v3 + 40) & 4) == 0 )
          goto LABEL_14;
        v17 = 0LL;
        v18 = 0LL;
        if ( (unsigned int)sub_14058CAEC(v7, (__int64)&v17) )
          break;
LABEL_21:
        ++v7;
        if ( !--v12 )
          goto LABEL_22;
      }
      if ( v18 >= 0xFFFF800000000000uLL )
      {
LABEL_14:
        v13 = v3 + 600;
      }
      else
      {
        if ( (*(_DWORD *)(v3 + 40) & 4) == 0 || v18 - 1 > 0x7FFFFFFEFFFELL )
          goto LABEL_21;
        v13 = v3 + 656;
      }
      RtlSetBitsEx(v13, v7, 1uLL);
      goto LABEL_21;
    }
  }
LABEL_24:
  if ( (*(_DWORD *)(v3 + 80) & 0x80u) != 0 )
  {
    v14 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - PerformanceCounter.QuadPart;
    if ( (*(_DWORD *)(v3 + 80) & 1) != 0 )
    {
      *(_QWORD *)(v3 + 472) += a2;
      *(_QWORD *)(v3 + 456) += v14;
    }
    else
    {
      *(_QWORD *)(v3 + 520) += a2;
      *(_QWORD *)(v3 + 504) += v14;
    }
  }
  return 0LL;
}
