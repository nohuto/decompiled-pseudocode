/*
 * XREFs of ??1NdisPoll@@QEAA@XZ @ 0x1C0140A74
 * Callers:
 *     ??_GNdisPoll@@QEAAPEAXI@Z @ 0x1C00C50C8 (--_GNdisPoll@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     KLoaderDereferenceModule @ 0x1C00CFDA0 (KLoaderDereferenceModule.c)
 */

void __fastcall NdisPoll::~NdisPoll(void (**this)(void))
{
  struct KLOADER_MODULE_REFERENCE__ *v2; // rcx

  if ( this[16] )
    this[2]();
  v2 = (struct KLOADER_MODULE_REFERENCE__ *)this[15];
  if ( v2 )
    KLoaderDereferenceModule(v2);
}
