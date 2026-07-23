/*
 * XREFs of CmSiExtendSection @ 0x140206E20
 * Callers:
 *     HvpViewMapExtendStorage @ 0x140687A54 (HvpViewMapExtendStorage.c)
 * Callees:
 *     ZwExtendSection @ 0x14041CE10 (ZwExtendSection.c)
 */

NTSTATUS __fastcall CmSiExtendSection(void *a1, LARGE_INTEGER a2)
{
  LARGE_INTEGER NewSectionSize; // [rsp+38h] [rbp+10h] BYREF

  NewSectionSize = a2;
  return ZwExtendSection(a1, &NewSectionSize);
}
