/*
 * XREFs of ??1CWindowBorder@@UEAA@XZ @ 0x1800366AC
 * Callers:
 *     ??_GCWindowBorder@@UEAAPEAXI@Z @ 0x180037250 (--_GCWindowBorder@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001A708 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180052380 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CWindowBorder::~CWindowBorder(CWindowBorder *this)
{
  std::_Ref_count_base *v2; // rcx
  CBaseObject *v3; // rcx
  __int64 v4; // rcx
  CBaseObject *v5; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 37);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 280);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 272);
  v3 = (CBaseObject *)*((_QWORD *)this + 33);
  if ( v3 )
  {
    *((_QWORD *)this + 33) = 0LL;
    CBaseObject::Release(v3);
  }
  v4 = *((_QWORD *)this + 32);
  if ( v4 )
  {
    *((_QWORD *)this + 32) = 0LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v4)(v4, 1LL);
  }
  v5 = (CBaseObject *)*((_QWORD *)this + 31);
  if ( v5 )
  {
    *((_QWORD *)this + 31) = 0LL;
    CBaseObject::Release(v5);
  }
  CVisual::~CVisual(this);
}
