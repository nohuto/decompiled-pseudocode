/*
 * XREFs of RtlFindClearBits @ 0x1402E5310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindClearBits(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  ULONG SizeOfBitMap; // ebp
  PULONG Buffer; // r15
  ULONG v6; // r11d
  ULONG v8; // edx
  int v9; // r9d
  ULONG v10; // edx
  ULONG v11; // r8d
  char *v12; // rsi
  ULONG v13; // r12d
  unsigned __int64 v14; // rbx
  unsigned __int64 *v15; // rax
  signed __int64 v16; // r8
  unsigned __int64 v17; // rcx
  ULONG v18; // edx
  ULONG v20; // edx
  bool v21; // sf
  bool v22; // zf
  __int64 v23; // rcx
  int v24; // r8d
  unsigned int v25; // ecx
  __int64 v26; // r13
  unsigned __int64 v27; // r13
  __int64 v28; // rcx
  int v29; // r8d
  char v30; // bl
  unsigned __int64 *v31; // r8
  unsigned int v32; // ebx
  __int64 v33; // r8
  __int64 v34; // rdx
  int v35; // r13d
  __int64 v36; // rcx
  ULONG v37; // ecx
  unsigned __int64 v38; // r13
  __int64 v39; // rdx
  __int64 v40; // rcx
  ULONG v41; // [rsp+48h] [rbp+10h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  Buffer = BitMapHeader->Buffer;
  v6 = HintIndex;
  if ( HintIndex >= BitMapHeader->SizeOfBitMap )
    v6 = 0;
  v8 = SizeOfBitMap - 1;
  if ( !NumberToFind )
    return v6 & 0xFFFFFFF8;
  v9 = ((__int64)BitMapHeader->Buffer & 4) != 0 ? 0x20 : 0;
  while ( 1 )
  {
    v10 = v9 + v8;
    v11 = v9 + v6;
    v12 = (char *)Buffer - (((unsigned __int8)Buffer & 4) != 0LL ? 4 : 0);
    if ( v10 - (v9 + v6) + 1 < NumberToFind )
      goto LABEL_74;
    v13 = v10 - NumberToFind + 1;
    v14 = (unsigned __int64)&v12[8 * ((unsigned __int64)v13 >> 6)];
    v15 = (unsigned __int64 *)&v12[8 * ((unsigned __int64)v11 >> 6)];
    v16 = *v15 | ((1LL << (v11 & 0x3F)) - 1);
    if ( NumberToFind > 0x7F )
      break;
    if ( NumberToFind >= 0x40 )
    {
LABEL_21:
      v21 = v16 < 0;
      while ( !v21 )
      {
LABEL_23:
        v22 = !_BitScanReverse64((unsigned __int64 *)&v23, v16);
        if ( v22 )
          v24 = 64;
        else
          v24 = 63 - v23;
        v18 = (((unsigned int)(((char *)v15 - v12) >> 3) + 1) << 6) - v24;
        if ( v18 > v13 )
          goto LABEL_61;
        v25 = NumberToFind - v24;
        if ( NumberToFind == v24 )
          goto LABEL_13;
        v16 = v15[1];
        ++v15;
        if ( v25 < 0x40 )
          goto LABEL_28;
        v21 = v16 < 0;
        if ( !v16 )
        {
          v25 -= 64;
          if ( !v25 )
            goto LABEL_13;
          v16 = v15[1];
          ++v15;
LABEL_28:
          v22 = !_BitScanForward64((unsigned __int64 *)&v26, v16);
          if ( v22 )
            LODWORD(v26) = 64;
          if ( (unsigned int)v26 >= v25 )
            goto LABEL_13;
          goto LABEL_21;
        }
      }
      while ( 1 )
      {
        if ( (unsigned __int64)++v15 > v14 )
          goto LABEL_61;
        v16 = *v15;
        if ( (*v15 & 0x8000000000000000uLL) == 0LL )
          goto LABEL_23;
      }
    }
    if ( NumberToFind > 1 )
    {
      v35 = 0;
      while ( 1 )
      {
        if ( v16 == -1 )
        {
          while ( 1 )
          {
            if ( (unsigned __int64)++v15 > v14 )
              goto LABEL_61;
            v16 = *v15;
            if ( *v15 != -1LL )
            {
              v35 = 0;
              break;
            }
          }
        }
        v22 = !_BitScanForward64((unsigned __int64 *)&v36, v16);
        if ( v22 )
          LODWORD(v36) = 64;
        if ( v35 + (int)v36 >= NumberToFind )
          break;
        v37 = NumberToFind;
        v38 = ~v16;
        v41 = NumberToFind;
        while ( 1 )
        {
          v38 &= v38 >> (v37 >> 1);
          if ( !v38 )
            break;
          v37 = v41 - (v37 >> 1);
          v41 = v37;
          if ( v37 <= 1 )
          {
            _BitScanForward64((unsigned __int64 *)&v39, v38);
            goto LABEL_60;
          }
        }
        if ( v15 == (unsigned __int64 *)&v12[8 * ((unsigned __int64)v10 >> 6)] )
          goto LABEL_61;
        v22 = !_BitScanReverse64((unsigned __int64 *)&v40, v16);
        if ( v22 )
          v35 = 64;
        else
          v35 = 63 - v40;
        v16 = v15[1];
        ++v15;
      }
      LODWORD(v39) = -v35;
LABEL_60:
      v18 = ((unsigned int)(((char *)v15 - v12) >> 3) << 6) + v39;
      if ( v18 <= v13 )
        goto LABEL_13;
      goto LABEL_61;
    }
    if ( v16 == -1 )
    {
      while ( (unsigned __int64)++v15 <= v14 )
      {
        v16 = *v15;
        if ( *v15 != -1LL )
          goto LABEL_12;
      }
LABEL_61:
      v18 = -1;
      goto LABEL_17;
    }
LABEL_12:
    _BitScanForward64(&v17, ~v16);
    v18 = v17 + ((unsigned int)(((char *)v15 - v12) >> 3) << 6);
    if ( v18 <= v13 )
      goto LABEL_13;
    v18 = -1;
LABEL_17:
    if ( !v6 )
      return v18;
    v20 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v20 = SizeOfBitMap;
    v8 = v20 - 1;
    v6 = 0;
  }
  v27 = v14 + 8;
  if ( (v13 & 0x3F) == 0 )
    v27 = (unsigned __int64)&v12[8 * ((unsigned __int64)(v10 - NumberToFind + 1) >> 6)];
  if ( v16 )
  {
    if ( *++v15 )
      goto LABEL_47;
    v22 = !_BitScanReverse64((unsigned __int64 *)&v28, v16);
    if ( v22 )
      v29 = 64;
    else
      v29 = 63 - v28;
  }
  else
  {
    v29 = 0;
  }
LABEL_39:
  v18 = ((unsigned int)(((char *)v15 - v12) >> 3) << 6) - v29;
  if ( v18 > v13 )
  {
LABEL_74:
    v18 = -1;
    goto LABEL_17;
  }
  v30 = NumberToFind - v29;
  v31 = &v15[(unsigned __int64)(NumberToFind - v29) >> 6];
  for ( ++v15; v15 != v31; ++v15 )
  {
    if ( *v15 )
      goto LABEL_47;
  }
  v32 = v30 & 0x3F;
  if ( v32 )
  {
    v22 = !_BitScanForward64((unsigned __int64 *)&v33, *v15);
    if ( v22 )
      LODWORD(v33) = 64;
    if ( (unsigned int)v33 < v32 )
    {
LABEL_47:
      while ( (unsigned __int64)v15 <= v27 )
      {
        if ( !*++v15 )
        {
          v22 = !_BitScanReverse64((unsigned __int64 *)&v34, *(v15 - 1));
          if ( v22 )
            v29 = 64;
          else
            v29 = 63 - v34;
          goto LABEL_39;
        }
      }
      goto LABEL_61;
    }
  }
LABEL_13:
  if ( v18 == -1 )
    goto LABEL_17;
  v18 -= v9;
  return v18;
}
