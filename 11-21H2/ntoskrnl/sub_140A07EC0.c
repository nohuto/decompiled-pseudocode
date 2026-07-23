/*
 * XREFs of sub_140A07EC0 @ 0x140A07EC0
 * Callers:
 *     sub_140A07BFC @ 0x140A07BFC (sub_140A07BFC.c)
 *     sub_140A07F10 @ 0x140A07F10 (sub_140A07F10.c)
 *     sub_140A07F80 @ 0x140A07F80 (sub_140A07F80.c)
 *     sub_140A07FF0 @ 0x140A07FF0 (sub_140A07FF0.c)
 *     sub_140A08040 @ 0x140A08040 (sub_140A08040.c)
 *     sub_140A08084 @ 0x140A08084 (sub_140A08084.c)
 *     sub_140A080E0 @ 0x140A080E0 (sub_140A080E0.c)
 *     sub_140A0814C @ 0x140A0814C (sub_140A0814C.c)
 *     sub_140A081A8 @ 0x140A081A8 (sub_140A081A8.c)
 *     sub_140A08204 @ 0x140A08204 (sub_140A08204.c)
 * Callees:
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 */

ULONG_PTR __fastcall sub_140A07EC0(__int64 a1, __int64 *a2)
{
  ULONG_PTR result; // rax
  __int64 v4; // rcx

  result = sub_1403614FC((struct _EX_RUNDOWN_REF *)qword_140C10D18);
  if ( result )
  {
    v4 = qword_140C10D18;
LABEL_3:
    *a2 = v4;
    return result;
  }
  result = sub_1403614FC((struct _EX_RUNDOWN_REF *)qword_140C10D20);
  if ( result )
  {
    v4 = qword_140C10D20;
    goto LABEL_3;
  }
  return result;
}
