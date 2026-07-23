/*
 * XREFs of NtCreateSection @ 0x1406FD0D0
 * Callers:
 *     sub_1407DEE78 @ 0x1407DEE78 (sub_1407DEE78.c)
 *     sub_1407DF794 @ 0x1407DF794 (sub_1407DF794.c)
 * Callees:
 *     sub_1406FD140 @ 0x1406FD140 (sub_1406FD140.c)
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
  __int128 v11; // [rsp+50h] [rbp-18h] BYREF

  v7 = AllocationAttributes;
  v8 = 0;
  Address = 0LL;
  v11 = 0LL;
  if ( (AllocationAttributes & 0x7F) != 0 )
  {
    v7 = AllocationAttributes & 0xFFFFFF80;
    *(_QWORD *)&v11 = 2LL;
    *((_QWORD *)&v11 + 1) = (AllocationAttributes & 0x7F) - 1;
    Address = &v11;
    v8 = 1;
  }
  return sub_1406FD140(
           (int)SectionHandle,
           DesiredAccess,
           (int)ObjectAttributes,
           (int)MaximumSize,
           SectionPageProtection,
           v7,
           (__int64)FileHandle,
           Address,
           v8,
           1);
}
