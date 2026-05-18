/*
 * XREFs of sub_180071F84 @ 0x180071F84
 * Callers:
 *     sub_180081650 @ 0x180081650 (sub_180081650.c)
 *     sub_180082598 @ 0x180082598 (sub_180082598.c)
 *     sub_180097F30 @ 0x180097F30 (sub_180097F30.c)
 *     sub_1800EA315 @ 0x1800EA315 (sub_1800EA315.c)
 *     sub_1800EAD55 @ 0x1800EAD55 (sub_1800EAD55.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

__int64 __fastcall sub_180071F84(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    result = sub_180010530(v2);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
    return sub_180010530(v4);
  return result;
}
