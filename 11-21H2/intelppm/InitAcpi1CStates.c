/*
 * XREFs of InitAcpi1CStates @ 0x1C003D064
 * Callers:
 *     InitAcpiCStates @ 0x1C00252A4 (InitAcpiCStates.c)
 * Callees:
 *     IsValidAcpiGenericAddress @ 0x1C00368F8 (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall InitAcpi1CStates(__int64 a1)
{
  __int64 v1; // r9
  unsigned int v2; // ebx
  char v4; // bp
  char v5; // si
  unsigned int v6; // r11d
  __int64 v7; // r10
  __int64 Pool2; // rax
  _DWORD *v9; // r9
  __int64 v10; // rax

  v1 = *(_QWORD *)(a1 + 280);
  v2 = 0;
  v4 = 0;
  *(_QWORD *)(a1 + 272) |= v1 & 7;
  v5 = 0;
  v6 = 1;
  LOBYTE(v7) = v1;
  if ( (v1 & 2) != 0
    && (unsigned __int16)AcpiInfo <= 0x64u
    && IsValidAcpiGenericAddress((unsigned __int8 *)&dword_1C001E87C)
    && IsValidAcpiGenericAddress((unsigned __int8 *)(a1 + 184))
    && dword_1C001DCF4 == v6 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1104), v6);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1108), v6);
    v7 = *(_QWORD *)(a1 + 280);
    v6 = 2;
    v4 = 1;
  }
  if ( (v7 & 4) != 0
    && (unsigned __int16)word_1C001E862 <= 0x3E8u
    && IsValidAcpiGenericAddress((unsigned __int8 *)&dword_1C001E894)
    && IsValidAcpiGenericAddress((unsigned __int8 *)&dword_1C001E864)
    && IsValidAcpiGenericAddress((unsigned __int8 *)&dword_1C001E87C)
    && IsValidAcpiGenericAddress((unsigned __int8 *)(a1 + 184))
    && dword_1C001DCF4 == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1104), 2u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 2u);
    ++v6;
    v5 = 1;
  }
  Pool2 = ExAllocatePool2(64LL, 20 * v6 + 4, 1919119952LL);
  v9 = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 0;
    *(_OWORD *)(Pool2 + 4) = 0LL;
    *(_BYTE *)(Pool2 + 4) = 127;
    *(_BYTE *)(Pool2 + 16) = 1;
    *(_WORD *)(Pool2 + 18) = 0;
    *(_DWORD *)(Pool2 + 20) = 0;
    v10 = (unsigned int)(*(_DWORD *)Pool2 + 1);
    *v9 = v10;
    if ( v4 )
    {
      LOBYTE(v9[5 * v10 + 4]) = 2;
      HIWORD(v9[5 * *v9 + 4]) = AcpiInfo;
      v9[5 * *v9 + 5] = 0;
      if ( *(_DWORD *)(a1 + 188) != -4 )
      {
        LOBYTE(v9[5 * *v9 + 1]) = 1;
        BYTE1(v9[5 * *v9 + 1]) = 8;
        BYTE2(v9[5 * *v9 + 1]) = 0;
        HIBYTE(v9[5 * *v9 + 1]) = 8;
        v9[5 * *v9 + 3] = 0;
        v9[5 * *v9 + 2] = *(_DWORD *)(a1 + 188) + 4;
      }
      v10 = (unsigned int)++*v9;
    }
    if ( v5 )
    {
      LOBYTE(v9[5 * v10 + 4]) = 3;
      HIWORD(v9[5 * *v9 + 4]) = word_1C001E862;
      v9[5 * *v9 + 5] = 0;
      if ( *(_DWORD *)(a1 + 188) != -5 )
      {
        LOBYTE(v9[5 * *v9 + 1]) = 1;
        BYTE1(v9[5 * *v9 + 1]) = 8;
        BYTE2(v9[5 * *v9 + 1]) = 0;
        HIBYTE(v9[5 * *v9 + 1]) = 8;
        v9[5 * *v9 + 3] = 0;
        v9[5 * *v9 + 2] = *(_DWORD *)(a1 + 188) + 5;
      }
      ++*v9;
    }
    *(_QWORD *)(a1 + 528) = v9;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
