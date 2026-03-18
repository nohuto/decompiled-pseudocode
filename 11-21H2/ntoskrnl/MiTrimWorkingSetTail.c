/*
 * XREFs of MiTrimWorkingSetTail @ 0x1403737D0
 * Callers:
 *     MiTrimPte @ 0x1403731C0 (MiTrimPte.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x140266B40 (MiGetAvailablePagesBelowPriority.c)
 *     MiTrimWorkingSetBuildup @ 0x140373880 (MiTrimWorkingSetBuildup.c)
 *     MiProcessVmAccessedInfo @ 0x14045BBD4 (MiProcessVmAccessedInfo.c)
 *     MiQueryEPTAccessedState @ 0x14045BCA2 (MiQueryEPTAccessedState.c)
 *     MiTrimmedEnough @ 0x140597478 (MiTrimmedEnough.c)
 */

__int64 __fastcall MiTrimWorkingSetTail(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbx
  _QWORD *v4; // rbp
  _DWORD *v5; // rdx
  int v6; // r11d
  __int64 v8; // rdx
  unsigned int v9; // ecx
  unsigned __int64 v10; // rdx

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 168);
  v4 = *(_QWORD **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v1 + 174));
  while ( 1 )
  {
    MiTrimWorkingSetBuildup(a1, v3);
    if ( (*(_DWORD *)v3 & 0x800) != 0 )
    {
      v8 = *(_QWORD *)(v3 + 16) - *(_QWORD *)(v3 + 32);
      *(_QWORD *)(v1 + 8) += v8;
      *(_QWORD *)(v3 + 32) = *(_QWORD *)(v3 + 16);
      *(_QWORD *)(v4[2075] + 8LL * (*(_DWORD *)v3 & 0xF) + 2584) += v8;
    }
    v5 = *(_DWORD **)(v3 + 248);
    if ( !v5 || !*v5 || !(unsigned int)MiQueryEPTAccessedState(a1, v5, 0LL) )
      break;
    MiProcessVmAccessedInfo(a1, *(_QWORD *)(v3 + 248), MiTrimWorkingSetEPTCallback, v3);
  }
  if ( (*(_DWORD *)v3 & 0x8000) != 0 && (unsigned int)MiTrimmedEnough(v1, v3) )
    return 5LL;
  v6 = 0x20000;
  if ( (*(_DWORD *)v3 & 0xF) != 0
    && *(_QWORD *)(v3 + 16) < *(_QWORD *)(v3 + 8)
    && *(_QWORD *)(v3 + 40) >= 0x20000uLL
    && *(_QWORD *)(v1 + 144) >> 3 >= *(_QWORD *)(v3 + 40)
    && (unsigned __int64)MiGetAvailablePagesBelowPriority(v4, 6u) <= 0x120 )
  {
    v9 = *(_DWORD *)v3 & 0xFFFFFF00 | (16 * (*(_DWORD *)v3 & 0xF | 0x2000));
    *(_QWORD *)(v3 + 24) = *(_QWORD *)(v3 + 16);
    *(_DWORD *)v3 = v9;
  }
  else if ( (*(_DWORD *)v3 & v6) != 0 )
  {
    v10 = *(_QWORD *)(v3 + 16);
    if ( v10 >= *(_QWORD *)(v3 + 8) || v10 >= *(_QWORD *)(v3 + 24) + 576LL )
      *(_DWORD *)v3 = *(_DWORD *)v3 & 0xFFFDFFF0 | ((unsigned __int8)*(_DWORD *)v3 >> 4);
  }
  return 0LL;
}
