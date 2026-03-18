/*
 * XREFs of CmSiProtectViewOfSection @ 0x140296CA8
 * Callers:
 *     HvpViewMapMakeViewRangeWriteable @ 0x14067F49C (HvpViewMapMakeViewRangeWriteable.c)
 *     HvpViewMapMakeViewRangeValid @ 0x140689AA4 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapCreateView @ 0x140689F1C (HvpViewMapCreateView.c)
 *     HvpViewMapMakeViewRangeReadOnly @ 0x14070AB64 (HvpViewMapMakeViewRangeReadOnly.c)
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x14070B044 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpViewMapMakeViewRangeUnCOWByCaller @ 0x140750708 (HvpViewMapMakeViewRangeUnCOWByCaller.c)
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x1407C3644 (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x140829588 (HvpViewMapMakeViewRangeUnCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x140885630 (HvpViewMapMakeViewRangeInvalid.c)
 * Callees:
 *     ZwProtectVirtualMemory @ 0x14041B760 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall CmSiProtectViewOfSection(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v6; // rcx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v8 = a1;
  v6 = *a2;
  v9 = a3;
  v8 = a4;
  return ZwProtectVirtualMemory(v6, &v9, &v8, a5, a6);
}
