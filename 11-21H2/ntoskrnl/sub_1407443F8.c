/*
 * XREFs of sub_1407443F8 @ 0x1407443F8
 * Callers:
 *     sub_1407444A8 @ 0x1407444A8 (sub_1407444A8.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x140782DD0 (RtlGetPersistedStateLocation.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407443F8(__int64 a1, const WCHAR *a2, __int64 a3, WCHAR **a4)
{
  ULONG BufferLengthIn; // esi
  __int64 i; // rdx
  WCHAR *TargetPath; // rbx
  NTSTATUS PersistedStateLocation; // eax
  unsigned int v10; // edi
  __int64 result; // rax
  ULONG BufferLengthOut; // [rsp+70h] [rbp+18h] BYREF

  BufferLengthOut = 0;
  BufferLengthIn = 256;
  for ( i = 256LL; ; i = BufferLengthIn )
  {
    TargetPath = (WCHAR *)ExAllocatePool2(256LL, i, 1665560393LL);
    if ( !TargetPath )
    {
      v10 = -1073741670;
      goto LABEL_5;
    }
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"SecureDeviceClass",
                               0LL,
                               a2,
                               LocationTypeRegistry,
                               TargetPath,
                               BufferLengthIn,
                               &BufferLengthOut);
    v10 = PersistedStateLocation;
    if ( PersistedStateLocation != -2147483643 )
      break;
    if ( BufferLengthOut <= BufferLengthIn )
    {
      v10 = -1073741595;
      goto LABEL_10;
    }
    BufferLengthIn = BufferLengthOut;
    ExFreePoolWithTag(TargetPath, 0);
  }
  if ( PersistedStateLocation >= 0 )
    goto LABEL_5;
LABEL_10:
  if ( TargetPath )
  {
    ExFreePoolWithTag(TargetPath, 0);
    TargetPath = 0LL;
  }
LABEL_5:
  result = v10;
  *a4 = TargetPath;
  return result;
}
