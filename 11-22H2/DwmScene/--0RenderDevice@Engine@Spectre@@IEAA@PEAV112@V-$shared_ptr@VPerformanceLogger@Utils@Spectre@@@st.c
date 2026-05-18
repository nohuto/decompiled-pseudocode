/*
 * XREFs of ??0RenderDevice@Engine@Spectre@@IEAA@PEAV112@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@@Z @ 0x180025518
 * Callers:
 *     ??0RenderDeviceGeneric@Engine@Spectre@@QEAA@PEAV112@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@@Z @ 0x1800526F0 (--0RenderDeviceGeneric@Engine@Spectre@@QEAA@PEAV112@V-$shared_ptr@VPerformanceLogger@Utils@Spect.c)
 *     ??0RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAA@PEAV223@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@@Z @ 0x1800C40F4 (--0RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAA@PEAV223@V-$shared_ptr@VPerformanceLogger@Utils@S.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180011CA0 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ??E?$_Atomic_integral@H$03@std@@QEAAHH@Z @ 0x18002116C (--E-$_Atomic_integral@H$03@std@@QEAAHH@Z.c)
 *     ??0CaptureState@RenderDevice@Engine@Spectre@@QEAA@XZ @ 0x180025428 (--0CaptureState@RenderDevice@Engine@Spectre@@QEAA@XZ.c)
 *     ??0QueryPool@RenderDevice@Engine@Spectre@@QEAA@AEAV123@@Z @ 0x1800254A4 (--0QueryPool@RenderDevice@Engine@Spectre@@QEAA@AEAV123@@Z.c)
 *     ??0ResourceFactory@Engine@Spectre@@QEAA@XZ @ 0x180025870 (--0ResourceFactory@Engine@Spectre@@QEAA@XZ.c)
 *     ??0Lockable@Engine@Spectre@@QEAA@W4ThreadingMode@012@@Z @ 0x180029EDC (--0Lockable@Engine@Spectre@@QEAA@W4ThreadingMode@012@@Z.c)
 *     ?GetThreadingMode@Lockable@Engine@Spectre@@QEBA?AW4ThreadingMode@123@XZ @ 0x18002A254 (-GetThreadingMode@Lockable@Engine@Spectre@@QEBA-AW4ThreadingMode@123@XZ.c)
 *     ??0ResourceManager@Engine@Spectre@@QEAA@XZ @ 0x18006FFFC (--0ResourceManager@Engine@Spectre@@QEAA@XZ.c)
 *     ??0SceneAttributeManager@Engine@Spectre@@QEAA@XZ @ 0x180070744 (--0SceneAttributeManager@Engine@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=20
struct Spectre::Engine::RenderDevice *__fastcall Spectre::Engine::RenderDevice::RenderDevice(
        struct Spectre::Engine::RenderDevice *a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int ThreadingMode; // eax
  std::_Ref_count_base *v7; // rcx
  _QWORD *v9; // [rsp+A0h] [rbp+18h] BYREF

  v9 = a3;
  *((_QWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  if ( a2 )
    ThreadingMode = Spectre::Engine::Lockable::GetThreadingMode(a2 + 8);
  else
    ThreadingMode = 1;
  Spectre::Engine::Lockable::Lockable((char *)a1 + 24, ThreadingMode);
  *(_QWORD *)a1 = &Spectre::Engine::RenderDevice::`vftable';
  *((_QWORD *)a1 + 10) = 0LL;
  *((_QWORD *)a1 + 12) = 0LL;
  *((_QWORD *)a1 + 13) = 7LL;
  *((_WORD *)a1 + 40) = 0;
  *((_QWORD *)a1 + 14) = 0LL;
  *((_QWORD *)a1 + 16) = 0LL;
  *((_QWORD *)a1 + 17) = 7LL;
  *((_WORD *)a1 + 56) = 0;
  *((_QWORD *)a1 + 18) = 0LL;
  *((_QWORD *)a1 + 20) = 0LL;
  *((_QWORD *)a1 + 21) = 7LL;
  *((_WORD *)a1 + 72) = 0;
  *((_QWORD *)a1 + 22) = 0LL;
  *((_QWORD *)a1 + 24) = 0LL;
  *((_QWORD *)a1 + 25) = 7LL;
  *((_WORD *)a1 + 88) = 0;
  *((_QWORD *)a1 + 26) = 0LL;
  *((_QWORD *)a1 + 28) = 0LL;
  *((_QWORD *)a1 + 29) = 7LL;
  *((_WORD *)a1 + 104) = 0;
  *((_DWORD *)a1 + 60) = 1;
  *((_DWORD *)a1 + 61) = std::_Atomic_integral<int,4>::operator++((__int64)&unk_1801D2B4C);
  *((_QWORD *)a1 + 31) = 0LL;
  *((_QWORD *)a1 + 32) = 0LL;
  *((_QWORD *)a1 + 33) = 0LL;
  *((_QWORD *)a1 + 34) = 0LL;
  *((_QWORD *)a1 + 35) = 0LL;
  *((_DWORD *)a1 + 72) = 1;
  *((_QWORD *)a1 + 37) = 0LL;
  *((_QWORD *)a1 + 38) = 0LL;
  *((_BYTE *)a1 + 312) = 0;
  *((_DWORD *)a1 + 79) = 40960;
  *((_QWORD *)a1 + 40) = 45312LL;
  *((_QWORD *)a1 + 41) = 1LL;
  *((_QWORD *)a1 + 42) = 0LL;
  *((_QWORD *)a1 + 43) = 0LL;
  *((_QWORD *)a1 + 44) = 0LL;
  *((_QWORD *)a1 + 45) = 0LL;
  *((_QWORD *)a1 + 46) = 0LL;
  *((_DWORD *)a1 + 94) = 0;
  *((_DWORD *)a1 + 96) = 3;
  *((_QWORD *)a1 + 49) = 0LL;
  *((_QWORD *)a1 + 50) = 0LL;
  *((_DWORD *)a1 + 102) = 0;
  *((_QWORD *)a1 + 53) = 0LL;
  *((_QWORD *)a1 + 54) = 0LL;
  *((_QWORD *)a1 + 55) = 0LL;
  *((_QWORD *)a1 + 56) = 0LL;
  *((_QWORD *)a1 + 57) = 0LL;
  *((_QWORD *)a1 + 58) = 0LL;
  Spectre::Engine::ResourceFactory::ResourceFactory((struct Spectre::Engine::RenderDevice *)((char *)a1 + 496));
  *((_QWORD *)a1 + 74) = 0LL;
  *((_QWORD *)a1 + 75) = 0LL;
  *((_QWORD *)a1 + 74) = *a3;
  *((_QWORD *)a1 + 75) = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  Spectre::Engine::ResourceManager::ResourceManager((struct Spectre::Engine::RenderDevice *)((char *)a1 + 608));
  Spectre::Engine::ResourceManager::ResourceManager((struct Spectre::Engine::RenderDevice *)((char *)a1 + 832));
  Spectre::Engine::ResourceManager::ResourceManager((struct Spectre::Engine::RenderDevice *)((char *)a1 + 1056));
  Spectre::Engine::SceneAttributeManager::SceneAttributeManager((struct Spectre::Engine::RenderDevice *)((char *)a1 + 1280));
  *((_QWORD *)a1 + 480) = 0LL;
  *((_QWORD *)a1 + 481) = 0LL;
  *((_QWORD *)a1 + 482) = 0LL;
  *((_QWORD *)a1 + 483) = 0LL;
  *((_QWORD *)a1 + 484) = 0LL;
  *((_QWORD *)a1 + 485) = 3LL;
  *((_QWORD *)a1 + 486) = 0LL;
  *((_QWORD *)a1 + 487) = 0LL;
  *((_QWORD *)a1 + 488) = 0LL;
  *((_QWORD *)a1 + 489) = 0LL;
  *((_DWORD *)a1 + 980) = 0;
  *((_QWORD *)a1 + 491) = 0LL;
  *((_QWORD *)a1 + 492) = 0LL;
  *((_QWORD *)a1 + 493) = 0LL;
  *((_QWORD *)a1 + 494) = 0LL;
  *((_QWORD *)a1 + 495) = 0LL;
  *((_QWORD *)a1 + 496) = 0LL;
  *((_WORD *)a1 + 1988) = 0;
  *((_QWORD *)a1 + 498) = a2;
  Spectre::Engine::RenderDevice::CaptureState::CaptureState((struct Spectre::Engine::RenderDevice *)((char *)a1 + 3992));
  Spectre::Engine::RenderDevice::QueryPool::QueryPool((struct Spectre::Engine::RenderDevice *)((char *)a1 + 4096), a1);
  *(_OWORD *)((char *)a1 + 424) = 0LL;
  *(_OWORD *)((char *)a1 + 440) = 0LL;
  *(_OWORD *)((char *)a1 + 456) = 0LL;
  *(_OWORD *)((char *)a1 + 472) = 0LL;
  *((_QWORD *)a1 + 61) = 0LL;
  *((_QWORD *)a1 + 53) = *std::chrono::steady_clock::now(&v9);
  v7 = (std::_Ref_count_base *)a3[1];
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  return a1;
}
