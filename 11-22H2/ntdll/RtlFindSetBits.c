/*
 * XREFs of RtlFindSetBits @ 0x180002D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlFindSetBits(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r13d
  unsigned int *Buffer; // r10
  ULONG v7; // r11d
  unsigned int v8; // r9d
  __int64 v9; // rcx
  int v10; // r15d
  unsigned int v11; // r8d
  ULONG v12; // edx
  char *v13; // r14
  ULONG v14; // ebp
  __int64 v15; // r9
  unsigned __int64 v16; // rdi
  char *v17; // rdx
  signed __int64 v18; // r9
  int v19; // ecx
  unsigned __int64 v20; // rax
  ULONG v21; // r8d
  bool v22; // cc
  int v25; // ecx
  char *v26; // rsi
  bool v27; // zf
  __int64 v28; // rax
  ULONG v29; // r10d
  unsigned __int64 v30; // r8
  __int64 v31; // rax
  ULONG v32; // r9d
  unsigned __int64 v33; // r10
  __int64 v34; // rax
  int v35; // ecx
  char v36; // r9
  char *v37; // rcx
  unsigned int v38; // r9d
  __int64 v39; // rcx
  char *v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  unsigned int v43; // r10d
  __int64 v44; // rax
  __int64 v45; // [rsp+40h] [rbp+8h]
  unsigned int *v46; // [rsp+58h] [rbp+20h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  Buffer = BitMapHeader->Buffer;
  v46 = Buffer;
  v7 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v8 = BitMapHeader->SizeOfBitMap - 1;
  if ( !NumberToFind )
    return v7 & 0xFFFFFFF8;
  v9 = (unsigned __int8)Buffer & 4;
  v45 = v9;
  v10 = v9 != 0 ? 0x20 : 0;
  while ( 1 )
  {
    v11 = v10 + v8;
    v12 = v10 + v7;
    v13 = (char *)Buffer - (v9 != 0 ? 4 : 0);
    if ( v8 - v7 + 1 < NumberToFind )
      goto LABEL_31;
    v14 = v11 - NumberToFind + 1;
    v15 = (1LL << (v12 & 0x3F)) - 1;
    v16 = (unsigned __int64)&v13[8 * ((unsigned __int64)v14 >> 6)];
    v17 = &v13[8 * ((unsigned __int64)v12 >> 6)];
    v18 = ~*(_QWORD *)v17 | v15;
    if ( NumberToFind > 0x7F )
    {
      v33 = v16 + 8;
      if ( (v14 & 0x3F) == 0 )
        v33 = (unsigned __int64)&v13[8 * ((unsigned __int64)(v11 - NumberToFind + 1) >> 6)];
      if ( !v18 )
      {
        v35 = 0;
        goto LABEL_44;
      }
      v17 += 8;
      if ( *(_QWORD *)v17 != -1LL )
        goto LABEL_58;
      v27 = !_BitScanReverse64((unsigned __int64 *)&v34, v18);
      if ( !v27 )
      {
        v35 = 63 - v34;
        goto LABEL_44;
      }
LABEL_57:
      v35 = 64;
LABEL_44:
      while ( 1 )
      {
        v21 = ((unsigned int)((v17 - v13) >> 3) << 6) - v35;
        if ( v21 > v14 )
          goto LABEL_31;
        v36 = NumberToFind - v35;
        v37 = &v17[8 * ((unsigned __int64)(NumberToFind - v35) >> 6)];
        while ( 1 )
        {
          v17 += 8;
          if ( v17 == v37 )
            break;
          if ( *(_QWORD *)v17 != -1LL )
            goto LABEL_58;
        }
        v38 = v36 & 0x3F;
        if ( !v38 )
          goto LABEL_10;
        v27 = !_BitScanForward64((unsigned __int64 *)&v39, ~*(_QWORD *)v17);
        if ( v27 )
          LODWORD(v39) = 64;
        if ( (unsigned int)v39 >= v38 )
          goto LABEL_10;
        do
        {
LABEL_58:
          v40 = v17;
          if ( (unsigned __int64)v17 > v33 )
            goto LABEL_31;
          v17 += 8;
        }
        while ( *(_QWORD *)v17 != -1LL );
        v27 = !_BitScanReverse64((unsigned __int64 *)&v41, ~*(_QWORD *)v40);
        if ( v27 )
          goto LABEL_57;
        v35 = 63 - v41;
      }
    }
    v19 = 64;
    if ( NumberToFind >= 0x40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v18 < 0 )
          {
            v17 += 8;
            if ( (unsigned __int64)v17 > v16 )
              goto LABEL_31;
            v18 = ~*(_QWORD *)v17;
          }
          v27 = !_BitScanReverse64((unsigned __int64 *)&v42, v18);
          if ( !v27 )
            v19 = 63 - v42;
          v21 = (((unsigned int)((v17 - v13) >> 3) + 1) << 6) - v19;
          if ( v21 > v14 )
            goto LABEL_31;
          v43 = NumberToFind - v19;
          if ( NumberToFind == v19 )
            goto LABEL_10;
          v17 += 8;
          v19 = 64;
          v18 = ~*(_QWORD *)v17;
          if ( v43 >= 0x40 )
            break;
LABEL_73:
          v27 = !_BitScanForward64((unsigned __int64 *)&v44, v18);
          if ( v27 )
            LODWORD(v44) = 64;
          if ( (unsigned int)v44 >= v43 )
            goto LABEL_10;
        }
        if ( *(_QWORD *)v17 == -1LL )
        {
          v43 -= 64;
          if ( !v43 )
            goto LABEL_10;
          v17 += 8;
          v18 = ~*(_QWORD *)v17;
          goto LABEL_73;
        }
      }
    }
    if ( NumberToFind > 1 )
    {
      v25 = 0;
      v26 = &v13[8 * ((unsigned __int64)v11 >> 6)];
      while ( v18 != -1 )
      {
LABEL_19:
        v27 = !_BitScanForward64((unsigned __int64 *)&v28, v18);
        if ( v27 )
          LODWORD(v28) = 64;
        if ( v25 + (int)v28 >= NumberToFind )
        {
          LODWORD(v30) = -v25;
LABEL_26:
          v21 = ((unsigned int)((v17 - v13) >> 3) << 6) + v30;
          v22 = v21 <= v14;
          goto LABEL_9;
        }
        v29 = NumberToFind;
        v30 = ~v18;
        while ( 1 )
        {
          v30 &= v30 >> (v29 >> 1);
          if ( !v30 )
            break;
          v29 -= v29 >> 1;
          if ( v29 <= 1 )
          {
            _BitScanForward64(&v30, v30);
            goto LABEL_26;
          }
        }
        if ( v17 == v26 )
          goto LABEL_31;
        v27 = !_BitScanReverse64((unsigned __int64 *)&v31, v18);
        if ( v27 )
          v25 = 64;
        else
          v25 = 63 - v31;
        v17 += 8;
        v18 = ~*(_QWORD *)v17;
      }
      while ( 1 )
      {
        v17 += 8;
        if ( (unsigned __int64)v17 > v16 )
          goto LABEL_31;
        v18 = ~*(_QWORD *)v17;
        if ( *(_QWORD *)v17 )
        {
          v25 = 0;
          goto LABEL_19;
        }
      }
    }
    while ( v18 == -1 )
    {
      v17 += 8;
      if ( (unsigned __int64)v17 > v16 )
        goto LABEL_31;
      v18 = ~*(_QWORD *)v17;
    }
    _BitScanForward64(&v20, ~v18);
    v21 = v20 + ((unsigned int)((v17 - v13) >> 3) << 6);
    v22 = v21 <= v14;
LABEL_9:
    if ( v22 )
      break;
LABEL_31:
    v21 = -1;
LABEL_32:
    if ( !v7 )
      return v21;
    v9 = v45;
    v32 = NumberToFind + HintIndex;
    Buffer = v46;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v32 = SizeOfBitMap;
    v8 = v32 - 1;
    v7 = 0;
  }
LABEL_10:
  if ( v21 == -1 )
    goto LABEL_32;
  v21 -= v10;
  return v21;
}
