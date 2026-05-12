/*
 * XREFs of sub_1C001E130 @ 0x1C001E130
 * Callers:
 *     sub_1C00A2788 @ 0x1C00A2788 (sub_1C00A2788.c)
 * Callees:
 *     sub_1C00A1480 @ 0x1C00A1480 (sub_1C00A1480.c)
 *     sub_1C00A18DC @ 0x1C00A18DC (sub_1C00A18DC.c)
 */

__int64 __fastcall sub_1C001E130(__int64 a1)
{
  __int64 result; // rax
  struct _UNICODE_STRING v3; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  int v5; // [rsp+70h] [rbp+18h] BYREF
  __int64 v6; // [rsp+78h] [rbp+20h] BYREF
  __int64 *v7; // [rsp+80h] [rbp+28h] BYREF
  __int64 v8; // [rsp+88h] [rbp+30h] BYREF

  v5 = 8;
  v7 = &v8;
  DestinationString = 0LL;
  v3 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Storport");
  RtlInitUnicodeString(&v3, L"InitialTimestamp");
  result = sub_1C00A18DC(
             *(_QWORD *)(a1 + 8),
             (unsigned int)&DestinationString,
             (unsigned int)&v3,
             11,
             (__int64)&v7,
             (__int64)&v5);
  v6 = MEMORY[0xFFFFF78000000014];
  if ( (int)result < 0 || MEMORY[0xFFFFF78000000014] < v8 )
  {
    sub_1C00A1480(*(_QWORD *)(a1 + 8), (unsigned int)&DestinationString, (unsigned int)&v3, 11, (__int64)&v6, 8);
    *(_QWORD *)(a1 + 3272) = v6;
    return 0LL;
  }
  else
  {
    *(_QWORD *)(a1 + 3272) = v8;
  }
  return result;
}
