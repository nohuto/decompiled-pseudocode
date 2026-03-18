/*
 * XREFs of ??1CExcludeVisualReference@@QEAA@XZ @ 0x1801B42B8
 * Callers:
 *     ??_GCExcludeVisualReference@@QEAAPEAXI@Z @ 0x1801B468C (--_GCExcludeVisualReference@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Restore@CExcludeVisualReference@@UEAAXXZ @ 0x1801CD580 (-Restore@CExcludeVisualReference@@UEAAXXZ.c)
 */

void __fastcall CExcludeVisualReference::~CExcludeVisualReference(CExcludeVisualReference *this)
{
  bool v1; // zf
  __int64 v3; // rcx

  v1 = *((_DWORD *)this + 4) == 0;
  *(_QWORD *)this = &CExcludeVisualReference::`vftable';
  if ( !v1 )
    CExcludeVisualReference::Restore(this);
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
}
