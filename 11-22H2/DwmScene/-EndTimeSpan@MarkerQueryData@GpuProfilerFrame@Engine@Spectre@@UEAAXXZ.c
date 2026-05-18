/*
 * XREFs of ?EndTimeSpan@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@UEAAXXZ @ 0x1800A2E40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?GetQuery@RenderDevice@Engine@Spectre@@QEAA?AVRenderDeviceQuery@23@W4QueryType@GpuQuery@23@@Z @ 0x1800267C4 (-GetQuery@RenderDevice@Engine@Spectre@@QEAA-AVRenderDeviceQuery@23@W4QueryType@GpuQuery@23@@Z.c)
 *     ?lock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A4F0 (-lock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ?unlock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A5AC (-unlock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 *     ??0RenderDeviceQuery@Engine@Spectre@@QEAA@XZ @ 0x1800A1B5C (--0RenderDeviceQuery@Engine@Spectre@@QEAA@XZ.c)
 *     ??1RenderDeviceQuery@Engine@Spectre@@QEAA@XZ @ 0x1800A1BD8 (--1RenderDeviceQuery@Engine@Spectre@@QEAA@XZ.c)
 *     ??4RenderDeviceQuery@Engine@Spectre@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800A1C34 (--4RenderDeviceQuery@Engine@Spectre@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??BRenderDeviceQuery@Engine@Spectre@@QEBA_NXZ @ 0x1800A1D74 (--BRenderDeviceQuery@Engine@Spectre@@QEBA_NXZ.c)
 *     ?End@RenderDeviceQuery@Engine@Spectre@@QEAAXV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@0@Z @ 0x1800A1E04 (-End@RenderDeviceQuery@Engine@Spectre@@QEAAXV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@0@Z.c)
 *     ?GetCommandList@RenderDeviceQuery@Engine@Spectre@@QEBA?AV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@XZ @ 0x1800A1EA8 (-GetCommandList@RenderDeviceQuery@Engine@Spectre@@QEBA-AV-$shared_ptr@VCommandList@Engine@Spectr.c)
 *     ?GetCommandListImmediate@RenderDeviceQuery@Engine@Spectre@@QEBA?AV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@XZ @ 0x1800A1ED0 (-GetCommandListImmediate@RenderDeviceQuery@Engine@Spectre@@QEBA-AV-$shared_ptr@VCommandList@Engi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall Spectre::Engine::GpuProfilerFrame::MarkerQueryData::EndTimeSpan(
        Spectre::Engine::GpuProfilerFrame::MarkerQueryData *this)
{
  Spectre::Utils::SharedMutex *v2; // rbx
  _QWORD *v3; // rax
  __int64 v4; // r8
  char *v5; // rsi
  _QWORD *CommandList; // rax
  __int64 *Query; // rax
  char *v8; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // r9
  __int64 v11; // [rsp+30h] [rbp-D0h] BYREF
  std::_Ref_count_base *v12; // [rsp+38h] [rbp-C8h]
  char *v13; // [rsp+40h] [rbp-C0h]
  _QWORD v14[4]; // [rsp+48h] [rbp-B8h] BYREF
  std::_Ref_count_base *v15[22]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v16[4]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+138h] [rbp+38h] BYREF

  v2 = (Spectre::Engine::GpuProfilerFrame::MarkerQueryData *)((char *)this + 8);
  v13 = (char *)this + 8;
  Spectre::Engine::Mutex::lock((Spectre::Engine::GpuProfilerFrame::MarkerQueryData *)((char *)this + 8));
  if ( *((_DWORD *)this + 4) != 1 )
  {
    std::string::string(v16, (__int64)"Attempt to call EndTimeSpan() on a query marker that wasn't a timespan.");
    v3 = std::string::string(
           v14,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\gpuprofiler\\gpuprofilerframe.cpp");
    Spectre::Engine::EngineException::EngineException(pExceptionObject, (__int64)v3, v4, (const char *)v16, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v5 = (char *)this + 32;
  if ( Spectre::Engine::RenderDeviceQuery::operator bool() )
  {
    CommandList = (_QWORD *)Spectre::Engine::RenderDeviceQuery::GetCommandList((__int64)this + 32, &v11);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*CommandList + 72LL))(*CommandList);
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    Query = (__int64 *)Spectre::Engine::RenderDevice::GetQuery(*((_QWORD *)this + 3), (__int64)v15, 1u);
    v8 = (char *)this + 216;
    Spectre::Engine::RenderDeviceQuery::operator=((__int64)v8, Query);
    Spectre::Engine::RenderDeviceQuery::~RenderDeviceQuery(v15);
    if ( Spectre::Engine::RenderDeviceQuery::operator bool() )
    {
      Spectre::Engine::RenderDeviceQuery::GetCommandListImmediate((__int64)v5, v16);
      v9 = (_QWORD *)Spectre::Engine::RenderDeviceQuery::GetCommandList((__int64)v5, v14);
      Spectre::Engine::RenderDeviceQuery::End((__int64)v8, v9, v10);
    }
    else
    {
      Spectre::Engine::RenderDeviceQuery::RenderDeviceQuery((Spectre::Engine::RenderDeviceQuery *)v15);
      Spectre::Engine::RenderDeviceQuery::operator=((__int64)v5, (__int64 *)v15);
      Spectre::Engine::RenderDeviceQuery::~RenderDeviceQuery(v15);
    }
  }
  Spectre::Engine::Mutex::unlock(v2);
}
