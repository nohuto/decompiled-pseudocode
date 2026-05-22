/*
 * XREFs of ?Release@CPresentationFactory@@UEAAKXZ @ 0x1800FBB00
 * Callers:
 *     ?Release@CYCbCrSurface@DirectComposition@@WBA@EAAKXZ @ 0x1800A9430 (-Release@CYCbCrSurface@DirectComposition@@WBA@EAAKXZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPresentationFactory::Release(CPresentationFactory *this)
{
  volatile signed __int32 *v2; // rdi
  unsigned __int32 v3; // ebx
  __int64 v4; // rcx

  v2 = (volatile signed __int32 *)((char *)this + 8);
  v3 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v3 )
  {
    CMILRefCountImpl::AddReference((CPresentationFactory *)((char *)this + 8));
    (*(void (__fastcall **)(CPresentationFactory *))(*(_QWORD *)this + 56LL))(this);
    v3 = _InterlockedDecrement(v2);
    if ( !v3 )
    {
      v4 = *(_QWORD *)this;
      --*v2;
      (*(void (__fastcall **)(CPresentationFactory *, __int64))(v4 + 48))(this, 1LL);
    }
  }
  return v3;
}
