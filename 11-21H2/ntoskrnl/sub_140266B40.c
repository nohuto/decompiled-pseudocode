/*
 * XREFs of sub_140266B40 @ 0x140266B40
 * Callers:
 *     sub_1402633C4 @ 0x1402633C4 (sub_1402633C4.c)
 *     sub_1402664E8 @ 0x1402664E8 (sub_1402664E8.c)
 *     sub_140266644 @ 0x140266644 (sub_140266644.c)
 *     sub_1402669CC @ 0x1402669CC (sub_1402669CC.c)
 *     sub_140266AD0 @ 0x140266AD0 (sub_140266AD0.c)
 *     sub_140266C0C @ 0x140266C0C (sub_140266C0C.c)
 *     sub_140284D20 @ 0x140284D20 (sub_140284D20.c)
 *     sub_140339520 @ 0x140339520 (sub_140339520.c)
 *     sub_14033E280 @ 0x14033E280 (sub_14033E280.c)
 *     sub_1403737D0 @ 0x1403737D0 (sub_1403737D0.c)
 *     sub_140373E1C @ 0x140373E1C (sub_140373E1C.c)
 *     sub_14037432C @ 0x14037432C (sub_14037432C.c)
 *     sub_14038E608 @ 0x14038E608 (sub_14038E608.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 *     sub_1407F95AC @ 0x1407F95AC (sub_1407F95AC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140266B40(_QWORD *a1, unsigned int a2)
{
  __int64 *v2; // r8
  __int64 v3; // r10
  unsigned __int64 v4; // rax
  __int64 v5; // rcx

  v2 = a1 + 360;
  v3 = a1[312] + a1[328];
  v4 = (unsigned __int64)&a1[11 * a2 + 360];
  if ( (unsigned __int64)(a1 + 360) < v4 )
  {
    do
    {
      v5 = *v2;
      v2 += 11;
      v3 += v5;
    }
    while ( (unsigned __int64)v2 < v4 );
  }
  return v3;
}
