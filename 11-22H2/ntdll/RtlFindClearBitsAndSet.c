/*
 * XREFs of RtlFindClearBitsAndSet @ 0x180004D50
 * Callers:
 *     LdrpAcquireTlsIndex @ 0x180004BD8 (LdrpAcquireTlsIndex.c)
 * Callees:
 *     RtlSetBits @ 0x180005010 (RtlSetBits.c)
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
  __int64 v29; // rcx
  __int64 v30; // rax
  ULONG v31; // r9d
  char *v32; // r10
  unsigned __int64 *v33; // rax
  unsigned __int64 v34; // rax
  char v35; // r8
  unsigned __int64 *v36; // r9
  unsigned int v37; // r8d
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // r8d
  unsigned int v41; // r9d
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
        goto LABEL_12;
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
      v32 = v15 + 8;
      if ( (v13 & 0x3F) == 0 )
        v32 = &v12[8 * ((unsigned __int64)v13 >> 6)];
      if ( v17 )
      {
        if ( *++v16 )
          goto LABEL_62;
        v25 = !_BitScanReverse64((unsigned __int64 *)&v33, v17);
        if ( v25 )
        {
          LODWORD(v17) = 64;
          goto LABEL_48;
        }
LABEL_47:
        LODWORD(v17) = 63 - (_DWORD)v33;
      }
LABEL_48:
      while ( 1 )
      {
        v19 = ((unsigned int)(((char *)v16 - v12) >> 3) << 6) - v17;
        if ( v19 > v13 )
          goto LABEL_36;
        v34 = NumberToFind - (unsigned int)v17;
        v35 = NumberToFind - v17;
        v36 = &v16[v34 >> 6];
        while ( ++v16 != v36 )
        {
          if ( *v16 )
            goto LABEL_62;
        }
        v37 = v35 & 0x3F;
        if ( !v37 )
          goto LABEL_10;
        v25 = !_BitScanForward64((unsigned __int64 *)&v38, *v16);
        if ( v25 )
          LODWORD(v38) = 64;
        if ( (unsigned int)v38 >= v37 )
          goto LABEL_10;
        do
        {
LABEL_62:
          v33 = v16;
          if ( v16 > (unsigned __int64 *)v32 )
            goto LABEL_36;
          ++v16;
        }
        while ( *v16 );
        v25 = !_BitScanReverse64((unsigned __int64 *)&v33, *v33);
        if ( !v25 )
          goto LABEL_47;
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
LABEL_21:
          v25 = !_BitScanForward64((unsigned __int64 *)&v26, v17);
          if ( v25 )
            LODWORD(v26) = 64;
          if ( v23 + (int)v26 >= NumberToFind )
          {
            LODWORD(v29) = -v23;
LABEL_28:
            v19 = ((unsigned int)(((char *)v16 - v12) >> 3) << 6) + v29;
            v20 = v19 <= v13;
            goto LABEL_9;
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
              _BitScanForward64((unsigned __int64 *)&v29, v28);
              goto LABEL_28;
            }
          }
          if ( v16 == v24 )
            goto LABEL_36;
          v25 = !_BitScanReverse64((unsigned __int64 *)&v30, v17);
          if ( v25 )
            v23 = 64;
          else
            v23 = 63 - v30;
          v17 = *++v16;
        }
        while ( ++v16 <= (unsigned __int64 *)v15 )
        {
          v17 = *v16;
          if ( *v16 != -1LL )
          {
            v23 = 0;
            goto LABEL_21;
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
LABEL_9:
        if ( v20 )
        {
LABEL_10:
          if ( v19 != -1 )
          {
            v19 -= v9;
LABEL_12:
            v21 = v19;
            goto LABEL_13;
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
        v25 = !_BitScanReverse64((unsigned __int64 *)&v39, v17);
        if ( v25 )
          v40 = 64;
        else
          v40 = 63 - v39;
        v19 = (((unsigned int)(((char *)v16 - v12) >> 3) + 1) << 6) - v40;
        if ( v19 > v13 )
          goto LABEL_36;
        v41 = NumberToFind - v40;
        if ( NumberToFind == v40 )
          goto LABEL_10;
        v17 = *++v16;
        if ( v41 >= 0x40 )
          break;
LABEL_79:
        v25 = !_BitScanForward64((unsigned __int64 *)&v42, v17);
        if ( v25 )
          LODWORD(v42) = 64;
        if ( (unsigned int)v42 >= v41 )
          goto LABEL_10;
      }
      if ( !v17 )
      {
        v41 -= 64;
        if ( !v41 )
          goto LABEL_10;
        v17 = *++v16;
        goto LABEL_79;
      }
    }
  }
  v21 = v6 & 0xFFFFFFF8;
LABEL_13:
  if ( v21 != -1 )
    RtlSetBits(BitMapHeader, v21, NumberToFind);
  return v21;
}
