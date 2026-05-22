/*
 * XREFs of ?Release@CVirtualSurface@DirectComposition@@UEAAKXZ @ 0x18007E360
 * Callers:
 *     ?Release@CVirtualSurface@DirectComposition@@WBA@EAAKXZ @ 0x1800A92F0 (-Release@CVirtualSurface@DirectComposition@@WBA@EAAKXZ.c)
 *     ?Release@CVirtualSurface@DirectComposition@@WEA@EAAKXZ @ 0x1800A9310 (-Release@CVirtualSurface@DirectComposition@@WEA@EAAKXZ.c)
 *     ?Release@CVirtualSurface@DirectComposition@@WEI@EAAKXZ @ 0x1800A9330 (-Release@CVirtualSurface@DirectComposition@@WEI@EAAKXZ.c)
 *     ?Release@CVirtualSurface@DirectComposition@@WFA@EAAKXZ @ 0x1800A9350 (-Release@CVirtualSurface@DirectComposition@@WFA@EAAKXZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurface::Release(DirectComposition::CVirtualSurface *this)
{
  volatile signed __int32 *v2; // rdi
  unsigned __int32 v3; // ebx
  __int64 v5; // rcx

  v2 = (volatile signed __int32 *)((char *)this + 8);
  v3 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v3 )
  {
    CMILRefCountImpl::AddReference((DirectComposition::CVirtualSurface *)((char *)this + 8));
    (*(void (__fastcall **)(DirectComposition::CVirtualSurface *))(*(_QWORD *)this + 88LL))(this);
    v3 = _InterlockedDecrement(v2);
    if ( !v3 )
    {
      v5 = *(_QWORD *)this;
      --*v2;
      (*(void (__fastcall **)(DirectComposition::CVirtualSurface *, __int64))(v5 + 80))(this, 1LL);
    }
  }
  return v3;
}
