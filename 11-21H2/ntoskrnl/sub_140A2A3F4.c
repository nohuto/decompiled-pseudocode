/*
 * XREFs of sub_140A2A3F4 @ 0x140A2A3F4
 * Callers:
 *     sub_140A2C51C @ 0x140A2C51C (sub_140A2C51C.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 */

__int64 __fastcall sub_140A2A3F4(__int64 a1, const WCHAR *a2)
{
  unsigned int v2; // ebx
  int v4; // eax
  NTSTATUS inited; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  KeyHandle = 0LL;
  v4 = sub_14078014C(a1, 13, (__int64)&KeyHandle);
  if ( v4 >= 0 )
  {
    DestinationString = 0LL;
    inited = RtlInitUnicodeStringEx(&DestinationString, a2);
    if ( inited >= 0 )
      inited = ZwDeleteValueKey(KeyHandle, &DestinationString);
    if ( inited != -1073741772 && inited != -1073741444 && inited < 0 )
      return (unsigned int)inited;
  }
  else
  {
    return (unsigned int)v4;
  }
  return v2;
}
