/*
 * XREFs of sub_1402D8764 @ 0x1402D8764
 * Callers:
 *     sub_1402D8724 @ 0x1402D8724 (sub_1402D8724.c)
 *     sub_1402D8A7C @ 0x1402D8A7C (sub_1402D8A7C.c)
 *     sub_140A800C4 @ 0x140A800C4 (sub_140A800C4.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x1402D87B0 (MmIsDriverVerifying.c)
 *     VfIsRuleClassEnabled @ 0x140A7C590 (VfIsRuleClassEnabled.c)
 *     sub_140A81CF4 @ 0x140A81CF4 (sub_140A81CF4.c)
 */

bool __fastcall sub_1402D8764(struct _DRIVER_OBJECT *a1)
{
  __int64 p_ServiceKeyName; // rbx

  p_ServiceKeyName = (__int64)&a1->DriverExtension->ServiceKeyName;
  return !dword_140C1ACA4
      && (byte_140C1AD98 || MmIsDriverVerifying(a1))
      && dword_140D5750C
      && (unsigned __int8)VfIsRuleClassEnabled(35LL)
      && !(unsigned int)sub_140A81CF4(&qword_140A75138, p_ServiceKeyName)
      && !(unsigned int)sub_140A81CF4(&qword_140A750D8, p_ServiceKeyName)
      && !(unsigned int)sub_140A81CF4(&qword_140A750E8, p_ServiceKeyName)
      && !(unsigned int)sub_140A81CF4(&qword_140A75128, p_ServiceKeyName);
}
