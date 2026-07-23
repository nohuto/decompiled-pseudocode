/*
 * XREFs of LdrpAppxGetRemediationRegistryKey @ 0x1800D6B3C
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800D6680 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x18000B6A0 (RtlGetPersistedStateLocation.c)
 *     RtlStringCbCatW @ 0x18007ED94 (RtlStringCbCatW.c)
 *     RtlStringLengthWorkerW @ 0x18007EE40 (RtlStringLengthWorkerW.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtOpenKeyEx @ 0x1800A1300 (NtOpenKeyEx.c)
 */

NTSTATUS __fastcall LdrpAppxGetRemediationRegistryKey(int a1, __int64 a2, HANDLE *a3)
{
  NTSTATUS result; // eax
  __int64 v7; // r11
  WCHAR *v8; // rcx
  __int64 v9; // r11
  __int64 v10; // rax
  char *v11; // rdx
  WCHAR v12; // r8
  WCHAR *v13; // rax
  __int64 v14; // r11
  ACCESS_MASK v15; // edx
  __int16 v16; // ax
  ULONG BufferLengthOut[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v18; // [rsp+48h] [rbp-B8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  WCHAR TargetPath[264]; // [rsp+90h] [rbp-70h] BYREF

  result = RtlGetPersistedStateLocation(
             L"AppxStateChange",
             L"TargetNtPath",
             L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AppModel\\StateChange",
             LocationTypeRegistry,
             TargetPath,
             0x20Au,
             BufferLengthOut);
  if ( result >= 0 )
  {
    if ( a1 != -1073740702 )
    {
      v18 = 0LL;
      result = RtlStringLengthWorkerW(TargetPath, 0x7FFFLL, BufferLengthOut);
      if ( result < 0 )
        return result;
      v15 = 131097;
      LOWORD(v18) = 2 * LOWORD(BufferLengthOut[0]);
      v16 = 2 * LOWORD(BufferLengthOut[0]) + 2;
      goto LABEL_17;
    }
    result = RtlStringLengthWorkerW(TargetPath, 261LL, BufferLengthOut);
    if ( result >= 0 )
    {
      v8 = &TargetPath[*(_QWORD *)BufferLengthOut];
      v9 = v7 - *(_QWORD *)BufferLengthOut;
      if ( v9 )
      {
        v10 = v9 + *(_QWORD *)BufferLengthOut + 2147483385LL;
        v11 = (char *)((char *)L"\\PackageList\\" - (char *)v8);
        do
        {
          if ( !v10 )
            break;
          v12 = *(WCHAR *)((char *)v8 + (_QWORD)v11);
          if ( !v12 )
            break;
          *v8 = v12;
          --v10;
          ++v8;
          --v9;
        }
        while ( v9 );
      }
      v13 = v8 - 1;
      if ( v9 )
        v13 = v8;
      v14 = -v9;
      *v13 = 0;
      result = v14 == 0 ? 0x80000005 : 0;
      if ( v14 )
      {
        result = RtlStringCbCatW((__int64)TargetPath, 0x20AuLL, a2);
        if ( result >= 0 )
        {
          v18 = 0LL;
          result = RtlStringLengthWorkerW(TargetPath, 0x7FFFLL, BufferLengthOut);
          if ( result >= 0 )
          {
            v15 = 131353;
            LOWORD(v18) = 2 * LOWORD(BufferLengthOut[0]);
            v16 = 2 * LOWORD(BufferLengthOut[0]) + 2;
LABEL_17:
            WORD1(v18) = v16;
            ObjectAttributes.Length = 48;
            *((_QWORD *)&v18 + 1) = TargetPath;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v18;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            return NtOpenKeyEx(a3, v15, &ObjectAttributes, 0);
          }
        }
      }
    }
  }
  return result;
}
