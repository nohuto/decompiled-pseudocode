/*
 * XREFs of RtlFindClearBitsAndSet @ 0x1402054C0
 * Callers:
 *     sub_140205E40 @ 0x140205E40 (sub_140205E40.c)
 *     sub_1403AA42C @ 0x1403AA42C (sub_1403AA42C.c)
 *     sub_1403C3A30 @ 0x1403C3A30 (sub_1403C3A30.c)
 *     sub_1404588B6 @ 0x1404588B6 (sub_1404588B6.c)
 *     sub_140503590 @ 0x140503590 (sub_140503590.c)
 *     sub_140503628 @ 0x140503628 (sub_140503628.c)
 *     sub_140503808 @ 0x140503808 (sub_140503808.c)
 *     sub_1405038DC @ 0x1405038DC (sub_1405038DC.c)
 *     sub_140517C90 @ 0x140517C90 (sub_140517C90.c)
 *     sub_140518870 @ 0x140518870 (sub_140518870.c)
 *     sub_1405188FC @ 0x1405188FC (sub_1405188FC.c)
 *     sub_1405189C4 @ 0x1405189C4 (sub_1405189C4.c)
 *     sub_140596204 @ 0x140596204 (sub_140596204.c)
 *     sub_1405EF908 @ 0x1405EF908 (sub_1405EF908.c)
 *     sub_140672348 @ 0x140672348 (sub_140672348.c)
 *     sub_140696750 @ 0x140696750 (sub_140696750.c)
 *     sub_1407621C0 @ 0x1407621C0 (sub_1407621C0.c)
 *     sub_1407F3534 @ 0x1407F3534 (sub_1407F3534.c)
 *     sub_1408258B8 @ 0x1408258B8 (sub_1408258B8.c)
 *     sub_140909B14 @ 0x140909B14 (sub_140909B14.c)
 *     sub_14096C1B0 @ 0x14096C1B0 (sub_14096C1B0.c)
 *     sub_1409A2F78 @ 0x1409A2F78 (sub_1409A2F78.c)
 *     sub_140A6BF28 @ 0x140A6BF28 (sub_140A6BF28.c)
 *     sub_140A871D0 @ 0x140A871D0 (sub_140A871D0.c)
 *     sub_140B0751C @ 0x140B0751C (sub_140B0751C.c)
 *     sub_140B29EB4 @ 0x140B29EB4 (sub_140B29EB4.c)
 * Callees:
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 */

ULONG __stdcall RtlFindClearBitsAndSet(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  ULONG SizeOfBitMap; // r13d
  ULONG v4; // esi
  PULONG Buffer; // r10
  ULONG v8; // ebx
  ULONG v9; // r9d
  __int64 v10; // rcx
  int v11; // r15d
  ULONG v12; // r8d
  ULONG v13; // edx
  char *v14; // r14
  ULONG v15; // ebp
  __int64 v16; // r9
  unsigned __int64 v17; // rsi
  unsigned __int64 *v18; // rdx
  __int64 v19; // r9
  unsigned __int64 v20; // rax
  unsigned int v21; // r8d
  bool v22; // cc
  ULONG v23; // ebx
  ULONG v25; // r9d
  bool v26; // zf
  __int64 v27; // rax
  int v28; // r9d
  unsigned int v29; // ecx
  __int64 v30; // rax
  unsigned __int64 v31; // r10
  int v32; // ecx
  char v33; // r9
  unsigned __int64 *v34; // rcx
  unsigned int v35; // r9d
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  int v39; // ecx
  unsigned __int64 *v40; // rdi
  __int64 v41; // rax
  ULONG v42; // r10d
  unsigned __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // [rsp+70h] [rbp+8h]
  ULONG *v47; // [rsp+88h] [rbp+20h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v4 = HintIndex;
  Buffer = BitMapHeader->Buffer;
  v47 = Buffer;
  v8 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v9 = BitMapHeader->SizeOfBitMap - 1;
  if ( NumberToFind )
  {
    v10 = (unsigned __int8)Buffer & 4;
    v45 = v10;
    v11 = v10 != 0 ? 0x20 : 0;
    while ( 1 )
    {
      v12 = v11 + v9;
      v13 = v11 + v8;
      v14 = (char *)Buffer - (v10 != 0 ? 4 : 0);
      if ( v9 - v8 + 1 >= NumberToFind )
        break;
      v21 = -1;
LABEL_20:
      if ( !v8 )
        goto LABEL_14;
      v10 = v45;
      v25 = NumberToFind + v4;
      Buffer = v47;
      if ( NumberToFind + v4 > SizeOfBitMap )
        v25 = SizeOfBitMap;
      v9 = v25 - 1;
      v8 = 0;
    }
    v15 = v12 - NumberToFind + 1;
    v16 = (1LL << (v13 & 0x3F)) - 1;
    v17 = (unsigned __int64)&v14[8 * ((unsigned __int64)v15 >> 6)];
    v18 = (unsigned __int64 *)&v14[8 * ((unsigned __int64)v13 >> 6)];
    v19 = *v18 | v16;
    if ( NumberToFind > 0x7F )
    {
      v31 = v17 + 8;
      if ( (v15 & 0x3F) == 0 )
        v31 = (unsigned __int64)&v14[8 * ((unsigned __int64)(v12 - NumberToFind + 1) >> 6)];
      if ( !v19 )
      {
        v32 = 0;
        goto LABEL_41;
      }
      if ( *++v18 )
        goto LABEL_50;
      v26 = !_BitScanReverse64((unsigned __int64 *)&v38, v19);
      if ( !v26 )
      {
        v32 = 63 - v38;
        goto LABEL_41;
      }
LABEL_81:
      v32 = 64;
LABEL_41:
      while ( 1 )
      {
        v21 = ((unsigned int)(((char *)v18 - v14) >> 3) << 6) - v32;
        if ( v21 > v15 )
          goto LABEL_18;
        v33 = NumberToFind - v32;
        v34 = &v18[(unsigned __int64)(NumberToFind - v32) >> 6];
        while ( ++v18 != v34 )
        {
          if ( *v18 )
            goto LABEL_50;
        }
        v35 = v33 & 0x3F;
        if ( !v35 )
          goto LABEL_12;
        v26 = !_BitScanForward64((unsigned __int64 *)&v36, *v18);
        if ( v26 )
          LODWORD(v36) = 64;
        if ( (unsigned int)v36 >= v35 )
          goto LABEL_12;
        do
        {
LABEL_50:
          if ( (unsigned __int64)v18 > v31 )
            goto LABEL_18;
          ++v18;
        }
        while ( *v18 );
        v26 = !_BitScanReverse64((unsigned __int64 *)&v37, *(v18 - 1));
        if ( v26 )
          goto LABEL_81;
        v32 = 63 - v37;
      }
    }
    if ( NumberToFind < 0x40 )
    {
      if ( NumberToFind > 1 )
      {
        v39 = 0;
        v40 = (unsigned __int64 *)&v14[8 * ((unsigned __int64)v12 >> 6)];
        while ( v19 != -1 )
        {
LABEL_65:
          v26 = !_BitScanForward64((unsigned __int64 *)&v41, v19);
          if ( v26 )
            LODWORD(v41) = 64;
          if ( v39 + (int)v41 >= NumberToFind )
          {
            LODWORD(v43) = -v39;
LABEL_72:
            v21 = ((unsigned int)(((char *)v18 - v14) >> 3) << 6) + v43;
            v22 = v21 <= v15;
            goto LABEL_11;
          }
          v42 = NumberToFind;
          v43 = ~v19;
          while ( 1 )
          {
            v43 &= v43 >> (v42 >> 1);
            if ( !v43 )
              break;
            v42 -= v42 >> 1;
            if ( v42 <= 1 )
            {
              _BitScanForward64(&v43, v43);
              goto LABEL_72;
            }
          }
          if ( v18 == v40 )
            goto LABEL_18;
          v26 = !_BitScanReverse64((unsigned __int64 *)&v44, v19);
          if ( v26 )
            v39 = 64;
          else
            v39 = 63 - v44;
          v19 = *++v18;
        }
        while ( (unsigned __int64)++v18 <= v17 )
        {
          v19 = *v18;
          if ( *v18 != -1LL )
          {
            v39 = 0;
            goto LABEL_65;
          }
        }
      }
      else
      {
        while ( v19 == -1 )
        {
          if ( (unsigned __int64)++v18 > v17 )
            goto LABEL_18;
          v19 = *v18;
        }
        _BitScanForward64(&v20, ~v19);
        v21 = v20 + ((unsigned int)(((char *)v18 - v14) >> 3) << 6);
        v22 = v21 <= v15;
LABEL_11:
        if ( v22 )
        {
LABEL_12:
          if ( v21 != -1 )
          {
            v21 -= v11;
LABEL_14:
            v23 = v21;
            goto LABEL_15;
          }
          goto LABEL_19;
        }
      }
LABEL_18:
      v21 = -1;
LABEL_19:
      v4 = HintIndex;
      goto LABEL_20;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v19 < 0 )
        {
          if ( (unsigned __int64)++v18 > v17 )
            goto LABEL_18;
          v19 = *v18;
        }
        v26 = !_BitScanReverse64((unsigned __int64 *)&v27, v19);
        if ( v26 )
          v28 = 64;
        else
          v28 = 63 - v27;
        v21 = (((unsigned int)(((char *)v18 - v14) >> 3) + 1) << 6) - v28;
        if ( v21 > v15 )
          goto LABEL_18;
        v29 = NumberToFind - v28;
        if ( NumberToFind == v28 )
          goto LABEL_12;
        v19 = *++v18;
        if ( v29 >= 0x40 )
          break;
LABEL_32:
        v26 = !_BitScanForward64((unsigned __int64 *)&v30, v19);
        if ( v26 )
          LODWORD(v30) = 64;
        if ( (unsigned int)v30 >= v29 )
          goto LABEL_12;
      }
      if ( !*v18 )
      {
        v29 -= 64;
        if ( !v29 )
          goto LABEL_12;
        v19 = *++v18;
        goto LABEL_32;
      }
    }
  }
  v23 = v8 & 0xFFFFFFF8;
LABEL_15:
  if ( v23 != -1 )
    RtlSetBits(BitMapHeader, v23, NumberToFind);
  return v23;
}
