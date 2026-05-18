/*
 * XREFs of sub_18000B0C0 @ 0x18000B0C0
 * Callers:
 *     sub_18000AF40 @ 0x18000AF40 (sub_18000AF40.c)
 * Callees:
 *     sub_18000B5B0 @ 0x18000B5B0 (sub_18000B5B0.c)
 *     sub_18000B704 @ 0x18000B704 (sub_18000B704.c)
 *     sub_18000B73C @ 0x18000B73C (sub_18000B73C.c)
 *     sub_18000B8DC @ 0x18000B8DC (sub_18000B8DC.c)
 *     sub_18000B908 @ 0x18000B908 (sub_18000B908.c)
 *     sub_18000BAA4 @ 0x18000BAA4 (sub_18000BAA4.c)
 *     sub_18000BAFC @ 0x18000BAFC (sub_18000BAFC.c)
 *     sub_18000BC9C @ 0x18000BC9C (sub_18000BC9C.c)
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

  if ( dword_1801F6D10 <= 0 )
    return 0LL;
  --dword_1801F6D10;
  v4 = sub_18000B5B0();
  if ( dword_1801F7290 != 2 )
  {
    sub_18000BAFC(7LL);
    __debugbreak();
    JUMPOUT(0x18000B144LL);
  }
  sub_18000B704(v3);
  sub_18000BAA4(v5);
  sub_18000BC9C(v6);
  dword_1801F7290 = 0;
  LOBYTE(v7) = v4;
  sub_18000B8DC(v7);
  LOBYTE(v8) = a1;
  v9 = (unsigned __int8)sub_18000B908(v8, 0LL) != 0;
  sub_18000B73C(v10);
  return v9;
}
