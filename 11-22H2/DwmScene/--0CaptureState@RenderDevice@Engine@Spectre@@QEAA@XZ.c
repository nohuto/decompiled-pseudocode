/*
 * XREFs of ??0CaptureState@RenderDevice@Engine@Spectre@@QEAA@XZ @ 0x180025428
 * Callers:
 *     ??0RenderDevice@Engine@Spectre@@IEAA@PEAV112@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@@Z @ 0x180025518 (--0RenderDevice@Engine@Spectre@@IEAA@PEAV112@V-$shared_ptr@VPerformanceLogger@Utils@Spectre@@@st.c)
 * Callees:
 *     ?Reset@CaptureState@RenderDevice@Engine@Spectre@@QEAAXXZ @ 0x1800270B4 (-Reset@CaptureState@RenderDevice@Engine@Spectre@@QEAAXXZ.c)
 */

__int64 __fastcall Spectre::Engine::RenderDevice::CaptureState::CaptureState(
        Spectre::Engine::RenderDevice::CaptureState *this)
{
  __int64 v1; // rcx

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 1065353216;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  Spectre::Engine::RenderDevice::CaptureState::Reset(this);
  return v1;
}
