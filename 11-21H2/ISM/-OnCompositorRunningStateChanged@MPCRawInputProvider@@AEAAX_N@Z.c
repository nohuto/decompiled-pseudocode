/*
 * XREFs of ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x1800B6790
 * Callers:
 *     ?RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z @ 0x18002C0A0 (-RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ??$Make@VSpectrumListener@@PEAVMPCRawInputProvider@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSpectrumListener@@@12@$$QEAPEAVMPCRawInputProvider@@@Z @ 0x1800B53B0 (--$Make@VSpectrumListener@@PEAVMPCRawInputProvider@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VSpect.c)
 *     ?InternalRelease@?$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B65FC (-InternalRelease@-$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Unregister@SpectrumListener@@QEAAXXZ @ 0x1800B7988 (-Unregister@SpectrumListener@@QEAAXXZ.c)
 *     ??0MPCHeadMovementDetector@@QEAA@XZ @ 0x1800B7CB8 (--0MPCHeadMovementDetector@@QEAA@XZ.c)
 *     ??1MPCHeadMovementDetector@@QEAA@XZ @ 0x1800B7EFC (--1MPCHeadMovementDetector@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCRawInputProvider::OnCompositorRunningStateChanged(MPCRawInputProvider *this, char a2)
{
  char v3; // al
  SpectrumListener *v4; // rcx
  volatile int **v5; // rax
  volatile int *v6; // rcx
  MPCHeadMovementDetector *v7; // rax
  MPCHeadMovementDetector *v8; // rsi
  SpectrumListener **v9; // rsi
  MPCHeadMovementDetector *v10; // rsi
  volatile int *v11; // [rsp+20h] [rbp-18h] BYREF
  MPCHeadMovementDetector *v12; // [rsp+28h] [rbp-10h]
  volatile int *v13; // [rsp+50h] [rbp+18h] BYREF
  struct MPCRawInputProvider *v14; // [rsp+58h] [rbp+20h] BYREF

  v3 = *((_BYTE *)this + 80);
  if ( a2 )
  {
    if ( !v3 )
    {
      v4 = (SpectrumListener *)*((_QWORD *)this + 6);
      if ( v4 )
        SpectrumListener::Unregister(v4);
      v14 = this;
      v5 = (volatile int **)Microsoft::WRL::Details::Make<SpectrumListener,MPCRawInputProvider *>((__int64 *)&v11, &v14);
      v6 = 0LL;
      if ( &v13 != v5 )
      {
        v6 = *v5;
        *v5 = 0LL;
      }
      v13 = (volatile int *)*((_QWORD *)this + 6);
      *((_QWORD *)this + 6) = v6;
      Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease(&v13);
      Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease(&v11);
      v12 = (MPCHeadMovementDetector *)operator new(0xB8uLL);
      v7 = MPCHeadMovementDetector::MPCHeadMovementDetector(v12);
      v8 = (MPCHeadMovementDetector *)*((_QWORD *)this + 7);
      *((_QWORD *)this + 7) = v7;
      if ( v8 )
      {
        MPCHeadMovementDetector::~MPCHeadMovementDetector(v8);
        operator delete(v8);
      }
      *((_BYTE *)this + 80) = 1;
    }
  }
  else if ( v3 )
  {
    v9 = (SpectrumListener **)((char *)this + 48);
    if ( *((_QWORD *)this + 6) )
      SpectrumListener::Unregister(*v9);
    Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease((volatile int **)v9);
    v10 = (MPCHeadMovementDetector *)*((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = 0LL;
    if ( v10 )
    {
      MPCHeadMovementDetector::~MPCHeadMovementDetector(v10);
      operator delete(v10);
    }
    *((_BYTE *)this + 80) = 0;
  }
  MPCRawInputProvider::FlushQueuedDeviceChanges(this);
}
