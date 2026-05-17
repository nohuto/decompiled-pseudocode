/*
 * XREFs of Normalization__NormalizeCharacter @ 0x180090608
 * Callers:
 *     Normalization__Normalize @ 0x1800904D8 (Normalization__Normalize.c)
 *     Normalization__AppendDecomposedChar @ 0x18010C958 (Normalization__AppendDecomposedChar.c)
 * Callees:
 *     NormBuffer__AppendEx @ 0x1800906F0 (NormBuffer__AppendEx.c)
 *     NormBuffer__Append @ 0x18009073C (NormBuffer__Append.c)
 *     ComposeHangulLV @ 0x18010C178 (ComposeHangulLV.c)
 *     ComposeHangulLVT @ 0x18010C1A8 (ComposeHangulLVT.c)
 *     IsHangulLV @ 0x18010C1DC (IsHangulLV.c)
 *     NormBuffer__GetLastChar @ 0x18010C304 (NormBuffer__GetLastChar.c)
 *     NormBuffer__Insert @ 0x18010C3A0 (NormBuffer__Insert.c)
 *     NormBuffer__IsBlocked @ 0x18010C468 (NormBuffer__IsBlocked.c)
 *     NormBuffer__LastStartBase @ 0x18010C510 (NormBuffer__LastStartBase.c)
 *     NormBuffer__LastStartBasePair @ 0x18010C53C (NormBuffer__LastStartBasePair.c)
 *     NormBuffer__RecheckStartCombinations @ 0x18010C58C (NormBuffer__RecheckStartCombinations.c)
 *     NormBuffer__ReplaceLastStartBase @ 0x18010C708 (NormBuffer__ReplaceLastStartBase.c)
 *     NormBuffer__ReplaceLastStartBasePair @ 0x18010C780 (NormBuffer__ReplaceLastStartBasePair.c)
 *     NormBuffer__RewindOutputCharacter @ 0x18010C840 (NormBuffer__RewindOutputCharacter.c)
 *     Normalization__AppendDecomposedChar @ 0x18010C958 (Normalization__AppendDecomposedChar.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x18010CA6C (Normalization__CanCombinableCharactersCombine.c)
 */

__int64 __fastcall Normalization__NormalizeCharacter(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int8 v5; // r15
  int v8; // edx
  char v9; // al
  char v11; // r14
  unsigned __int8 v12; // bp
  __int64 v13; // rdx
  unsigned __int8 v14; // r15
  char v15; // cl
  unsigned __int8 v16; // r15
  int v17; // eax
  char v18; // dl
  bool v19; // zf
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned __int16 *v22; // rax
  int v23; // ecx
  unsigned int StartBasePair; // eax
  unsigned int v25; // eax
  unsigned int StartBase; // eax
  unsigned int v27; // eax
  __int64 v28; // r9
  unsigned __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rdx
  char v32; // al
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  unsigned int v35; // r9d
  __int64 v36; // r10
  unsigned __int64 v37; // r8
  unsigned __int8 v38; // r9
  __int64 v39; // rax
  unsigned int v40; // eax
  __int64 v41; // r9
  __int64 v42; // r8
  char v43; // di
  char v44; // di
  char v45; // al
  unsigned int v46; // eax
  int CanCombinableCharactersCombine; // eax
  unsigned __int16 *v48; // r10
  __int64 v49; // rdx
  __int64 v50; // rcx
  signed int v51; // esi
  unsigned __int16 v52; // di
  __int64 v53; // rcx
  unsigned __int16 v54; // si
  unsigned int LastChar; // eax
  __int64 v56; // rdx
  __int64 v57; // r8
  unsigned int v58; // r9d
  unsigned int v59; // eax
  unsigned __int16 *v60; // r8
  __int64 v61; // rdx
  unsigned int v62; // eax
  __int64 v63; // r8
  unsigned __int16 *v64; // r10
  __int64 v65; // r10

  v4 = a4;
  v5 = a3;
  if ( !(_BYTE)a3 )
    goto LABEL_74;
  while ( 1 )
  {
    while ( 1 )
    {
      switch ( v5 )
      {
        case 0u:
          goto LABEL_131;
        case 0xFBu:
          if ( !*(_BYTE *)(a1 + 113) )
            return 3221227287LL;
LABEL_131:
          v9 = NormBuffer__Append(v4, a2);
LABEL_10:
          if ( !v9 )
            return 3221225507LL;
          *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 40);
          *(_DWORD *)(v4 + 88) = a2;
          goto LABEL_12;
        case 0xFCu:
          return 3221227287LL;
        case 0xFDu:
          return Normalization__AppendDecomposedChar(a1, a2, v4);
      }
      if ( v5 != 254 )
        break;
      v22 = *(unsigned __int16 **)(v4 + 16);
      if ( v22 == *(unsigned __int16 **)(v4 + 8) )
        return 3221227287LL;
      v23 = *v22;
      *(_QWORD *)(v4 + 16) = v22 + 1;
      if ( (unsigned __int16)(v23 + 9216) > 0x3FFu )
        return 3221227287LL;
      a2 = v23 + ((a2 - 55287) << 10);
      v5 = *(_BYTE *)(((__int64)(int)a2 >> 7) + *(_QWORD *)(a1 + 32));
LABEL_53:
      if ( !v5 )
        goto LABEL_74;
    }
    if ( v5 != 255 )
      break;
    if ( (int)a2 < 44032 )
    {
      if ( a2 - 4352 <= 0x12 )
      {
        v60 = *(unsigned __int16 **)(v4 + 16);
        if ( v60 == *(unsigned __int16 **)(v4 + 8) )
          goto LABEL_74;
        v61 = *v60;
        *(_QWORD *)(v4 + 16) = v60 + 1;
        v62 = ComposeHangulLV(a2, v61);
        if ( !v62 )
        {
          *(_QWORD *)(v4 + 16) = v63;
          goto LABEL_74;
        }
        a2 = v62;
        if ( v64 == *(unsigned __int16 **)(v4 + 8) )
        {
LABEL_74:
          v32 = NormBuffer__Append(v4, a2);
LABEL_75:
          if ( v32 )
            return 0LL;
          return 3221225507LL;
        }
        v49 = *v64;
        *(_QWORD *)(v4 + 16) = v64 + 1;
        v50 = v62;
        goto LABEL_125;
      }
      if ( a2 - 4449 <= 0x14 )
      {
        if ( (unsigned int)NormBuffer__GetLastChar(v4) - 4352 > 0x12 )
          goto LABEL_74;
        NormBuffer__RewindOutputCharacter(v4);
        v59 = ComposeHangulLV(v35, a2);
LABEL_73:
        a2 = v59;
        goto LABEL_74;
      }
      if ( a2 - 4520 <= 0x1A )
      {
        LastChar = NormBuffer__GetLastChar(v4);
        if ( (unsigned __int8)IsHangulLV(LastChar, v56, v57, LastChar) )
        {
          NormBuffer__RewindOutputCharacter(v4);
          v59 = ComposeHangulLVT(v58, a2);
          goto LABEL_73;
        }
        goto LABEL_74;
      }
      if ( ((*(_DWORD *)a1 - 13) & 0xFFFFFEFF) != 0 || a2 - 4447 > 1 )
        goto LABEL_74;
    }
    else
    {
      if ( (int)a2 < 55204 )
      {
        if ( *(_BYTE *)(a1 + 112) != 1 )
        {
          if ( !(unsigned __int8)IsHangulLV(a2, v5, a3, a4) )
            goto LABEL_74;
          v48 = *(unsigned __int16 **)(v4 + 16);
          if ( v48 == *(unsigned __int16 **)(v4 + 8) )
            goto LABEL_74;
          v49 = *v48;
          *(_QWORD *)(v4 + 16) = v48 + 1;
          v50 = a2;
LABEL_125:
          v59 = ComposeHangulLVT(v50, v49);
          if ( !v59 )
          {
            *(_QWORD *)(v4 + 16) = v65;
            goto LABEL_74;
          }
          goto LABEL_73;
        }
        v51 = a2 - 44032;
        if ( !(unsigned __int8)NormBuffer__AppendEx(v4, (unsigned __int16)((int)(a2 - 44032) / 588 + 4352), 0LL, 0LL) )
          return 3221225507LL;
        v52 = (int)(a2 - 44032) % 588 / 28 + 4449;
        if ( !(unsigned __int8)NormBuffer__AppendEx(v4, v52, 0LL, 0LL) )
          return 3221225507LL;
        v54 = (unsigned __int16)(v51 % 28) != 0 ? v51 % 28 + 4519 : 0;
        if ( v54 )
        {
          if ( !(unsigned __int8)NormBuffer__AppendEx(v53, v54, 0LL, 0LL) )
            return 3221225507LL;
          v52 = v54;
        }
        *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 40);
        *(_DWORD *)(v4 + 88) = v52;
LABEL_12:
        *(_WORD *)(v4 + 92) = 0;
        return 0LL;
      }
      if ( a2 - 55216 <= 0x16 || a2 - 55243 <= 0x30 )
        goto LABEL_74;
    }
    v5 = -5;
  }
  v8 = *(unsigned __int8 *)((a2 & 0x7F) + ((unsigned __int64)v5 << 7) + *(_QWORD *)(a1 + 40) - 128);
  if ( !(_BYTE)v8 )
    goto LABEL_9;
  v11 = v8 & 0xC0;
  v12 = v8 & 0x3F;
  if ( (v8 & 0x3F) != 0 && v12 != 63 )
  {
    if ( (v8 & 0x80) == 0 )
    {
      LOBYTE(a4) = v8 & 0xC0;
      LOBYTE(a3) = v8 & 0x3F;
      if ( !(unsigned __int8)NormBuffer__AppendEx(v4, a2, a3, a4) )
        return 3221225507LL;
      *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 40);
      *(_DWORD *)(v4 + 88) = a2;
      *(_BYTE *)(v4 + 92) = v12;
      *(_BYTE *)(v4 + 93) = v11;
      return 0LL;
    }
    NormBuffer__GetLastChar(v4);
    v14 = *(_BYTE *)(v4 + 72);
    if ( !v14 || v14 == 63 || (v15 = *(_BYTE *)(v4 + 73), (v15 & 0xBF) == 0) )
    {
      v15 = *(_BYTE *)(v4 + 73);
      *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 64) + 2LL;
      *(_DWORD *)(v4 + 88) = *(_DWORD *)(v4 + 56);
      *(_BYTE *)(v4 + 92) = v14;
      *(_BYTE *)(v4 + 93) = v15;
      *(_QWORD *)(v4 + 96) = 0LL;
    }
    if ( v11 == (char)0x80 || (((*(_BYTE *)(v4 + 93) | *(_BYTE *)(v4 + 92)) + 64) & 0xBF) == 0 )
    {
      LOBYTE(v13) = v12;
      NormBuffer__IsBlocked(v4, v13);
      goto LABEL_69;
    }
    if ( !v14 || v14 == 63 )
    {
      CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(a1, *(unsigned int *)(v4 + 88), a2);
      a4 = CanCombinableCharactersCombine;
      if ( CanCombinableCharactersCombine )
      {
        NormBuffer__RewindOutputCharacter(v4);
        a3 = a4 & 0x7F;
        a2 = a4;
        v33 = *(_QWORD *)(a1 + 40);
        v34 = a3 + ((unsigned __int64)*(unsigned __int8 *)((a4 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
        v11 = *(_BYTE *)(v34 + v33 - 128) & 0xC0;
        v12 = *(_BYTE *)(v34 + v33 - 128) & 0x3F;
      }
LABEL_71:
      v31 = a2;
      v30 = v4;
LABEL_72:
      LOBYTE(a4) = v11;
      LOBYTE(a3) = v12;
      v32 = NormBuffer__AppendEx(v30, v31, a3, a4);
      goto LABEL_75;
    }
    if ( v15 )
    {
      if ( v15 != 64 )
      {
        LOBYTE(v13) = v12;
        if ( (unsigned __int8)NormBuffer__IsBlocked(v4, v13) )
          goto LABEL_69;
        v16 = *(_BYTE *)(v4 + 92);
        if ( !v16 || v16 == 63 || *(_BYTE *)(v4 + 93) == 64 )
        {
          v17 = Normalization__CanCombinableCharactersCombine(a1, *(unsigned int *)(v4 + 88), a2);
          if ( v17 )
          {
            v18 = *(_BYTE *)((v17 & 0x7F)
                           + ((unsigned __int64)*(unsigned __int8 *)(((__int64)v17 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                           + *(_QWORD *)(a1 + 40)
                           - 128);
            *(_WORD *)(*(_QWORD *)(v4 + 80) - 2LL) = v17;
            *(_DWORD *)(v4 + 88) = v17;
            *(_BYTE *)(v4 + 93) = v18 & 0xC0;
            v19 = (v18 & 0xC0) == 64;
            *(_BYTE *)(v4 + 92) = v18 & 0x3F;
            goto LABEL_94;
          }
          if ( !v16 || v16 == 63 )
            goto LABEL_69;
        }
        if ( v16 <= v12 )
        {
LABEL_69:
          a3 = *(_QWORD *)(v4 + 104);
          v30 = v4;
          v31 = a2;
          if ( a3 != *(_QWORD *)(v4 + 40) )
          {
            v32 = NormBuffer__Insert(v4, a2);
            goto LABEL_75;
          }
          goto LABEL_72;
        }
        if ( v16 == *(_BYTE *)(a1 + 116) )
        {
          if ( v12 >= *(_BYTE *)(a1 + 114) )
          {
            if ( v12 != *(_BYTE *)(a1 + 115) )
              goto LABEL_69;
LABEL_64:
            StartBasePair = NormBuffer__LastStartBasePair(v4);
            v25 = Normalization__CanCombinableCharactersCombine(a1, StartBasePair, a2);
            if ( !v25 )
              goto LABEL_69;
            goto LABEL_88;
          }
        }
        else if ( v16 == *(_BYTE *)(a1 + 118) && v12 == *(_BYTE *)(a1 + 117) )
        {
          goto LABEL_64;
        }
        StartBase = NormBuffer__LastStartBase(v4);
        v27 = Normalization__CanCombinableCharactersCombine(a1, StartBase, a2);
        if ( !v27 )
          goto LABEL_69;
        v29 = *(_QWORD *)(a1 + 40)
            + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)v27 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
        v28 = v27 & 0x7F;
        LOBYTE(v29) = *(_BYTE *)(v29 + v28 - 128);
LABEL_91:
        v44 = v29 & 0xC0;
        LOBYTE(v29) = v29 & 0x3F;
        LOBYTE(v28) = v44;
        v45 = NormBuffer__ReplaceLastStartBase(v4, v27, v29, v28);
LABEL_92:
        if ( v45 )
        {
          v19 = v44 == 64;
LABEL_94:
          if ( v19 )
            NormBuffer__RecheckStartCombinations(v4);
          return 0LL;
        }
        return 3221225507LL;
      }
      if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, *(unsigned int *)(v4 + 88), a2) )
      {
        NormBuffer__RewindOutputCharacter(v4);
        v37 = (v36 & 0x7F) + ((unsigned __int64)*(unsigned __int8 *)((v36 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
        v38 = *(_BYTE *)(v37 + *(_QWORD *)(a1 + 40) - 128);
        LOBYTE(v37) = v38 & 0x3F;
        if ( !(unsigned __int8)NormBuffer__AppendEx(v4, (unsigned int)v36, v37, v38 & 0xC0) )
          return 3221225507LL;
        v39 = *(_QWORD *)(v4 + 64);
        *(_QWORD *)(v4 + 96) = 0LL;
        *(_QWORD *)(v4 + 80) = v39 + 2;
        *(_DWORD *)(v4 + 88) = *(_DWORD *)(v4 + 56);
        *(_BYTE *)(v4 + 92) = *(_BYTE *)(v4 + 72);
        *(_BYTE *)(v4 + 93) = *(_BYTE *)(v4 + 73);
        return 0LL;
      }
    }
    if ( v14 <= v12 )
      goto LABEL_71;
    if ( v14 == *(_BYTE *)(a1 + 116) )
    {
      if ( v12 >= *(_BYTE *)(a1 + 114) )
      {
        if ( v12 != *(_BYTE *)(a1 + 115) )
          goto LABEL_71;
LABEL_87:
        v40 = NormBuffer__LastStartBasePair(v4);
        v25 = Normalization__CanCombinableCharactersCombine(a1, v40, a2);
        if ( !v25 )
          goto LABEL_71;
LABEL_88:
        v41 = v25 & 0x7F;
        v42 = v41 + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)v25 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
        v43 = *(_BYTE *)(v42 + *(_QWORD *)(a1 + 40) - 128);
        LOBYTE(v42) = v43 & 0x3F;
        v44 = v43 & 0xC0;
        LOBYTE(v41) = v44;
        v45 = NormBuffer__ReplaceLastStartBasePair(v4, v25, v42, v41);
        goto LABEL_92;
      }
    }
    else if ( v14 == *(_BYTE *)(a1 + 118) && v12 == *(_BYTE *)(a1 + 117) )
    {
      goto LABEL_87;
    }
    v46 = NormBuffer__LastStartBase(v4);
    v27 = Normalization__CanCombinableCharactersCombine(a1, v46, a2);
    if ( !v27 )
      goto LABEL_71;
    v28 = v27 & 0x7F;
    v29 = v28 + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)v27 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
    LOBYTE(v29) = *(_BYTE *)(v29 + *(_QWORD *)(a1 + 40) - 128);
    goto LABEL_91;
  }
  switch ( v8 )
  {
    case 127:
      if ( !*(_BYTE *)(a1 + 113) )
        return 3221227287LL;
LABEL_9:
      v9 = NormBuffer__AppendEx(v4, a2, 0LL, 0LL);
      goto LABEL_10;
    case 191:
      return Normalization__AppendDecomposedChar(a1, a2, v4);
    case 192:
      v20 = NormBuffer__GetLastChar(v4);
      v21 = Normalization__CanCombinableCharactersCombine(a1, v20, a2);
      a4 = v21;
      if ( !v21 )
        goto LABEL_71;
      NormBuffer__RewindOutputCharacter(v4);
      a2 = a4;
      goto LABEL_53;
  }
  if ( v8 != 255 || !a2 && *(_QWORD *)(v4 + 16) == *(_QWORD *)(v4 + 8) )
    goto LABEL_71;
  return 3221227287LL;
}
