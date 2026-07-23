/*
 * XREFs of sub_14084C474 @ 0x14084C474
 * Callers:
 *     sub_14084C25C @ 0x14084C25C (sub_14084C25C.c)
 *     sub_14084C370 @ 0x14084C370 (sub_14084C370.c)
 * Callees:
 *     sub_1406DE960 @ 0x1406DE960 (sub_1406DE960.c)
 */

__int64 __fastcall sub_14084C474(UNICODE_STRING *a1, _QWORD *a2, bool *a3)
{
  UNICODE_STRING v3; // xmm0
  unsigned int v7; // r8d
  unsigned __int16 Length; // dx
  bool v9; // zf
  UNICODE_STRING v11; // [rsp+30h] [rbp-28h] BYREF
  HANDLE v12; // [rsp+60h] [rbp+8h] BYREF

  v3 = *a1;
  v12 = 0LL;
  v11 = v3;
  while ( 1 )
  {
    v7 = sub_1406DE960(&v12, 0LL, &v11, 0x10u, 0);
    if ( (v7 & 0x80000000) == 0 )
      break;
    Length = v11.Length;
    if ( v11.Length )
    {
      while ( v11.Buffer[((unsigned __int64)Length >> 1) - 1] != 92 )
      {
        v9 = Length == 2;
        Length -= 2;
        v11.Length = Length;
        if ( v9 )
          return v7;
      }
      v11.Length = Length - 2;
      if ( Length != 2 )
        continue;
    }
    return v7;
  }
  *a2 = v12;
  *a3 = v11.Length == a1->Length;
  return v7;
}
