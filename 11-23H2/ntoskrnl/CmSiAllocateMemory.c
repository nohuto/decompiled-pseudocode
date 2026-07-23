/*
 * XREFs of CmSiAllocateMemory @ 0x1402089E0
 * Callers:
 *     HvpViewMapCreateView @ 0x140689F1C (HvpViewMapCreateView.c)
 *     CmpInitHiveFromFile @ 0x14068B418 (CmpInitHiveFromFile.c)
 *     CmpGetCompleteFileName @ 0x14068BFFC (CmpGetCompleteFileName.c)
 *     CmpQueryFileSecurityDescriptor @ 0x14068C0AC (CmpQueryFileSecurityDescriptor.c)
 *     CmpVolumeContextCreate @ 0x14084EC68 (CmpVolumeContextCreate.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmSiAllocateMemory(__int64 a1, unsigned int a2)
{
  return ExAllocatePool2(256LL, a1, a2);
}
