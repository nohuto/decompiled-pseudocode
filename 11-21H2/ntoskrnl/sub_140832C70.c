/*
 * XREFs of sub_140832C70 @ 0x140832C70
 * Callers:
 *     sub_140832B54 @ 0x140832B54 (sub_140832B54.c)
 *     sub_140922DB4 @ 0x140922DB4 (sub_140922DB4.c)
 *     sub_14092317C @ 0x14092317C (sub_14092317C.c)
 *     sub_140B156F8 @ 0x140B156F8 (sub_140B156F8.c)
 * Callees:
 *     sub_1406F3FDC @ 0x1406F3FDC (sub_1406F3FDC.c)
 */

__int64 __fastcall sub_140832C70(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = a1[1];
  if ( v3 )
  {
    v8 = 0LL;
    v7 = 0LL;
    result = sub_1406F3FDC(v3, &v6, &v8, &v7, 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
    *a2 = 0LL;
    a2[2] = 0LL;
    a2[1] = v6;
    a2[2] = a1[2];
    *a2 = *a1;
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
    *a2 = *a1;
  }
  return 0LL;
}
