/*
 * XREFs of sub_14098471C @ 0x14098471C
 * Callers:
 *     sub_1409F66F0 @ 0x1409F66F0 (sub_1409F66F0.c)
 * Callees:
 *     sub_140883F24 @ 0x140883F24 (sub_140883F24.c)
 */

__int64 __fastcall sub_14098471C(_DWORD *a1, unsigned __int32 a2, _DWORD *a3)
{
  __int64 result; // rax
  int v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  if ( a2 < 0x10 )
    return 3221225476LL;
  *(_QWORD *)a1 = 0LL;
  result = sub_140883F24((__int64)sub_140984770, a1, a2, &v5, 1);
  if ( a3 )
    *a3 = v5;
  return result;
}
