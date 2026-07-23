/*
 * XREFs of MiCaptureAndResetWorkingSetAccessBits @ 0x140361D70
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14025B730 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     MiTbFlushType @ 0x14025BD3C (MiTbFlushType.c)
 *     MiWalkPageTables @ 0x14025BF90 (MiWalkPageTables.c)
 *     MiDrainSystemAccessLog @ 0x140286F64 (MiDrainSystemAccessLog.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiCaptureAndResetWorkingSetAccessBits(__int64 a1, __int8 a2, char a3)
{
  bool v6; // zf
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int128 v12; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD *v13; // [rsp+30h] [rbp-D0h]
  __m128i v14[11]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v15[24]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v16[68]; // [rsp+1B0h] [rbp+B0h] BYREF

  memset(v15, 0, 0xB8uLL);
  v13 = 0LL;
  v12 = 0LL;
  memset(v14, 0, sizeof(v14));
  memset(v16, 0, 0x108uLL);
  v14[2].m128i_i64[1] = -1LL;
  v14[9].m128i_i64[1] = (__int64)MiResetAccessBitPte;
  v6 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  v14[10].m128i_i64[0] = (__int64)MiResetAccessBitsTail;
  v14[0].m128i_i32[0] = 6;
  v14[1].m128i_i64[1] = a1;
  v14[0].m128i_i8[7] = a2;
  if ( v6 && *(_QWORD *)(a1 + 624) )
  {
    v16[1] = 32;
    v13 = v16;
  }
  if ( (a3 & 0x10) != 0 )
  {
    *((_QWORD *)&v12 + 1) = v15;
    LODWORD(v15[0]) = MiTbFlushType(a1);
    WORD2(v15[0]) = v7;
    v15[2] = v7;
    LODWORD(v15[1]) = 20;
    v15[3] = v7;
  }
  LODWORD(v12) = dword_140C67FE8;
  v14[10].m128i_i64[1] = (__int64)&v12;
  MiWalkPageTables(v14);
  return MiDrainSystemAccessLog(a1, v8, v9, v10);
}
