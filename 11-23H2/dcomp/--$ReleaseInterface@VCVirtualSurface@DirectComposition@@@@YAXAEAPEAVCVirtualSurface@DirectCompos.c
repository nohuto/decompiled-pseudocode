/*
 * XREFs of ??$ReleaseInterface@VCVirtualSurface@DirectComposition@@@@YAXAEAPEAVCVirtualSurface@DirectComposition@@@Z @ 0x18003A9A4
 * Callers:
 *     ?CreateVirtualSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionVirtualSurface@@@Z @ 0x18003A890 (-CreateVirtualSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE.c)
 *     ??1CVirtualSurfacePrimitive@DirectComposition@@EEAA@XZ @ 0x18003ABE4 (--1CVirtualSurfacePrimitive@DirectComposition@@EEAA@XZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterface<DirectComposition::CVirtualSurface>(volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rbx
  volatile signed __int32 *v3; // rdi
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v3 = v1 + 2;
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v1 + 2));
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 88LL))(v1);
      result = (unsigned int)_InterlockedExchangeAdd(v3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        --*v3;
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 80LL))(v1, 1LL);
      }
    }
    *a1 = 0LL;
  }
  return result;
}
