/*
 * XREFs of ??_EJSONOutputArchive@cereal@@UEAAPEAXI@Z @ 0x1800F18D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1JSONOutputArchive@cereal@@UEAA@XZ @ 0x1800F167C (--1JSONOutputArchive@cereal@@UEAA@XZ.c)
 */

cereal::JSONOutputArchive *__fastcall cereal::JSONOutputArchive::`vector deleting destructor'(
        cereal::JSONOutputArchive *this,
        char a2)
{
  cereal::JSONOutputArchive::~JSONOutputArchive(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, cereal::JSONOutputArchive *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
