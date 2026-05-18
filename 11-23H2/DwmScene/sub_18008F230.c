/*
 * XREFs of sub_18008F230 @ 0x18008F230
 * Callers:
 *     sub_1800902BC @ 0x1800902BC (sub_1800902BC.c)
 *     sub_1800904E0 @ 0x1800904E0 (sub_1800904E0.c)
 *     sub_1800906E4 @ 0x1800906E4 (sub_1800906E4.c)
 *     sub_180090AB8 @ 0x180090AB8 (sub_180090AB8.c)
 * Callees:
 *     sub_18008F51C @ 0x18008F51C (sub_18008F51C.c)
 */

void __fastcall sub_18008F230(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // r8

  v3 = (__int64)(a1[1] - *a1) >> 4;
  if ( a2 >= v3 )
  {
    if ( a2 > v3 )
    {
      if ( a2 <= (__int64)(a1[2] - *a1) >> 4 )
      {
        v4 = sub_18008F51C(a1[1], a2 - v3);
        *(_QWORD *)(v5 + 8) = v4;
      }
      else
      {
        sub_18008F340(a1);
      }
    }
  }
  else
  {
    a1[1] = *a1 + 16 * a2;
  }
}
