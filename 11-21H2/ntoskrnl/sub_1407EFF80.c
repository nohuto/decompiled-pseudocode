/*
 * XREFs of sub_1407EFF80 @ 0x1407EFF80
 * Callers:
 *     sub_14036A5FC @ 0x14036A5FC (sub_14036A5FC.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1402DF3F0 (RtlLookupElementGenericTableAvl.c)
 */

__int64 __fastcall sub_1407EFF80(int a1)
{
  PVOID v1; // rcx
  __int64 result; // rax
  __int128 Buffer; // [rsp+20h] [rbp-18h] BYREF

  Buffer = 0LL;
  DWORD2(Buffer) = a1;
  v1 = RtlLookupElementGenericTableAvl(&stru_140C244A0, &Buffer);
  result = 0LL;
  if ( v1 )
    return *(_QWORD *)v1;
  return result;
}
