/*
 * XREFs of ?GetResult@GpuProfilerFrame@Engine@Spectre@@QEAA?AW4Status@123@AEAUResult@123@_N@Z @ 0x1800A2FDC
 * Callers:
 *     ?GetResultForFrame@FramesData@GpuProfiler@Engine@Spectre@@QEAA?AW4FrameQueryResult@234@_KAEAUResult@GpuProfilerFrame@34@@Z @ 0x1800A128C (-GetResultForFrame@FramesData@GpuProfiler@Engine@Spectre@@QEAA-AW4FrameQueryResult@234@_KAEAURes.c)
 *     ?Update@FramesData@GpuProfiler@Engine@Spectre@@QEAAXXZ @ 0x1800A1604 (-Update@FramesData@GpuProfiler@Engine@Spectre@@QEAAXXZ.c)
 *     ?WaitPendingFrames@FramesData@GpuProfiler@Engine@Spectre@@QEAAXI@Z @ 0x1800A16E8 (-WaitPendingFrames@FramesData@GpuProfiler@Engine@Spectre@@QEAAXI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Erase_head@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@1@@Z @ 0x18002ADCC (--$_Erase_head@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 *     ??0?$multimap@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@@2@@std@@QEAA@XZ @ 0x18002B340 (--0-$multimap@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UMarker_ea_18002B340.c)
 *     ?Flush@CommandList@Engine@Spectre@@QEAAX_N@Z @ 0x18003935C (-Flush@CommandList@Engine@Spectre@@QEAAX_N@Z.c)
 *     ??4Result@GpuProfilerFrame@Engine@Spectre@@QEAAAEAU0123@AEBU0123@@Z @ 0x18007409C (--4Result@GpuProfilerFrame@Engine@Spectre@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@@2@$00@std@@@std@@QEAAXXZ @ 0x180074298 (-clear@-$_Tree@V-$_Tmap_traits@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UMa.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@1@@Z @ 0x1800A0890 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_trai_ea_1800A0890.c)
 *     ??0RenderDeviceQuery@Engine@Spectre@@QEAA@XZ @ 0x1800A1B5C (--0RenderDeviceQuery@Engine@Spectre@@QEAA@XZ.c)
 *     ??1RenderDeviceQuery@Engine@Spectre@@QEAA@XZ @ 0x1800A1BD8 (--1RenderDeviceQuery@Engine@Spectre@@QEAA@XZ.c)
 *     ??4RenderDeviceQuery@Engine@Spectre@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800A1C34 (--4RenderDeviceQuery@Engine@Spectre@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??BRenderDeviceQuery@Engine@Spectre@@QEBA_NXZ @ 0x1800A1D74 (--BRenderDeviceQuery@Engine@Spectre@@QEBA_NXZ.c)
 *     ?GetData@RenderDeviceQuery@Engine@Spectre@@QEBA?AUGetDataResult@GpuQuery@23@W4FlushOption@523@@Z @ 0x1800A1EF8 (-GetData@RenderDeviceQuery@Engine@Spectre@@QEBA-AUGetDataResult@GpuQuery@23@W4FlushOption@523@@Z.c)
 *     ?GetStatistics@RenderDeviceQuery@Engine@Spectre@@QEBA?AUGetStatisticsResult@GpuQuery@23@W4FlushOption@523@@Z @ 0x1800A1F9C (-GetStatistics@RenderDeviceQuery@Engine@Spectre@@QEBA-AUGetStatisticsResult@GpuQuery@23@W4FlushO.c)
 *     ??$_Emplace@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@@2@$00@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@_N@1@$$QEAU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@1@@Z @ 0x1800A2490 (--$_Emplace@U-$pair@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UMarkerResult@.c)
 *     ??4Result@GpuProfilerFrame@Engine@Spectre@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800A28B8 (--4Result@GpuProfilerFrame@Engine@Spectre@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?GetResult@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA?AUMarkerResult@234@N@Z @ 0x1800A36E4 (-GetResult@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA-AUMarkerResult@234@N@Z.c)
 *     ?IsResultAvailable@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA_NXZ @ 0x1800A37C0 (-IsResultAvailable@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Spectre::Engine::GpuProfilerFrame::GetResult(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdi
  __m128i *Data; // rax
  char v7; // di
  __int64 *v8; // rbx
  __int64 **v9; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int128 *v12; // rax
  __int64 v13; // rbx
  __int128 *v14; // rax
  __int64 v15; // rsi
  __int128 *v16; // rax
  _OWORD *Statistics; // rax
  bool v18; // al
  __int64 v19; // r8
  __int64 v20; // rcx
  double v21; // xmm6_8
  double v22; // xmm0_8
  double v23; // xmm0_8
  double v24; // xmm0_8
  double v25; // xmm0_8
  __int64 *v26; // rbx
  __int64 v27; // rdi
  __int64 **v28; // rax
  __int64 *k; // rax
  __int64 *m; // rcx
  __int64 v31; // rbx
  __int64 v34; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v35; // [rsp+38h] [rbp-D0h]
  char v36; // [rsp+40h] [rbp-C8h]
  __int128 v37; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v38[40]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+88h] [rbp-80h]
  __int64 v40; // [rsp+90h] [rbp-78h]
  __int64 v41; // [rsp+98h] [rbp-70h]
  __int64 v42; // [rsp+A0h] [rbp-68h]
  __int64 v43; // [rsp+A8h] [rbp-60h]
  __int64 v44; // [rsp+B0h] [rbp-58h]
  __int64 v45; // [rsp+B8h] [rbp-50h]
  __int64 v46; // [rsp+C0h] [rbp-48h]
  __int64 v47; // [rsp+C8h] [rbp-40h]
  __int64 v48; // [rsp+D0h] [rbp-38h]
  __int64 v49; // [rsp+D8h] [rbp-30h]
  char v50; // [rsp+E0h] [rbp-28h]
  __int64 v51; // [rsp+E8h] [rbp-20h]
  void *v52[5]; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v53; // [rsp+118h] [rbp+10h]
  __int128 v54; // [rsp+130h] [rbp+28h]
  __m128i v55; // [rsp+148h] [rbp+40h]
  __int64 v56; // [rsp+158h] [rbp+50h]
  _BYTE v57[96]; // [rsp+168h] [rbp+60h]
  _QWORD v58[4]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int128 v59; // [rsp+1E8h] [rbp+E0h]
  __int64 v60; // [rsp+1F8h] [rbp+F0h]
  __int64 v61; // [rsp+200h] [rbp+F8h]
  __int64 v62; // [rsp+208h] [rbp+100h]
  __int64 v63; // [rsp+210h] [rbp+108h]
  __int64 v64; // [rsp+218h] [rbp+110h]
  __int64 v65; // [rsp+220h] [rbp+118h]
  _BYTE v66[24]; // [rsp+228h] [rbp+120h] BYREF

  v4 = a2;
  memset(&v38[8], 0, 32);
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0;
  v51 = 0LL;
  std::multimap<std::string,Spectre::Engine::GpuProfilerFrame::MarkerResult>::multimap<std::string,Spectre::Engine::GpuProfilerFrame::MarkerResult>(v52);
  Spectre::Engine::GpuProfilerFrame::Result::operator=(v4, (__int64)&v38[8]);
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>>>::_Erase_head<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>,void *>>>(
    v52,
    (__int64)v52);
  if ( *(_DWORD *)(a1 + 920) == 2 )
  {
    if ( a3 )
      Spectre::Engine::CommandList::Flush(*(Spectre::Engine::CommandList **)(a1 + 896));
    if ( Spectre::Engine::RenderDeviceQuery::operator bool() )
    {
      Data = (__m128i *)Spectre::Engine::RenderDeviceQuery::GetData(a1, (__int64)&v37);
    }
    else
    {
      LODWORD(v34) = 4;
      v35 = 0LL;
      v36 = 1;
      Data = (__m128i *)&v34;
    }
    v55 = *Data;
    v56 = Data[1].m128i_i64[0];
    if ( _mm_cvtsi128_si32(v55) == 2 )
    {
      v7 = 1;
      v8 = **(__int64 ***)(a1 + 880);
      while ( !*((_BYTE *)v8 + 25) )
      {
        v7 = Spectre::Engine::GpuProfilerFrame::MarkerQueryData::IsResultAvailable((Spectre::Engine::GpuProfilerFrame::MarkerQueryData *)(v8 + 8))
           ? v7
           : 0;
        v9 = (__int64 **)v8[2];
        if ( *((_BYTE *)v9 + 25) )
        {
          for ( i = (__int64 *)v8[1]; !*((_BYTE *)i + 25) && v8 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v8 = i;
          v8 = i;
        }
        else
        {
          v8 = (__int64 *)v8[2];
          for ( j = *v9; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v8 = j;
        }
      }
      if ( Spectre::Engine::RenderDeviceQuery::operator bool() )
      {
        v12 = (__int128 *)Spectre::Engine::RenderDeviceQuery::GetData(a1 + 176, (__int64)&v37);
      }
      else
      {
        LODWORD(v34) = 4;
        v35 = 0LL;
        v36 = 1;
        v12 = (__int128 *)&v34;
      }
      v54 = *v12;
      v13 = a1 + 352;
      if ( Spectre::Engine::RenderDeviceQuery::operator bool() )
      {
        v14 = (__int128 *)Spectre::Engine::RenderDeviceQuery::GetData(a1 + 352, (__int64)&v37);
      }
      else
      {
        LODWORD(v34) = 4;
        v35 = 0LL;
        v36 = 1;
        v14 = (__int128 *)&v34;
      }
      v53 = *v14;
      v15 = a1 + 528;
      if ( Spectre::Engine::RenderDeviceQuery::operator bool() )
      {
        v16 = (__int128 *)Spectre::Engine::RenderDeviceQuery::GetData(a1 + 528, (__int64)v66);
      }
      else
      {
        LODWORD(v34) = 4;
        v35 = 0LL;
        v36 = 1;
        v16 = (__int128 *)&v34;
      }
      v37 = *v16;
      if ( Spectre::Engine::RenderDeviceQuery::operator bool() )
      {
        Statistics = (_OWORD *)Spectre::Engine::RenderDeviceQuery::GetStatistics(a1 + 704, (__int64)&v38[8]);
      }
      else
      {
        LODWORD(v58[0]) = 4;
        memset(&v58[1], 0, 24);
        v59 = 0uLL;
        v60 = 0LL;
        v61 = 0LL;
        v62 = 0LL;
        v63 = 0LL;
        v64 = 0LL;
        v65 = 0LL;
        Statistics = v58;
      }
      *(_OWORD *)v57 = *Statistics;
      *(_OWORD *)&v57[16] = Statistics[1];
      *(_OWORD *)&v57[32] = Statistics[2];
      *(_OWORD *)&v57[48] = Statistics[3];
      *(_OWORD *)&v57[64] = Statistics[4];
      *(_OWORD *)&v57[80] = Statistics[5];
      v18 = _mm_cvtsi128_si32(*(__m128i *)v57) == 2;
      if ( v7 && (_DWORD)v54 == 2 && (_DWORD)v53 == 2 && (_DWORD)v37 == 2 && v18 )
      {
        std::_Tree<std::_Tmap_traits<std::string,Spectre::Engine::GpuProfilerFrame::MarkerResult,std::less<std::string>,std::allocator<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>>,1>>::clear((_QWORD *)(a1 + 1064));
        if ( (_BYTE)v56 )
        {
          *(_QWORD *)(a1 + 936) = 0LL;
          *(_QWORD *)(a1 + 952) = 0LL;
          *(_QWORD *)(a1 + 928) = 0LL;
          *(_QWORD *)(a1 + 944) = 0LL;
        }
        else
        {
          v19 = *((_QWORD *)&v53 + 1);
          v20 = *((_QWORD *)&v53 + 1) - *((_QWORD *)&v54 + 1);
          if ( v55.m128i_i64[1] < 0 )
            v21 = (double)(int)(v55.m128i_i8[8] & 1 | ((unsigned __int64)v55.m128i_i64[1] >> 1))
                + (double)(int)(v55.m128i_i8[8] & 1 | ((unsigned __int64)v55.m128i_i64[1] >> 1));
          else
            v21 = (double)v55.m128i_i32[2];
          if ( v54 < 0 )
            v22 = (double)(int)(BYTE8(v54) & 1 | (*((_QWORD *)&v54 + 1) >> 1))
                + (double)(int)(BYTE8(v54) & 1 | (*((_QWORD *)&v54 + 1) >> 1));
          else
            v22 = (double)SDWORD2(v54);
          *(double *)(a1 + 936) = v22 / v21 * 1000.0;
          if ( v19 < 0 )
            v23 = (double)(int)(v19 & 1 | ((unsigned __int64)v19 >> 1))
                + (double)(int)(v19 & 1 | ((unsigned __int64)v19 >> 1));
          else
            v23 = (double)(int)v19;
          *(double *)(a1 + 944) = v23 / v21 * 1000.0;
          if ( v37 < 0 )
            v24 = (double)(int)(BYTE8(v37) & 1 | (*((_QWORD *)&v37 + 1) >> 1))
                + (double)(int)(BYTE8(v37) & 1 | (*((_QWORD *)&v37 + 1) >> 1));
          else
            v24 = (double)SDWORD2(v37);
          *(double *)(a1 + 952) = v24 / v21 * 1000.0;
          if ( v20 < 0 )
            v25 = (double)(int)(v20 & 1 | ((unsigned __int64)v20 >> 1))
                + (double)(int)(v20 & 1 | ((unsigned __int64)v20 >> 1));
          else
            v25 = (double)(int)v20;
          *(double *)(a1 + 928) = v25 / v21 * 1000.0;
          *(_OWORD *)(a1 + 960) = *(_OWORD *)&v57[8];
          *(_OWORD *)(a1 + 976) = *(_OWORD *)&v57[24];
          *(_OWORD *)(a1 + 992) = *(_OWORD *)&v57[40];
          *(_OWORD *)(a1 + 1008) = *(_OWORD *)&v57[56];
          *(_OWORD *)(a1 + 1024) = *(_OWORD *)&v57[72];
          *(_QWORD *)(a1 + 1040) = *(_QWORD *)&v57[88];
          *(_BYTE *)(a1 + 1048) = 1;
          v26 = **(__int64 ***)(a1 + 880);
          while ( !*((_BYTE *)v26 + 25) )
          {
            v27 = Spectre::Engine::GpuProfilerFrame::MarkerQueryData::GetResult(v26 + 8, v66);
            std::string::string(v58, (__int64)(v26 + 4));
            v59 = *(_OWORD *)v27;
            v60 = *(_QWORD *)(v27 + 16);
            std::_Tree<std::_Tmap_traits<std::string,Spectre::Engine::GpuProfilerFrame::MarkerResult,std::less<std::string>,std::allocator<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>>,1>>::_Emplace<std::pair<std::string,Spectre::Engine::GpuProfilerFrame::MarkerResult>>(
              (__int64 *)(a1 + 1064),
              (__int64)&v34,
              (__int64)v58);
            std::string::_Tidy_deallocate((__int64)v58);
            v28 = (__int64 **)v26[2];
            if ( *((_BYTE *)v28 + 25) )
            {
              for ( k = (__int64 *)v26[1]; !*((_BYTE *)k + 25) && v26 == (__int64 *)k[2]; k = (__int64 *)k[1] )
                v26 = k;
              v26 = k;
            }
            else
            {
              v26 = (__int64 *)v26[2];
              for ( m = *v28; !*((_BYTE *)m + 25); m = (__int64 *)*m )
                v26 = m;
            }
          }
          v15 = a1 + 528;
          v13 = a1 + 352;
        }
        Spectre::Engine::RenderDeviceQuery::RenderDeviceQuery((Spectre::Engine::RenderDeviceQuery *)&v38[8]);
        Spectre::Engine::RenderDeviceQuery::operator=(a1, (__int64 *)&v38[8]);
        Spectre::Engine::RenderDeviceQuery::~RenderDeviceQuery((std::_Ref_count_base **)&v38[8]);
        Spectre::Engine::RenderDeviceQuery::RenderDeviceQuery((Spectre::Engine::RenderDeviceQuery *)&v38[8]);
        Spectre::Engine::RenderDeviceQuery::operator=(a1 + 176, (__int64 *)&v38[8]);
        Spectre::Engine::RenderDeviceQuery::~RenderDeviceQuery((std::_Ref_count_base **)&v38[8]);
        Spectre::Engine::RenderDeviceQuery::RenderDeviceQuery((Spectre::Engine::RenderDeviceQuery *)&v38[8]);
        Spectre::Engine::RenderDeviceQuery::operator=(v13, (__int64 *)&v38[8]);
        Spectre::Engine::RenderDeviceQuery::~RenderDeviceQuery((std::_Ref_count_base **)&v38[8]);
        Spectre::Engine::RenderDeviceQuery::RenderDeviceQuery((Spectre::Engine::RenderDeviceQuery *)&v38[8]);
        Spectre::Engine::RenderDeviceQuery::operator=(v15, (__int64 *)&v38[8]);
        Spectre::Engine::RenderDeviceQuery::~RenderDeviceQuery((std::_Ref_count_base **)&v38[8]);
        Spectre::Engine::RenderDeviceQuery::RenderDeviceQuery((Spectre::Engine::RenderDeviceQuery *)&v38[8]);
        Spectre::Engine::RenderDeviceQuery::operator=(a1 + 704, (__int64 *)&v38[8]);
        Spectre::Engine::RenderDeviceQuery::~RenderDeviceQuery((std::_Ref_count_base **)&v38[8]);
        v31 = *(_QWORD *)(a1 + 880);
        std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerQueryData>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerQueryData>,void *>>>(
          a1 + 880,
          a1 + 880,
          *(char **)(v31 + 8));
        *(_QWORD *)(v31 + 8) = v31;
        *(_QWORD *)v31 = v31;
        *(_QWORD *)(v31 + 16) = v31;
        *(_QWORD *)(a1 + 888) = 0LL;
        *(_DWORD *)(a1 + 920) = 3;
      }
      v4 = a2;
    }
  }
  if ( *(_DWORD *)(a1 + 920) == 3 )
    Spectre::Engine::GpuProfilerFrame::Result::operator=(v4, a1 + 928);
  return *(unsigned int *)(a1 + 920);
}
