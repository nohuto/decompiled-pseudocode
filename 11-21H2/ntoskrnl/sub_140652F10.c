/*
 * XREFs of sub_140652F10 @ 0x140652F10
 * Callers:
 *     sub_14065327C @ 0x14065327C (sub_14065327C.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140652FB8 @ 0x140652FB8 (sub_140652FB8.c)
 *     sub_140653104 @ 0x140653104 (sub_140653104.c)
 *     sub_140653374 @ 0x140653374 (sub_140653374.c)
 */

__int64 __fastcall sub_140652F10(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned __int16 v3; // ax
  __int64 v6; // rcx
  int v7; // edi
  _WORD *v8; // r8
  __int64 v9; // rdx

  v3 = *a2;
  if ( *a2 >= 0x100u )
    v3 = 256;
  v7 = sub_140653374(a1, (char *)a2 + 5, v3, a3);
  if ( !v7 )
  {
    v8 = a2 + 1;
    if ( a2[1] > 0x100u )
      *v8 = 256;
    v7 = sub_140653104(v6, (char *)a2 + 261, v8, a3);
  }
  if ( v7 < 0 )
  {
    v7 = sub_140652FB8(v6, a3);
    if ( v7 < 0 )
    {
      if ( qword_140C10CC8 )
        sub_14042A5E0(qword_140C10CD8, v9);
    }
  }
  return (unsigned int)v7;
}
