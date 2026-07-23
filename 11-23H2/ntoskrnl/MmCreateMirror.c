/*
 * XREFs of MmCreateMirror @ 0x140A2F3F0
 * Callers:
 *     NtSetSystemInformation @ 0x14075F020 (NtSetSystemInformation.c)
 * Callees:
 *     ZwQueryLicenseValue @ 0x14041DCB0 (ZwQueryLicenseValue.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     MmDuplicateMemory @ 0x140AAC6BC (MmDuplicateMemory.c)
 */

NTSTATUS MmCreateMirror(void)
{
  KPROCESSOR_MODE PreviousMode; // dl
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v3[4]; // [rsp+40h] [rbp-30h] BYREF
  int v4; // [rsp+60h] [rbp-10h]
  int v5; // [rsp+64h] [rbp-Ch]
  int Data; // [rsp+80h] [rbp+10h] BYREF
  ULONG ResultDataSize; // [rsp+88h] [rbp+18h] BYREF
  ULONG Type; // [rsp+90h] [rbp+20h] BYREF

  v5 = 0;
  Type = 0;
  Data = 0;
  ValueName.Buffer = L"Kernel-MemoryMirroringSupported";
  *(_QWORD *)&ValueName.Length = 4194366LL;
  ResultDataSize = 4;
  if ( ZwQueryLicenseValue(&ValueName, &Type, &Data, 4u, &ResultDataSize) < 0 || Data != 1 )
    return -1073741206;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
    return -1073741727;
  if ( (dword_140D1D1D4 & 1) == 0 )
    return -1073741637;
  v3[0] = off_140C02160[0];
  v3[1] = off_140C02168[0];
  v3[2] = off_140C02170[0];
  v3[3] = (unsigned __int64)off_140C02180 & -(__int64)((dword_140D1D1D4 & 2) != 0);
  v4 = 2;
  return MmDuplicateMemory(v3);
}
