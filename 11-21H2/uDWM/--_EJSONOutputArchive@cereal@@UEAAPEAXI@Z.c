/*
 * XREFs of ??_EJSONOutputArchive@cereal@@UEAAPEAXI@Z @ 0x1800F38F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1JSONOutputArchive@cereal@@UEAA@XZ @ 0x180043324 (--1JSONOutputArchive@cereal@@UEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
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
