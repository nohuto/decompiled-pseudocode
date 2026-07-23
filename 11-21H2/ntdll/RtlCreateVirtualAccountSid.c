/*
 * XREFs of RtlCreateVirtualAccountSid @ 0x18000BD90
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpcaseUnicodeString @ 0x18000F280 (RtlUpcaseUnicodeString.c)
 *     RtlInitializeSid @ 0x1800128B0 (RtlInitializeSid.c)
 *     A_SHAFinal @ 0x180012BA0 (A_SHAFinal.c)
 *     A_SHAUpdate @ 0x180012D10 (A_SHAUpdate.c)
 *     RtlFreeUnicodeString @ 0x180048810 (RtlFreeUnicodeString.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlCreateVirtualAccountSid(PUNICODE_STRING Name, ULONG BaseSubAuthority, PSID Sid, PULONG SidLength)
{
  ULONG v6; // eax
  NTSTATUS result; // eax
  int v8; // eax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v10[64]; // [rsp+30h] [rbp-39h] BYREF
  int v11; // [rsp+70h] [rbp+7h]
  int v12; // [rsp+74h] [rbp+Bh]
  int v13; // [rsp+78h] [rbp+Fh]
  int v14; // [rsp+7Ch] [rbp+13h]
  int v15; // [rsp+80h] [rbp+17h]
  int v16; // [rsp+84h] [rbp+1Bh]
  int v17; // [rsp+88h] [rbp+1Fh]
  int v18; // [rsp+90h] [rbp+27h]
  int v19; // [rsp+94h] [rbp+2Bh]
  int v20; // [rsp+98h] [rbp+2Fh]
  int v21; // [rsp+9Ch] [rbp+33h]
  int v22; // [rsp+A0h] [rbp+37h]

  if ( !Name || !SidLength || BaseSubAuthority - 80 > 0x1F )
    return -1073741811;
  v6 = *SidLength;
  *SidLength = 32;
  if ( v6 < 0x20 )
    return -1073741789;
  result = RtlUpcaseUnicodeString(&DestinationString, Name, 1u);
  if ( result >= 0 )
  {
    v16 = 0;
    v17 = 0;
    v11 = 1732584193;
    v12 = -271733879;
    v13 = -1732584194;
    v14 = 271733878;
    v15 = -1009589776;
    A_SHAUpdate(v10, DestinationString.Buffer, DestinationString.Length);
    A_SHAFinal(v10);
    RtlFreeUnicodeString(&DestinationString);
    RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&RtlpNtAuthority, 6u);
    v8 = v18;
    *((_DWORD *)Sid + 2) = BaseSubAuthority;
    *((_DWORD *)Sid + 3) = v8;
    *((_DWORD *)Sid + 4) = v19;
    *((_DWORD *)Sid + 5) = v20;
    *((_DWORD *)Sid + 6) = v21;
    *((_DWORD *)Sid + 7) = v22;
    return 0;
  }
  return result;
}
