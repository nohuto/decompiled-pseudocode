/*
 * XREFs of sub_18008BAC8 @ 0x18008BAC8
 * Callers:
 *     sub_18008BF88 @ 0x18008BF88 (sub_18008BF88.c)
 * Callees:
 *     sub_18007CA00 @ 0x18007CA00 (sub_18007CA00.c)
 *     sub_180086318 @ 0x180086318 (sub_180086318.c)
 *     sub_18008BBA8 @ 0x18008BBA8 (sub_18008BBA8.c)
 *     sub_18008C4A0 @ 0x18008C4A0 (sub_18008C4A0.c)
 */

__int64 __fastcall sub_18008BAC8(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // rbx

  v6 = a3 - a2;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[1] - *a1) >> 4);
  v8 = 0xAAAAAAAAAAAAAAABuLL * (v6 >> 4);
  if ( v8 <= v7 )
  {
    v11 = *a1 + 48 * v8;
    sub_18008BBA8(a2, a3, *a1);
    result = sub_18007CA00(v11, a1[1]);
  }
  else
  {
    if ( v8 > 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 4) )
    {
      sub_18008C4A0(a1, v8);
      v7 = 0LL;
    }
    v9 = a2 + 48 * v7;
    sub_18008BBA8(a2, v9, *a1);
    result = sub_180086318(v9, a3, a1[1]);
    v11 = result;
  }
  a1[1] = v11;
  return result;
}
