/*
 * XREFs of sub_140535190 @ 0x140535190
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A3038 @ 0x1403A3038 (sub_1403A3038.c)
 *     sub_1403A30B4 @ 0x1403A30B4 (sub_1403A30B4.c)
 *     longjmp @ 0x1403DF970 (longjmp.c)
 */

__int64 __fastcall sub_140535190(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *(_DWORD *)(a1 + 120) = 1;
  result = sub_1403A30B4(a1, &v3);
  if ( result )
  {
    if ( v3 != 4 )
      longjmp((_JBTYPE *)(a1 + 160), 12);
    sub_1403A3038(a1, (unsigned __int16 *)result);
    return 1LL;
  }
  return result;
}
