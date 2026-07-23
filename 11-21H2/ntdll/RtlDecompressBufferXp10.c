/*
 * XREFs of RtlDecompressBufferXp10 @ 0x180119570
 * Callers:
 *     <none>
 * Callees:
 *     RtlExtractBitMap @ 0x1800F6AC0 (RtlExtractBitMap.c)
 *     Xp10ExecuteHuffmanDecode @ 0x18011B148 (Xp10ExecuteHuffmanDecode.c)
 *     Xp10ReadAndValidateCrc @ 0x18011D4B4 (Xp10ReadAndValidateCrc.c)
 *     Xp10ReadMtfHeader @ 0x18011D58C (Xp10ReadMtfHeader.c)
 *     Xp10ValidateFrameHeaderAndFillParameters @ 0x18011D810 (Xp10ValidateFrameHeaderAndFillParameters.c)
 */

__int64 __fastcall RtlDecompressBufferXp10(
        __int64 a1,
        ULONG a2,
        __int64 a3,
        int a4,
        int a5,
        unsigned int *a6,
        __int64 a7)
{
  unsigned int *v7; // rsi
  unsigned int v10; // edi
  __int64 result; // rax
  int v12; // r11d
  unsigned int v13; // r13d
  unsigned int v14; // r14d
  ULONG v15; // r10d
  unsigned __int8 *v16; // r9
  unsigned int v17; // r11d
  __int64 v18; // rax
  unsigned int v19; // ebx
  unsigned __int8 *v20; // r9
  int v21; // ebx
  __int64 v22; // r8
  unsigned __int64 v23; // rdx
  int v24; // eax
  int v25; // ecx
  ULONG v26; // r9d
  ULONG v27; // r12d
  _OWORD *v28; // [rsp+20h] [rbp-50h] BYREF
  char v29[8]; // [rsp+28h] [rbp-48h] BYREF
  unsigned int *v30; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v31; // [rsp+38h] [rbp-38h]
  unsigned int v32; // [rsp+3Ch] [rbp-34h]
  __int64 v33; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v34; // [rsp+48h] [rbp-28h]
  unsigned int v35; // [rsp+4Ch] [rbp-24h]
  _RTL_BITMAP Destination; // [rsp+50h] [rbp-20h] BYREF
  _RTL_BITMAP Source; // [rsp+60h] [rbp-10h] BYREF
  __int64 v38; // [rsp+A0h] [rbp+30h]

  v38 = a1;
  v7 = (unsigned int *)a3;
  if ( (unsigned int)(a4 - 6) <= 0x1FFFFFF9 )
  {
    LODWORD(v28) = *(_DWORD *)a3;
    v10 = 48;
    WORD2(v28) = *(_WORD *)(a3 + 4);
    v30 = (unsigned int *)a3;
    result = Xp10ValidateFrameHeaderAndFillParameters(&v28, v29);
    if ( (int)result < 0 )
      return result;
    v33 = a1;
    v13 = 8 * v12;
    v35 = a2;
    *(_QWORD *)a7 = v29;
    v14 = 0;
    v28 = (_OWORD *)(a7 + 8);
    v34 = 0;
    *(_OWORD *)(a7 + 8) = 0LL;
    while ( 1 )
    {
      v15 = v10 + 32;
      if ( v10 + 32 > v13 )
        break;
      v16 = (unsigned __int8 *)v7 + ((unsigned __int64)v10 >> 3);
      v17 = 8 - (v10 & 7);
      v18 = v17;
      if ( v17 >= 0x20 )
        v18 = 32LL;
      v19 = *v16;
      v20 = v16 + 1;
      v21 = *(_DWORD *)&byte_18013CB40[4 * v18] & (v19 >> (8 - v17));
      v22 = (unsigned int)(32 - v18);
      if ( (unsigned int)v22 >= 8 )
      {
        v23 = (unsigned __int64)(unsigned int)v22 >> 3;
        do
        {
          v24 = *v20 << v17;
          LOBYTE(v17) = v17 + 8;
          v21 |= v24;
          v22 = (unsigned int)(v22 - 8);
          ++v20;
          --v23;
        }
        while ( v23 );
      }
      if ( (_DWORD)v22 )
        v21 |= (*v20 & *(_DWORD *)&byte_18013CB40[4 * v22]) << v17;
      v31 = v10 + 32;
      v25 = v21 & 0xFFFFFFF;
      if ( (v21 & 0xFFFFFFFu) < 0x20 || v25 + v10 > v13 || (v21 & 0x10000000) != 0 )
        break;
      v26 = v25 - 32;
      v10 += v25;
      v32 = v15 + v25 - 32;
      if ( (v21 & 0x20000000) != 0 )
      {
        if ( (v21 & 0x40000000) != 0 )
        {
          result = Xp10ReadMtfHeader(v29, v28, &v30);
          if ( (int)result < 0 )
            return result;
        }
        result = Xp10ExecuteHuffmanDecode(a7, &v30, &v33);
        if ( (int)result < 0 )
          return result;
        v10 = v31;
        v7 = v30;
        a2 = v35;
        v14 = v34;
        v38 = v33;
      }
      else
      {
        if ( (v26 & 7) != 0 )
          return 3221226050LL;
        v27 = v14 + (v26 >> 3);
        if ( v27 > a2 )
          return 3221226050LL;
        Source.SizeOfBitMap = v15 + v26;
        Source.Buffer = v7;
        Destination.SizeOfBitMap = 8 * (a2 - v14);
        Destination.Buffer = (unsigned int *)(v38 + v14);
        RtlExtractBitMap(&Source, &Destination, v15, v26);
        v14 = v27;
        v34 = v27;
        v31 = v10;
        *v28 = 0LL;
      }
      if ( v21 < 0 )
      {
        v32 = v13;
        result = Xp10ReadAndValidateCrc(v29, &v33, &v30);
        *a6 = v34;
        return result;
      }
    }
  }
  return 3221226050LL;
}
