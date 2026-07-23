/*
 * XREFs of sub_1406E6CB0 @ 0x1406E6CB0
 * Callers:
 *     sub_1406E6B08 @ 0x1406E6B08 (sub_1406E6B08.c)
 *     sub_140815DC8 @ 0x140815DC8 (sub_140815DC8.c)
 *     sub_14083F570 @ 0x14083F570 (sub_14083F570.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1406E6D40 @ 0x1406E6D40 (sub_1406E6D40.c)
 */

__int64 sub_1406E6CB0()
{
  int v0; // ebx
  __int32 v1; // ecx
  __int64 result; // rax
  __int32 v3; // ecx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"DiagLog");
  v0 = sub_1406E6D40(&DestinationString, &v5);
  if ( v0 < 0 )
    v1 = 0;
  else
    v1 = (unsigned __int16)v5;
  _InterlockedExchange(&dword_140C18E94, v1);
  RtlInitUnicodeString(&DestinationString, L"WdiContextLog");
  result = sub_1406E6D40(&DestinationString, &v5);
  if ( (int)result < 0 )
    v3 = 0;
  else
    v3 = (unsigned __int16)v5;
  _InterlockedExchange(&dword_140C18E98, v3);
  if ( v0 < 0 )
    return (unsigned int)v0;
  return result;
}
