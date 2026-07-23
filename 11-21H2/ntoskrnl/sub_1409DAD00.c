/*
 * XREFs of sub_1409DAD00 @ 0x1409DAD00
 * Callers:
 *     sub_14083F704 @ 0x14083F704 (sub_14083F704.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwEnumerateKey @ 0x14041BDA0 (ZwEnumerateKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     sub_140840760 @ 0x140840760 (sub_140840760.c)
 *     sub_140840870 @ 0x140840870 (sub_140840870.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409DAD00(HANDLE KeyHandle)
{
  HANDLE v2; // rcx
  ULONG v3; // edi
  unsigned int v4; // ebx
  NTSTATUS v5; // eax
  GUID *v6; // rdx
  unsigned int Data1; // eax
  HANDLE Handle; // [rsp+38h] [rbp-79h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-71h] BYREF
  int v11; // [rsp+44h] [rbp-6Dh] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-69h] BYREF
  GUID Guid; // [rsp+58h] [rbp-59h] BYREF
  _DWORD KeyInformation[38]; // [rsp+68h] [rbp-49h] BYREF

  ResultLength = 0;
  v2 = 0LL;
  Handle = 0LL;
  v11 = 0;
  v3 = 0;
  DestinationString = 0LL;
  Guid = 0LL;
  if ( KeyHandle )
  {
    while ( 1 )
    {
      if ( v2 )
      {
        ZwClose(v2);
        Handle = 0LL;
      }
      memset(KeyInformation, 0, sizeof(KeyInformation));
      v5 = ZwEnumerateKey(KeyHandle, v3++, KeyBasicInformation, KeyInformation, 0x96u, &ResultLength);
      if ( v5 == -2147483622 )
        break;
      if ( v5 >= 0 )
      {
        if ( KeyInformation[3] >= 0x80u )
        {
          v4 = -2147483643;
          goto LABEL_21;
        }
        *((_WORD *)&KeyInformation[4] + ((unsigned __int64)KeyInformation[3] >> 1)) = 0;
        RtlInitUnicodeString(&DestinationString, (PCWSTR)&KeyInformation[4]);
        if ( RtlGUIDFromString(&DestinationString, &Guid) >= 0
          && sub_140840870((PCWSTR)&KeyInformation[4], KeyHandle, &Handle) >= 0
          && (int)sub_140840760(Handle, L"ScenarioExecutionEnabled", 4, 4u, &v11, &ResultLength) >= 0
          && !v11 )
        {
          v6 = (GUID *)qword_140C16E50;
          if ( !qword_140C16E50 )
          {
            qword_140C16E50 = (PVOID)ExAllocatePool2(256LL, 1028LL, 1934181463LL);
            v6 = (GUID *)qword_140C16E50;
            if ( !qword_140C16E50 )
            {
              v4 = -1073741670;
              goto LABEL_21;
            }
          }
          Data1 = v6[64].Data1;
          if ( Data1 >= 0x40 )
          {
            v4 = -1073741823;
            goto LABEL_21;
          }
          v6[64].Data1 = Data1 + 1;
          v6[Data1] = Guid;
        }
      }
      v2 = Handle;
    }
    v4 = 0;
LABEL_21:
    if ( Handle )
      ZwClose(Handle);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
