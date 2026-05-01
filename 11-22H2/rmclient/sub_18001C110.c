/*
 * XREFs of sub_18001C110 @ 0x18001C110
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003338 @ 0x180003338 (sub_180003338.c)
 */

signed int __fastcall sub_18001C110(__int64 a1, __int64 *a2)
{
  signed int result; // eax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  result = sub_180003338(a1, 0LL, &v4, 0LL);
  if ( result >= 0 )
  {
    *a2 = v4;
    return 0;
  }
  return result;
}
