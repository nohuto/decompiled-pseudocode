/*
 * XREFs of ?LogGpuProfilingData@RenderOutput@Engine@Spectre@@AEAAXXZ @ 0x18002C56C
 * Callers:
 *     ?UpdateGpuProfiler@RenderOutput@Engine@Spectre@@UEAAXH@Z @ 0x18002CDC0 (-UpdateGpuProfiler@RenderOutput@Engine@Spectre@@UEAAXH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18000CA6D (memcmp_0.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@AEBV10@0@Z @ 0x18001338C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@N@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@N@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@N@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@N@std@@PEAX@1@@Z @ 0x18001C9AC (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVLevelSettings@Trace@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVLevelSettings@Trace@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18001D258 (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@PEAVLev.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D378 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDevic.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@AEBV10@@Z @ 0x18001E840 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001E840.c)
 *     ??$AddMeasurement@N@PerformanceLogger@Utils@Spectre@@QEBAXPEBDH00N@Z @ 0x18002A6C0 (--$AddMeasurement@N@PerformanceLogger@Utils@Spectre@@QEBAXPEBDH00N@Z.c)
 *     ??$AddMeasurement@_K@PerformanceLogger@Utils@Spectre@@QEBAXPEBDH00_K@Z @ 0x18002A78C (--$AddMeasurement@_K@PerformanceLogger@Utils@Spectre@@QEBAXPEBDH00_K@Z.c)
 *     ??$_Emplace@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@NU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@N@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@N@std@@PEAX@std@@_N@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@$$QEAH@Z @ 0x18002AA64 (--$_Emplace@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@H@-$_Tree@V-$_Tmap_.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Spectre::Engine::RenderOutput::LogGpuProfilingData(Spectre::Engine::RenderOutput *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rsi
  __int64 v4; // r15
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  const void **v8; // rbx
  int v9; // ecx
  double v10; // xmm6_8
  void **v11; // rdx
  size_t v12; // r8
  const void *v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  __int64 *v17; // rbx
  void **v18; // rax
  __int64 v19; // rdx
  __int64 **v20; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  _QWORD *v27; // [rsp+38h] [rbp-69h] BYREF
  __int64 v28; // [rsp+40h] [rbp-61h]
  int v29; // [rsp+48h] [rbp-59h] BYREF
  __int64 v30; // [rsp+50h] [rbp-51h] BYREF
  __int64 v31; // [rsp+58h] [rbp-49h] BYREF
  _QWORD v32[3]; // [rsp+68h] [rbp-39h] BYREF
  _BYTE v33[32]; // [rsp+88h] [rbp-19h] BYREF

  v28 = 0LL;
  v2 = operator new(0x48uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  v27 = v2;
  v3 = *((_QWORD *)this + 52);
  v4 = *((_QWORD *)this + 53);
  while ( v3 != v4 )
  {
    if ( *(_BYTE *)(v3 + 120) )
    {
      Spectre::Utils::PerformanceLogger::AddMeasurement<unsigned __int64>(
        *((_QWORD **)this + 48),
        (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\renderoutput.cpp",
        596,
        (__int64)"LogGpuProfilingData",
        (__int64)"GpuStats_FrameNumber",
        *(_QWORD *)(v3 + 128));
      v5 = v27;
      std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const,double>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::string const,double>,void *>>>(
        (__int64)&v27,
        (__int64)&v27,
        v27[1]);
      v5[1] = v5;
      *v5 = v5;
      v5[2] = v5;
      v28 = 0LL;
      v7 = **(_QWORD **)(v3 + 136);
      v30 = v7;
      while ( !*(_BYTE *)(v7 + 25) )
      {
        v8 = (const void **)(v7 + 32);
        v9 = *(_DWORD *)(v7 + 64);
        if ( v9 )
        {
          if ( v9 == 1 )
          {
            v10 = *(double *)(v7 + 80) - *(double *)(v7 + 72);
            v29 = 0;
            std::_Tree<std::_Tmap_traits<std::string,double,std::less<std::string>,std::allocator<std::pair<std::string const,double>>,0>>::_Emplace<std::string const &,int>(
              (__int64 *)&v27,
              (__int64)&v31,
              (_QWORD *)(v7 + 32),
              &v29);
            *(double *)(v31 + 64) = v10 + *(double *)(v31 + 64);
          }
        }
        else
        {
          v11 = &Spectre::Engine::GpuProfiler::kPostMarker;
          if ( (unsigned __int64)qword_1801D88A0 >= 0x10 )
            v11 = (void **)Spectre::Engine::GpuProfiler::kPostMarker;
          v12 = *(_QWORD *)(v7 + 48);
          v13 = (const void *)(v7 + 32);
          if ( *(_QWORD *)(v7 + 56) >= 0x10uLL )
            v13 = *v8;
          if ( v12 == qword_1801D8898 && !memcmp_0(v13, v11, v12) )
          {
            Spectre::Utils::PerformanceLogger::AddMeasurement<double>(*((_QWORD **)this + 48), v14, 618LL);
          }
          else
          {
            v15 = (_QWORD *)*((_QWORD *)this + 48);
            std::operator+<char>(v32, (__int64)&unk_1801D3EB8, v8);
            Spectre::Utils::PerformanceLogger::AddMeasurement<double>(v15, v16, 623LL);
            std::string::_Tidy_deallocate((__int64)v32);
          }
        }
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v30);
        v7 = v30;
      }
      v17 = (__int64 *)*v27;
      while ( !*((_BYTE *)v17 + 25) )
      {
        v18 = (void **)std::operator+<char>(v33, (__int64)&unk_1801D3EB8, v17 + 4);
        std::operator+<char>(v32, v18, Spectre::Engine::GpuProfiler::kDurationMarkerSuffix);
        std::string::_Tidy_deallocate((__int64)v33);
        Spectre::Utils::PerformanceLogger::AddMeasurement<double>(*((_QWORD **)this + 48), v19, 644LL);
        std::string::_Tidy_deallocate((__int64)v32);
        v20 = (__int64 **)v17[2];
        if ( *((_BYTE *)v20 + 25) )
        {
          for ( i = (__int64 *)v17[1]; !*((_BYTE *)i + 25) && v17 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v17 = i;
          v17 = i;
        }
        else
        {
          v17 = (__int64 *)v17[2];
          for ( j = *v20; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v17 = j;
        }
      }
      Spectre::Utils::PerformanceLogger::AddMeasurement<double>(*((_QWORD **)this + 48), v6, 648LL);
      Spectre::Utils::PerformanceLogger::AddMeasurement<double>(*((_QWORD **)this + 48), v23, 649LL);
      Spectre::Utils::PerformanceLogger::AddMeasurement<double>(*((_QWORD **)this + 48), v24, 650LL);
      Spectre::Utils::PerformanceLogger::AddMeasurement<double>(*((_QWORD **)this + 48), v25, 651LL);
      Spectre::Utils::PerformanceLogger::AddMeasurement<double>(*((_QWORD **)this + 48), v26, 652LL);
    }
    v3 += 152LL;
  }
  std::_Tree<std::_Tmap_traits<std::string,Trace::LevelSettings *,std::less<std::string>,std::allocator<std::pair<std::string const,Trace::LevelSettings *>>,0>>::~_Tree<std::_Tmap_traits<std::string,Trace::LevelSettings *,std::less<std::string>,std::allocator<std::pair<std::string const,Trace::LevelSettings *>>,0>>((void **)&v27);
}
