/*
 * XREFs of sub_14067E8A8 @ 0x14067E8A8
 * Callers:
 *     sub_14053F5E8 @ 0x14053F5E8 (sub_14053F5E8.c)
 *     sub_14065CFD4 @ 0x14065CFD4 (sub_14065CFD4.c)
 *     sub_14067E1BC @ 0x14067E1BC (sub_14067E1BC.c)
 *     sub_1409237B4 @ 0x1409237B4 (sub_1409237B4.c)
 *     sub_140923D00 @ 0x140923D00 (sub_140923D00.c)
 * Callees:
 *     sub_1406E93C0 @ 0x1406E93C0 (sub_1406E93C0.c)
 *     sub_14091CAC0 @ 0x14091CAC0 (sub_14091CAC0.c)
 */

__int64 __fastcall sub_14067E8A8(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rdi
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
  {
    v5 = a1 + 2;
    if ( (_QWORD *)*v5 != v5 )
    {
      result = sub_1406E93C0(v4, (unsigned int)sub_14091CB30, (unsigned int)sub_14091CAC0, a2, (__int64)a1, 1, 0);
      if ( (_QWORD *)*v5 != v5 )
        return sub_14091CAC0(*a1, a2, a1);
    }
  }
  return result;
}
