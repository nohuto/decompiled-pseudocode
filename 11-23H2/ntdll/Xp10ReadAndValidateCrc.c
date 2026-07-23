/*
 * XREFs of Xp10ReadAndValidateCrc @ 0x18011FB70
 * Callers:
 *     RtlDecompressBuffer2Xp10 @ 0x18011BC10 (RtlDecompressBuffer2Xp10.c)
 * Callees:
 *     Xp10Compute2Crc32 @ 0x18011D850 (Xp10Compute2Crc32.c)
 *     Xp10Compute2Crc64 @ 0x18011D958 (Xp10Compute2Crc64.c)
 *     Xp10ScatteredBitBufferReadBytes @ 0x18011FD98 (Xp10ScatteredBitBufferReadBytes.c)
 */

__int64 __fastcall Xp10ReadAndValidateCrc(unsigned __int16 *a1, __int64 *a2, __int64 a3)
{
  unsigned int v4; // eax
  unsigned int v6; // r9d
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  int v11; // eax
  unsigned __int64 v12; // rax
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(a3 + 16) & 7;
  v6 = *(_DWORD *)(a3 + 16) - v4;
  *(_QWORD *)(a3 + 8) >>= *(_BYTE *)(a3 + 16) & 7;
  v7 = v4;
  v8 = 0LL;
  v9 = *(_QWORD *)a3 - v7;
  *(_DWORD *)(a3 + 16) = v6;
  if ( v7 <= *(_QWORD *)a3 )
    v8 = v9;
  *(_QWORD *)a3 = v8;
  if ( ((*a1 >> 14) & 1) != 0 )
  {
    if ( ((*a1 >> 14) & 1) != 1 )
      return 3221225485LL;
    if ( (unsigned int)Xp10ScatteredBitBufferReadBytes(a3, &v13, 4LL) == 4 )
    {
      v11 = Xp10Compute2Crc32(a2);
      if ( v11 == (_DWORD)v13 )
        return 0LL;
    }
  }
  else if ( (unsigned int)Xp10ScatteredBitBufferReadBytes(a3, &v13, 8LL) == 8 )
  {
    v12 = Xp10Compute2Crc64(a2);
    return v13 != v12 ? 0xC0000242 : 0;
  }
  return 3221226050LL;
}
