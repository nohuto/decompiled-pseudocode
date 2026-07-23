/*
 * XREFs of RtlFindSetBits @ 0x1402E4EE0
 * Callers:
 *     sub_140760A2C @ 0x140760A2C (sub_140760A2C.c)
 *     sub_14079C290 @ 0x14079C290 (sub_14079C290.c)
 *     sub_14079CC20 @ 0x14079CC20 (sub_14079CC20.c)
 *     sub_14081C05C @ 0x14081C05C (sub_14081C05C.c)
 *     sub_1409D847C @ 0x1409D847C (sub_1409D847C.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindSetBits(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  ULONG SizeOfBitMap; // ebp
  PULONG Buffer; // rsi
  ULONG v6; // r10d
  ULONG v8; // eax
  int v9; // ebx
  __int64 v10; // r12
  ULONG v11; // edx
  ULONG v12; // ecx
  ULONG *v13; // rdi
  ULONG v14; // r15d
  unsigned __int64 v15; // r11
  __int64 *v16; // rax
  signed __int64 v17; // r8
  unsigned __int64 v18; // rcx
  ULONG v19; // edx
  ULONG v21; // eax
  bool v22; // sf
  bool v23; // zf
  __int64 v24; // rcx
  int v25; // r8d
  unsigned int v26; // ecx
  __int64 v27; // r8
  __int64 v28; // r13
  unsigned __int64 v29; // r13
  __int64 v30; // rcx
  __int64 v31; // rcx
  char v32; // r11
  __int64 *v33; // r8
  unsigned int v34; // r11d
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rdx
  int v38; // r13d
  __int64 v39; // rcx
  ULONG v40; // ecx
  unsigned __int64 v41; // r13
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r8
  ULONG v46; // [rsp+48h] [rbp+10h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  Buffer = BitMapHeader->Buffer;
  v6 = HintIndex;
  if ( HintIndex >= BitMapHeader->SizeOfBitMap )
    v6 = 0;
  v8 = SizeOfBitMap - 1;
  if ( !NumberToFind )
    return v6 & 0xFFFFFFF8;
  if ( ((unsigned __int8)Buffer & 4) != 0 )
  {
    v9 = 32;
    v10 = 4LL;
  }
  else
  {
    v9 = 0;
    v10 = 0LL;
  }
  while ( 1 )
  {
    v11 = v9 + v8;
    v12 = v9 + v6;
    v13 = &Buffer[v10 / 0xFFFFFFFFFFFFFFFCuLL];
    if ( v8 - v6 + 1 < NumberToFind )
    {
      v19 = -1;
      goto LABEL_18;
    }
    v14 = v11 - NumberToFind + 1;
    v15 = (unsigned __int64)&v13[2 * ((unsigned __int64)v14 >> 6)];
    v16 = (__int64 *)&v13[2 * ((unsigned __int64)v12 >> 6)];
    v17 = ~*v16 | ((1LL << (v12 & 0x3F)) - 1);
    if ( NumberToFind > 0x7F )
      break;
    if ( NumberToFind >= 0x40 )
    {
LABEL_23:
      v22 = v17 < 0;
      while ( !v22 )
      {
LABEL_25:
        v23 = !_BitScanReverse64((unsigned __int64 *)&v24, v17);
        if ( v23 )
          v25 = 64;
        else
          v25 = 63 - v24;
        v19 = (((unsigned int)(((char *)v16 - (char *)v13) >> 3) + 1) << 6) - v25;
        if ( v19 > v14 )
          goto LABEL_17;
        v26 = NumberToFind - v25;
        if ( NumberToFind == v25 )
          goto LABEL_14;
        v27 = v16[1];
        ++v16;
        v17 = ~v27;
        if ( v26 < 0x40 )
          goto LABEL_30;
        v22 = v17 < 0;
        if ( !v17 )
        {
          v26 -= 64;
          if ( !v26 )
            goto LABEL_14;
          v45 = v16[1];
          ++v16;
          v17 = ~v45;
LABEL_30:
          v23 = !_BitScanForward64((unsigned __int64 *)&v28, v17);
          if ( v23 )
            LODWORD(v28) = 64;
          if ( (unsigned int)v28 >= v26 )
            goto LABEL_14;
          goto LABEL_23;
        }
      }
      while ( 1 )
      {
        if ( (unsigned __int64)++v16 > v15 )
          goto LABEL_17;
        v17 = ~*v16;
        if ( *v16 < 0 )
          goto LABEL_25;
      }
    }
    if ( NumberToFind > 1 )
    {
      v38 = 0;
      while ( 1 )
      {
        if ( v17 == -1 )
        {
          while ( 1 )
          {
            if ( (unsigned __int64)++v16 > v15 )
              goto LABEL_17;
            v17 = ~*v16;
            if ( *v16 )
            {
              v38 = 0;
              break;
            }
          }
        }
        v23 = !_BitScanForward64((unsigned __int64 *)&v39, v17);
        if ( v23 )
          LODWORD(v39) = 64;
        if ( v38 + (int)v39 >= NumberToFind )
          break;
        v40 = NumberToFind;
        v41 = ~v17;
        v46 = NumberToFind;
        while ( 1 )
        {
          v41 &= v41 >> (v40 >> 1);
          if ( !v41 )
            break;
          v40 = v46 - (v40 >> 1);
          v46 = v40;
          if ( v40 <= 1 )
          {
            _BitScanForward64((unsigned __int64 *)&v42, v41);
            goto LABEL_62;
          }
        }
        if ( v16 == (__int64 *)&v13[2 * ((unsigned __int64)v11 >> 6)] )
          goto LABEL_17;
        v23 = !_BitScanReverse64((unsigned __int64 *)&v43, v17);
        if ( v23 )
          v38 = 64;
        else
          v38 = 63 - v43;
        v44 = v16[1];
        ++v16;
        v17 = ~v44;
      }
      LODWORD(v42) = -v38;
LABEL_62:
      v19 = ((unsigned int)(((char *)v16 - (char *)v13) >> 3) << 6) + v42;
      if ( v19 <= v14 )
        goto LABEL_14;
      goto LABEL_17;
    }
    if ( v17 == -1 )
    {
      while ( (unsigned __int64)++v16 <= v15 )
      {
        v17 = ~*v16;
        if ( *v16 )
          goto LABEL_13;
      }
LABEL_17:
      v19 = -1;
      goto LABEL_18;
    }
LABEL_13:
    _BitScanForward64(&v18, ~v17);
    v19 = v18 + ((unsigned int)(((char *)v16 - (char *)v13) >> 3) << 6);
    if ( v19 <= v14 )
      goto LABEL_14;
    v19 = -1;
LABEL_18:
    if ( !v6 )
      return v19;
    v21 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v21 = SizeOfBitMap;
    v8 = v21 - 1;
    v6 = 0;
  }
  v29 = v15 + 8;
  if ( (v14 & 0x3F) == 0 )
    v29 = (unsigned __int64)&v13[2 * ((unsigned __int64)(v11 - NumberToFind + 1) >> 6)];
  if ( v17 )
  {
    v30 = v16[1];
    ++v16;
    if ( v30 != -1 )
      goto LABEL_49;
    v23 = !_BitScanReverse64((unsigned __int64 *)&v31, v17);
    if ( v23 )
      LODWORD(v17) = 64;
    else
      LODWORD(v17) = 63 - v31;
  }
LABEL_41:
  v19 = ((unsigned int)(((char *)v16 - (char *)v13) >> 3) << 6) - v17;
  if ( v19 > v14 )
    goto LABEL_17;
  v32 = NumberToFind - v17;
  v33 = &v16[(unsigned __int64)(NumberToFind - (unsigned int)v17) >> 6];
  for ( ++v16; v16 != v33; ++v16 )
  {
    if ( *v16 != -1 )
      goto LABEL_49;
  }
  v34 = v32 & 0x3F;
  if ( v34 )
  {
    v23 = !_BitScanForward64((unsigned __int64 *)&v35, ~*v16);
    if ( v23 )
      LODWORD(v35) = 64;
    if ( (unsigned int)v35 < v34 )
    {
LABEL_49:
      while ( (unsigned __int64)v16 <= v29 )
      {
        v36 = v16[1];
        ++v16;
        if ( v36 == -1 )
        {
          v23 = !_BitScanReverse64((unsigned __int64 *)&v37, ~*(v16 - 1));
          if ( v23 )
            LODWORD(v17) = 64;
          else
            LODWORD(v17) = 63 - v37;
          goto LABEL_41;
        }
      }
      goto LABEL_17;
    }
  }
LABEL_14:
  if ( v19 == -1 )
    goto LABEL_18;
  v19 -= v9;
  return v19;
}
