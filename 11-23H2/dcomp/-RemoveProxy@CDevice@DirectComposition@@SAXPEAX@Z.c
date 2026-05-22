/*
 * XREFs of ?RemoveProxy@CDevice@DirectComposition@@SAXPEAX@Z @ 0x180024510
 * Callers:
 *     ?Release@CVisualProxy@DirectComposition@@UEAAKXZ @ 0x180011510 (-Release@CVisualProxy@DirectComposition@@UEAAKXZ.c)
 *     ?Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ @ 0x180018050 (-Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ.c)
 *     ?Release@CSharedManipulationTransformProxy@DirectComposition@@UEAAKXZ @ 0x18006A840 (-Release@CSharedManipulationTransformProxy@DirectComposition@@UEAAKXZ.c)
 *     ?CreateAndInitializeSharedSectionProxy@CDevice@DirectComposition@@QEAAJ_K_NPEAPEAVCSharedSectionBaseProxy@2@PEAPEAX@Z @ 0x18007EA9C (-CreateAndInitializeSharedSectionProxy@CDevice@DirectComposition@@QEAAJ_K_NPEAPEAVCSharedSection.c)
 *     ??_GCHolographicViewerProxy@DirectComposition@@UEAAPEAXI@Z @ 0x1800E7BD0 (--_GCHolographicViewerProxy@DirectComposition@@UEAAPEAXI@Z.c)
 *     ?Release@CLegacyAnimationTrigger@DirectComposition@@UEAAKXZ @ 0x1800E8890 (-Release@CLegacyAnimationTrigger@DirectComposition@@UEAAKXZ.c)
 *     wil::details::lambda_call__lambda_e7a42d53c5ce1a3e2e9ff6b7ee7ce3c1___::_lambda_call__lambda_e7a42d53c5ce1a3e2e9ff6b7ee7ce3c1___ @ 0x1800ED794 (wil--details--lambda_call__lambda_e7a42d53c5ce1a3e2e9ff6b7ee7ce3c1___--_lambda_call__lambda_e7a4.c)
 *     ?Release@CCaptureControllerProxy@DirectComposition@@UEAAKXZ @ 0x1800F3C40 (-Release@CCaptureControllerProxy@DirectComposition@@UEAAKXZ.c)
 *     ?Release@CCaptureRenderTargetProxy@DirectComposition@@UEAAKXZ @ 0x1800F3C80 (-Release@CCaptureRenderTargetProxy@DirectComposition@@UEAAKXZ.c)
 *     ?Release@CCursorVisualProxy@DirectComposition@@UEAAKXZ @ 0x1800F3CC0 (-Release@CCursorVisualProxy@DirectComposition@@UEAAKXZ.c)
 *     ?Release@CInkProxy@DirectComposition@@UEAAKXZ @ 0x1800F3D00 (-Release@CInkProxy@DirectComposition@@UEAAKXZ.c)
 *     ?Release@CVirtualMonitorCaptureRenderTargetProxy@DirectComposition@@UEAAKXZ @ 0x1800F3D40 (-Release@CVirtualMonitorCaptureRenderTargetProxy@DirectComposition@@UEAAKXZ.c)
 *     ?Release@CReadCaptureControllerProxy@DirectComposition@@UEAAKXZ @ 0x1800FB3B0 (-Release@CReadCaptureControllerProxy@DirectComposition@@UEAAKXZ.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?FromProxy@CProxyTable@DirectComposition@@SAPEAV12@PEAX@Z @ 0x1800248F8 (-FromProxy@CProxyTable@DirectComposition@@SAPEAV12@PEAX@Z.c)
 *     ?Leave@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x1800327E0 (-Leave@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqx_EventWriteTransfer @ 0x1800EA8AC (McTemplateU0qqx_EventWriteTransfer.c)
 */

void __fastcall DirectComposition::CDevice::RemoveProxy(_OWORD *a1)
{
  struct DirectComposition::CProxyTable *v2; // rax
  int v3; // ecx
  _DWORD *v4; // r14
  struct DirectComposition::CProxyTable *v5; // rax
  struct DirectComposition::CProxyTable *v6; // rbx
  __int64 v7; // r15
  DirectComposition::CDeviceLock *v8; // rbp
  int v9; // esi
  bool v10; // zf
  _DWORD *v11; // rax
  void (__fastcall ***v12)(_QWORD); // rcx
  void *v13; // [rsp+58h] [rbp+10h] BYREF

  v2 = DirectComposition::CProxyTable::FromProxy(a1);
  if ( v2 )
  {
    v4 = *(_DWORD **)v2;
    if ( (Microsoft_Windows_DirectCompositionEnableBits & 4) != 0 )
      McTemplateU0qqx_EventWriteTransfer(
        v3,
        (unsigned int)&DCOMPEVENT_RESOURCE_RELEASE,
        v4[40],
        *((_DWORD *)a1 + 3),
        (char)a1);
    v5 = DirectComposition::CProxyTable::FromProxy(a1);
    v6 = v5;
    if ( v5 )
    {
      v7 = *(_QWORD *)v5;
      v8 = (DirectComposition::CDeviceLock *)(*(_QWORD *)v5 + 96LL);
      DirectComposition::CDeviceLock::Enter(v8);
      v9 = *((_DWORD *)a1 + 3);
      *a1 = 0LL;
      *((_QWORD *)a1 + 1) = *((_QWORD *)v6 + 3);
      v10 = (*((_DWORD *)v6 + 2))-- == 1;
      *((_QWORD *)v6 + 3) = a1;
      if ( v10 )
      {
        *((_QWORD *)v6 + 3) = 0LL;
        *((_DWORD *)v6 + 3) = 0;
      }
      *(_DWORD *)(*(_QWORD *)(v7 + 200) + 4 * ((unsigned __int64)(unsigned int)(v9 - 1) >> 5)) &= ~(1 << ((v9 - 1) & 0x1F));
      --*(_DWORD *)(v7 + 360);
      DirectComposition::CDevice::BeginKernelCommand((DirectComposition::CDevice *)v7, 8u, &v13, 0);
      v11 = v13;
      *(_DWORD *)v13 = 3;
      v11[1] = v9;
      v12 = *(void (__fastcall ****)(_QWORD))(v7 + 80);
      if ( v12 )
        (**v12)(v12);
      if ( v8 )
        DirectComposition::CDeviceLock::Leave(v8);
    }
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
