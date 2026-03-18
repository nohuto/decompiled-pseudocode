/*
 * XREFs of PopPowerRequestTableLookupEntry @ 0x1407A6CF0
 * Callers:
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14032BB08 (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x14022CF10 (RtlLookupElementGenericTableAvl.c)
 */

__int64 __fastcall PopPowerRequestTableLookupEntry(int a1)
{
  PVOID v1; // rcx
  __int64 result; // rax
  __int128 Buffer; // [rsp+20h] [rbp-18h] BYREF

  Buffer = 0LL;
  DWORD2(Buffer) = a1;
  v1 = RtlLookupElementGenericTableAvl(&PopPowerRequestTable, &Buffer);
  result = 0LL;
  if ( v1 )
    return *(_QWORD *)v1;
  return result;
}
