/*
 * XREFs of IopGetPersistedStateLocation @ 0x14083B0CC
 * Callers:
 *     IopCreateSecureDeviceClassSettings @ 0x14083AE94 (IopCreateSecureDeviceClassSettings.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x1406C5400 (RtlGetPersistedStateLocation.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopGetPersistedStateLocation(__int64 a1, const WCHAR *a2, __int64 a3, WCHAR **a4)
{
  ULONG BufferLengthIn; // esi
  __int64 i; // rdx
  WCHAR *TargetPath; // rdi
  NTSTATUS PersistedStateLocation; // eax
  unsigned int v10; // ebx
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
