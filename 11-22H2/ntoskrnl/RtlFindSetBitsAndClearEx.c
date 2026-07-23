/*
 * XREFs of RtlFindSetBitsAndClearEx @ 0x14034A090
 * Callers:
 *     MiGetUltraMapping @ 0x1402D1A10 (MiGetUltraMapping.c)
 *     MiHotRemoveHugeRange @ 0x140620144 (MiHotRemoveHugeRange.c)
 * Callees:
 *     RtlClearBitsEx @ 0x14028BA00 (RtlClearBitsEx.c)
 */

ULONG64 __cdecl RtlFindSetBitsAndClearEx(PRTL_BITMAP_EX BitMapHeader, ULONG64 NumberToFind, ULONG64 HintIndex)
{
  unsigned __int64 SizeOfBitMap; // r15
  unsigned __int64 *Buffer; // r14
  ULONG64 v8; // rbx
  unsigned __int64 v9; // r10
  ULONG64 v10; // rbp
  unsigned __int64 *v11; // rdi
  unsigned __int64 *v12; // r8
  signed __int64 v13; // r9
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  __int64 v18; // rdx
  unsigned __int64 *v19; // rsi
  bool v20; // zf
  __int64 v21; // rax
  unsigned int v22; // r10d
  unsigned __int64 v23; // rdx
  ULONG64 v24; // r10
  __int64 v25; // rax
  unsigned __int64 *v26; // r10
  __int64 v27; // rax
  unsigned int v28; // ecx
  unsigned int v29; // r9d
  __int64 v30; // rcx
  unsigned __int64 *v31; // rcx
  __int64 v32; // rdx
  unsigned __int64 *v33; // r9
  __int64 v34; // rcx
  unsigned int v35; // eax
  ULONG64 v36; // rcx
  unsigned __int64 v37; // rax

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  Buffer = BitMapHeader->Buffer;
  v8 = HintIndex & -(__int64)(HintIndex < BitMapHeader->SizeOfBitMap);
  v9 = BitMapHeader->SizeOfBitMap - 1;
  if ( NumberToFind )
  {
    while ( 1 )
    {
      if ( v9 - v8 + 1 < NumberToFind )
      {
LABEL_27:
        v15 = -1LL;
        goto LABEL_28;
      }
      v10 = v9 - NumberToFind + 1;
      v11 = &Buffer[v10 >> 6];
      v12 = &Buffer[v8 >> 6];
      v13 = ~*v12 | ((1LL << (v8 & 0x3F)) - 1);
      if ( NumberToFind > 0x7F )
      {
        v26 = v11 + 1;
        if ( (v10 & 0x3F) == 0 )
          v26 = &Buffer[v10 >> 6];
        if ( v13 )
        {
          if ( *++v12 != -1LL )
            goto LABEL_49;
          v20 = !_BitScanReverse64((unsigned __int64 *)&v27, v13);
          if ( v20 )
            v28 = 64;
          else
            v28 = 63 - v27;
        }
        else
        {
          v28 = 0;
        }
        while ( 1 )
        {
          v15 = ((v12 - Buffer) << 6) - v28;
          if ( v15 > v10 )
            goto LABEL_27;
          v33 = &v12[(NumberToFind - v28) >> 6];
          while ( ++v12 != v33 )
          {
            if ( *v12 != -1LL )
              goto LABEL_49;
          }
          v29 = ((_BYTE)NumberToFind - (_BYTE)v28) & 0x3F;
          if ( (((_BYTE)NumberToFind - (_BYTE)v28) & 0x3F) == 0 )
            goto LABEL_11;
          v20 = !_BitScanForward64((unsigned __int64 *)&v30, ~*v12);
          if ( v20 )
            LODWORD(v30) = 64;
          if ( (unsigned int)v30 >= v29 )
            goto LABEL_11;
          do
          {
LABEL_49:
            v31 = v12;
            if ( v12 > v26 )
              goto LABEL_27;
            ++v12;
          }
          while ( *v12 != -1LL );
          v20 = !_BitScanReverse64((unsigned __int64 *)&v32, ~*v31);
          if ( v20 )
            v28 = 64;
          else
            v28 = 63 - v32;
        }
      }
      if ( NumberToFind >= 0x40 )
        break;
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
            goto LABEL_27;
          v20 = !_BitScanReverse64((unsigned __int64 *)&v25, v13);
          if ( v20 )
            v18 = 64LL;
          else
            v18 = (unsigned int)(63 - v25);
          v13 = ~*++v12;
        }
        while ( 1 )
        {
          if ( ++v12 > v11 )
            goto LABEL_27;
          v13 = ~*v12;
          if ( *v12 )
          {
            v18 = 0LL;
            goto LABEL_18;
          }
        }
      }
      while ( v13 == -1 )
      {
        if ( ++v12 > v11 )
          goto LABEL_27;
        v13 = ~*v12;
      }
      _BitScanForward64(&v14, ~v13);
      v15 = v14 + ((v12 - Buffer) << 6);
LABEL_10:
      if ( v15 > v10 )
        goto LABEL_27;
LABEL_11:
      if ( v15 != -1LL )
      {
LABEL_12:
        v16 = v15;
        goto LABEL_13;
      }
LABEL_28:
      if ( !v8 )
        goto LABEL_12;
      v24 = NumberToFind + HintIndex;
      if ( NumberToFind + HintIndex > SizeOfBitMap )
        v24 = SizeOfBitMap;
      v9 = v24 - 1;
      v8 = 0LL;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v13 < 0 )
        {
          if ( ++v12 > v11 )
            goto LABEL_27;
          v13 = ~*v12;
        }
        v20 = !_BitScanReverse64((unsigned __int64 *)&v34, v13);
        if ( v20 )
          v35 = 64;
        else
          v35 = 63 - v34;
        v15 = ((v12 - Buffer + 1) << 6) - v35;
        if ( v15 > v10 )
          goto LABEL_27;
        v36 = NumberToFind - v35;
        if ( NumberToFind == v35 )
          goto LABEL_11;
        v13 = ~*++v12;
        if ( v36 >= 0x40 )
          break;
LABEL_63:
        v20 = !_BitScanForward64(&v37, v13);
        if ( v20 )
          v37 = 64LL;
        if ( v37 >= v36 )
          goto LABEL_11;
      }
      if ( *v12 == -1LL )
      {
        v36 -= 64LL;
        if ( !v36 )
          goto LABEL_11;
        v13 = ~*++v12;
        goto LABEL_63;
      }
    }
  }
  v16 = v8 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_13:
  if ( v16 != -1LL )
    RtlClearBitsEx((__int64)BitMapHeader, v16, NumberToFind);
  return v16;
}
