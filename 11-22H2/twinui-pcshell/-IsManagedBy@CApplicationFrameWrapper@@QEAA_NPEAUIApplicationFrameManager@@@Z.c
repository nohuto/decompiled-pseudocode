/*
 * XREFs of ?IsManagedBy@CApplicationFrameWrapper@@QEAA_NPEAUIApplicationFrameManager@@@Z @ 0x1800498D8
 * Callers:
 *     ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x180049160 (-EnsureFramePool@CApplicationFrameService@@UEAAJXZ.c)
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x1801BD070 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

bool __fastcall CApplicationFrameWrapper::IsManagedBy(struct IUnknown **this, struct IUnknown *a2)
{
  return (unsigned int)SHIsSameObject(a2, this[15]) != 0;
}
