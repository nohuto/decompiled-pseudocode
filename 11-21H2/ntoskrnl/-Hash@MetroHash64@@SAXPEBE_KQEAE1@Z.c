/*
 * XREFs of ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x1402210C0
 * Callers:
 *     RtlHashBytes2 @ 0x1402AC180 (RtlHashBytes2.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14037A8BC (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14037FDA0 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     SmHpBufferProtectEx @ 0x1403813C0 (SmHpBufferProtectEx.c)
 *     MiAddMdlTracker @ 0x140584030 (MiAddMdlTracker.c)
 *     MiValidateMdlTracker @ 0x140584C78 (MiValidateMdlTracker.c)
 *     SmFixSingleBitCorruption @ 0x1405FAAC8 (SmFixSingleBitCorruption.c)
 * Callees:
 *     <none>
 */

void __fastcall MetroHash64::Hash(
        const unsigned __int8 *a1,
        unsigned __int64 a2,
        unsigned __int8 *const a3,
        __int64 a4)
{
  __int64 v4; // rax
  const unsigned __int8 *v5; // r11
  const unsigned __int8 *v7; // r10
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rbp
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rcx

  v4 = 3603962101LL * (a4 + 1654206401);
  v5 = &a1[a2];
  v7 = a1;
  if ( a2 >= 0x20 )
  {
    v11 = 3603962101LL * (a4 + 1654206401);
    v12 = v4;
    v13 = v4;
    v14 = v4;
    do
    {
      v11 = v12 + __ROR8__(3603962101LL * *(_QWORD *)v7 + v11, 29);
      v15 = 1654206401LL * *((_QWORD *)v7 + 2) + v12;
      v16 = 817650473LL * *((_QWORD *)v7 + 3);
      v17 = __ROR8__(2729050939LL * *((_QWORD *)v7 + 1) + v13, 29);
      v7 += 32;
      v13 = v14 + v17;
      v12 = v11 + __ROR8__(v15, 29);
      v14 = v13 + __ROR8__(v16 + v14, 29);
    }
    while ( v7 <= v5 - 32 );
    v18 = v12 ^ (2729050939LL * __ROR8__(v13 + 3603962101LL * (v11 + v14), 37));
    v19 = v14 ^ (3603962101LL * __ROR8__(v11 + 2729050939LL * (v18 + v13), 37));
    v4 += v13 ^ v11 ^ (3603962101LL * __ROR8__(v18 + 2729050939LL * (v13 + v19), 37)) ^ (2729050939LL
                                                                                       * __ROR8__(
                                                                                           v19
                                                                                         + 3603962101LL * (v18 + v11),
                                                                                           37));
  }
  if ( v5 - v7 >= 16 )
  {
    v21 = 817650473LL * __ROR8__(v4 + 1654206401LL * *(_QWORD *)v7, 29);
    v22 = 1654206401LL * *((_QWORD *)v7 + 1);
    v7 += 16;
    v23 = __ROR8__(v4 + v22, 29);
    v4 += (817650473 * v23) ^ (__ROR8__(0x9472CC564AE2C91LL * v23, 21)
                             + (v21 ^ (817650473 * v23 + __ROR8__(3603962101LL * v21, 21))));
  }
  if ( v5 - v7 >= 8 )
  {
    v8 = 817650473LL * *(_QWORD *)v7;
    v7 += 8;
    v4 = (2729050939LL * __ROR8__(v8 + v4, 55)) ^ (v8 + v4);
  }
  if ( v5 - v7 >= 4 )
  {
    v9 = *(unsigned int *)v7;
    v7 += 4;
    v4 = (2729050939LL * __ROR8__(817650473 * v9 + v4, 26)) ^ (817650473 * v9 + v4);
  }
  if ( v5 - v7 >= 2 )
  {
    v20 = *(unsigned __int16 *)v7;
    v7 += 2;
    v4 = (2729050939LL * __ROR8__(817650473 * v20 + v4, 48)) ^ (817650473 * v20 + v4);
  }
  if ( v5 - v7 >= 1 )
    v4 = (2729050939LL * __ROR8__(817650473LL * *v7 + v4, 37)) ^ (817650473LL * *v7 + v4);
  v10 = 3603962101u * (v4 ^ __ROR8__(v4, 28));
  *(_QWORD *)a3 = v10 ^ __ROR8__(v10, 29);
}
