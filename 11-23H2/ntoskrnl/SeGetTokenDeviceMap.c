/*
 * XREFs of SeGetTokenDeviceMap @ 0x1407AF940
 * Callers:
 *     ObpLookupObjectName @ 0x1406ED750 (ObpLookupObjectName.c)
 *     ObpReferenceCurrentDeviceMap @ 0x1406FCB00 (ObpReferenceCurrentDeviceMap.c)
 *     ObpSetCurrentProcessDeviceMap @ 0x1407AF7A4 (ObpSetCurrentProcessDeviceMap.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     PsGetServerSiloServiceSessionId @ 0x1402C0B10 (PsGetServerSiloServiceSessionId.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403DE5A0 (swprintf_s.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwCreateDirectoryObject @ 0x14041C630 (ZwCreateDirectoryObject.c)
 *     ZwCreateSymbolicLinkObject @ 0x14041C9B0 (ZwCreateSymbolicLinkObject.c)
 *     ObpSetDeviceMap @ 0x1407AFCAC (ObpSetDeviceMap.c)
 *     ObDereferenceDeviceMap @ 0x1407B004C (ObDereferenceDeviceMap.c)
 */

NTSTATUS __fastcall SeGetTokenDeviceMap(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  NTSTATUS result; // eax
  unsigned int ServerSiloServiceSessionId; // eax
  NTSTATUS v8; // r14d
  __int64 v9; // rax
  __int64 v10; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE DirectoryHandle; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE LinkHandle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING v15; // [rsp+88h] [rbp-78h] BYREF
  wchar_t Dst[64]; // [rsp+A0h] [rbp-60h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DirectoryHandle = 0LL;
  LinkHandle = 0LL;
  v10 = 0LL;
  *a2 = 0LL;
  DestinationString = 0LL;
  v15 = 0LL;
  if ( !a1 )
    return -1073741811;
  if ( (*(_DWORD *)(a1 + 200) & 0x20) != 0 )
    return -1073741729;
  v4 = *(_QWORD *)(a1 + 216);
  if ( !v4 )
    return -1073741729;
  v5 = *(_QWORD *)(v4 + 40);
  if ( v5 )
  {
    *a2 = v5;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 240), 1uLL) <= 0 )
      __fastfail(0xEu);
    return 0;
  }
  else
  {
    ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(*(_QWORD *)(v4 + 160));
    swprintf_s(
      Dst,
      0x40uLL,
      L"\\Sessions\\%d\\DosDevices\\%08x-%08x",
      ServerSiloServiceSessionId,
      *(_DWORD *)(a1 + 28),
      *(_DWORD *)(a1 + 24));
    RtlInitUnicodeString(&DestinationString, Dst);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 704;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
    if ( result >= 0 )
    {
      v8 = ObpSetDeviceMap(*(PVOID *)(v4 + 160), 2, (__int64)&v10);
      if ( v8 >= 0 )
      {
        RtlInitUnicodeString(&v15, L"Global");
        RtlInitUnicodeString(&DestinationString, L"\\Global??");
        ObjectAttributes.RootDirectory = DirectoryHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &v15;
        ObjectAttributes.Attributes = 720;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v8 = ZwCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &DestinationString);
        if ( v8 < 0 )
        {
          ObDereferenceDeviceMap((PVOID)v10);
        }
        else
        {
          ZwClose(LinkHandle);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 40), v10, 0LL) )
            ObDereferenceDeviceMap((PVOID)v10);
          v9 = *(_QWORD *)(v4 + 40);
          *a2 = v9;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 240), 1uLL) <= 0 )
            __fastfail(0xEu);
        }
      }
      ZwClose(DirectoryHandle);
      return v8;
    }
  }
  return result;
}
