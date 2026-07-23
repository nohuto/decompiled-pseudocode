/*
 * XREFs of sub_140862888 @ 0x140862888
 * Callers:
 *     sub_140B0433C @ 0x140B0433C (sub_140B0433C.c)
 * Callees:
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x14041BDA0 (ZwEnumerateKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1409E1200 @ 0x1409E1200 (sub_1409E1200.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void sub_140862888()
{
  __int64 v0; // rax
  unsigned __int64 v1; // r14
  WCHAR *Pool2; // rdi
  int v3; // esi
  NTSTATUS v4; // eax
  int v5; // ebx
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE DestinationString[3]; // [rsp+48h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD KeyInformation[136]; // [rsp+98h] [rbp-70h] BYREF

  KeyHandle = 0LL;
  memset(DestinationString, 0, sizeof(DestinationString));
  memset(KeyInformation, 0, 0x218uLL);
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength[0] = 0;
  v0 = -1LL;
  do
    ++v0;
  while ( aRegistryMachin_86[v0] );
  v1 = (unsigned int)(2 * v0 + 514);
  Pool2 = (WCHAR *)ExAllocatePool2(256LL, v1, 1350005829LL);
  if ( !Pool2 )
    return;
  RtlInitUnicodeString(
    (PUNICODE_STRING)&DestinationString[1],
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\ProfileSource");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(DestinationString, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_5;
  v3 = -1;
  do
  {
    v4 = ZwEnumerateKey(DestinationString[0], ++v3, KeyBasicInformation, KeyInformation, 0x216u, ResultLength);
    v5 = v4;
    if ( v4 >= 0 )
    {
      if ( KeyInformation[3] < 0x1FEu )
      {
        *((_WORD *)&KeyInformation[4] + ((unsigned __int64)KeyInformation[3] >> 1)) = 0;
        if ( (int)sub_1402E1280(
                    Pool2,
                    v1,
                    L"%ws\\%ws",
                    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\ProfileSource",
                    &KeyInformation[4]) >= 0 )
        {
          RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], Pool2);
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
          {
            sub_1409E1200(KeyHandle);
            ZwClose(KeyHandle);
          }
        }
      }
      continue;
    }
    if ( v4 != -1073741789 && v4 != -2147483643 )
      break;
    v5 = 0;
  }
  while ( v5 >= 0 );
  ZwClose(DestinationString[0]);
LABEL_5:
  ExFreePoolWithTag(Pool2, 0x50777445u);
}
