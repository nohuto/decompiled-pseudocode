/*
 * XREFs of ?ResourceSetHandleProperty@CDevice@DirectComposition@@QEAAJIIPEAX@Z @ 0x18001A2D4
 * Callers:
 *     ?RuntimeClassInitialize@CompositionEffectFactory@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUIGraphicsEffect@Effects@Graphics@4@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@@Z @ 0x180019CDC (-RuntimeClassInitialize@CompositionEffectFactory@Composition@UI@Windows@@QEAAJPEAVCompositor@234.c)
 *     ?RuntimeClassInitialize@CompositionEffectFactory@Composition@UI@Windows@@QEAAJPEAV1234@@Z @ 0x18001A114 (-RuntimeClassInitialize@CompositionEffectFactory@Composition@UI@Windows@@QEAAJPEAV1234@@Z.c)
 *     ?SetHandleProperty@CResourceProxy@DirectComposition@@QEAAJIPEAX@Z @ 0x18001A23C (-SetHandleProperty@CResourceProxy@DirectComposition@@QEAAJIPEAX@Z.c)
 *     ?SetFlipManagerWithHandle@Interop@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAJPEAX@Z @ 0x180180510 (-SetFlipManagerWithHandle@Interop@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAJPEAX.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?CheckForDelayedDestructionObjects@CDevice@DirectComposition@@QEAAXXZ @ 0x1800356CC (-CheckForDelayedDestructionObjects@CDevice@DirectComposition@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFastForKernelBatchFailure@CDevice@DirectComposition@@AEAAXI@Z @ 0x1800F1CD8 (-FailFastForKernelBatchFailure@CDevice@DirectComposition@@AEAAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::ResourceSetHandleProperty(
        DirectComposition::CDevice *this,
        int a2,
        int a3,
        void *a4)
{
  unsigned int v4; // esi
  _DWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rdx
  void *v14; // rcx
  bool v15; // zf
  void (__fastcall ***v16)(_QWORD); // rcx
  void *v18[5]; // [rsp+30h] [rbp-28h] BYREF
  char v19; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0;
  if ( a2 )
  {
    DirectComposition::CDevice::BeginKernelCommand(this, 0x18u, v18, 0);
    v9 = v18[0];
    *(_DWORD *)v18[0] = 10;
    v9[1] = a2;
    v9[2] = a3;
    *((_QWORD *)v9 + 2) = a4;
    v10 = *((_QWORD *)this + 12);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10);
    v11 = *((_QWORD *)this + 20);
    v12 = *((_DWORD *)this + 44);
    LODWORD(v18[0]) = 0;
    v13 = (unsigned int)(v12 - *((_DWORD *)this + 45));
    v19 = 0;
    v4 = (*(__int64 (__fastcall **)(__int64, __int64, void **, char *))(*(_QWORD *)v11 + 16LL))(v11, v13, v18, &v19);
    if ( LODWORD(v18[0]) != *((_DWORD *)this + 46) )
    {
      DirectComposition::CDevice::FailFastForKernelBatchFailure(this, (unsigned int)v18[0]);
      JUMPOUT(0x18001A3F7LL);
    }
    v14 = (void *)*((_QWORD *)this + 24);
    if ( v14 )
    {
      operator delete(v14);
      *((_QWORD *)this + 24) = 0LL;
    }
    *((_DWORD *)this + 46) = 0;
    v15 = v19 == 0;
    *((_DWORD *)this + 45) = *((_DWORD *)this + 44);
    if ( !v15 )
      DirectComposition::CDevice::CheckForDelayedDestructionObjects(this);
    v16 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 10);
    if ( v16 )
      (**v16)(v16);
  }
  return v4;
}
