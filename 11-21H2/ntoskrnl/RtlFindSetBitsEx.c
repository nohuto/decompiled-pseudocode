/*
 * XREFs of RtlFindSetBitsEx @ 0x14030ACF0
 * Callers:
 *     sub_14080C400 @ 0x14080C400 (sub_14080C400.c)
 *     MmQueryMemoryRanges @ 0x14096ADD0 (MmQueryMemoryRanges.c)
 *     sub_14097D034 @ 0x14097D034 (sub_14097D034.c)
 *     sub_14097D7F8 @ 0x14097D7F8 (sub_14097D7F8.c)
 *     sub_140A66CEC @ 0x140A66CEC (sub_140A66CEC.c)
 *     sub_140A67608 @ 0x140A67608 (sub_140A67608.c)
 * Callees:
 *     <none>
 */

ULONG64 __cdecl RtlFindSetBitsEx(PRTL_BITMAP_EX BitMapHeader, ULONG64 NumberToFind, ULONG64 HintIndex)
{
  ULONG64 SizeOfBitMap; // r15
  PULONG64 Buffer; // r14
  ULONG64 v6; // r11
  ULONG64 v8; // rdx
  ULONG64 v9; // rbx
  unsigned __int64 *v10; // r9
  unsigned __int64 *v11; // r8
  signed __int64 v12; // rax
  ULONG64 v13; // rdx
  ULONG64 v15; // rdx
  unsigned int v16; // edi
  bool v17; // zf
  __int64 v18; // rcx
  unsigned int v19; // esi
  unsigned __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 *v24; // rdi
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  unsigned int v28; // ecx
  unsigned __int64 *v29; // r9
  unsigned int v30; // r9d
  __int64 v31; // rcx
  bool v32; // sf
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rcx

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  Buffer = BitMapHeader->Buffer;
  v6 = HintIndex;
  if ( HintIndex >= BitMapHeader->SizeOfBitMap )
    v6 = 0LL;
  v8 = SizeOfBitMap - 1;
  if ( NumberToFind )
  {
    while ( 1 )
    {
      if ( v8 - v6 + 1 < NumberToFind )
        goto LABEL_13;
      v9 = v8 - NumberToFind + 1;
      v10 = &Buffer[v9 >> 6];
      v11 = &Buffer[v6 >> 6];
      v12 = ~*v11 | ((1LL << (v6 & 0x3F)) - 1);
      if ( NumberToFind > 0x7F )
        break;
      if ( NumberToFind >= 0x40 )
      {
        while ( 2 )
        {
          v32 = v12 < 0;
          while ( 1 )
          {
            if ( v32 )
            {
              do
              {
                if ( ++v11 > v10 )
                  goto LABEL_13;
                v12 = ~*v11;
              }
              while ( (*v11 & 0x8000000000000000uLL) == 0LL );
            }
            v17 = !_BitScanReverse64((unsigned __int64 *)&v33, v12);
            if ( v17 )
              v34 = 64LL;
            else
              v34 = (unsigned int)(63 - v33);
            v13 = ((v11 - Buffer + 1) << 6) - v34;
            if ( v13 > v9 )
              goto LABEL_13;
            v35 = NumberToFind - v34;
            if ( NumberToFind == v34 )
              goto LABEL_11;
            v36 = v11[1];
            ++v11;
            v12 = ~v36;
            if ( v35 < 0x40 )
              break;
            v32 = v12 < 0;
            if ( !v12 )
            {
              v35 -= 64LL;
              if ( !v35 )
                goto LABEL_11;
              v37 = v11[1];
              ++v11;
              v12 = ~v37;
              break;
            }
          }
          v17 = !_BitScanForward64(&v38, v12);
          if ( v17 )
            v38 = 64LL;
          if ( v38 < v35 )
            continue;
          break;
        }
      }
      else
      {
        if ( NumberToFind > 1 )
        {
          v16 = 0;
          while ( v12 != -1 )
          {
LABEL_23:
            v17 = !_BitScanForward64((unsigned __int64 *)&v18, v12);
            if ( v17 )
              LODWORD(v18) = 64;
            if ( v16 + (unsigned int)v18 >= NumberToFind )
            {
              v21 = -(__int64)v16;
LABEL_30:
              v13 = ((v11 - Buffer) << 6) + v21;
              goto LABEL_10;
            }
            v19 = NumberToFind;
            v20 = ~v12;
            while ( 1 )
            {
              v20 &= v20 >> (v19 >> 1);
              if ( !v20 )
                break;
              v19 -= v19 >> 1;
              if ( v19 <= 1 )
              {
                _BitScanForward64((unsigned __int64 *)&v21, v20);
                goto LABEL_30;
              }
            }
            if ( v11 == &Buffer[v8 >> 6] )
              goto LABEL_13;
            v17 = !_BitScanReverse64((unsigned __int64 *)&v22, v12);
            if ( v17 )
              v16 = 64;
            else
              v16 = 63 - v22;
            v23 = v11[1];
            ++v11;
            v12 = ~v23;
          }
          while ( 1 )
          {
            if ( ++v11 > v10 )
              goto LABEL_13;
            v12 = ~*v11;
            if ( *v11 )
            {
              v16 = 0;
              goto LABEL_23;
            }
          }
        }
        if ( v12 == -1 )
        {
          while ( ++v11 <= v10 )
          {
            v12 = ~*v11;
            if ( *v11 )
              goto LABEL_9;
          }
LABEL_13:
          v13 = -1LL;
          goto LABEL_14;
        }
LABEL_9:
        _BitScanForward64((unsigned __int64 *)&v12, ~v12);
        v13 = v12 + ((v11 - Buffer) << 6);
LABEL_10:
        if ( v13 > v9 )
        {
          v13 = -1LL;
          goto LABEL_14;
        }
      }
LABEL_11:
      if ( v13 != -1LL )
        return v13;
LABEL_14:
      if ( !v6 )
        return v13;
      v15 = NumberToFind + HintIndex;
      if ( NumberToFind + HintIndex > SizeOfBitMap )
        v15 = SizeOfBitMap;
      v8 = v15 - 1;
      v6 = 0LL;
    }
    v24 = v10 + 1;
    if ( (v9 & 0x3F) == 0 )
      v24 = &Buffer[(v8 - NumberToFind + 1) >> 6];
    if ( !v12 )
    {
      v28 = 0;
      goto LABEL_47;
    }
    v25 = v11[1];
    ++v11;
    if ( v25 != -1LL )
    {
      while ( 1 )
      {
        do
        {
          if ( v11 > v24 )
            goto LABEL_13;
          v26 = v11[1];
          ++v11;
        }
        while ( v26 != -1LL );
        v17 = !_BitScanReverse64((unsigned __int64 *)&v27, ~*(v11 - 1));
        if ( v17 )
LABEL_78:
          v28 = 64;
        else
LABEL_46:
          v28 = 63 - v27;
LABEL_47:
        v13 = ((v11 - Buffer) << 6) - v28;
        if ( v13 > v9 )
          goto LABEL_13;
        v29 = &v11[(NumberToFind - v28) >> 6];
        if ( ++v11 == v29 )
        {
LABEL_51:
          v30 = ((_BYTE)NumberToFind - (_BYTE)v28) & 0x3F;
          if ( (((_BYTE)NumberToFind - (_BYTE)v28) & 0x3F) == 0 )
            goto LABEL_11;
          v17 = !_BitScanForward64((unsigned __int64 *)&v31, ~*v11);
          if ( v17 )
            LODWORD(v31) = 64;
          if ( (unsigned int)v31 >= v30 )
            goto LABEL_11;
        }
        else
        {
          while ( *v11 == -1LL )
          {
            if ( ++v11 == v29 )
              goto LABEL_51;
          }
        }
      }
    }
    v17 = !_BitScanReverse64((unsigned __int64 *)&v27, v12);
    if ( v17 )
      goto LABEL_78;
    goto LABEL_46;
  }
  return v6 & 0xFFFFFFFFFFFFFFF8uLL;
}
