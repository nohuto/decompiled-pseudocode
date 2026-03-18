/*
 * XREFs of ??_GBamoDataProviderRegistrarStub@@MEAAPEAXI@Z @ 0x1801E0600
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

BamoDataProviderRegistrarStub *__fastcall BamoDataProviderRegistrarStub::`scalar deleting destructor'(
        BamoDataProviderRegistrarStub *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 6);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
