/*
 * XREFs of sub_180017AAC @ 0x180017AAC
 * Callers:
 *     sub_1800180D0 @ 0x1800180D0 (sub_1800180D0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

__int64 __fastcall sub_180017AAC(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = *(_QWORD *)(a1 + 192);
  if ( v2 )
    result = sub_180010530(v2);
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
    result = sub_180010530(v4);
  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 )
    result = sub_180010530(v5);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
