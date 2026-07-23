/*
 * XREFs of PnpPrepareDriverLoading @ 0x14068F654
 * Callers:
 *     IopLoadDriver @ 0x1407947C8 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140B3DB64 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140214B30 (RtlImageNtHeader.c)
 *     RtlInitUnicodeStringEx @ 0x14022B7D0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x14041B330 (ZwOpenKey.c)
 *     IopGetRegistryValue @ 0x14068CE78 (IopGetRegistryValue.c)
 *     PpCheckInDriverDatabase @ 0x140692C14 (PpCheckInDriverDatabase.c)
 *     NtClose @ 0x1406E44F0 (NtClose.c)
 *     PnpSetBlockedDriverEvent @ 0x140964830 (PnpSetBlockedDriverEvent.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpPrepareDriverLoading(int a1, void *a2, void *a3, int a4, _DWORD *a5, bool *a6)
{
  int v8; // edi
  PIMAGE_NT_HEADERS v10; // rax
  unsigned int v11; // edi
  PVOID v13; // rcx
  PVOID v14; // rcx
  PVOID P; // [rsp+30h] [rbp-59h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-39h] BYREF
  __int128 v19; // [rsp+80h] [rbp-9h] BYREF

  P = 0LL;
  v8 = (int)a3;
  *a5 = 0;
  *a6 = 0;
  DestinationString = 0LL;
  v10 = RtlImageNtHeader(a3);
  if ( !v10 )
    return 3221225473LL;
  v19 = 0LL;
  v11 = PpCheckInDriverDatabase(a1, (_DWORD)a2, v8, v10->OptionalHeader.SizeOfImage, a4, (__int64)&v19);
  if ( v11 + 1073740949 <= 1 )
    PnpSetBlockedDriverEvent(&v19);
  if ( IopGetRegistryValue(a2, L"PnpFlags", 0, &P) >= 0 )
  {
    v14 = P;
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
      *a5 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    ExFreePoolWithTag(v14, 0);
  }
  if ( RtlInitUnicodeStringEx(&DestinationString, L"Parameters") >= 0 )
  {
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    KeyHandle = 0LL;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.Attributes = 576;
    if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
    {
      if ( IopGetRegistryValue(KeyHandle, L"PnpAsyncNewDevices", 0, &P) >= 0 )
      {
        v13 = P;
        if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
          *a6 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) != 0;
        ExFreePoolWithTag(v13, 0);
      }
      NtClose(KeyHandle);
    }
  }
  return v11;
}
