/*
 * XREFs of ?Release@CCompositionFramePresentStatistics@@UEAAKXZ @ 0x1801ABD20
 * Callers:
 *     <none>
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionFramePresentStatistics::Release(CCompositionFramePresentStatistics *this)
{
  volatile signed __int32 *v2; // rdi
  unsigned __int32 v3; // ebx
  __int64 v4; // rcx

  v2 = (volatile signed __int32 *)((char *)this + 8);
  v3 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v3 )
  {
    CMILRefCountImpl::AddReference((CCompositionFramePresentStatistics *)((char *)this + 8));
    (*(void (__fastcall **)(CCompositionFramePresentStatistics *))(*(_QWORD *)this + 72LL))(this);
    v3 = _InterlockedDecrement(v2);
    if ( !v3 )
    {
      v4 = *(_QWORD *)this;
      --*v2;
      (*(void (__fastcall **)(CCompositionFramePresentStatistics *, __int64))(v4 + 64))(this, 1LL);
    }
  }
  return v3;
}
