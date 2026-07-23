/*
 * XREFs of NtSetSystemEnvironmentValueEx @ 0x140A00540
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1403D9D70 (_wcsnicmp.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     PsIsProcessAppContainer @ 0x14077F27C (PsIsProcessAppContainer.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x1409FBC30 (ExSetFirmwareEnvironmentVariable.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1409FCA74 (ExpFirmwareAccessAppContainerCheck.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1409FE184 (ExpSetFirmwareEnvironmentVariable.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtSetSystemEnvironmentValueEx(
        PUNICODE_STRING VariableName,
        PCGUID VendorGuid,
        PVOID Value,
        ULONG ValueLength,
        ULONG Attributes)
{
  unsigned __int16 v8; // ax
  unsigned __int64 v9; // rdx
  char *v10; // rcx
  size_t *Pool2; // rax
  size_t *v12; // rdi
  __int64 v13; // rcx
  NTSTATUS v14; // ebx
  char v15; // [rsp+30h] [rbp-78h]
  unsigned int v16; // [rsp+38h] [rbp-70h]
  UNICODE_STRING Src; // [rsp+48h] [rbp-60h]
  GUID v18; // [rsp+68h] [rbp-40h] BYREF

  v18 = 0LL;
  if ( !KeGetCurrentThread()->PreviousMode )
    return ExSetFirmwareEnvironmentVariable(
             (const void **)VariableName,
             (int)VendorGuid,
             (__int64)Value,
             ValueLength,
             Attributes);
  if ( dword_140C31AB0 != 2 )
    return -1073741822;
  if ( ((unsigned __int8)VariableName & 3) != 0 )
    goto LABEL_31;
  Src = *VariableName;
  v8 = _mm_cvtsi128_si32(*(__m128i *)VariableName);
  if ( !v8 )
    return -1073741819;
  if ( ((__int64)Src.Buffer & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v9 = (unsigned __int64)Src.Buffer + v8;
  if ( v9 > 0x7FFFFFFF0000LL || (wchar_t *)v9 < Src.Buffer )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( ((unsigned __int8)VendorGuid & 3) != 0 )
LABEL_31:
    ExRaiseDatatypeMisalignment();
  v16 = Value != 0LL ? ValueLength : 0;
  if ( v16 )
  {
    v10 = (char *)Value + (Value != 0LL ? ValueLength : 0);
    if ( (unsigned __int64)v10 > 0x7FFFFFFF0000LL || v10 < Value )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v15 = SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, 1);
  if ( v15 )
    goto LABEL_23;
  if ( PsIsProcessAppContainer((__int64)KeGetCurrentThread()->ApcState.Process) )
    v15 = ExpFirmwareAccessAppContainerCheck(2);
  if ( !v15 )
    return -1073741727;
LABEL_23:
  v18 = *VendorGuid;
  Pool2 = (size_t *)ExAllocatePool2(64LL, Src.Length + 2LL, 1920364101LL);
  v12 = Pool2;
  if ( !Pool2 )
    return -1073741670;
  memmove(Pool2, Src.Buffer, Src.Length);
  *((_WORD *)v12 + ((unsigned __int64)Src.Length >> 1)) = 0;
  v13 = *(_QWORD *)&v18.Data1 - ExpSecureBootVendorGuid;
  if ( *(_QWORD *)&v18.Data1 == ExpSecureBootVendorGuid )
    v13 = *(_QWORD *)v18.Data4 - 0x4B788FE7F42860BDLL;
  if ( v13 || wcsnicmp((const wchar_t *)v12, L"Kernel_", 7uLL) )
  {
    v14 = ExpSetFirmwareEnvironmentVariable(v12, (__int64)&v18, (unsigned __int64)Value, v16, Attributes, 1);
    ExFreePoolWithTag(v12, 0);
    return v14;
  }
  else
  {
    ExFreePoolWithTag(v12, 0);
    return -1073741790;
  }
}
