/*
 * XREFs of sub_1406E5DD4 @ 0x1406E5DD4
 * Callers:
 *     sub_1406CFE50 @ 0x1406CFE50 (sub_1406CFE50.c)
 *     sub_14078600C @ 0x14078600C (sub_14078600C.c)
 *     sub_140A27198 @ 0x140A27198 (sub_140A27198.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_1406E5E80 @ 0x1406E5E80 (sub_1406E5E80.c)
 */

NTSTATUS __fastcall sub_1406E5DD4(int a1, const WCHAR *a2, int a3, int a4, int a5, __int64 a6)
{
  int v6; // ebx
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  v6 = 4;
  DestinationString = 0LL;
  switch ( a3 )
  {
    case 4:
      v6 = 0;
      break;
    case 8:
      v6 = 1;
      break;
    case 16:
      v6 = 2;
      break;
    case 32:
      v6 = 3;
      break;
    case 64:
      break;
    default:
      return -1073741811;
  }
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
    return sub_1406E5E80(a1, (unsigned int)&DestinationString, v6, a4, a5, a6);
  return result;
}
