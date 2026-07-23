/*
 * XREFs of sub_140579780 @ 0x140579780
 * Callers:
 *     sub_1405788B0 @ 0x1405788B0 (sub_1405788B0.c)
 * Callees:
 *     sub_1402ABBD0 @ 0x1402ABBD0 (sub_1402ABBD0.c)
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 *     sub_14057958C @ 0x14057958C (sub_14057958C.c)
 *     sub_1405798A8 @ 0x1405798A8 (sub_1405798A8.c)
 */

char sub_140579780()
{
  bool v0; // bl
  char result; // al

  v0 = sub_1402ABBD0();
  _enable();
  LODWORD(dword_140C2A980) = 531;
  qword_140C2A9A0 = 0LL;
  qword_140C2A998 = (__int64)sub_140579810;
  qword_140C2A9B8 = 0LL;
  qword_140C2A990 = 0LL;
  if ( (unsigned __int8)sub_140345190((ULONG_PTR)&dword_140C2A980, 0LL, 0LL, 0LL, 0) )
    result = sub_1405798A8();
  else
    result = sub_14057958C(4u);
  if ( !v0 )
    _disable();
  return result;
}
