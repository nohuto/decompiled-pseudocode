/*
 * XREFs of sub_1405CEFE4 @ 0x1405CEFE4
 * Callers:
 *     sub_14082310C @ 0x14082310C (sub_14082310C.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 */

__int64 __fastcall sub_1405CEFE4(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  result = sub_14042A5E0(4LL, &v4);
  if ( !(_BYTE)result )
    sub_1405CAE6C(0x605uLL, 4uLL, BugCheckParameter3, 0LL);
  return result;
}
