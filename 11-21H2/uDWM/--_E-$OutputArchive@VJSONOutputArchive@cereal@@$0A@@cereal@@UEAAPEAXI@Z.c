/*
 * XREFs of ??_E?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@UEAAPEAXI@Z @ 0x1800F3760
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@UEAA@XZ @ 0x180043484 (--1-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@UEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::`vector deleting destructor'(
        __int64 a1,
        char a2)
{
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::~OutputArchive<cereal::JSONOutputArchive,0>(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, a1);
  return a1;
}
