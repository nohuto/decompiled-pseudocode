/*
 * XREFs of ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x1C0115810
 * Callers:
 *     ?ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ @ 0x1C01536CC (-ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ.c)
 *     DriverEntry @ 0x1C0153778 (DriverEntry.c)
 *     ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1C0154BEC (-ndisNblTrackerReadConfiguration@@YAXXZ.c)
 *     ?ndisReadRegistry@@YAXXZ @ 0x1C0155F70 (-ndisReadRegistry@@YAXXZ.c)
 *     ?ndisStackExpansionInitializeSubsystem@@YAJXZ @ 0x1C01561B4 (-ndisStackExpansionInitializeSubsystem@@YAJXZ.c)
 * Callees:
 *     GetGlobalNamespace @ 0x1C0008E04 (GetGlobalNamespace.c)
 *     ?BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z @ 0x1C0113CB4 (-BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z.c)
 */

__int64 __fastcall ndisRegisterKnobs(
        const struct KnobDescriptor *a1,
        __int64 a2,
        unsigned __int8 (*a3)(void *, const struct KnobDescriptor *, unsigned __int64 *),
        int (*a4)(void *, const struct KnobDescriptor *, unsigned __int64))
{
  KnobNamespace *GlobalNamespace; // rax
  unsigned __int8 (*v5)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r9
  unsigned __int64 v6; // rdx
  struct KnobDescriptor *v7; // r10
  unsigned __int8 (*v9)(void *, const struct KnobDescriptor *, unsigned __int64 *); // [rsp+20h] [rbp-28h]
  int (*v10)(void *, const struct KnobDescriptor *, unsigned __int64); // [rsp+28h] [rbp-20h]

  GlobalNamespace = GetGlobalNamespace();
  v10 = (int (*)(void *, const struct KnobDescriptor *, unsigned __int64))v5;
  LOBYTE(v5) = 1;
  return KnobNamespace::BuildCollection(
           GlobalNamespace,
           v7,
           v6,
           v5,
           v9,
           (int (*)(void *, const struct KnobDescriptor *, unsigned __int64))v10);
}
