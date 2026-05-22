/*
 * XREFs of ?Release@CBitmapInfoFront@DirectComposition@@UEAAKXZ @ 0x18007E2D0
 * Callers:
 *     ?Release@CBitmapInfoFront@DirectComposition@@WDI@EAAKXZ @ 0x1800A8230 (-Release@CBitmapInfoFront@DirectComposition@@WDI@EAAKXZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CBitmapInfoFront::Release(DirectComposition::CBitmapInfoFront *this)
{
  volatile signed __int32 *v2; // rdi
  unsigned __int32 v3; // ebx
  __int64 v5; // rcx

  v2 = (volatile signed __int32 *)((char *)this + 8);
  v3 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v3 )
  {
    CMILRefCountImpl::AddReference((DirectComposition::CBitmapInfoFront *)((char *)this + 8));
    (*(void (__fastcall **)(DirectComposition::CBitmapInfoFront *))(*(_QWORD *)this + 24LL))(this);
    v3 = _InterlockedDecrement(v2);
    if ( !v3 )
    {
      v5 = *(_QWORD *)this;
      --*v2;
      (*(void (__fastcall **)(DirectComposition::CBitmapInfoFront *, __int64))(v5 + 16))(this, 1LL);
    }
  }
  return v3;
}
