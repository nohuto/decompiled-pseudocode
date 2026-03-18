/*
 * XREFs of ??1CDirectFlipInfo@@QEAA@XZ @ 0x1800FC804
 * Callers:
 *     ??1COverlayContext@@QEAA@XZ @ 0x1800FC108 (--1COverlayContext@@QEAA@XZ.c)
 *     ??_GCDirectFlipInfo@@QEAAPEAXI@Z @ 0x1801DB2B4 (--_GCDirectFlipInfo@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Reset@CDirectFlipInfo@@QEAAXXZ @ 0x1800FC77C (-Reset@CDirectFlipInfo@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18012F94A (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall CDirectFlipInfo::~CDirectFlipInfo(CDirectFlipInfo *this)
{
  std::_Ref_count_base *v2; // rcx

  CDirectFlipInfo::Reset(this);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 5);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 2);
}
