/*
 * XREFs of sub_1405229E8 @ 0x1405229E8
 * Callers:
 *     sub_14050E8C0 @ 0x14050E8C0 (sub_14050E8C0.c)
 *     sub_14050F200 @ 0x14050F200 (sub_14050F200.c)
 *     sub_14050F570 @ 0x14050F570 (sub_14050F570.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405229E8(__int64 a1, __int64 a2)
{
  _QWORD *i; // rbx
  __int64 result; // rax
  __int16 v4; // [rsp+20h] [rbp-8h]

  _disable();
  for ( i = (_QWORD *)qword_140CF87D8; i; i = (_QWORD *)*i )
    result = sub_14042A5E0(5LL, a2);
  if ( (v4 & 0x200) != 0 )
    _enable();
  return result;
}
