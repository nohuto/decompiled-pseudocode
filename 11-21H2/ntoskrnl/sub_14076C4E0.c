/*
 * XREFs of sub_14076C4E0 @ 0x14076C4E0
 * Callers:
 *     sub_1406CF970 @ 0x1406CF970 (sub_1406CF970.c)
 *     sub_14076BE08 @ 0x14076BE08 (sub_14076BE08.c)
 *     sub_14095975C @ 0x14095975C (sub_14095975C.c)
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14074B394 @ 0x14074B394 (sub_14074B394.c)
 *     sub_14076FC68 @ 0x14076FC68 (sub_14076FC68.c)
 */

__int64 __fastcall sub_14076C4E0(__int64 a1)
{
  __int64 result; // rax
  _DWORD v3[16]; // [rsp+20h] [rbp-58h] BYREF

  memset(v3, 0, sizeof(v3));
  result = sub_14074B394(*(_QWORD *)(a1 + 32), v3);
  if ( (int)result >= 0 )
    return sub_14076FC68(a1, v3, 0LL);
  return result;
}
