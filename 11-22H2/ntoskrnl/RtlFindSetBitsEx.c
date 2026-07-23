/*
 * XREFs of RtlFindSetBitsEx @ 0x140340B10
 * Callers:
 *     MmQueryMemoryRanges @ 0x14085D9E0 (MmQueryMemoryRanges.c)
 *     MiUnlockDriverPages @ 0x140875FFC (MiUnlockDriverPages.c)
 *     MiDeleteAweInfoPages @ 0x140A41B00 (MiDeleteAweInfoPages.c)
 *     IopLiveDumpGetCapturePagesNoLock @ 0x140A9B81C (IopLiveDumpGetCapturePagesNoLock.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x140A9C220 (IopLiveDumpPopulateBitmapForDump.c)
 * Callees:
 *     <none>
 */

ULONG64 __cdecl RtlFindSetBitsEx(PRTL_BITMAP_EX BitMapHeader, ULONG64 NumberToFind, ULONG64 HintIndex)
{
  unsigned __int64 SizeOfBitMap; // r15
  unsigned __int64 *Buffer; // r14
  ULONG64 v7; // r11
  unsigned __int64 v8; // r10
  ULONG64 v9; // rbp
  unsigned __int64 *v10; // rdi
  unsigned __int64 *v11; // r8
  signed __int64 v12; // r9
  unsigned __int64 v13; // rax
  ULONG64 v14; // rdx
  ULONG64 v15; // r10
  __int64 v18; // rdx
  unsigned __int64 *v19; // rsi
  bool v20; // zf
  __int64 v21; // rax
  unsigned int v22; // r10d
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int64 *v25; // r10
  __int64 v26; // rax
  unsigned int v27; // ecx
  unsigned int v28; // r9d
  __int64 v29; // rcx
  unsigned __int64 *v30; // rcx
  __int64 v31; // rdx
  unsigned __int64 *v32; // r9
  __int64 v33; // rcx
  unsigned int v34; // eax
  ULONG64 v35; // rcx
  unsigned __int64 v36; // rax

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  Buffer = BitMapHeader->Buffer;
  v7 = HintIndex & -(__int64)(HintIndex < BitMapHeader->SizeOfBitMap);
  v8 = BitMapHeader->SizeOfBitMap - 1;
  if ( !NumberToFind )
    return v7 & 0xFFFFFFFFFFFFFFF8uLL;
  while ( 1 )
  {
    if ( v8 - v7 + 1 < NumberToFind )
      goto LABEL_29;
    v9 = v8 - NumberToFind + 1;
    v10 = &Buffer[v9 >> 6];
    v11 = &Buffer[v7 >> 6];
    v12 = ~*v11 | ((1LL << (v7 & 0x3F)) - 1);
    if ( NumberToFind > 0x7F )
    {
      v25 = v10 + 1;
      if ( (v9 & 0x3F) == 0 )
        v25 = &Buffer[v9 >> 6];
      if ( v12 )
      {
        if ( *++v11 != -1LL )
          goto LABEL_47;
        v20 = !_BitScanReverse64((unsigned __int64 *)&v26, v12);
        if ( v20 )
          v27 = 64;
        else
          v27 = 63 - v26;
      }
      else
      {
        v27 = 0;
      }
      while ( 1 )
      {
        v14 = ((v11 - Buffer) << 6) - v27;
        if ( v14 > v9 )
          goto LABEL_29;
        v32 = &v11[(NumberToFind - v27) >> 6];
        while ( ++v11 != v32 )
        {
          if ( *v11 != -1LL )
            goto LABEL_47;
        }
        v28 = ((_BYTE)NumberToFind - (_BYTE)v27) & 0x3F;
        if ( (((_BYTE)NumberToFind - (_BYTE)v27) & 0x3F) == 0 )
          goto LABEL_11;
        v20 = !_BitScanForward64((unsigned __int64 *)&v29, ~*v11);
        if ( v20 )
          LODWORD(v29) = 64;
        if ( (unsigned int)v29 >= v28 )
          goto LABEL_11;
        do
        {
LABEL_47:
          v30 = v11;
          if ( v11 > v25 )
            goto LABEL_29;
          ++v11;
        }
        while ( *v11 != -1LL );
        v20 = !_BitScanReverse64((unsigned __int64 *)&v31, ~*v30);
        if ( v20 )
          v27 = 64;
        else
          v27 = 63 - v31;
      }
    }
    if ( NumberToFind >= 0x40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v12 < 0 )
          {
            if ( ++v11 > v10 )
              goto LABEL_29;
            v12 = ~*v11;
          }
          v20 = !_BitScanReverse64((unsigned __int64 *)&v33, v12);
          if ( v20 )
            v34 = 64;
          else
            v34 = 63 - v33;
          v14 = ((v11 - Buffer + 1) << 6) - v34;
          if ( v14 > v9 )
            goto LABEL_29;
          v35 = NumberToFind - v34;
          if ( NumberToFind == v34 )
            goto LABEL_11;
          v12 = ~*++v11;
          if ( v35 >= 0x40 )
            break;
LABEL_65:
          v20 = !_BitScanForward64(&v36, v12);
          if ( v20 )
            v36 = 64LL;
          if ( v36 >= v35 )
            goto LABEL_11;
        }
        if ( *v11 == -1LL )
        {
          v35 -= 64LL;
          if ( !v35 )
            goto LABEL_11;
          v12 = ~*++v11;
          goto LABEL_65;
        }
      }
    }
    if ( NumberToFind > 1 )
    {
      v18 = 0LL;
      v19 = &Buffer[v8 >> 6];
      while ( v12 != -1 )
      {
LABEL_20:
        v20 = !_BitScanForward64((unsigned __int64 *)&v21, v12);
        if ( v20 )
          LODWORD(v21) = 64;
        if ( (unsigned int)(v18 + v21) >= NumberToFind )
        {
          v23 = -v18;
LABEL_27:
          v14 = ((v11 - Buffer) << 6) + v23;
          goto LABEL_10;
        }
        v22 = NumberToFind;
        v23 = ~v12;
        while ( 1 )
        {
          v23 &= v23 >> (v22 >> 1);
          if ( !v23 )
            break;
          v22 -= v22 >> 1;
          if ( v22 <= 1 )
          {
            _BitScanForward64(&v23, v23);
            goto LABEL_27;
          }
        }
        if ( v11 == v19 )
          goto LABEL_29;
        v20 = !_BitScanReverse64((unsigned __int64 *)&v24, v12);
        if ( v20 )
          v18 = 64LL;
        else
          v18 = (unsigned int)(63 - v24);
        v12 = ~*++v11;
      }
      while ( 1 )
      {
        if ( ++v11 > v10 )
          goto LABEL_29;
        v12 = ~*v11;
        if ( *v11 )
        {
          v18 = 0LL;
          goto LABEL_20;
        }
      }
    }
    while ( v12 == -1 )
    {
      if ( ++v11 > v10 )
        goto LABEL_29;
      v12 = ~*v11;
    }
    _BitScanForward64(&v13, ~v12);
    v14 = v13 + ((v11 - Buffer) << 6);
LABEL_10:
    if ( v14 <= v9 )
      break;
LABEL_29:
    v14 = -1LL;
LABEL_12:
    if ( !v7 )
      return v14;
    v15 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v15 = SizeOfBitMap;
    v8 = v15 - 1;
    v7 = 0LL;
  }
LABEL_11:
  if ( v14 == -1LL )
    goto LABEL_12;
  return v14;
}
