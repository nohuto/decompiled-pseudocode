/*
 * XREFs of RtlFindSetBitsAndClear @ 0x1405E5DA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 */

ULONG __stdcall RtlFindSetBitsAndClear(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  ULONG SizeOfBitMap; // r13d
  ULONG v4; // esi
  PULONG Buffer; // r10
  ULONG v8; // ebx
  ULONG v9; // r9d
  ULONG v10; // ebx
  __int64 v11; // rcx
  int v12; // r15d
  ULONG v13; // r8d
  ULONG v14; // edx
  char *v15; // r14
  unsigned int v16; // r8d
  ULONG v17; // ebp
  __int64 v18; // r9
  unsigned __int64 v19; // rsi
  char *v20; // rdx
  signed __int64 v21; // r9
  unsigned __int64 v22; // r10
  int v23; // ecx
  bool v24; // zf
  __int64 v25; // rax
  __int64 v26; // r8
  char v27; // r9
  char *v28; // rcx
  unsigned int v29; // r9d
  __int64 v30; // rcx
  ULONG v31; // r9d
  int v32; // ecx
  char *v33; // rdi
  __int64 v34; // rax
  ULONG v35; // r10d
  unsigned __int64 v36; // r8
  __int64 v37; // rax
  int v38; // r9d
  unsigned int v39; // ecx
  __int64 v40; // rax
  __int64 v41; // rax
  bool v42; // cc
  unsigned __int64 v43; // rax
  __int64 v45; // [rsp+70h] [rbp+8h]
  int v46; // [rsp+78h] [rbp+10h]
  ULONG *v48; // [rsp+88h] [rbp+20h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v4 = HintIndex;
  Buffer = BitMapHeader->Buffer;
  v48 = Buffer;
  v8 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v9 = BitMapHeader->SizeOfBitMap - 1;
  if ( !NumberToFind )
  {
    v10 = v8 & 0xFFFFFFF8;
    goto LABEL_79;
  }
  v11 = (unsigned __int8)Buffer & 4;
  v45 = v11;
  v12 = v11 != 0 ? 0x20 : 0;
  while ( 1 )
  {
    v46 = 0;
    v13 = v12 + v9;
    v14 = v12 + v8;
    v15 = (char *)Buffer - (v11 != 0 ? 4 : 0);
    if ( v9 - v8 + 1 < NumberToFind )
    {
      v16 = -1;
      goto LABEL_29;
    }
    v17 = v13 - NumberToFind + 1;
    v18 = (1LL << (v14 & 0x3F)) - 1;
    v19 = (unsigned __int64)&v15[8 * ((unsigned __int64)v17 >> 6)];
    v20 = &v15[8 * ((unsigned __int64)v14 >> 6)];
    v21 = ~*(_QWORD *)v20 | v18;
    if ( NumberToFind > 0x7F )
    {
      v22 = v19 + 8;
      if ( (v17 & 0x3F) == 0 )
        v22 = (unsigned __int64)&v15[8 * ((unsigned __int64)(v13 - NumberToFind + 1) >> 6)];
      if ( v21 )
      {
        v20 += 8;
        if ( *(_QWORD *)v20 != -1LL )
          goto LABEL_15;
        v46 = 0;
        v24 = !_BitScanReverse64((unsigned __int64 *)&v25, v21);
        if ( v24 )
LABEL_13:
          v23 = 64;
        else
          v23 = 63 - v25;
      }
      else
      {
        v23 = 0;
      }
LABEL_19:
      v16 = ((unsigned int)((v20 - v15) >> 3) << 6) - v23;
      if ( v16 <= v17 )
      {
        v27 = NumberToFind - v23;
        v28 = &v20[8 * ((unsigned __int64)(NumberToFind - v23) >> 6)];
        while ( 1 )
        {
          v20 += 8;
          if ( v20 == v28 )
            break;
          if ( *(_QWORD *)v20 != -1LL )
            goto LABEL_15;
        }
        v29 = v27 & 0x3F;
        if ( !v29 )
          goto LABEL_27;
        v46 = 0;
        v24 = !_BitScanForward64((unsigned __int64 *)&v30, ~*(_QWORD *)v20);
        if ( v24 )
          LODWORD(v30) = 64;
        if ( (unsigned int)v30 >= v29 )
          goto LABEL_27;
LABEL_15:
        while ( (unsigned __int64)v20 <= v22 )
        {
          v20 += 8;
          if ( *(_QWORD *)v20 == -1LL )
          {
            v46 &= ~*(_DWORD *)v20;
            v24 = !_BitScanReverse64((unsigned __int64 *)&v26, ~*((_QWORD *)v20 - 1));
            if ( v24 )
              goto LABEL_13;
            v23 = 63 - v26;
            goto LABEL_19;
          }
        }
      }
LABEL_68:
      v16 = -1;
      goto LABEL_28;
    }
    if ( NumberToFind >= 0x40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v21 < 0 )
          {
            v20 += 8;
            if ( (unsigned __int64)v20 > v19 )
              goto LABEL_68;
            v21 = ~*(_QWORD *)v20;
          }
          v24 = !_BitScanReverse64((unsigned __int64 *)&v37, v21);
          if ( v24 )
            v38 = 64;
          else
            v38 = 63 - v37;
          v16 = (((unsigned int)((v20 - v15) >> 3) + 1) << 6) - v38;
          if ( v16 > v17 )
            goto LABEL_68;
          v39 = NumberToFind - v38;
          if ( NumberToFind == v38 )
            goto LABEL_27;
          v20 += 8;
          v21 = ~*(_QWORD *)v20;
          if ( v39 >= 0x40 )
            break;
LABEL_59:
          v24 = !_BitScanForward64((unsigned __int64 *)&v40, v21);
          if ( v24 )
            LODWORD(v40) = 64;
          if ( (unsigned int)v40 >= v39 )
            goto LABEL_27;
        }
        if ( *(_QWORD *)v20 == -1LL )
        {
          v39 -= 64;
          if ( !v39 )
            goto LABEL_27;
          v20 += 8;
          v21 = ~*(_QWORD *)v20;
          goto LABEL_59;
        }
      }
    }
    if ( NumberToFind > 1 )
    {
      v32 = 0;
      v33 = &v15[8 * ((unsigned __int64)v13 >> 6)];
      while ( v21 != -1 )
      {
LABEL_40:
        v24 = !_BitScanForward64((unsigned __int64 *)&v34, v21);
        if ( v24 )
          LODWORD(v34) = 64;
        if ( v32 + (int)v34 >= NumberToFind )
        {
          LODWORD(v36) = -v32;
LABEL_70:
          v16 = ((unsigned int)((v20 - v15) >> 3) << 6) + v36;
          v42 = v16 <= v17;
          goto LABEL_71;
        }
        v35 = NumberToFind;
        v36 = ~v21;
        while ( 1 )
        {
          v36 &= v36 >> (v35 >> 1);
          if ( !v36 )
            break;
          v35 -= v35 >> 1;
          if ( v35 <= 1 )
          {
            _BitScanForward64(&v36, v36);
            goto LABEL_70;
          }
        }
        if ( v20 == v33 )
          goto LABEL_68;
        v24 = !_BitScanReverse64((unsigned __int64 *)&v41, v21);
        if ( v24 )
          v32 = 64;
        else
          v32 = 63 - v41;
        v20 += 8;
        v21 = ~*(_QWORD *)v20;
      }
      while ( 1 )
      {
        v20 += 8;
        if ( (unsigned __int64)v20 > v19 )
          goto LABEL_68;
        v21 = ~*(_QWORD *)v20;
        if ( *(_QWORD *)v20 )
        {
          v32 = 0;
          goto LABEL_40;
        }
      }
    }
    while ( v21 == -1 )
    {
      v20 += 8;
      if ( (unsigned __int64)v20 > v19 )
        goto LABEL_68;
      v21 = ~*(_QWORD *)v20;
    }
    _BitScanForward64(&v43, ~v21);
    v16 = v43 + ((unsigned int)((v20 - v15) >> 3) << 6);
    v42 = v16 <= v17;
LABEL_71:
    if ( !v42 )
      goto LABEL_68;
LABEL_27:
    if ( v16 != -1 )
      break;
LABEL_28:
    v4 = HintIndex;
LABEL_29:
    if ( !v8 )
      goto LABEL_78;
    v11 = v45;
    v31 = NumberToFind + v4;
    Buffer = v48;
    if ( NumberToFind + v4 > SizeOfBitMap )
      v31 = SizeOfBitMap;
    v9 = v31 - 1;
    v8 = 0;
  }
  v16 -= v12;
LABEL_78:
  v10 = v16;
LABEL_79:
  if ( v10 != -1 )
    RtlClearBits(BitMapHeader, v10, NumberToFind);
  return v10;
}
