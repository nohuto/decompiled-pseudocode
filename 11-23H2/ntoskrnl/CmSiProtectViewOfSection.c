/*
 * XREFs of CmSiProtectViewOfSection @ 0x140296F38
 * Callers:
 *     HvpViewMapMakeViewRangeWriteable @ 0x14067F49C (HvpViewMapMakeViewRangeWriteable.c)
 *     HvpViewMapMakeViewRangeValid @ 0x140689AA4 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapCreateView @ 0x140689F1C (HvpViewMapCreateView.c)
 *     HvpViewMapMakeViewRangeReadOnly @ 0x14070AD74 (HvpViewMapMakeViewRangeReadOnly.c)
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x14070B254 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpViewMapMakeViewRangeUnCOWByCaller @ 0x1407508F8 (HvpViewMapMakeViewRangeUnCOWByCaller.c)
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x1407C3914 (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x140829888 (HvpViewMapMakeViewRangeUnCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x140885870 (HvpViewMapMakeViewRangeInvalid.c)
 * Callees:
 *     ZwProtectVirtualMemory @ 0x14041BAF0 (ZwProtectVirtualMemory.c)
 */

NTSTATUS __fastcall CmSiProtectViewOfSection(
        ULONG_PTR a1,
        void **a2,
        void *a3,
        ULONG_PTR a4,
        ULONG NewProtect,
        ULONG *a6)
{
  void *v6; // rcx
  ULONG_PTR v8; // [rsp+40h] [rbp+8h] BYREF
  PVOID v9; // [rsp+48h] [rbp+10h] BYREF

  v8 = a1;
  v6 = *a2;
  v9 = a3;
  v8 = a4;
  return ZwProtectVirtualMemory(v6, &v9, &v8, NewProtect, a6);
}
