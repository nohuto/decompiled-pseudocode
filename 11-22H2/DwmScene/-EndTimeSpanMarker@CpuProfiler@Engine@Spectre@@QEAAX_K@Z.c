/*
 * XREFs of ?EndTimeSpanMarker@CpuProfiler@Engine@Spectre@@QEAAX_K@Z @ 0x1800A02C0
 * Callers:
 *     ??1CpuProfilerScope@Engine@Spectre@@QEAA@XZ @ 0x180031C70 (--1CpuProfilerScope@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180011CA0 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ?lock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A4F0 (-lock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ?unlock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A5AC (-unlock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ??B?$atomic@_N@std@@QEBA_NXZ @ 0x1800573E0 (--B-$atomic@_N@std@@QEBA_NXZ.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::CpuProfiler::EndTimeSpanMarker(
        Spectre::Engine::CpuProfiler *this,
        unsigned __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  Spectre::Engine::CpuProfiler *v6; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v7[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v8[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-48h] BYREF

  if ( std::atomic<bool>::operator bool((__int64)this + 8) )
  {
    v6 = this;
    Spectre::Engine::Mutex::lock(this);
    if ( a2 >= 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) >> 3) )
    {
      std::string::string(v8, (__int64)"Error: CpuProfiler::EndTimeSpanMarker() called with out of range parameter");
      v4 = std::string::string(
             v7,
             (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engi"
                      "ne\\cpuprofiler\\cpuprofiler.cpp");
      Spectre::Engine::EngineException::EngineException(pExceptionObject, (__int64)v4, v5, (const char *)v8, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    *(_QWORD *)(*((_QWORD *)this + 4) + 56 * a2 + 48) = *std::chrono::steady_clock::now(&v6);
    Spectre::Engine::Mutex::unlock(this);
  }
}
