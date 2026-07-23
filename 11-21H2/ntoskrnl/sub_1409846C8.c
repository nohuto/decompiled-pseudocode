/*
 * XREFs of sub_1409846C8 @ 0x1409846C8
 * Callers:
 *     sub_1409F6670 @ 0x1409F6670 (sub_1409F6670.c)
 * Callees:
 *     sub_140883F24 @ 0x140883F24 (sub_140883F24.c)
 */

__int64 __fastcall sub_1409846C8(_DWORD *a1, unsigned __int32 a2, _DWORD *a3)
{
  __int64 result; // rax
  int v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  if ( a2 < 8 )
    return 3221225476LL;
  *a1 = 0;
  result = sub_140883F24((__int64)sub_140881D00, a1, a2, &v5, 0);
  if ( a3 )
    *a3 = v5;
  return result;
}
