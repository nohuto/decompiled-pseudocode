/*
 * XREFs of sub_1405104B0 @ 0x1405104B0
 * Callers:
 *     sub_140456B94 @ 0x140456B94 (sub_140456B94.c)
 *     sub_14050FD3C @ 0x14050FD3C (sub_14050FD3C.c)
 *     sub_14050FF6C @ 0x14050FF6C (sub_14050FF6C.c)
 *     sub_14050FFFC @ 0x14050FFFC (sub_14050FFFC.c)
 *     sub_14051011C @ 0x14051011C (sub_14051011C.c)
 *     sub_1405101D0 @ 0x1405101D0 (sub_1405101D0.c)
 *     sub_14051040C @ 0x14051040C (sub_14051040C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405104B0(__int64 a1)
{
  __int64 v1; // rax
  __int64 *i; // rdx

  v1 = 0LL;
  for ( i = qword_14003A160; *i != a1; i += 2 )
  {
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= 0x20 )
      return 3221225473LL;
  }
  return LODWORD(qword_14003A160[2 * v1 + 1]);
}
