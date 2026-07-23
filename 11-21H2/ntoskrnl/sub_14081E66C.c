/*
 * XREFs of sub_14081E66C @ 0x14081E66C
 * Callers:
 *     sub_140AF6D7C @ 0x140AF6D7C (sub_140AF6D7C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14081E66C(unsigned int *a1)
{
  ULONG_PTR *v1; // r8
  unsigned int v2; // edx
  unsigned int v4; // r10d
  ULONG_PTR *v5; // r11
  _QWORD **v6; // r11
  _QWORD *v7; // r9
  _DWORD *v8; // rcx
  int v9; // ebx

  v1 = (ULONG_PTR *)qword_140C4DE70;
  v2 = 0;
  v4 = 0;
  if ( (ULONG_PTR *)qword_140C4DE70 == &qword_140C4DE70 )
    return (unsigned int)-1073741823;
  do
  {
    v5 = v1;
    v1 = (ULONG_PTR *)*v1;
    v6 = (_QWORD **)(v5 + 31);
    v7 = *v6;
    while ( v7 != v6 )
    {
      v8 = v7;
      v7 = (_QWORD *)*v7;
      v9 = v8[7];
      if ( v9 != -1 && v8[6] - v8[5] + v9 - 1 > v4 )
        v4 = v8[6] - v8[5] + v9 - 1;
    }
  }
  while ( v1 != &qword_140C4DE70 );
  if ( !v4 )
    return (unsigned int)-1073741823;
  else
    *a1 = v4;
  return v2;
}
