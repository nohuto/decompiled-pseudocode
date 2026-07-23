/*
 * XREFs of MmIsDriverVerifying @ 0x1402D87B0
 * Callers:
 *     sub_1402D5CA8 @ 0x1402D5CA8 (sub_1402D5CA8.c)
 *     sub_1402D8764 @ 0x1402D8764 (sub_1402D8764.c)
 *     VfIsVerificationEnabled @ 0x1403B64C0 (VfIsVerificationEnabled.c)
 *     sub_140658DCC @ 0x140658DCC (sub_140658DCC.c)
 *     sub_1406C7B5C @ 0x1406C7B5C (sub_1406C7B5C.c)
 *     NtUnlockFile @ 0x14071CD90 (NtUnlockFile.c)
 *     NtLockFile @ 0x14071D220 (NtLockFile.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     sub_14072A9B0 @ 0x14072A9B0 (sub_14072A9B0.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     sub_14072E9E0 @ 0x14072E9E0 (sub_14072E9E0.c)
 *     sub_1407308F0 @ 0x1407308F0 (sub_1407308F0.c)
 *     sub_14073A450 @ 0x14073A450 (sub_14073A450.c)
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 *     sub_140A8C89C @ 0x140A8C89C (sub_140A8C89C.c)
 *     sub_140A8C8EC @ 0x140A8C8EC (sub_140A8C8EC.c)
 *     sub_140A91784 @ 0x140A91784 (sub_140A91784.c)
 *     sub_140A917D8 @ 0x140A917D8 (sub_140A917D8.c)
 *     sub_140A921E0 @ 0x140A921E0 (sub_140A921E0.c)
 * Callees:
 *     sub_140A89D2C @ 0x140A89D2C (sub_140A89D2C.c)
 */

LOGICAL __stdcall MmIsDriverVerifying(struct _DRIVER_OBJECT *DriverObject)
{
  struct _DRIVER_OBJECT *v1; // rdx
  _DWORD *DriverSection; // rax
  LOGICAL result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = DriverObject;
  result = 0;
  if ( (qword_140D01450 & 0x400000) == 0 || (unsigned int)sub_140A89D2C(retaddr, DriverObject) )
  {
    DriverSection = v1->DriverSection;
    if ( DriverSection )
    {
      if ( (DriverSection[26] & 0x2000000) != 0 )
        return 1;
    }
  }
  return result;
}
