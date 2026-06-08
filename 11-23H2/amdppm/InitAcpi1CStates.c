/*
 * XREFs of InitAcpi1CStates @ 0x1C0023FC8
 * Callers:
 *     InitAcpiCStates @ 0x1C00243C8 (InitAcpiCStates.c)
 * Callees:
 *     IsValidAcpiGenericAddress @ 0x1C002E5B8 (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall InitAcpi1CStates(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  char v4; // bp
  char v5; // si
  unsigned int v6; // r10d
  __int64 Pool2; // rax
  _DWORD *v8; // r9
  __int64 v9; // rax

  v1 = *(_QWORD *)(a1 + 280);
  v2 = 0;
  v4 = 0;
  *(_QWORD *)(a1 + 272) |= v1 & 7;
  v5 = 0;
  v6 = 1;
  if ( (v1 & 2) != 0
    && (unsigned __int16)AcpiInfo <= 0x64u
    && (unsigned __int8)IsValidAcpiGenericAddress(&dword_1C0012E1C)
    && (unsigned __int8)IsValidAcpiGenericAddress(a1 + 184)
    && dword_1C00124D4 == v6 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1104), v6);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1108), v6);
    v6 = 2;
    v4 = 1;
  }
  if ( (*(_BYTE *)(a1 + 280) & 4) != 0
    && (unsigned __int16)word_1C0012E02 <= 0x3E8u
    && (unsigned __int8)IsValidAcpiGenericAddress(&dword_1C0012E34)
    && (unsigned __int8)IsValidAcpiGenericAddress(&dword_1C0012E04)
    && (unsigned __int8)IsValidAcpiGenericAddress(&dword_1C0012E1C)
    && (unsigned __int8)IsValidAcpiGenericAddress(a1 + 184)
    && dword_1C00124D4 == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1104), 2u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 2u);
    ++v6;
    v5 = 1;
  }
  Pool2 = ExAllocatePool2(64LL, 20 * v6 + 4, 1919119952LL);
  v8 = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 0;
    *(_OWORD *)(Pool2 + 4) = 0LL;
    *(_BYTE *)(Pool2 + 4) = 127;
    *(_BYTE *)(Pool2 + 16) = 1;
    *(_WORD *)(Pool2 + 18) = 0;
    *(_DWORD *)(Pool2 + 20) = 0;
    v9 = (unsigned int)(*(_DWORD *)Pool2 + 1);
    *v8 = v9;
    if ( v4 )
    {
      LOBYTE(v8[5 * v9 + 4]) = 2;
      HIWORD(v8[5 * *v8 + 4]) = AcpiInfo;
      v8[5 * *v8 + 5] = 0;
      if ( *(_DWORD *)(a1 + 188) != -4 )
      {
        LOBYTE(v8[5 * *v8 + 1]) = 1;
        BYTE1(v8[5 * *v8 + 1]) = 8;
        BYTE2(v8[5 * *v8 + 1]) = 0;
        HIBYTE(v8[5 * *v8 + 1]) = 8;
        v8[5 * *v8 + 3] = 0;
        v8[5 * *v8 + 2] = *(_DWORD *)(a1 + 188) + 4;
      }
      v9 = (unsigned int)++*v8;
    }
    if ( v5 )
    {
      LOBYTE(v8[5 * v9 + 4]) = 3;
      HIWORD(v8[5 * *v8 + 4]) = word_1C0012E02;
      v8[5 * *v8 + 5] = 0;
      if ( *(_DWORD *)(a1 + 188) != -5 )
      {
        LOBYTE(v8[5 * *v8 + 1]) = 1;
        BYTE1(v8[5 * *v8 + 1]) = 8;
        BYTE2(v8[5 * *v8 + 1]) = 0;
        HIBYTE(v8[5 * *v8 + 1]) = 8;
        v8[5 * *v8 + 3] = 0;
        v8[5 * *v8 + 2] = *(_DWORD *)(a1 + 188) + 5;
      }
      ++*v8;
    }
    *(_QWORD *)(a1 + 528) = v8;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
