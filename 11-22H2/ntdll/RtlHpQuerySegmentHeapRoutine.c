/*
 * XREFs of RtlHpQuerySegmentHeapRoutine @ 0x1800FD6F0
 * Callers:
 *     RtlpQueryProcessEnumHeapsRoutine @ 0x1800E3410 (RtlpQueryProcessEnumHeapsRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlHpQuerySegmentHeapRoutine(__int64 a1, __int64 a2)
{
  unsigned int v4; // r10d
  int v5; // r9d
  int v6; // r8d
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  int v11; // edx
  int v12; // ecx

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    *(_QWORD *)a2 = a1;
    v4 = 0;
    v5 = *(_DWORD *)(a1 + 20);
    *(_WORD *)(a2 + 12) = 0;
    v6 = v5 & 1 | 8;
    if ( (v5 & 2) == 0 )
      v6 = v5 & 1;
    v7 = v6 | 0x8000000;
    if ( (v5 & 0x20000000) == 0 )
      v7 = v6;
    v8 = v7 | 0x20;
    if ( (v5 & 0x10000000) == 0 )
      v8 = v7;
    v9 = v8 | 0x40000;
    if ( (v5 & 0x40000000) == 0 )
      v9 = v8;
    v10 = v9 | 0x100;
    if ( (v5 & 0x100) == 0 )
      v10 = v9;
    v11 = v5 & 0xE00 | v10;
    if ( (v5 & 0xE00) == 0 )
      v11 = v10;
    v12 = v11 | 0x200;
    if ( (v5 & 0x8000000) == 0 )
      v12 = v11;
    *(_DWORD *)(a2 + 8) = v5 & 0xF000 | v12;
    *(_QWORD *)(a2 + 88) = *(_QWORD *)(a1 + 104);
    *(_WORD *)(a2 + 14) = 0;
    *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 136) << 12;
    *(_QWORD *)(a2 + 24) += *(_QWORD *)(a1 + 96) << 12;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
