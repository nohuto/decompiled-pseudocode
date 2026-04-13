/*
 * XREFs of ??1MRTHelperBase@ShellMRTHelper@@QEAA@XZ @ 0x1800D9A28
 * Callers:
 *     ??1MRTHelperForPackage@ShellMRTHelper@@QEAA@XZ @ 0x1800D9AF8 (--1MRTHelperForPackage@ShellMRTHelper@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@QEAAJPEBGPEAUIAppDisplayInfo@25@@Z @ 0x1800DA4C4 (-RuntimeClassInitialize@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Interna.c)
 *     _Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::RuntimeClassInitialize_::_1_::dtor$3 @ 0x1800F63BC (_Windows--Internal--Extensions--ApplicationModel--ContentDeliveryManagerAppDisplayI_ea_1800F63BC.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ShellMRTHelper::MRTHelperBase::~MRTHelperBase(ShellMRTHelper::MRTHelperBase *this)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = (void *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *((_QWORD *)this + 9) = 0LL;
  }
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  v3 = (void *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    CoTaskMemFree(v3);
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 1);
  if ( v5 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
}
