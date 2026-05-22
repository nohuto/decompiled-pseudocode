/*
 * XREFs of ??1InputSiteElementProxy@@UEAA@XZ @ 0x180125914
 * Callers:
 *     ??_GInputSiteElementProxy@@UEAAPEAXI@Z @ 0x1801259D0 (--_GInputSiteElementProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveAllObjectsForElement@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z @ 0x180123F74 (-RemoveAllObjectsForElement@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InputSiteElementProxy::~InputSiteElementProxy(InputSiteElementProxy *this)
{
  InputSite *v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &InputSiteElementProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)this + 1) = &InputSiteElementProxy::`vftable'{for `IInputSiteElementProxy'};
  v2 = (InputSite *)*((_QWORD *)this + 39);
  if ( v2 )
    InputSite::RemoveAllObjectsForElement(v2, this);
  v3 = *((_QWORD *)this + 39);
  if ( v3 )
  {
    *((_QWORD *)this + 39) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  BamoImpl::BamoInputSiteElementProxyImpl::~BamoInputSiteElementProxyImpl((InputSiteElementProxy *)((char *)this + 16));
}
