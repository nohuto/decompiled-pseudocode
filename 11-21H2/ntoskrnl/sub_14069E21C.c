/*
 * XREFs of sub_14069E21C @ 0x14069E21C
 * Callers:
 *     sub_14069E98C @ 0x14069E98C (sub_14069E98C.c)
 *     sub_14071BC94 @ 0x14071BC94 (sub_14071BC94.c)
 *     sub_14090BC6C @ 0x14090BC6C (sub_14090BC6C.c)
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_14091CE30 @ 0x14091CE30 (sub_14091CE30.c)
 * Callees:
 *     sub_14069F7AC @ 0x14069F7AC (sub_14069F7AC.c)
 */

__int64 __fastcall sub_14069E21C(__int64 a1, __int64 a2, int a3, __int64 a4, unsigned int *a5)
{
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+24h] [rbp-24h]
  int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+2Ch] [rbp-1Ch]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v7 = 0;
  v9 = 0;
  v8 = a3;
  v6 = a2;
  LOBYTE(a2) = a3 & 1;
  v10 = a4;
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(), int *))sub_14069F7AC)(
             a1,
             a2,
             sub_1406E8680,
             &v6);
  if ( a5 )
  {
    result = v7;
    *a5 = v7;
  }
  return result;
}
