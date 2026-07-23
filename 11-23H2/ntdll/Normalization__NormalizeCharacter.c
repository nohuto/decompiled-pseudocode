/*
 * XREFs of Normalization__NormalizeCharacter @ 0x18008A014
 * Callers:
 *     Normalization__Normalize @ 0x180089EE8 (Normalization__Normalize.c)
 *     Normalization__AppendDecomposedChar @ 0x18010DF50 (Normalization__AppendDecomposedChar.c)
 * Callees:
 *     NormBuffer__AppendEx @ 0x18008A0FC (NormBuffer__AppendEx.c)
 *     NormBuffer__Append @ 0x18008A160 (NormBuffer__Append.c)
 *     ComposeHangulLV @ 0x18010D768 (ComposeHangulLV.c)
 *     ComposeHangulLVT @ 0x18010D798 (ComposeHangulLVT.c)
 *     IsHangulLV @ 0x18010D7CC (IsHangulLV.c)
 *     NormBuffer__GetLastChar @ 0x18010D8F4 (NormBuffer__GetLastChar.c)
 *     NormBuffer__Insert @ 0x18010D98C (NormBuffer__Insert.c)
 *     NormBuffer__IsBlocked @ 0x18010DA64 (NormBuffer__IsBlocked.c)
 *     NormBuffer__LastStartBase @ 0x18010DB0C (NormBuffer__LastStartBase.c)
 *     NormBuffer__LastStartBasePair @ 0x18010DB38 (NormBuffer__LastStartBasePair.c)
 *     NormBuffer__RecheckStartCombinations @ 0x18010DB88 (NormBuffer__RecheckStartCombinations.c)
 *     NormBuffer__ReplaceLastStartBase @ 0x18010DD00 (NormBuffer__ReplaceLastStartBase.c)
 *     NormBuffer__ReplaceLastStartBasePair @ 0x18010DD78 (NormBuffer__ReplaceLastStartBasePair.c)
 *     NormBuffer__RewindOutputCharacter @ 0x18010DE3C (NormBuffer__RewindOutputCharacter.c)
 *     Normalization__AppendDecomposedChar @ 0x18010DF50 (Normalization__AppendDecomposedChar.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x18010E064 (Normalization__CanCombinableCharactersCombine.c)
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
  __int64 v22; // rdx
  char v23; // al
  unsigned __int16 *v24; // rax
  int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned int StartBasePair; // eax
  unsigned int v31; // eax
  unsigned int StartBase; // eax
  unsigned int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // r10
  unsigned __int64 v36; // r8
  unsigned __int8 v37; // r9
  __int64 v38; // rax
  unsigned int v39; // eax
  __int64 v40; // r9
  __int64 v41; // r8
  char v42; // di
  char v43; // di
  char v44; // al
  unsigned int v45; // eax
  __int64 v46; // r9
  __int64 v47; // r8
  char v48; // di
  int CanCombinableCharactersCombine; // eax
  __int64 v50; // rdx
  unsigned __int16 *v51; // r10
  __int64 v52; // rdx
  __int64 v53; // rcx
  signed int v54; // edi
  unsigned __int16 v55; // si
  unsigned __int16 v56; // di
  unsigned int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  unsigned int v63; // r9d
  unsigned int v64; // eax
  unsigned int LastChar; // eax
  __int64 v66; // rdx
  __int64 v67; // r8
  unsigned int v68; // r9d
  unsigned __int16 *v69; // r8
  __int64 v70; // rdx
  unsigned int v71; // eax
  __int64 v72; // r8
  unsigned __int16 *v73; // r10
  __int64 v74; // r10

  v4 = a4;
  v5 = a3;
  if ( !(_BYTE)a3 )
    goto LABEL_49;
  while ( 1 )
  {
    while ( 1 )
    {
      switch ( v5 )
      {
        case 0u:
          goto LABEL_129;
        case 0xFBu:
          if ( !*(_BYTE *)(a1 + 113) )
            return 3221227287LL;
LABEL_129:
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
      v24 = *(unsigned __int16 **)(v4 + 16);
      if ( v24 == *(unsigned __int16 **)(v4 + 8) )
        return 3221227287LL;
      v25 = *v24;
      *(_QWORD *)(v4 + 16) = v24 + 1;
      if ( (unsigned __int16)(v25 + 9216) > 0x3FFu )
        return 3221227287LL;
      a2 = v25 + ((a2 - 55287) << 10);
      v5 = *(_BYTE *)(((__int64)(int)a2 >> 7) + *(_QWORD *)(a1 + 32));
LABEL_55:
      if ( !v5 )
        goto LABEL_49;
    }
    if ( v5 != 255 )
      break;
    if ( (int)a2 < 44032 )
    {
      if ( a2 - 4352 <= 0x12 )
      {
        v69 = *(unsigned __int16 **)(v4 + 16);
        if ( v69 == *(unsigned __int16 **)(v4 + 8) )
          goto LABEL_49;
        v70 = *v69;
        *(_QWORD *)(v4 + 16) = v69 + 1;
        v71 = ComposeHangulLV(a2, v70);
        if ( !v71 )
        {
          *(_QWORD *)(v4 + 16) = v72;
          goto LABEL_49;
        }
        a2 = v71;
        if ( v73 == *(unsigned __int16 **)(v4 + 8) )
        {
LABEL_49:
          v23 = NormBuffer__Append(v4, a2);
          goto LABEL_50;
        }
        v52 = *v73;
        *(_QWORD *)(v4 + 16) = v73 + 1;
        v53 = v71;
        goto LABEL_123;
      }
      if ( a2 - 4449 <= 0x14 )
      {
        LastChar = NormBuffer__GetLastChar(v4);
        if ( LastChar - 4352 > 0x12 )
          goto LABEL_49;
        NormBuffer__RewindOutputCharacter(v4, v66, v67, LastChar);
        v64 = ComposeHangulLV(v68, a2);
        goto LABEL_118;
      }
      if ( a2 - 4520 <= 0x1A )
      {
        v57 = NormBuffer__GetLastChar(v4);
        if ( (unsigned __int8)IsHangulLV(v57, v58, v59, v57) )
        {
          NormBuffer__RewindOutputCharacter(v4, v60, v61, v62);
          v64 = ComposeHangulLVT(v63, a2);
          goto LABEL_118;
        }
        goto LABEL_49;
      }
      if ( ((*(_DWORD *)a1 - 13) & 0xFFFFFEFF) != 0 || a2 - 4447 > 1 )
        goto LABEL_49;
    }
    else
    {
      if ( (int)a2 < 55204 )
      {
        if ( *(_BYTE *)(a1 + 112) != 1 )
        {
          if ( !(unsigned __int8)IsHangulLV(a2, v5, a3, a4) )
            goto LABEL_49;
          v51 = *(unsigned __int16 **)(v4 + 16);
          if ( v51 == *(unsigned __int16 **)(v4 + 8) )
            goto LABEL_49;
          v52 = *v51;
          *(_QWORD *)(v4 + 16) = v51 + 1;
          v53 = a2;
LABEL_123:
          v64 = ComposeHangulLVT(v53, v52);
          if ( !v64 )
          {
            *(_QWORD *)(v4 + 16) = v74;
            goto LABEL_49;
          }
LABEL_118:
          a2 = v64;
          goto LABEL_49;
        }
        v54 = a2 - 44032;
        if ( !(unsigned __int8)NormBuffer__AppendEx(v4, (unsigned __int16)((__int16)v54 / 588 + 4352), 0LL, 0LL) )
          return 3221225507LL;
        v55 = v54 % 588 / 28 + 4449;
        if ( !(unsigned __int8)NormBuffer__AppendEx(v4, v55, 0LL, 0LL) )
          return 3221225507LL;
        v56 = (unsigned __int16)(v54 % 28) != 0 ? v54 % 28 + 4519 : 0;
        if ( v56 )
        {
          if ( !(unsigned __int8)NormBuffer__AppendEx(v4, v56, 0LL, 0LL) )
            return 3221225507LL;
          v55 = v56;
        }
        *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 40);
        *(_DWORD *)(v4 + 88) = v55;
LABEL_12:
        *(_WORD *)(v4 + 92) = 0;
        return 0LL;
      }
      if ( a2 - 55216 <= 0x16 || a2 - 55243 <= 0x30 )
        goto LABEL_49;
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
      goto LABEL_58;
    }
    if ( !v14 || v14 == 63 )
    {
      CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(a1, *(unsigned int *)(v4 + 88), a2);
      a4 = CanCombinableCharactersCombine;
      if ( CanCombinableCharactersCombine )
      {
        NormBuffer__RewindOutputCharacter(v4, v50, a3, CanCombinableCharactersCombine);
        a3 = a4 & 0x7F;
        a2 = a4;
        v28 = *(_QWORD *)(a1 + 40);
        v29 = a3 + ((unsigned __int64)*(unsigned __int8 *)((a4 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
        v11 = *(_BYTE *)(v29 + v28 - 128) & 0xC0;
        v12 = *(_BYTE *)(v29 + v28 - 128) & 0x3F;
      }
LABEL_60:
      v26 = a2;
      v27 = v4;
      goto LABEL_61;
    }
    if ( v15 )
    {
      if ( v15 != 64 )
      {
        LOBYTE(v13) = v12;
        if ( (unsigned __int8)NormBuffer__IsBlocked(v4, v13) )
          goto LABEL_58;
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
            goto LABEL_91;
          }
          if ( !v16 || v16 == 63 )
            goto LABEL_58;
        }
        if ( v16 <= v12 )
          goto LABEL_58;
        if ( v16 == *(_BYTE *)(a1 + 116) )
        {
          if ( v12 >= *(_BYTE *)(a1 + 114) )
          {
            if ( v12 != *(_BYTE *)(a1 + 115) )
              goto LABEL_58;
            goto LABEL_71;
          }
        }
        else if ( v16 == *(_BYTE *)(a1 + 118) && v12 == *(_BYTE *)(a1 + 117) )
        {
LABEL_71:
          StartBasePair = NormBuffer__LastStartBasePair(v4);
          v31 = Normalization__CanCombinableCharactersCombine(a1, StartBasePair, a2);
          if ( v31 )
          {
LABEL_86:
            v40 = v31 & 0x7F;
            v41 = v40 + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)v31 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
            v42 = *(_BYTE *)(v41 + *(_QWORD *)(a1 + 40) - 128);
            LOBYTE(v41) = v42 & 0x3F;
            v43 = v42 & 0xC0;
            LOBYTE(v40) = v43;
            v44 = NormBuffer__ReplaceLastStartBasePair(v4, v31, v41, v40);
            goto LABEL_89;
          }
LABEL_58:
          a3 = *(_QWORD *)(v4 + 104);
          v26 = a2;
          v27 = v4;
          if ( a3 != *(_QWORD *)(v4 + 40) )
          {
            v23 = NormBuffer__Insert(v4, a2);
            goto LABEL_50;
          }
LABEL_61:
          LOBYTE(a4) = v11;
          LOBYTE(a3) = v12;
          v23 = NormBuffer__AppendEx(v27, v26, a3, a4);
LABEL_50:
          if ( !v23 )
            return 3221225507LL;
          return 0LL;
        }
        StartBase = NormBuffer__LastStartBase(v4);
        v33 = Normalization__CanCombinableCharactersCombine(a1, StartBase, a2);
        if ( !v33 )
          goto LABEL_58;
LABEL_88:
        v46 = v33 & 0x7F;
        v47 = v46 + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)v33 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
        v48 = *(_BYTE *)(v47 + *(_QWORD *)(a1 + 40) - 128);
        LOBYTE(v47) = v48 & 0x3F;
        v43 = v48 & 0xC0;
        LOBYTE(v46) = v43;
        v44 = NormBuffer__ReplaceLastStartBase(v4, v33, v47, v46);
LABEL_89:
        if ( v44 )
        {
          v19 = v43 == 64;
LABEL_91:
          if ( v19 )
            NormBuffer__RecheckStartCombinations(v4);
          return 0LL;
        }
        return 3221225507LL;
      }
      if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, *(unsigned int *)(v4 + 88), a2) )
      {
        NormBuffer__RewindOutputCharacter(v4, v34, a3, a4);
        v36 = (v35 & 0x7F) + ((unsigned __int64)*(unsigned __int8 *)((v35 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
        v37 = *(_BYTE *)(v36 + *(_QWORD *)(a1 + 40) - 128);
        LOBYTE(v36) = v37 & 0x3F;
        if ( !(unsigned __int8)NormBuffer__AppendEx(v4, (unsigned int)v35, v36, v37 & 0xC0) )
          return 3221225507LL;
        v38 = *(_QWORD *)(v4 + 64);
        *(_QWORD *)(v4 + 96) = 0LL;
        *(_QWORD *)(v4 + 80) = v38 + 2;
        *(_DWORD *)(v4 + 88) = *(_DWORD *)(v4 + 56);
        *(_BYTE *)(v4 + 92) = *(_BYTE *)(v4 + 72);
        *(_BYTE *)(v4 + 93) = *(_BYTE *)(v4 + 73);
        return 0LL;
      }
    }
    if ( v14 <= v12 )
      goto LABEL_60;
    if ( v14 == *(_BYTE *)(a1 + 116) )
    {
      if ( v12 >= *(_BYTE *)(a1 + 114) )
      {
        if ( v12 != *(_BYTE *)(a1 + 115) )
          goto LABEL_60;
LABEL_85:
        v39 = NormBuffer__LastStartBasePair(v4);
        v31 = Normalization__CanCombinableCharactersCombine(a1, v39, a2);
        if ( !v31 )
          goto LABEL_60;
        goto LABEL_86;
      }
    }
    else if ( v14 == *(_BYTE *)(a1 + 118) && v12 == *(_BYTE *)(a1 + 117) )
    {
      goto LABEL_85;
    }
    v45 = NormBuffer__LastStartBase(v4);
    v33 = Normalization__CanCombinableCharactersCombine(a1, v45, a2);
    if ( !v33 )
      goto LABEL_60;
    goto LABEL_88;
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
        goto LABEL_60;
      NormBuffer__RewindOutputCharacter(v4, v22, a3, v21);
      a2 = a4;
      goto LABEL_55;
  }
  if ( v8 != 255 || !a2 && *(_QWORD *)(v4 + 16) == *(_QWORD *)(v4 + 8) )
    goto LABEL_60;
  return 3221227287LL;
}
