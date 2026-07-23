/*
 * XREFs of sub_1403987D0 @ 0x1403987D0
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     sub_1408080D4 @ 0x1408080D4 (sub_1408080D4.c)
 *     sub_140819BD0 @ 0x140819BD0 (sub_140819BD0.c)
 */

__int64 __fastcall sub_1403987D0(_DWORD *a1, _DWORD *a2, _DWORD *a3, _BYTE *a4)
{
  _DWORD *v4; // rbx
  _DWORD *v8; // rcx
  int v9; // eax
  __int64 result; // rax

  v4 = a1;
  if ( (unsigned int)(qword_140C227C4 - 4) <= 2 )
  {
    *a1 = 6;
    *a2 = 6;
  }
  else if ( (_DWORD)qword_140C227C4 == 7 )
  {
    *a2 = 5;
    sub_140819BD0(a2, 0LL);
  }
  else
  {
    v8 = qword_140C231B8;
    *a2 = *((_DWORD *)qword_140C231B8 + 18);
    v9 = v8[17];
    if ( v9 > *v4 )
      *v4 = v9;
  }
  if ( *v4 > *a2 )
    *a2 = *v4;
  *a4 = 1;
  if ( *v4 == 6 || dword_140C227CC < 0 && (unsigned int)(dword_140C227D4 - 1) <= 1 )
    *a4 = 0;
  if ( (unsigned __int8)sub_1408080D4() )
  {
    *v4 = *a2;
    dword_140C227CC &= ~0x10000000u;
  }
  if ( (dword_140C227CC & 0x10000000) == 0 )
    v4 = a2;
  result = (unsigned int)*v4;
  *a3 = result;
  return result;
}
