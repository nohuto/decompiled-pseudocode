/*
 * XREFs of sub_14097339C @ 0x14097339C
 * Callers:
 *     sub_14097323C @ 0x14097323C (sub_14097323C.c)
 *     sub_140976F90 @ 0x140976F90 (sub_140976F90.c)
 *     sub_140977CBC @ 0x140977CBC (sub_140977CBC.c)
 * Callees:
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     sub_1402AC180 @ 0x1402AC180 (sub_1402AC180.c)
 *     sub_140972C84 @ 0x140972C84 (sub_140972C84.c)
 */

_QWORD *__fastcall sub_14097339C(_QWORD *a1)
{
  _QWORD *v1; // rbx
  ULONG v3; // eax
  int v4; // eax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_QWORD *)qword_140C533A8;
  if ( !qword_140C533A8 )
    return 0LL;
  v3 = RtlLengthSid(a1);
  v6[0] = sub_1402AC180(a1, v3, 0LL);
  v6[1] = a1;
  do
  {
    v4 = sub_140972C84(v6, (__int64)v1);
    if ( v4 >= 0 )
    {
      if ( v4 <= 0 )
        break;
      v1 = (_QWORD *)v1[1];
    }
    else
    {
      v1 = (_QWORD *)*v1;
    }
  }
  while ( v1 );
  if ( v1 )
    return v1;
  else
    return 0LL;
}
