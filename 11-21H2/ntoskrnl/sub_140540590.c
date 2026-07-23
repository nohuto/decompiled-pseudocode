/*
 * XREFs of sub_140540590 @ 0x140540590
 * Callers:
 *     sub_14092B3A8 @ 0x14092B3A8 (sub_14092B3A8.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140540590(__int64 a1, _WORD *a2, int a3)
{
  _WORD *v3; // rdi
  _WORD *v5; // rsi
  __int64 result; // rax
  int v8; // ebx
  __int64 v9; // rdx

  v3 = 0LL;
  v5 = 0LL;
  if ( a3 == 3 )
  {
    if ( *a2 == 3 )
      goto LABEL_10;
    return 3221225477LL;
  }
  if ( a3 == 4 )
  {
    v5 = a2;
    if ( *a2 == 4 )
      goto LABEL_10;
    return 3221225477LL;
  }
  if ( a3 != 5 )
    return 3221225477LL;
  v3 = a2;
  if ( *a2 != 5 )
    return 3221225477LL;
LABEL_10:
  result = sub_14042A5E0(a1 + 0x4000, a2);
  if ( (int)result < 0 )
    return result;
  v8 = a3 - 4;
  if ( v8 )
  {
    if ( v8 != 1 )
      return result;
    v9 = *((_QWORD *)v3 + 12);
  }
  else
  {
    v9 = *((_QWORD *)v5 + 8);
  }
  return sub_14042A5E0(a1 + 0x4000, v9);
}
