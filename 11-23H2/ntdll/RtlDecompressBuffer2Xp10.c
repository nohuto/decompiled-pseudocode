/*
 * XREFs of RtlDecompressBuffer2Xp10 @ 0x18011BC10
 * Callers:
 *     RtlDecompressBufferXp10 @ 0x18011BE30 (RtlDecompressBufferXp10.c)
 * Callees:
 *     Xp10ExecuteHuffmanDecode @ 0x18011DBB4 (Xp10ExecuteHuffmanDecode.c)
 *     Xp10ReadAndValidateCrc @ 0x18011FB70 (Xp10ReadAndValidateCrc.c)
 *     Xp10ReadMtfHeader @ 0x18011FC3C (Xp10ReadMtfHeader.c)
 *     Xp10ScatteredCopyBits @ 0x18011FF4C (Xp10ScatteredCopyBits.c)
 *     Xp10ScatteredReadBytes @ 0x1801201FC (Xp10ScatteredReadBytes.c)
 *     Xp10ValidateFrameHeaderAndFillParameters @ 0x180120300 (Xp10ValidateFrameHeaderAndFillParameters.c)
 */

__int64 __fastcall RtlDecompressBuffer2Xp10(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3,
        unsigned int a4,
        int a5,
        _QWORD *a6,
        _QWORD *a7)
{
  __int64 v7; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 result; // rax
  _QWORD *v12; // r14
  _OWORD *v13; // rsi
  unsigned int v14; // eax
  int v15; // edx
  int v16; // eax
  unsigned __int64 v17; // r8
  int v18; // ebx
  int v19; // eax
  unsigned int v20; // edi
  _BYTE v21[16]; // [rsp+28h] [rbp-79h] BYREF
  __int64 v22; // [rsp+38h] [rbp-69h] BYREF
  unsigned __int64 v23; // [rsp+40h] [rbp-61h]
  unsigned int v24; // [rsp+48h] [rbp-59h]
  _QWORD v25[7]; // [rsp+50h] [rbp-51h] BYREF
  _BYTE v26[8]; // [rsp+88h] [rbp-19h] BYREF
  _QWORD v27[2]; // [rsp+90h] [rbp-11h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-1h]
  __int64 v29; // [rsp+A8h] [rbp+7h]
  _QWORD *v30; // [rsp+B0h] [rbp+Fh]
  __int64 v31; // [rsp+B8h] [rbp+17h]
  unsigned int v32; // [rsp+100h] [rbp+5Fh] BYREF

  v32 = a4;
  v7 = *a3;
  v25[3] = 0LL;
  v25[2] = 0LL;
  v23 = 0LL;
  v24 = 0;
  v29 = 0LL;
  v28 = 0LL;
  v30 = a1;
  v9 = *a1;
  v25[0] = v7;
  v10 = a3[1] + v7;
  v27[0] = v9;
  v27[1] = a1[1] + v9;
  v25[4] = a3;
  v25[1] = v10;
  v25[5] = 1LL;
  v22 = -1LL;
  v31 = 1LL;
  if ( (unsigned int)Xp10ScatteredReadBytes(v25, v26, 6LL) == 6 )
  {
    result = Xp10ValidateFrameHeaderAndFillParameters(v26, v21);
    if ( (int)result < 0 )
      return result;
    v12 = a7;
    v13 = a7 + 1;
    *a7 = v21;
    *v13 = 0LL;
    while ( 1 )
    {
      v14 = v24;
      v15 = 32;
      v22 = -1LL;
      if ( v24 >= 0x20 )
      {
        v17 = v23;
      }
      else
      {
        v16 = Xp10ScatteredReadBytes(v25, &v32, 4LL);
        v17 = ((unsigned __int64)v32 << v24) | v23;
        v14 = v24 + 8 * v16;
        v15 = 32;
        v23 = v17;
        if ( v14 < 0x20 )
          v15 = v14;
      }
      v24 = v14 - v15;
      v18 = v23 & ((1LL << v15) - 1);
      v23 = v17 >> v15;
      if ( v15 != 32 )
        break;
      v19 = v18 & 0xFFFFFFF;
      if ( (v18 & 0xFFFFFFFu) < 0x20 || (v18 & 0x10000000) != 0 )
        break;
      v20 = v19 - 32;
      v22 = (unsigned int)(v19 - 32);
      if ( (v18 & 0x20000000) != 0 )
      {
        if ( (v18 & 0x40000000) != 0 )
        {
          result = Xp10ReadMtfHeader(v21, v13, &v22);
          if ( (int)result < 0 )
            return result;
        }
        result = Xp10ExecuteHuffmanDecode(v12, &v22, v27);
        if ( (int)result < 0 )
          return result;
      }
      else
      {
        if ( (v20 & 7) != 0 || (unsigned int)Xp10ScatteredCopyBits(v27, &v22, v20) != v20 )
          return 3221226050LL;
        *v13 = 0LL;
      }
      if ( v18 < 0 )
      {
        v22 = -1LL;
        result = Xp10ReadAndValidateCrc(v21, v27, &v22);
        *a6 = v27[0] + v28 - v30[2 * v29];
        return result;
      }
    }
  }
  return 3221226050LL;
}
