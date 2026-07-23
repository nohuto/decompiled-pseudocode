/*
 * XREFs of sub_140989EE0 @ 0x140989EE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_140369A40 @ 0x140369A40 (sub_140369A40.c)
 *     sub_140753094 @ 0x140753094 (sub_140753094.c)
 *     sub_1409A4934 @ 0x1409A4934 (sub_1409A4934.c)
 */

void sub_140989EE0()
{
  PVOID *i; // rbx
  int v1; // r8d
  PVOID v2; // r9
  int v3; // [rsp+28h] [rbp-20h]

  sub_140753094(1);
  for ( i = (PVOID *)qword_140C242A0; i != &qword_140C242A0; i = (PVOID *)*i )
  {
    v1 = *((_DWORD *)i + 26);
    if ( v1 )
    {
      v2 = i[14];
      if ( v2 )
        sub_1409A4934(*((_DWORD *)i + 4), *((_DWORD *)i + 9), v1, (_DWORD)v2, (__int64)i[15], v3, 0);
    }
  }
  sub_140369A40(1);
  sub_1402935D0((ULONG_PTR)&qword_140C24280);
}
