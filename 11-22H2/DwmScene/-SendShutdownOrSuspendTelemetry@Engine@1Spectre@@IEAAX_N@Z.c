/*
 * XREFs of ?SendShutdownOrSuspendTelemetry@Engine@1Spectre@@IEAAX_N@Z @ 0x180036A54
 * Callers:
 *     ?Shutdown@Engine@1Spectre@@QEAAXXZ @ 0x180036EAC (-Shutdown@Engine@1Spectre@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18000B4B0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180011CA0 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ??$?8VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DD0 (--$-8VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVLevelSettings@Trace@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVLevelSettings@Trace@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18001D258 (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@PEAVLev.c)
 *     ??$GetDurationMilliseconds@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Engine@Spectre@@YAMV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z @ 0x180024B40 (--$GetDurationMilliseconds@V-$duration@_JU-$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Engine@Spect.c)
 *     ??0?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@std@@@1@@Z @ 0x180030D64 (--0-$map@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@MU-$less@V-$basic_string@.c)
 *     ??0?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@QEAA@XZ @ 0x180030E4C (--0-$map@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V12@U-$less@_ea_180030E4C.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1800317AC (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V12@U-$.c)
 *     ??A?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@std@@@2@@std@@QEAAAEAM$$QEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x180032154 (--A-$map@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@MU-$less@V-$basic_string@.c)
 *     ?GetTelemetryManager@Engine@1Spectre@@QEBAPEAVITelemetryManager@Utils@2@XZ @ 0x18003486C (-GetTelemetryManager@Engine@1Spectre@@QEBAPEAVITelemetryManager@Utils@2@XZ.c)
 *     ?GetDisplayRenderTiming@Display@Engine@Spectre@@QEBA?AUDisplayRenderTiming@123@XZ @ 0x180057958 (-GetDisplayRenderTiming@Display@Engine@Spectre@@QEBA-AUDisplayRenderTiming@123@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall Spectre::Engine::Engine::SendShutdownOrSuspendTelemetry(Spectre::Engine::Engine *this)
{
  Spectre::Engine::Engine *v1; // r14
  _QWORD *v2; // r15
  _QWORD *v3; // rdx
  HANDLE CurrentProcess; // rax
  SIZE_T v5; // r11
  int v6; // r12d
  __int64 v7; // rbx
  signed __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // rsi
  _QWORD *v11; // r10
  _QWORD *i; // r8
  _QWORD *v13; // r8
  float v14; // xmm6_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  struct Spectre::Utils::ITelemetryManager *TelemetryManager; // rsi
  void (__fastcall *v19)(struct Spectre::Utils::ITelemetryManager *, void **, _QWORD *, void **); // rdi
  _QWORD *v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r9
  _BYTE *v25; // rax
  size_t v26; // r8
  void *v27[3]; // [rsp+30h] [rbp-148h] BYREF
  Spectre::Engine::Engine *v28; // [rsp+48h] [rbp-130h]
  stdext::exception *v29; // [rsp+50h] [rbp-128h] BYREF
  __m128i v30; // [rsp+60h] [rbp-118h] BYREF
  __int64 v31; // [rsp+70h] [rbp-108h]
  signed __int64 v32; // [rsp+78h] [rbp-100h]
  void *v33[3]; // [rsp+80h] [rbp-F8h] BYREF
  _QWORD v34[4]; // [rsp+A0h] [rbp-D8h] BYREF
  _QWORD v35[4]; // [rsp+C0h] [rbp-B8h] BYREF
  float v36; // [rsp+E0h] [rbp-98h]
  char v37; // [rsp+E8h] [rbp-90h] BYREF
  PROCESS_MEMORY_COUNTERS ppsmemCounters; // [rsp+F0h] [rbp-88h] BYREF

  v1 = this;
  v28 = this;
  v2 = (_QWORD *)((char *)this + 496);
  v27[2] = (char *)this + 496;
  if ( !std::operator==<Spectre::Engine::Scene>((_QWORD *)this + 60) || !std::operator==<Spectre::Engine::Scene>(v2) )
  {
    if ( std::operator!=<Spectre::Engine::Scene>(v3) )
    {
      CurrentProcess = GetCurrentProcess();
      K32GetProcessMemoryInfo(CurrentProcess, &ppsmemCounters, 0x48u);
      v5 = ppsmemCounters.PeakWorkingSetSize - *((_QWORD *)v1 + 146);
      v6 = 0;
      v7 = 0x7FFFFFFFFFFFFFFFLL;
      v8 = 0x8000000000000000uLL;
      v9 = 0LL;
      LODWORD(v10) = 0;
      v11 = (_QWORD *)*((_QWORD *)v1 + 21);
      for ( i = (_QWORD *)*v11; i != v11; i = (_QWORD *)*v13 )
      {
        Spectre::Engine::Display::GetDisplayRenderTiming(i[2], &v30);
        if ( v30.m128i_i32[0] )
        {
          if ( v30.m128i_i64[1] < v7 )
            v7 = v30.m128i_i64[1];
          if ( v8 < v32 )
            v8 = v32;
          v9 += v31 * v30.m128i_u32[0];
          v6 += v30.m128i_i32[0];
        }
      }
      if ( v6 )
        v10 = v9 / v6;
      if ( (v5 & 0x8000000000000000uLL) != 0LL )
        v14 = (float)(int)(v5 & 1 | (v5 >> 1)) + (float)(int)(v5 & 1 | (v5 >> 1));
      else
        v14 = (float)(int)v5;
      std::string::string(v35, (__int64)"Engine Max Memory Usage");
      v36 = v14;
      v30.m128i_i64[0] = (__int64)v35;
      v30.m128i_i64[1] = (__int64)&v37;
      std::map<std::string,float>::map<std::string,float>((__int64 *)v27, &v30);
      `eh vector destructor iterator'(
        (char *)v35,
        40LL,
        1LL,
        (void (*)(void *))std::pair<std::string const,float>::~pair<std::string const,float>);
      if ( v6 )
      {
        v15 = Spectre::Engine::GetDurationMilliseconds<std::chrono::duration<__int64,std::ratio<1,1000000000>>>(v7);
        std::string::string(v33, (__int64)"Min Time Per-render-update");
        *(float *)std::map<std::string,float>::operator[]((__int64 *)v27, (__int64)v33) = v15;
        std::string::_Tidy_deallocate((__int64)v33);
        v16 = Spectre::Engine::GetDurationMilliseconds<std::chrono::duration<__int64,std::ratio<1,1000000000>>>(v10);
        std::string::string(&v30, (__int64)"Avg Time Per-render-update");
        *(float *)std::map<std::string,float>::operator[]((__int64 *)v27, (__int64)&v30) = v16;
        std::string::_Tidy_deallocate((__int64)&v30);
        v17 = Spectre::Engine::GetDurationMilliseconds<std::chrono::duration<__int64,std::ratio<1,1000000000>>>(v8);
        std::string::string(v34, (__int64)"Max Time Per-render-update");
        *(float *)std::map<std::string,float>::operator[]((__int64 *)v27, (__int64)v34) = v17;
        std::string::_Tidy_deallocate((__int64)v34);
      }
      TelemetryManager = Spectre::Engine::Engine::GetTelemetryManager(v1);
      v19 = *(void (__fastcall **)(struct Spectre::Utils::ITelemetryManager *, void **, _QWORD *, void **))(*(_QWORD *)TelemetryManager + 40LL);
      v20 = std::map<std::string,std::string>::map<std::string,std::string>(&v30);
      std::string::string(v33, (__int64)"Engine Shutting Down");
      v19(TelemetryManager, v33, v20, v27);
      std::string::_Tidy_deallocate((__int64)v33);
      std::_Tree<std::_Tmap_traits<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>,0>>::~_Tree<std::_Tmap_traits<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>,0>>((void **)&v30);
      std::_Tree<std::_Tmap_traits<std::string,Trace::LevelSettings *,std::less<std::string>,std::allocator<std::pair<std::string const,Trace::LevelSettings *>>,0>>::~_Tree<std::_Tmap_traits<std::string,Trace::LevelSettings *,std::less<std::string>,std::allocator<std::pair<std::string const,Trace::LevelSettings *>>,0>>(v27);
    }
    if ( std::operator!=<Spectre::Engine::Scene>(v2) )
    {
      std::string::string(v33, (__int64)word_180106082);
      __ExceptionPtrCreate(v34);
      __ExceptionPtrCurrentException(v34);
      if ( __ExceptionPtrToBool(v34) )
      {
        __ExceptionPtrCopy(&v30, v34);
        try
        {
          v27[0] = &v30;
          __ExceptionPtrRethrow(&v30);
        }
        catch ( stdext::exception *v29 )
        {
          v25 = (_BYTE *)(*(__int64 (__fastcall **)(stdext::exception *))(*(_QWORD *)v29 + 8LL))(v29);
          v26 = -1LL;
          do
            ++v26;
          while ( v25[v26] );
          std::string::assign(v33, v25, v26);
        }
        v1 = v28;
      }
      else
      {
        __ExceptionPtrDestroy(v34);
      }
      v21 = *std::chrono::steady_clock::now(v27) - *((_QWORD *)v1 + 147);
      v22 = (unsigned int)(int)Spectre::Engine::GetDurationMilliseconds<std::chrono::duration<__int64,std::ratio<1,1000000000>>>(v21);
      (*(void (__fastcall **)(__int64, __int64))(v23 + 32))(v24, v22);
      std::string::_Tidy_deallocate((__int64)v33);
    }
  }
}
