/*
 * XREFs of ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x1C0120F4C
 * Callers:
 *     ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1C0160544 (-ndisNblTrackerReadConfiguration@@YAXXZ.c)
 *     DriverEntry @ 0x1C01608CC (DriverEntry.c)
 *     ?ndisStackExpansionInitializeSubsystem@@YAJXZ @ 0x1C01619E4 (-ndisStackExpansionInitializeSubsystem@@YAJXZ.c)
 *     ?ndisInitializeDmaSubsystem@@YAXXZ @ 0x1C0162AA4 (-ndisInitializeDmaSubsystem@@YAXXZ.c)
 *     ?ndisReadRegistry@@YAXXZ @ 0x1C0163360 (-ndisReadRegistry@@YAXXZ.c)
 *     ?ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ @ 0x1C0163890 (-ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ.c)
 *     ?ndisInitializeNblPoolGlobal@@YAXXZ @ 0x1C016393C (-ndisInitializeNblPoolGlobal@@YAXXZ.c)
 * Callees:
 *     GetGlobalNamespace @ 0x1C0006BEC (GetGlobalNamespace.c)
 *     ?BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z @ 0x1C011A06C (-BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z.c)
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
