/*
 * XREFs of ?CollectStats@CCompFrameStats@@IEAAX_K@Z @ 0x180002A1C
 * Callers:
 *     ?StopCollection@CCompFrameStats@@UEAAXXZ @ 0x180002760 (-StopCollection@CCompFrameStats@@UEAAXXZ.c)
 *     ?StatsCollectionThread@CCompFrameStats@@IEAAXXZ @ 0x180002834 (-StatsCollectionThread@CCompFrameStats@@IEAAXXZ.c)
 *     ?UpdateCollection@CCompFrameStats@@UEAAXXZ @ 0x18010B200 (-UpdateCollection@CCompFrameStats@@UEAAXXZ.c)
 * Callees:
 *     ?_DCompositionGetTargetStatistics@CCompFrameStats@@CAJ_KPEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x180002C84 (-_DCompositionGetTargetStatistics@CCompFrameStats@@CAJ_KPEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCOM.c)
 *     ?_DCompositionGetStatistics@CCompFrameStats@@CAJ_KPEAUtagCOMPOSITION_FRAME_STATS@@IPEAUtagCOMPOSITION_TARGET_ID@@PEAI@Z @ 0x180002CEC (-_DCompositionGetStatistics@CCompFrameStats@@CAJ_KPEAUtagCOMPOSITION_FRAME_STATS@@IPEAUtagCOMPOS.c)
 *     ?WaitForCompletedFrameStats@CCompFrameStats@@IEAA_N_KI@Z @ 0x180002D7C (-WaitForCompletedFrameStats@CCompFrameStats@@IEAA_N_KI@Z.c)
 *     ??$_Emplace_reallocate@AEBUCompTargetStats@CCompFrameStats@@@?$vector@UCompTargetStats@CCompFrameStats@@V?$allocator@UCompTargetStats@CCompFrameStats@@@std@@@std@@QEAAPEAUCompTargetStats@CCompFrameStats@@QEAU23@AEBU23@@Z @ 0x180003794 (--$_Emplace_reallocate@AEBUCompTargetStats@CCompFrameStats@@@-$vector@UCompTargetStats@CCompFram.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     memset_0 @ 0x180060F40 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Invalidate@CCompFrameStats@@IEAAXXZ @ 0x18010AB50 (-Invalidate@CCompFrameStats@@IEAAXXZ.c)
 */

void __fastcall CCompFrameStats::CollectStats(CCompFrameStats *this, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rsi
  unsigned int v7; // eax
  int v8; // r14d
  const struct tagCOMPOSITION_TARGET_ID *v9; // r15
  __int64 v10; // rdx
  int v11; // eax
  __int128 v12; // xmm0
  __int64 v13; // xmm1_8
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int64 v21; // rax
  unsigned int v22; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v23; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h]
  _OWORD v25[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+90h] [rbp-70h]
  __m256i v27; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v28; // [rsp+C0h] [rbp-40h]
  __int128 v29; // [rsp+D0h] [rbp-30h]
  __int128 v30; // [rsp+E0h] [rbp-20h]
  __int128 v31; // [rsp+F0h] [rbp-10h]
  __int128 v32; // [rsp+100h] [rbp+0h]
  __int128 v33; // [rsp+110h] [rbp+10h]
  __int64 v34; // [rsp+120h] [rbp+20h]
  _DWORD v35[112]; // [rsp+130h] [rbp+30h] BYREF

  v3 = a2;
  if ( *((_BYTE *)this + 12) )
  {
    if ( !a2 || !CCompFrameStats::WaitForCompletedFrameStats(this, a2, a3) )
      v3 = (*(__int64 (__fastcall **)(CCompFrameStats *, __int64))(*(_QWORD *)this + 64LL))(this, 2LL);
    v5 = *((_QWORD *)this + 13);
    if ( v5 && v3 > v5 )
      v3 = *((_QWORD *)this + 13);
  }
  if ( *((_BYTE *)this + 12) )
  {
    v6 = *((_QWORD *)this + 12);
    while ( v6 < v3 )
    {
      v24 = 0LL;
      v23 = 0LL;
      ++v6;
      memset_0(v35, 0, sizeof(v35));
      if ( (int)CCompFrameStats::_DCompositionGetStatistics(
                  v6,
                  (struct tagCOMPOSITION_FRAME_STATS *)&v23,
                  0x10u,
                  (struct tagCOMPOSITION_TARGET_ID *)v35,
                  &v22) < 0 )
        goto LABEL_22;
      v7 = v22;
      if ( v22 >= 0x10 )
        v7 = 16;
      v8 = 0;
      v22 = v7;
      if ( v7 )
      {
        while ( 1 )
        {
          memset_0(v25, 0, 0x48uLL);
          v9 = (const struct tagCOMPOSITION_TARGET_ID *)&v35[7 * v8];
          if ( (int)CCompFrameStats::_DCompositionGetTargetStatistics(v6, v9, (struct tagCOMPOSITION_TARGET_STATS *)v25) < 0 )
            break;
          v10 = *((_QWORD *)this + 15);
          v11 = *((_DWORD *)v9 + 6);
          *(_OWORD *)&v27.m256i_u64[1] = v23;
          v27.m256i_i64[0] = v6;
          v12 = *(_OWORD *)v9;
          DWORD2(v29) = v11;
          v27.m256i_i64[3] = v24;
          v13 = *((_QWORD *)v9 + 2);
          v28 = v12;
          v30 = v25[0];
          *(_QWORD *)&v29 = v13;
          v32 = v25[2];
          v31 = v25[1];
          v34 = v26;
          v33 = v25[3];
          if ( v10 == *((_QWORD *)this + 16) )
          {
            std::vector<CCompFrameStats::CompTargetStats>::_Emplace_reallocate<CCompFrameStats::CompTargetStats const &>(
              (char *)this + 112,
              v10,
              &v27);
          }
          else
          {
            v14 = *(_OWORD *)&v27.m256i_u64[2];
            *(_OWORD *)v10 = *(_OWORD *)v27.m256i_i8;
            v15 = v28;
            *(_OWORD *)(v10 + 16) = v14;
            v16 = v29;
            *(_OWORD *)(v10 + 32) = v15;
            v17 = v30;
            *(_OWORD *)(v10 + 48) = v16;
            v18 = v31;
            *(_OWORD *)(v10 + 64) = v17;
            v19 = v32;
            *(_OWORD *)(v10 + 80) = v18;
            v20 = v33;
            v21 = v34;
            *(_OWORD *)(v10 + 96) = v19;
            *(_OWORD *)(v10 + 112) = v20;
            *(_QWORD *)(v10 + 128) = v21;
            *((_QWORD *)this + 15) += 136LL;
          }
          if ( ++v8 >= v22 )
            goto LABEL_18;
        }
LABEL_22:
        CCompFrameStats::Invalidate(this);
        return;
      }
LABEL_18:
      *((_QWORD *)this + 12) = v6;
      if ( !*((_BYTE *)this + 12) )
        return;
    }
  }
}
