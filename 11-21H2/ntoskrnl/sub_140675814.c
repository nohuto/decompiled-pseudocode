/*
 * XREFs of sub_140675814 @ 0x140675814
 * Callers:
 *     sub_14071E8F0 @ 0x14071E8F0 (sub_14071E8F0.c)
 * Callees:
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140206FA0 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140673A24 @ 0x140673A24 (sub_140673A24.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool3 @ 0x140A6E1B0 (ExAllocatePool3.c)
 */

void __fastcall sub_140675814(__int64 a1)
{
  WCHAR *v2; // rdi
  void *Pool3; // rbx
  const WCHAR *v4; // rdx
  __int64 v5; // [rsp+38h] [rbp-49h] BYREF
  PCWSTR SourceString; // [rsp+40h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-39h] BYREF
  __int64 v8; // [rsp+58h] [rbp-29h] BYREF
  int v9; // [rsp+60h] [rbp-21h]
  int v10; // [rsp+64h] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+68h] [rbp-19h] BYREF
  PCWSTR *p_SourceString; // [rsp+88h] [rbp+7h]
  int v13; // [rsp+90h] [rbp+Fh]
  int v14; // [rsp+94h] [rbp+13h]
  __int64 *v15; // [rsp+98h] [rbp+17h]
  int v16; // [rsp+A0h] [rbp+1Fh]
  int v17; // [rsp+A4h] [rbp+23h]
  _DWORD *v18; // [rsp+A8h] [rbp+27h]
  int v19; // [rsp+B0h] [rbp+2Fh]
  int v20; // [rsp+B4h] [rbp+33h]
  wchar_t *Buffer; // [rsp+B8h] [rbp+37h]
  _DWORD v22[2]; // [rsp+C0h] [rbp+3Fh] BYREF

  LODWORD(v5) = 0;
  DestinationString = 0LL;
  if ( dword_140C03958 )
  {
    v2 = 0LL;
    SourceString = 0LL;
    Pool3 = 0LL;
    if ( (unsigned int)sub_140673A24(a1, 0xFFFFFFFFLL, 0LL, 0, &v5) == -1073741789 )
    {
      v10 = 0;
      v9 = 0;
      v8 = 1LL;
      Pool3 = (void *)ExAllocatePool3(256, v5, 1933861697, (unsigned int)&v8, 1);
      if ( Pool3 )
      {
        if ( (int)sub_140673A24(a1, 0xFFFFFFFFLL, (__int64)Pool3, v5, &v5) < 0 )
        {
          v4 = L"Query failed";
        }
        else
        {
          SeConvertSecurityDescriptorToStringSecurityDescriptor((__int64)Pool3, 1LL, 0xFFFFFFFFLL, &SourceString, 0LL);
          v2 = (WCHAR *)SourceString;
          v4 = SourceString;
        }
      }
      else
      {
        v4 = L"Storage allocation failed";
      }
    }
    else
    {
      v4 = L"Length query failed";
    }
    RtlInitUnicodeString(&DestinationString, v4);
    if ( (unsigned int)dword_140C03958 > 5 && sub_1402A2000((__int64)&dword_140C03958, 0x200000000000LL) )
    {
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v22[1] = 0;
      SourceString = (PCWSTR)0x80000000LL;
      v13 = 8;
      p_SourceString = &SourceString;
      v15 = &v5;
      v18 = v22;
      Buffer = DestinationString.Buffer;
      v22[0] = DestinationString.Length;
      v16 = 8;
      v5 = a1;
      v19 = 2;
      sub_14020A9C4((__int64)&dword_140C03958, (unsigned __int8 *)word_14002B9DA, 0LL, 0LL, 6u, &v11);
    }
    if ( Pool3 )
      ExFreePoolWithTag(Pool3, 0);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
}
