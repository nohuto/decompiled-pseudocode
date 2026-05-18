/*
 * XREFs of ?GetCounter@PerformanceManager@Engine@Spectre@@QEBA_JW4Category@123@W4Property@123@W4Value@123@@Z @ 0x180070A18
 * Callers:
 *     ?GetStatistics@RenderDevice@Engine@Spectre@@UEAAXAEAUStatistics@23@@Z @ 0x180026870 (-GetStatistics@RenderDevice@Engine@Spectre@@UEAAXAEAUStatistics@23@@Z.c)
 *     ?UpdateFrameRate@RenderDevice@Engine@Spectre@@IEAAXM@Z @ 0x1800271CC (-UpdateFrameRate@RenderDevice@Engine@Spectre@@IEAAXM@Z.c)
 *     ?LogInstanceCounts@Engine@1Spectre@@AEBAXXZ @ 0x180034F18 (-LogInstanceCounts@Engine@1Spectre@@AEBAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 *     ??B?$atomic@_J@std@@QEBA_JXZ @ 0x180070990 (--B-$atomic@_J@std@@QEBA_JXZ.c)
 *     ?GetCounterRecord@PerformanceManager@Engine@Spectre@@AEBAAEAUCounterRecord@123@W4Category@123@W4Property@123@@Z @ 0x180070AD4 (-GetCounterRecord@PerformanceManager@Engine@Spectre@@AEBAAEAUCounterRecord@123@W4Category@123@W4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 Spectre::Engine::PerformanceManager::GetCounter()
{
  _QWORD *CounterRecord; // rax
  int v1; // r9d
  int v2; // r9d
  int v3; // r9d
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD v7[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v8[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  CounterRecord = (_QWORD *)Spectre::Engine::PerformanceManager::GetCounterRecord();
  if ( !v1 )
    return std::atomic<__int64>::operator __int64();
  v2 = v1 - 1;
  if ( !v2 )
    return CounterRecord[1];
  v3 = v2 - 1;
  if ( !v3 )
    return CounterRecord[3];
  if ( v3 != 1 )
  {
    std::string::string(v8, (__int64)"Unsupported value");
    v4 = std::string::string(
           v7,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\performancemanager.cpp");
    Spectre::Engine::EngineException::EngineException(pExceptionObject, (__int64)v4, v5, (const char *)v8, 1);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  return CounterRecord[2];
}
