/*
 * XREFs of ?CollectStats@CCompFrameStats@@MEAAX_K@Z @ 0x1800026F0
 * Callers:
 *     ?CollectStats@CTouchFrameStats@@MEAAX_K@Z @ 0x1801A8350 (-CollectStats@CTouchFrameStats@@MEAAX_K@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBUCompTargetStats@CCompFrameStats@@@?$vector@UCompTargetStats@CCompFrameStats@@V?$allocator@UCompTargetStats@CCompFrameStats@@@std@@@std@@QEAAPEAUCompTargetStats@CCompFrameStats@@QEAU23@AEBU23@@Z @ 0x180002998 (--$_Emplace_reallocate@AEBUCompTargetStats@CCompFrameStats@@@-$vector@UCompTargetStats@CCompFram.c)
 *     ?WaitForCompletedFrameStats@CCompFrameStats@@IEAA_N_KI@Z @ 0x180002B84 (-WaitForCompletedFrameStats@CCompFrameStats@@IEAA_N_KI@Z.c)
 *     ?HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z @ 0x1800244CC (-HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CCompFrameStats::CollectStats(CCompFrameStats *this, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rax
  int Statistics; // eax
  int v9; // eax
  int v10; // esi
  _DWORD *v11; // r15
  int TargetStatistics; // eax
  __int64 v13; // rdx
  int v14; // eax
  __int128 v15; // xmm0
  __int64 v16; // xmm1_8
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int64 v24; // rax
  unsigned int v25; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v27; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+50h] [rbp-B0h]
  _OWORD v29[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-60h]
  __m256i v31; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v32; // [rsp+D0h] [rbp-30h]
  __int128 v33; // [rsp+E0h] [rbp-20h]
  __int128 v34; // [rsp+F0h] [rbp-10h]
  __int128 v35; // [rsp+100h] [rbp+0h]
  __int128 v36; // [rsp+110h] [rbp+10h]
  __int128 v37; // [rsp+120h] [rbp+20h]
  __int64 v38; // [rsp+130h] [rbp+30h]
  _DWORD v39[112]; // [rsp+140h] [rbp+40h] BYREF

  v3 = a2;
  if ( *((_BYTE *)this + 12) && (!a2 || !CCompFrameStats::WaitForCompletedFrameStats(this, a2, a3)) )
    v3 = (*(__int64 (__fastcall **)(CCompFrameStats *, __int64))(*(_QWORD *)this + 64LL))(this, 2LL);
  if ( *((_BYTE *)this + 13) && v3 > *((_QWORD *)this + 15) )
    v3 = *((_QWORD *)this + 15);
  for ( ; *((_BYTE *)this + 12); *((_QWORD *)this + 16) = v6 )
  {
    v5 = *((_QWORD *)this + 16);
    if ( v5 >= v3 )
      break;
    v6 = *((_QWORD *)this + 14);
    v7 = v5 + 1;
    v27 = 0LL;
    if ( v6 <= v7 )
      v6 = v7;
    v28 = 0LL;
    memset_0(v39, 0, sizeof(v39));
    v26 = v6;
    Statistics = NtDCompositionGetStatistics(&v26, &v27, 16LL, v39, &v25);
    if ( (int)DirectComposition::CDevice::HRESULTFromNTSTATUS(Statistics) < 0 )
      goto LABEL_24;
    v9 = v25;
    if ( v25 >= 0x10 )
      v9 = 16;
    v10 = 0;
    v25 = v9;
    if ( v9 )
    {
      while ( 1 )
      {
        memset_0(v29, 0, 0x48uLL);
        v26 = v6;
        v11 = &v39[7 * v10];
        TargetStatistics = NtDCompositionGetTargetStatistics(&v26, v11, v29);
        if ( (int)DirectComposition::CDevice::HRESULTFromNTSTATUS(TargetStatistics) < 0 )
          break;
        v13 = *((_QWORD *)this + 18);
        v14 = v11[6];
        *(_OWORD *)&v31.m256i_u64[1] = v27;
        v31.m256i_i64[0] = v6;
        v15 = *(_OWORD *)v11;
        DWORD2(v33) = v14;
        v31.m256i_i64[3] = v28;
        v16 = *((_QWORD *)v11 + 2);
        v32 = v15;
        v34 = v29[0];
        *(_QWORD *)&v33 = v16;
        v36 = v29[2];
        v35 = v29[1];
        v38 = v30;
        v37 = v29[3];
        if ( v13 == *((_QWORD *)this + 19) )
        {
          std::vector<CCompFrameStats::CompTargetStats>::_Emplace_reallocate<CCompFrameStats::CompTargetStats const &>(
            (char *)this + 136,
            v13,
            &v31);
        }
        else
        {
          v17 = *(_OWORD *)&v31.m256i_u64[2];
          *(_OWORD *)v13 = *(_OWORD *)v31.m256i_i8;
          v18 = v32;
          *(_OWORD *)(v13 + 16) = v17;
          v19 = v33;
          *(_OWORD *)(v13 + 32) = v18;
          v20 = v34;
          *(_OWORD *)(v13 + 48) = v19;
          v21 = v35;
          *(_OWORD *)(v13 + 64) = v20;
          v22 = v36;
          *(_OWORD *)(v13 + 80) = v21;
          v23 = v37;
          v24 = v38;
          *(_OWORD *)(v13 + 96) = v22;
          *(_OWORD *)(v13 + 112) = v23;
          *(_QWORD *)(v13 + 128) = v24;
          *((_QWORD *)this + 18) += 136LL;
        }
        if ( ++v10 >= v25 )
          goto LABEL_19;
      }
LABEL_24:
      (*(void (__fastcall **)(CCompFrameStats *))(*(_QWORD *)this + 216LL))(this);
      return;
    }
LABEL_19:
    ;
  }
}
