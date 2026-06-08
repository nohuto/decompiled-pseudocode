/*
 * XREFs of InitAcpi1CStates @ 0x1C0037B18
 * Callers:
 *     InitAcpiCStates @ 0x1C00289B0 (InitAcpiCStates.c)
 * Callees:
 *     IsValidAcpiGenericAddress @ 0x1C0037DC0 (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall InitAcpi1CStates(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx
  char v7; // bp
  char v8; // si
  unsigned int v9; // r10d
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 Pool2; // rax
  _DWORD *v20; // r9
  __int64 v21; // rax

  v4 = *(_QWORD *)(a1 + 280);
  v5 = 0;
  v7 = 0;
  *(_QWORD *)(a1 + 272) |= v4 & 7;
  v8 = 0;
  v9 = 1;
  if ( (v4 & 2) != 0
    && (unsigned __int16)AcpiInfo <= 0x64u
    && (unsigned __int8)IsValidAcpiGenericAddress(&dword_1C001F9DC, v4, a3, a4)
    && (unsigned __int8)IsValidAcpiGenericAddress(a1 + 184, v4, a3, a4)
    && dword_1C001F014 == v9 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1104), v9);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1108), v9);
    v9 = 2;
    v7 = 1;
  }
  if ( (*(_BYTE *)(a1 + 280) & 4) != 0
    && (unsigned __int16)word_1C001F9C2 <= 0x3E8u
    && (unsigned __int8)IsValidAcpiGenericAddress(&dword_1C001F9F4, v4, a3, a4)
    && (unsigned __int8)IsValidAcpiGenericAddress(&dword_1C001F9C4, v10, v11, v12)
    && (unsigned __int8)IsValidAcpiGenericAddress(&dword_1C001F9DC, v13, v14, v15)
    && (unsigned __int8)IsValidAcpiGenericAddress(a1 + 184, v16, v17, v18)
    && dword_1C001F014 == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1104), 2u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 2u);
    ++v9;
    v8 = 1;
  }
  Pool2 = ExAllocatePool2(64LL, 20 * v9 + 4, 1919119952LL);
  v20 = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 0;
    *(_OWORD *)(Pool2 + 4) = 0LL;
    *(_BYTE *)(Pool2 + 4) = 127;
    *(_BYTE *)(Pool2 + 16) = 1;
    *(_WORD *)(Pool2 + 18) = 0;
    *(_DWORD *)(Pool2 + 20) = 0;
    v21 = (unsigned int)(*(_DWORD *)Pool2 + 1);
    *v20 = v21;
    if ( v7 )
    {
      LOBYTE(v20[5 * v21 + 4]) = 2;
      HIWORD(v20[5 * *v20 + 4]) = AcpiInfo;
      v20[5 * *v20 + 5] = 0;
      if ( *(_DWORD *)(a1 + 188) != -4 )
      {
        LOBYTE(v20[5 * *v20 + 1]) = 1;
        BYTE1(v20[5 * *v20 + 1]) = 8;
        BYTE2(v20[5 * *v20 + 1]) = 0;
        HIBYTE(v20[5 * *v20 + 1]) = 8;
        v20[5 * *v20 + 3] = 0;
        v20[5 * *v20 + 2] = *(_DWORD *)(a1 + 188) + 4;
      }
      v21 = (unsigned int)++*v20;
    }
    if ( v8 )
    {
      LOBYTE(v20[5 * v21 + 4]) = 3;
      HIWORD(v20[5 * *v20 + 4]) = word_1C001F9C2;
      v20[5 * *v20 + 5] = 0;
      if ( *(_DWORD *)(a1 + 188) != -5 )
      {
        LOBYTE(v20[5 * *v20 + 1]) = 1;
        BYTE1(v20[5 * *v20 + 1]) = 8;
        BYTE2(v20[5 * *v20 + 1]) = 0;
        HIBYTE(v20[5 * *v20 + 1]) = 8;
        v20[5 * *v20 + 3] = 0;
        v20[5 * *v20 + 2] = *(_DWORD *)(a1 + 188) + 5;
      }
      ++*v20;
    }
    *(_QWORD *)(a1 + 528) = v20;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
