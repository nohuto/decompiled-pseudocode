/*
 * XREFs of RefreshPkgIdleStateMSRValues @ 0x1C0003D00
 * Callers:
 *     QueryPkgIdleStateMSRValues @ 0x1C0006A60 (QueryPkgIdleStateMSRValues.c)
 * Callees:
 *     ReadMSRValue @ 0x1C0003DA6 (ReadMSRValue.c)
 */

__int64 __fastcall RefreshPkgIdleStateMSRValues(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r11d
  __int64 v6; // rbx
  unsigned int v7; // ebp
  __int64 i; // rsi
  __int64 MSRValue; // rax
  __int64 v10; // r10

  v3 = 0;
  if ( !a3 )
    return (unsigned int)-1073741811;
  v6 = *(_QWORD *)(a3 + 48);
  if ( a1 == *(_QWORD *)v6 )
    return v3;
  if ( *(_QWORD *)(v6 + 16) )
  {
    v7 = 0;
    for ( i = a1 - *(_QWORD *)v6; v7 < *(_DWORD *)(v6 + 24); *(_QWORD *)(v6 + 8 * v10 + 64) = MSRValue )
    {
      MSRValue = ReadMSRValue(
                   a2,
                   *(_QWORD *)(v6 + 40LL * v7 + 40),
                   *(unsigned int *)(v6 + 40LL * v7 + 48),
                   *(unsigned int *)(v6 + 40LL * v7 + 52));
      ++v7;
    }
    *(_QWORD *)(v6 + 8) += i;
    *(_QWORD *)v6 = a1;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
