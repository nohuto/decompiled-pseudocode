/*
 * XREFs of RtlFindSetBitsAndClearEx @ 0x14023E100
 * Callers:
 *     sub_1402C6260 @ 0x1402C6260 (sub_1402C6260.c)
 *     sub_140586A44 @ 0x140586A44 (sub_140586A44.c)
 * Callees:
 *     RtlClearBitsEx @ 0x14030BB30 (RtlClearBitsEx.c)
 */

ULONG64 __cdecl RtlFindSetBitsAndClearEx(PRTL_BITMAP_EX BitMapHeader, ULONG64 NumberToFind, ULONG64 HintIndex)
{
  ULONG64 SizeOfBitMap; // r15
  PULONG64 Buffer; // r14
  ULONG64 v8; // rbx
  ULONG64 v9; // r10
  ULONG64 v10; // rbp
  unsigned __int64 *v11; // rdi
  unsigned __int64 *v12; // r8
  signed __int64 v13; // r9
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  ULONG64 v16; // rbx
  __int64 v18; // rdx
  unsigned __int64 *v19; // rsi
  bool v20; // zf
  __int64 v21; // rax
  unsigned int v22; // r10d
  unsigned __int64 v23; // rdx
  ULONG64 v24; // r10
  __int64 v25; // rax
  unsigned __int64 *v26; // r10
  __int64 v27; // rdx
  unsigned int v28; // ecx
  unsigned __int64 *v29; // r9
  unsigned int v30; // r9d
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned int v34; // eax
  ULONG64 v35; // rcx
  unsigned __int64 v36; // rax
  int v37; // [rsp+50h] [rbp+8h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  Buffer = BitMapHeader->Buffer;
  v8 = HintIndex & -(__int64)(HintIndex < BitMapHeader->SizeOfBitMap);
  v9 = BitMapHeader->SizeOfBitMap - 1;
  if ( NumberToFind )
  {
    while ( 1 )
    {
      v37 = 0;
      if ( v9 - v8 + 1 < NumberToFind )
        goto LABEL_26;
      v10 = v9 - NumberToFind + 1;
      v11 = &Buffer[v10 >> 6];
      v12 = &Buffer[v8 >> 6];
      v13 = ~*v12 | ((1LL << (v8 & 0x3F)) - 1);
      if ( NumberToFind <= 0x7F )
      {
        if ( NumberToFind < 0x40 )
        {
          if ( NumberToFind > 1 )
          {
            v18 = 0LL;
            v19 = &Buffer[v9 >> 6];
            while ( v13 != -1 )
            {
LABEL_18:
              v20 = !_BitScanForward64((unsigned __int64 *)&v21, v13);
              if ( v20 )
                LODWORD(v21) = 64;
              if ( (unsigned int)(v18 + v21) >= NumberToFind )
              {
                v23 = -v18;
LABEL_25:
                v15 = ((v12 - Buffer) << 6) + v23;
                goto LABEL_10;
              }
              v22 = NumberToFind;
              v23 = ~v13;
              while ( 1 )
              {
                v23 &= v23 >> (v22 >> 1);
                if ( !v23 )
                  break;
                v22 -= v22 >> 1;
                if ( v22 <= 1 )
                {
                  _BitScanForward64(&v23, v23);
                  goto LABEL_25;
                }
              }
              if ( v12 == v19 )
                goto LABEL_26;
              v20 = !_BitScanReverse64((unsigned __int64 *)&v25, v13);
              if ( v20 )
                v18 = 64LL;
              else
                v18 = (unsigned int)(63 - v25);
              v13 = ~*++v12;
            }
            while ( ++v12 <= v11 )
            {
              v13 = ~*v12;
              if ( *v12 )
              {
                v18 = 0LL;
                goto LABEL_18;
              }
            }
          }
          else
          {
            while ( v13 == -1 )
            {
              if ( ++v12 > v11 )
                goto LABEL_26;
              v13 = ~*v12;
            }
            _BitScanForward64(&v14, ~v13);
            v15 = v14 + ((v12 - Buffer) << 6);
LABEL_10:
            if ( v15 <= v10 )
              goto LABEL_11;
          }
LABEL_26:
          v15 = -1LL;
          goto LABEL_27;
        }
        while ( 1 )
        {
          while ( v13 < 0 )
          {
            if ( ++v12 > v11 )
              goto LABEL_26;
            v13 = ~*v12;
          }
          v20 = !_BitScanReverse64((unsigned __int64 *)&v33, v13);
          if ( v20 )
            v34 = 64;
          else
            v34 = 63 - v33;
          v15 = ((v12 - Buffer + 1) << 6) - v34;
          if ( v15 > v10 )
            goto LABEL_26;
          v35 = NumberToFind - v34;
          if ( NumberToFind == v34 )
            goto LABEL_11;
          v13 = ~*++v12;
          if ( v35 >= 0x40 )
          {
            if ( *v12 != -1LL )
              continue;
            v35 -= 64LL;
            if ( !v35 )
              goto LABEL_11;
            v13 = ~*++v12;
          }
          v20 = !_BitScanForward64(&v36, v13);
          if ( v20 )
            v36 = 64LL;
          if ( v36 >= v35 )
            goto LABEL_11;
        }
      }
      v26 = v11 + 1;
      if ( (v10 & 0x3F) == 0 )
        v26 = &Buffer[v10 >> 6];
      if ( !v13 )
      {
        v28 = 0;
        goto LABEL_47;
      }
      if ( *++v12 == -1LL )
        break;
      do
      {
        do
        {
LABEL_43:
          if ( v12 > v26 )
            goto LABEL_26;
          ++v12;
        }
        while ( *v12 != -1LL );
        v37 &= ~*(_DWORD *)v12;
        v20 = !_BitScanReverse64((unsigned __int64 *)&v27, ~*(v12 - 1));
        if ( v20 )
          v28 = 64;
        else
          v28 = 63 - v27;
LABEL_47:
        v15 = ((v12 - Buffer) << 6) - v28;
        if ( v15 > v10 )
          goto LABEL_26;
        v29 = &v12[(NumberToFind - v28) >> 6];
        while ( ++v12 != v29 )
        {
          if ( *v12 != -1LL )
            goto LABEL_43;
        }
        v30 = ((_BYTE)NumberToFind - (_BYTE)v28) & 0x3F;
        if ( (((_BYTE)NumberToFind - (_BYTE)v28) & 0x3F) == 0 )
          break;
        v37 = 0;
        v20 = !_BitScanForward64((unsigned __int64 *)&v31, ~*v12);
        if ( v20 )
          LODWORD(v31) = 64;
      }
      while ( (unsigned int)v31 < v30 );
LABEL_11:
      if ( v15 != -1LL )
      {
LABEL_12:
        v16 = v15;
        goto LABEL_13;
      }
LABEL_27:
      if ( !v8 )
        goto LABEL_12;
      v24 = NumberToFind + HintIndex;
      if ( NumberToFind + HintIndex > SizeOfBitMap )
        v24 = SizeOfBitMap;
      v9 = v24 - 1;
      v8 = 0LL;
    }
    v37 = 0;
    v20 = !_BitScanReverse64((unsigned __int64 *)&v32, v13);
    if ( v20 )
      v28 = 64;
    else
      v28 = 63 - v32;
    goto LABEL_47;
  }
  v16 = v8 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_13:
  if ( v16 != -1LL )
    RtlClearBitsEx(BitMapHeader, v16, NumberToFind);
  return v16;
}
