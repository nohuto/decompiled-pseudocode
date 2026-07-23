/*
 * XREFs of MiCommitVadCfgBits @ 0x1406AE968
 * Callers:
 *     MiCommitVadMetadataBits @ 0x1406AE7C0 (MiCommitVadMetadataBits.c)
 * Callees:
 *     MiSelectCfgBitMap @ 0x1406AEA84 (MiSelectCfgBitMap.c)
 *     MiMarkSharedImageCfgBits @ 0x140746EF4 (MiMarkSharedImageCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x1407A4150 (MiMarkPrivateImageCfgBits.c)
 *     MiMarkPrivateOpenCfgBits @ 0x1407A4B24 (MiMarkPrivateOpenCfgBits.c)
 */

__int64 __fastcall MiCommitVadCfgBits(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        char a7)
{
  __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // rdi
  _BOOL8 v13; // r9
  __int64 result; // rax
  __int16 v15; // cx
  __int64 v16; // rdx
  __int64 v17; // r10
  __int64 v18; // rcx

  v10 = MiSelectCfgBitMap(a1, a3, a5);
  v12 = v10;
  v13 = (a7 & 2) == 0;
  switch ( a6 )
  {
    case 1:
      result = MiMarkSharedImageCfgBits(v10, (unsigned int)(a6 - 1), v11, v13);
      break;
    case 2:
      result = MiMarkPrivateImageCfgBits(v10, (unsigned int)(a6 - 2), v11, v13);
      break;
    case 3:
      result = MiMarkPrivateOpenCfgBits(v10, a3, a4, v13);
      break;
    default:
      result = 3221225473LL;
      break;
  }
  if ( *(_QWORD *)(a1 + 1408) )
  {
    v15 = *(_WORD *)(a1 + 2412);
    if ( (v15 == 332 || v15 == 452) && (int)result >= 0 )
    {
      v16 = *(_QWORD *)(a1 + 1680);
      v17 = v16 + 424;
      if ( v12 != v16 + 424 )
        return MiMarkPrivateOpenCfgBits(v17, a3, a4, 0LL);
      v18 = 0x100000000LL;
      if ( a3 <= 0x100000000LL )
      {
        v17 = v16 + 456;
        if ( a4 <= 0x100000000LL )
          v18 = a4;
        a4 = v18;
        return MiMarkPrivateOpenCfgBits(v17, a3, a4, 0LL);
      }
    }
  }
  return result;
}
