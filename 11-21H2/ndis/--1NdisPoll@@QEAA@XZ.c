/*
 * XREFs of ??1NdisPoll@@QEAA@XZ @ 0x1C0134CDC
 * Callers:
 *     ??_GNdisPoll@@QEAAPEAXI@Z @ 0x1C00C04BC (--_GNdisPoll@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     KLoaderDereferenceModule @ 0x1C00CB0D0 (KLoaderDereferenceModule.c)
 */

void __fastcall NdisPoll::~NdisPoll(void (**this)(void))
{
  struct KLOADER_MODULE_REFERENCE__ *v2; // rcx

  if ( this[15] )
    this[2]();
  v2 = (struct KLOADER_MODULE_REFERENCE__ *)this[14];
  if ( v2 )
    KLoaderDereferenceModule(v2);
}
