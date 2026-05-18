/*
 * XREFs of ?UpdateFrameRate@RenderDevice@Engine@Spectre@@IEAAXM@Z @ 0x1800271CC
 * Callers:
 *     ?EndFrame@RenderDevice@Engine@Spectre@@UEAAXM@Z @ 0x180026480 (-EndFrame@RenderDevice@Engine@Spectre@@UEAAXM@Z.c)
 * Callees:
 *     ?GetCounter@PerformanceManager@Engine@Spectre@@QEBA_JW4Category@123@W4Property@123@W4Value@123@@Z @ 0x180070A18 (-GetCounter@PerformanceManager@Engine@Spectre@@QEBA_JW4Category@123@W4Property@123@W4Value@123@@.c)
 *     ?Instance@PerformanceManager@Engine@Spectre@@SAAEAV123@XZ @ 0x180070B14 (-Instance@PerformanceManager@Engine@Spectre@@SAAEAV123@XZ.c)
 */

void __fastcall Spectre::Engine::RenderDevice::UpdateFrameRate(Spectre::Engine::RenderDevice *this, float a2)
{
  float *v2; // rdx
  float v3; // xmm2_4
  int v4; // eax
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // eax
  float v9; // xmm0_4
  struct Spectre::Engine::PerformanceManager *v10; // rbx

  v2 = (float *)((char *)this + 3916);
  v3 = 1000.0 / a2;
  v4 = *((_DWORD *)this + 978) + 1;
  *((_DWORD *)this + 978) = v4;
  *((float *)this + 976) = a2;
  v6 = a2 + *((float *)this + 977);
  *((float *)this + 972) = v3;
  *((float *)this + 977) = v6;
  if ( v6 >= 1000.0 )
  {
    *((_DWORD *)this + 977) = 0;
    *((_DWORD *)this + 978) = 0;
    v7 = (float)v4;
    *((_DWORD *)this + 975) = *((_DWORD *)this + 980);
    v8 = *v2;
    *((_DWORD *)this + 980) = 2139095039;
    *((float *)this + 974) = v8;
    *v2 = -3.4028235e38;
    *((float *)this + 973) = (float)(v7 * 1000.0) / v6;
  }
  v9 = *((float *)this + 980);
  if ( v9 > v3 )
    v9 = v3;
  *((float *)this + 980) = v9;
  if ( v3 <= *v2 )
    v3 = *v2;
  *v2 = v3;
  v10 = Spectre::Engine::PerformanceManager::Instance();
  *((_QWORD *)this + 491) = Spectre::Engine::PerformanceManager::GetCounter(v10, 11LL, 2LL, 3LL);
  *((_QWORD *)this + 494) = Spectre::Engine::PerformanceManager::GetCounter(v10, 6LL, 2LL, 3LL);
  *((_QWORD *)this + 492) = Spectre::Engine::PerformanceManager::GetCounter(v10, 5LL, 2LL, 3LL);
  *((_QWORD *)this + 493) = Spectre::Engine::PerformanceManager::GetCounter(v10, 7LL, 2LL, 3LL);
  *((_QWORD *)this + 495) = Spectre::Engine::PerformanceManager::GetCounter(v10, 3LL, 2LL, 3LL);
  *((_QWORD *)this + 496) = Spectre::Engine::PerformanceManager::GetCounter(v10, 8LL, 2LL, 3LL);
}
