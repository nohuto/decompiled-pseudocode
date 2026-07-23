/*
 * XREFs of NtCreateSection @ 0x1407228A0
 * Callers:
 *     PfSnGetSectionObject @ 0x14075CB90 (PfSnGetSectionObject.c)
 *     PfpFileBuildReadSupport @ 0x14075E394 (PfpFileBuildReadSupport.c)
 * Callees:
 *     MiCreateSectionCommon @ 0x140722910 (MiCreateSectionCommon.c)
 */

NTSTATUS __stdcall NtCreateSection(
        PHANDLE SectionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        HANDLE FileHandle)
{
  ULONG v7; // r10d
  int v8; // r11d
  __int128 *Address; // rbx
  ULONGLONG ullMultiplicand; // [rsp+40h] [rbp-28h]
  __int128 v12; // [rsp+50h] [rbp-18h] BYREF

  v7 = AllocationAttributes;
  v8 = 0;
  Address = 0LL;
  v12 = 0LL;
  if ( (AllocationAttributes & 0x7F) != 0 )
  {
    v7 = AllocationAttributes & 0xFFFFFF80;
    *(_QWORD *)&v12 = 2LL;
    *((_QWORD *)&v12 + 1) = (AllocationAttributes & 0x7F) - 1;
    Address = &v12;
    v8 = 1;
  }
  LODWORD(ullMultiplicand) = v8;
  return MiCreateSectionCommon(
           (int)SectionHandle,
           DesiredAccess,
           (int)ObjectAttributes,
           (int)MaximumSize,
           SectionPageProtection,
           v7,
           (__int64)FileHandle,
           Address,
           ullMultiplicand,
           1);
}
