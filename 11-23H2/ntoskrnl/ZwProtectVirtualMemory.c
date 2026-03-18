/*
 * XREFs of ZwProtectVirtualMemory @ 0x14041B760
 * Callers:
 *     CmSiProtectViewOfSection @ 0x140296CA8 (CmSiProtectViewOfSection.c)
 *     KiOpPatchCode @ 0x14057F400 (KiOpPatchCode.c)
 *     DifZwProtectVirtualMemoryWrapper @ 0x1405F3430 (DifZwProtectVirtualMemoryWrapper.c)
 *     MiCheckForUserStackOverflow @ 0x1407BD998 (MiCheckForUserStackOverflow.c)
 *     sub_140A4DAC0 @ 0x140A4DAC0 (sub_140A4DAC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwProtectVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
