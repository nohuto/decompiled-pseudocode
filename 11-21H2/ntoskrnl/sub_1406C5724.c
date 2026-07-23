/*
 * XREFs of sub_1406C5724 @ 0x1406C5724
 * Callers:
 *     sub_1406C5650 @ 0x1406C5650 (sub_1406C5650.c)
 *     sub_14083E410 @ 0x14083E410 (sub_14083E410.c)
 *     sub_140948B70 @ 0x140948B70 (sub_140948B70.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_140784C2C @ 0x140784C2C (sub_140784C2C.c)
 */

NTSTATUS __fastcall sub_1406C5724(int a1, const WCHAR *a2, _BYTE *a3)
{
  NTSTATUS result; // eax
  int v6; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING v7[2]; // [rsp+38h] [rbp-20h] BYREF
  int v8; // [rsp+70h] [rbp+18h] BYREF
  int v9; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0;
  v6 = 0;
  v9 = 0;
  v7[0] = 0LL;
  if ( !a3 )
    return -1073741811;
  result = RtlInitUnicodeStringEx(v7, a2);
  if ( result < 0
    || (result = sub_140784C2C(a1, (unsigned int)v7, (unsigned int)&v6, (unsigned int)&v9, (__int64)&v8), result < 0) )
  {
    if ( result == -1073741810 )
    {
      result = 0;
      *a3 = 0;
    }
  }
  else
  {
    *a3 = 1;
  }
  return result;
}
