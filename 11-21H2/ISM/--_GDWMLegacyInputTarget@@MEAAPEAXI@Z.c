/*
 * XREFs of ??_GDWMLegacyInputTarget@@MEAAPEAXI@Z @ 0x180013CC4
 * Callers:
 *     ??_EDWMLegacyInputTarget@@OCA@EAAPEAXI@Z @ 0x180053460 (--_EDWMLegacyInputTarget@@OCA@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
DWMLegacyInputTarget *__fastcall DWMLegacyInputTarget::`scalar deleting destructor'(
        DWMLegacyInputTarget *this,
        char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &DWMLegacyInputTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 1) = &DWMLegacyInputTarget::`vftable'{for `IInputTarget2'};
  *((_QWORD *)this + 2) = &DWMLegacyInputTarget::`vftable'{for `IFocusInputTarget'};
  *((_QWORD *)this + 3) = &DWMLegacyInputTarget::`vftable'{for `IInputSiteTarget'};
  *((_QWORD *)this + 4) = &DWMLegacyInputTarget::`vftable'{for `RefCountedObject'};
  v4 = *((_QWORD *)this + 9);
  if ( v4 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_QWORD *)this + 4) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x50uLL);
    else
      free(this);
  }
  return this;
}
