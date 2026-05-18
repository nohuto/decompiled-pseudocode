/*
 * XREFs of sub_1800A93CC @ 0x1800A93CC
 * Callers:
 *     sub_180107701 @ 0x180107701 (sub_180107701.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800670BC @ 0x1800670BC (sub_1800670BC.c)
 */

__int64 __fastcall sub_1800A93CC(_QWORD ***a1)
{
  _QWORD **v1; // rbx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    if ( *v1 )
    {
      sub_1800670BC(*v1, v1[1]);
      result = sub_180010884((char *)*v1, ((char *)v1[2] - (char *)*v1) & 0xFFFFFFFFFFFFFFC0uLL);
      *v1 = 0LL;
      v1[1] = 0LL;
      v1[2] = 0LL;
    }
  }
  return result;
}
