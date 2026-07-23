/*
 * XREFs of sub_140A07DF0 @ 0x140A07DF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403614E0 @ 0x1403614E0 (sub_1403614E0.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_140A07DF0(int a1, struct _EX_RUNDOWN_REF **a2)
{
  struct _EX_RUNDOWN_REF *v2; // rbx
  ULONG_PTR v3; // rdi

  if ( a1 == 1 )
  {
    v2 = *a2;
    v3 = sub_1403614FC(*a2);
    if ( v3 )
    {
      if ( (int)sub_14042A5E0(sub_140A07F10, sub_140A07FF0) >= 0
        && (int)sub_14042A5E0(sub_140A07F80, sub_140A08040) >= 0 )
      {
        if ( v2 == (struct _EX_RUNDOWN_REF *)qword_140C10D20 && *(_QWORD *)(v3 + 128) )
          sub_14042A5E0(sub_140A01DB0, 0LL);
        if ( v2 == (struct _EX_RUNDOWN_REF *)qword_140C10D18 )
        {
          if ( *(_QWORD *)(v3 + 128) )
            sub_14042A5E0(sub_140A01DB0, 1LL);
        }
      }
      sub_1403614E0(v2);
    }
  }
}
