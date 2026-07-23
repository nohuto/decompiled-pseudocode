/*
 * XREFs of ZwSetSecurityObject @ 0x14041EDA0
 * Callers:
 *     sub_1403A7848 @ 0x1403A7848 (sub_1403A7848.c)
 *     sub_1404172B8 @ 0x1404172B8 (sub_1404172B8.c)
 *     sub_140627A50 @ 0x140627A50 (sub_140627A50.c)
 *     sub_1406580FC @ 0x1406580FC (sub_1406580FC.c)
 *     sub_140679ADC @ 0x140679ADC (sub_140679ADC.c)
 *     sub_140679BEC @ 0x140679BEC (sub_140679BEC.c)
 *     sub_14084AA8C @ 0x14084AA8C (sub_14084AA8C.c)
 *     sub_140925DFC @ 0x140925DFC (sub_140925DFC.c)
 *     sub_1409D69A8 @ 0x1409D69A8 (sub_1409D69A8.c)
 *     sub_140A2D248 @ 0x140A2D248 (sub_140A2D248.c)
 *     sub_140B4F514 @ 0x140B4F514 (sub_140B4F514.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetSecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  _disable();
  __readeflags();
  return sub_140433F80(Handle, *(_QWORD *)&SecurityInformation);
}
