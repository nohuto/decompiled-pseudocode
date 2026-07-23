/*
 * XREFs of sub_140579004 @ 0x140579004
 * Callers:
 *     sub_140579150 @ 0x140579150 (sub_140579150.c)
 * Callees:
 *     sub_140567588 @ 0x140567588 (sub_140567588.c)
 *     sub_140567F5C @ 0x140567F5C (sub_140567F5C.c)
 *     sub_140578AD8 @ 0x140578AD8 (sub_140578AD8.c)
 *     sub_140578EF0 @ 0x140578EF0 (sub_140578EF0.c)
 */

char __fastcall sub_140579004(__int64 a1)
{
  char v1; // bl
  char result; // al
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int8 v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = a1;
  LOBYTE(v5) = 0;
  v6 = 0;
  v1 = sub_140578EF0(&v6, (bool *)&v5);
  result = sub_140567F5C(8u);
  if ( v1 )
  {
    sub_140567588((__int64)&qword_140C2BDC0);
    LOBYTE(v3) = v5;
    LOBYTE(v4) = v6;
    return sub_140578AD8(v4, v3);
  }
  return result;
}
