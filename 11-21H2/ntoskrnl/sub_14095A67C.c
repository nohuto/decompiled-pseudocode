/*
 * XREFs of sub_14095A67C @ 0x14095A67C
 * Callers:
 *     sub_140947450 @ 0x140947450 (sub_140947450.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 *     sub_1407FEA60 @ 0x1407FEA60 (sub_1407FEA60.c)
 *     sub_140950C38 @ 0x140950C38 (sub_140950C38.c)
 */

__int64 __fastcall sub_14095A67C(_QWORD *a1, int a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // r8

  KeWaitForSingleObject(&stru_140C46260, Executive, 0, 0, 0LL);
  sub_14077572C(1);
  qword_140C46248 = (__int64)a1;
  sub_140775698(1);
  v5 = sub_1407FEA60(7, a2, 3, 0);
  if ( v5 == -1073741727 )
    sub_140950C38(7, v4, v6, a1, 12, 0LL);
  sub_14077572C(1);
  if ( qword_140C46248 )
  {
    if ( v5 >= 0 )
      v5 = -1073741823;
    qword_140C46248 = 0LL;
  }
  sub_140775698(1);
  KeSetEvent(&stru_140C46260, 0, 0);
  return (unsigned int)v5;
}
