/*
 * XREFs of RtlFindClearBitsAndSet @ 0x180030DF0
 * Callers:
 *     LdrpAcquireTlsIndex @ 0x18003132C (LdrpAcquireTlsIndex.c)
 * Callees:
 *     RtlSetBits @ 0x180031140 (RtlSetBits.c)
 */

ULONG __cdecl RtlFindClearBitsAndSet(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r13d
  ULONG v6; // ebx
  unsigned int v7; // r9d
  __int64 v8; // rcx
  int v9; // r15d
  unsigned int v10; // r10d
  ULONG v11; // edx
  char *v12; // r14
  ULONG v13; // ebp
  __int64 v14; // r8
  char *v15; // rsi
  unsigned __int64 *v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // rax
  unsigned int v19; // ecx
  bool v20; // cc
  ULONG v21; // ebx
  int v23; // ecx
  unsigned __int64 *v24; // rdi
  bool v25; // zf
  __int64 v26; // rax
  ULONG v27; // r10d
  unsigned __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rcx
  ULONG v31; // r9d
  __int64 v32; // rax
  int v33; // r8d
  unsigned int v34; // r9d
  __int64 v35; // rax
  char *v36; // r10
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  char v39; // r8
  unsigned __int64 *v40; // r9
  unsigned int v41; // r8d
  __int64 v42; // rax
  __int64 v43; // [rsp+60h] [rbp+8h]
  ULONG v44; // [rsp+70h] [rbp+18h]

  v44 = HintIndex;
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v6 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v7 = BitMapHeader->SizeOfBitMap - 1;
  if ( NumberToFind )
  {
    v8 = (__int64)BitMapHeader->Buffer & 4;
    v43 = v8;
    v9 = (unsigned int)v8 != 0LL ? 0x20 : 0;
    while ( 1 )
    {
      v10 = v9 + v7;
      v11 = v9 + v6;
      v12 = (char *)BitMapHeader->Buffer - (v8 != 0 ? 4 : 0);
      if ( v7 - v6 + 1 >= NumberToFind )
        break;
      v19 = -1;
LABEL_38:
      if ( !v6 )
        goto LABEL_14;
      v8 = v43;
      v31 = NumberToFind + HintIndex;
      if ( NumberToFind + HintIndex > SizeOfBitMap )
        v31 = SizeOfBitMap;
      v7 = v31 - 1;
      v6 = 0;
    }
    v13 = v10 - NumberToFind + 1;
    v14 = (1LL << (v11 & 0x3F)) - 1;
    v15 = &v12[8 * ((unsigned __int64)v13 >> 6)];
    v16 = (unsigned __int64 *)&v12[8 * ((unsigned __int64)v11 >> 6)];
    v17 = *v16 | v14;
    if ( NumberToFind > 0x7F )
    {
      v36 = v15 + 8;
      if ( (v13 & 0x3F) == 0 )
        v36 = &v12[8 * ((unsigned __int64)v13 >> 6)];
      if ( v17 )
      {
        if ( *++v16 )
          goto LABEL_77;
        v25 = !_BitScanReverse64((unsigned __int64 *)&v37, v17);
        if ( v25 )
        {
          LODWORD(v17) = 64;
          goto LABEL_65;
        }
LABEL_64:
        LODWORD(v17) = 63 - v37;
      }
LABEL_65:
      while ( 1 )
      {
        v19 = ((unsigned int)(((char *)v16 - v12) >> 3) << 6) - v17;
        if ( v19 > v13 )
          goto LABEL_36;
        v38 = NumberToFind - (unsigned int)v17;
        v39 = NumberToFind - v17;
        v40 = &v16[v38 >> 6];
        while ( ++v16 != v40 )
        {
          if ( *v16 )
            goto LABEL_77;
        }
        v41 = v39 & 0x3F;
        if ( !v41 )
          goto LABEL_12;
        v25 = !_BitScanForward64((unsigned __int64 *)&v42, *v16);
        if ( v25 )
          LODWORD(v42) = 64;
        if ( (unsigned int)v42 >= v41 )
          goto LABEL_12;
        do
        {
LABEL_77:
          if ( v16 > (unsigned __int64 *)v36 )
            goto LABEL_36;
          ++v16;
        }
        while ( *v16 );
        v25 = !_BitScanReverse64((unsigned __int64 *)&v37, *(v16 - 1));
        if ( !v25 )
          goto LABEL_64;
        LODWORD(v17) = 64;
      }
    }
    if ( NumberToFind < 0x40 )
    {
      if ( NumberToFind > 1 )
      {
        v23 = 0;
        v24 = (unsigned __int64 *)&v12[8 * ((unsigned __int64)v10 >> 6)];
        while ( v17 != -1 )
        {
LABEL_23:
          v25 = !_BitScanForward64((unsigned __int64 *)&v26, v17);
          if ( v25 )
            LODWORD(v26) = 64;
          if ( v23 + (int)v26 >= NumberToFind )
          {
            LODWORD(v30) = -v23;
LABEL_34:
            v19 = ((unsigned int)(((char *)v16 - v12) >> 3) << 6) + v30;
            v20 = v19 <= v13;
            goto LABEL_11;
          }
          v27 = NumberToFind;
          v28 = ~v17;
          while ( 1 )
          {
            v28 &= v28 >> (v27 >> 1);
            if ( !v28 )
              break;
            v27 -= v27 >> 1;
            if ( v27 <= 1 )
            {
              _BitScanForward64((unsigned __int64 *)&v30, v28);
              goto LABEL_34;
            }
          }
          if ( v16 == v24 )
            goto LABEL_36;
          v25 = !_BitScanReverse64((unsigned __int64 *)&v29, v17);
          if ( v25 )
            v23 = 64;
          else
            v23 = 63 - v29;
          v17 = *++v16;
        }
        while ( ++v16 <= (unsigned __int64 *)v15 )
        {
          v17 = *v16;
          if ( *v16 != -1LL )
          {
            v23 = 0;
            goto LABEL_23;
          }
        }
      }
      else
      {
        while ( v17 == -1 )
        {
          if ( ++v16 > (unsigned __int64 *)v15 )
            goto LABEL_36;
          v17 = *v16;
        }
        _BitScanForward64(&v18, ~v17);
        v19 = v18 + ((unsigned int)(((char *)v16 - v12) >> 3) << 6);
        v20 = v19 <= v13;
LABEL_11:
        if ( v20 )
        {
LABEL_12:
          if ( v19 != -1 )
          {
            v19 -= v9;
LABEL_14:
            v21 = v19;
            goto LABEL_15;
          }
          goto LABEL_37;
        }
      }
LABEL_36:
      v19 = -1;
LABEL_37:
      HintIndex = v44;
      goto LABEL_38;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v17 < 0 )
        {
          if ( ++v16 > (unsigned __int64 *)v15 )
            goto LABEL_36;
          v17 = *v16;
        }
        v25 = !_BitScanReverse64((unsigned __int64 *)&v32, v17);
        if ( v25 )
          v33 = 64;
        else
          v33 = 63 - v32;
        v19 = (((unsigned int)(((char *)v16 - v12) >> 3) + 1) << 6) - v33;
        if ( v19 > v13 )
          goto LABEL_36;
        v34 = NumberToFind - v33;
        if ( NumberToFind == v33 )
          goto LABEL_12;
        v17 = *++v16;
        if ( v34 >= 0x40 )
          break;
LABEL_53:
        v25 = !_BitScanForward64((unsigned __int64 *)&v35, v17);
        if ( v25 )
          LODWORD(v35) = 64;
        if ( (unsigned int)v35 >= v34 )
          goto LABEL_12;
      }
      if ( !v17 )
      {
        v34 -= 64;
        if ( !v34 )
          goto LABEL_12;
        v17 = *++v16;
        goto LABEL_53;
      }
    }
  }
  v21 = v6 & 0xFFFFFFF8;
LABEL_15:
  if ( v21 != -1 )
    RtlSetBits(BitMapHeader, v21, NumberToFind);
  return v21;
}
