/*
 * XREFs of sub_140934110 @ 0x140934110
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140664220 @ 0x140664220 (sub_140664220.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

LONG __fastcall sub_140934110(__int64 a1)
{
  int v1; // ebx
  PVOID Object; // [rsp+50h] [rbp+17h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+1Fh] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp+27h] BYREF
  int v7[2]; // [rsp+70h] [rbp+37h] BYREF
  int v8; // [rsp+78h] [rbp+3Fh]

  Handle = 0LL;
  v1 = 0;
  if ( !qword_140D3CBD0 )
  {
    LODWORD(Object) = 0;
    *(_QWORD *)v7 = 0LL;
    v8 = 0;
    DestinationString = 0LL;
    if ( *(_DWORD *)(qword_140D3CE78 + 4) )
    {
      v7[1] = 2;
      LOWORD(v8) = 257;
      RtlInitUnicodeString(&DestinationString, L"\\Security\\TRKWKS_PORT");
      v1 = sub_140664220(
             &Handle,
             (unsigned __int64)&DestinationString,
             (unsigned __int64)v7,
             0LL,
             0LL,
             0LL,
             &Object,
             0LL,
             0LL);
      if ( v1 >= 0 )
      {
        if ( (unsigned int)((_DWORD)Object - 128) > 0x80 )
        {
          NtClose(Handle);
          v1 = -1073741811;
        }
        else
        {
          Object = 0LL;
          v1 = ObReferenceObjectByHandle(Handle, 0, LpcPortObjectType, 0, &Object, 0LL);
          qword_140D3CBD0 = Object;
          NtClose(Handle);
        }
      }
    }
    else
    {
      v1 = -1073741772;
    }
  }
  *(_DWORD *)(a1 + 56) = v1;
  return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
