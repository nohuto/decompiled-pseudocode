/*
 * XREFs of ?ResourceOpenSharedHandle@CDevice@DirectComposition@@QEAAJIPEAPEAX@Z @ 0x1800336D4
 * Callers:
 *     ?OpenSharedResourceHandle@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUIUnknown@@PEAPEAX@Z @ 0x1800353E0 (-OpenSharedResourceHandle@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUIUnknown@@PEAPE.c)
 *     ?OpenSharedResourceHandle@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAX@Z @ 0x1800354E0 (-OpenSharedResourceHandle@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAX@Z.c)
 *     ?OpenSharedResourceHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAPEAX@Z @ 0x1800942D4 (-OpenSharedResourceHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAP.c)
 *     ?CreateSharedMilResource@CDevice@DirectComposition@@UEAAJW4MIL_RESOURCE_TYPE@@PEAIPEAPEAXPEAPEAUIUnknown@@@Z @ 0x1800F0770 (-CreateSharedMilResource@CDevice@DirectComposition@@UEAAJW4MIL_RESOURCE_TYPE@@PEAIPEAPEAXPEAPEAU.c)
 *     ?CreateSharedMilResource@SystemOnly@InteropDwmCompositor@Composition@UI@Windows@@UEAAJW4MIL_RESOURCE_TYPE@@PEAIPEAPEAXPEAPEAUIUnknown@@@Z @ 0x18015B910 (-CreateSharedMilResource@SystemOnly@InteropDwmCompositor@Composition@UI@Windows@@UEAAJW4MIL_RESO.c)
 * Callees:
 *     ?TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z @ 0x180032700 (-TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::ResourceOpenSharedHandle(
        DirectComposition::CDevice *this,
        int a2,
        void **a3)
{
  _DWORD *v6; // rsi
  __int64 result; // rax
  _DWORD *v8; // [rsp+48h] [rbp+20h] BYREF

  DirectComposition::CDevice::BeginKernelCommand(this, 0x10u, (void **)&v8, 1);
  v6 = v8;
  *v8 = 6;
  v6[1] = a2;
  result = DirectComposition::CDevice::TryFlushKernelCommands(this, 1);
  if ( (int)result >= 0 )
    *a3 = (void *)*((_QWORD *)v6 + 1);
  return result;
}
