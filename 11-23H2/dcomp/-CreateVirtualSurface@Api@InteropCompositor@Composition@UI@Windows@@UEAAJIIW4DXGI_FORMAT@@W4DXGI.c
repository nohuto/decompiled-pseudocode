/*
 * XREFs of ?CreateVirtualSurface@Api@InteropCompositor@Composition@UI@Windows@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionVirtualSurface@@@Z @ 0x18015E8A0
 * Callers:
 *     ?CreateVirtualSurface@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionVirtualSurface@@@Z @ 0x1800AC190 (-CreateVirtualSurface@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJIIW4DXGI_FORMAT@@W4DXG.c)
 *     ?CreateVirtualSurface@Api@InteropCompositor@Composition@UI@Windows@@WBA@EAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionVirtualSurface@@@Z @ 0x1800AC1B0 (-CreateVirtualSurface@Api@InteropCompositor@Composition@UI@Windows@@WBA@EAAJIIW4DXGI_FORMAT@@W4D.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateVirtualSurface(
        Windows::UI::Composition::InteropCompositor::Api *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        enum DXGI_ALPHA_MODE a5,
        struct IDCompositionVirtualSurface **a6)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, enum DXGI_ALPHA_MODE, struct IDCompositionVirtualSurface **))(**((_QWORD **)this - 93) + 72LL))(
           *((_QWORD *)this - 93),
           a2,
           a3,
           a4,
           a5,
           a6);
}
