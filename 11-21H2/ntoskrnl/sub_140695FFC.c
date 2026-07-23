/*
 * XREFs of sub_140695FFC @ 0x140695FFC
 * Callers:
 *     sub_140695A40 @ 0x140695A40 (sub_140695A40.c)
 * Callees:
 *     sub_1403008B0 @ 0x1403008B0 (sub_1403008B0.c)
 *     sub_1406960C8 @ 0x1406960C8 (sub_1406960C8.c)
 *     sub_1406961F8 @ 0x1406961F8 (sub_1406961F8.c)
 */

bool __fastcall sub_140695FFC(int *a1, __int64 a2)
{
  int v2; // ebp
  char v3; // bl
  int v4; // esi
  __int64 *v6; // r14
  const UNICODE_STRING *i; // rdi
  const UNICODE_STRING *v8; // rax
  _QWORD *j; // rdi

  v2 = *a1;
  v3 = 0;
  v4 = *(_DWORD *)a2;
  if ( !*a1 && !v4 )
    return 1;
  v6 = (__int64 *)(a1 + 2);
  for ( i = (const UNICODE_STRING *)*((_QWORD *)a1 + 1);
        i != (const UNICODE_STRING *)v6;
        i = *(const UNICODE_STRING **)&i->Length )
  {
    if ( (unsigned __int8)sub_1406960C8(i) )
    {
      v8 = sub_1403008B0(a2, i + 2);
      if ( !v8 || !(unsigned __int8)sub_1406961F8(i, v8) )
        return v3;
    }
    else
    {
      --v2;
    }
  }
  for ( j = *(_QWORD **)(a2 + 8); j != (_QWORD *)(a2 + 8); j = (_QWORD *)*j )
  {
    if ( !(unsigned __int8)sub_1406960C8(j) )
      --v4;
  }
  return v2 == v4;
}
