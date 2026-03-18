/*
 * XREFs of ZwProtectVirtualMemory @ 0x14041C160
 * Callers:
 *     CmSiProtectViewOfSection @ 0x14020B57C (CmSiProtectViewOfSection.c)
 *     KiOpPatchCode @ 0x14057B748 (KiOpPatchCode.c)
 *     DifZwProtectVirtualMemoryWrapper @ 0x140623670 (DifZwProtectVirtualMemoryWrapper.c)
 *     MiCheckForUserStackOverflow @ 0x1406B42F4 (MiCheckForUserStackOverflow.c)
 *     sub_140A0EC90 @ 0x140A0EC90 (sub_140A0EC90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwProtectVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
