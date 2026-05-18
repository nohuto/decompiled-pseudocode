/*
 * XREFs of sub_18000B0C0 @ 0x18000B0C0
 * Callers:
 *     sub_18000AF40 @ 0x18000AF40 (sub_18000AF40.c)
 * Callees:
 *     sub_18000B5A0 @ 0x18000B5A0 (sub_18000B5A0.c)
 *     sub_18000B6F4 @ 0x18000B6F4 (sub_18000B6F4.c)
 *     sub_18000B72C @ 0x18000B72C (sub_18000B72C.c)
 *     sub_18000B8CC @ 0x18000B8CC (sub_18000B8CC.c)
 *     sub_18000B8F8 @ 0x18000B8F8 (sub_18000B8F8.c)
 *     sub_18000BA94 @ 0x18000BA94 (sub_18000BA94.c)
 *     sub_18000BAEC @ 0x18000BAEC (sub_18000BAEC.c)
 *     sub_18000BC8C @ 0x18000BC8C (sub_18000BC8C.c)
 */

_BOOL8 __fastcall sub_18000B0C0(char a1)
{
  __int64 v3; // rcx
  char v4; // bl
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  BOOL v9; // ebx
  __int64 v10; // rcx

  if ( dword_1801D2BF0 <= 0 )
    return 0LL;
  --dword_1801D2BF0;
  v4 = sub_18000B5A0();
  if ( dword_1801D31A4 != 2 )
  {
    sub_18000BAEC(7LL);
    __debugbreak();
    JUMPOUT(0x18000B144LL);
  }
  sub_18000B6F4(v3);
  sub_18000BA94(v5);
  sub_18000BC8C(v6);
  dword_1801D31A4 = 0;
  LOBYTE(v7) = v4;
  sub_18000B8CC(v7);
  LOBYTE(v8) = a1;
  v9 = (unsigned __int8)sub_18000B8F8(v8, 0LL) != 0;
  sub_18000B72C(v10);
  return v9;
}
