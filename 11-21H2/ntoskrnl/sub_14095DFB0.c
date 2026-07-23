/*
 * XREFs of sub_14095DFB0 @ 0x14095DFB0
 * Callers:
 *     sub_14077AA70 @ 0x14077AA70 (sub_14077AA70.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140564D60 @ 0x140564D60 (sub_140564D60.c)
 *     sub_14095E00C @ 0x14095E00C (sub_14095E00C.c)
 */

__int64 __fastcall sub_14095DFB0(PCWSTR SourceString)
{
  __int64 result; // rax
  int v2; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  P = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  result = sub_140564D60(&DestinationString, (__int64 *)&P);
  if ( (int)result >= 0 )
  {
    v2 = *((_DWORD *)P + 16);
    if ( (v2 & 1) != 0 || (v2 & 0x10) == 0 )
      return 3221225506LL;
    else
      return sub_14095E00C(P);
  }
  return result;
}
