/*
 * XREFs of ZwExtendSection @ 0x14041C3C0
 * Callers:
 *     CmSiExtendSection @ 0x140206E20 (CmSiExtendSection.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwExtendSection(HANDLE SectionHandle, PLARGE_INTEGER NewSectionSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
