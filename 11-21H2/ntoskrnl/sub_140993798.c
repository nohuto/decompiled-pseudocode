/*
 * XREFs of sub_140993798 @ 0x140993798
 * Callers:
 *     sub_140990548 @ 0x140990548 (sub_140990548.c)
 * Callees:
 *     sub_14099351C @ 0x14099351C (sub_14099351C.c)
 */

char __fastcall sub_140993798(unsigned __int16 a1, __int64 a2, int a3, char a4)
{
  bool v5; // zf
  const EVENT_DESCRIPTOR *v6; // r9
  const EVENT_DESCRIPTOR *v10; // r9

  v5 = a4 == 0;
  v6 = &stru_1400381B0;
  if ( v5 )
    v6 = (const EVENT_DESCRIPTOR *)qword_140039298;
  sub_14099351C(a1, a2, a3, v6);
  v10 = &stru_140039040;
  if ( !a4 )
    v10 = (const EVENT_DESCRIPTOR *)qword_1400390C0;
  return sub_14099351C(a1, a2, a3, v10);
}
