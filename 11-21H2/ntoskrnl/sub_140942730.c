/*
 * XREFs of sub_140942730 @ 0x140942730
 * Callers:
 *     sub_140768080 @ 0x140768080 (sub_140768080.c)
 *     sub_14076BC20 @ 0x14076BC20 (sub_14076BC20.c)
 *     sub_1407750C0 @ 0x1407750C0 (sub_1407750C0.c)
 *     sub_14080E218 @ 0x14080E218 (sub_14080E218.c)
 *     sub_1409581A0 @ 0x1409581A0 (sub_1409581A0.c)
 * Callees:
 *     sub_14055F84C @ 0x14055F84C (sub_14055F84C.c)
 */

__int64 __fastcall sub_140942730(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v2; // r8
  _QWORD *v3; // r10

  result = sub_14055F84C(a1, 0);
  *v3 = *(_QWORD *)(*(_QWORD *)(result + 32) + 48LL);
  if ( v2 )
  {
    result = *(unsigned int *)(result + 48);
    *v2 = result;
  }
  return result;
}
