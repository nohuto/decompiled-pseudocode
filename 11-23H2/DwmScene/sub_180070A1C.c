/*
 * XREFs of sub_180070A1C @ 0x180070A1C
 * Callers:
 *     sub_180037DC0 @ 0x180037DC0 (sub_180037DC0.c)
 * Callees:
 *     sub_1800709F8 @ 0x1800709F8 (sub_1800709F8.c)
 *     sub_180070A10 @ 0x180070A10 (sub_180070A10.c)
 */

__int64 __fastcall sub_180070A1C(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rbx
  __int64 v3; // rax
  _QWORD *v4; // r10
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r11
  __int64 v8; // r10
  __int64 result; // rax

  v1 = a1 + 160;
  do
  {
    v2 = v1;
    do
    {
      v3 = sub_180070A10();
      *v4 += v3;
      *(v4 - 1) = v3;
      v5 = v4[1];
      if ( v5 < v3 )
        v5 = v3;
      v4[1] = v5;
      sub_1800709F8();
      result = v8 + 16;
    }
    while ( v8 + 16 != v6 );
    v1 = v6 + 160;
  }
  while ( v2 != v7 );
  return result;
}
