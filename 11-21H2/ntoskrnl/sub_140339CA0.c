/*
 * XREFs of sub_140339CA0 @ 0x140339CA0
 * Callers:
 *     sub_140339520 @ 0x140339520 (sub_140339520.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 * Callees:
 *     sub_140273AF0 @ 0x140273AF0 (sub_140273AF0.c)
 *     sub_14027456C @ 0x14027456C (sub_14027456C.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_14033C424 @ 0x14033C424 (sub_14033C424.c)
 */

__int64 __fastcall sub_140339CA0(unsigned __int64 a1, unsigned int a2, unsigned int *a3, __int64 *a4)
{
  __int64 v7; // rdi
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _SLIST_ENTRY *v15; // rdi
  __int64 v16; // rax

  if ( a4 )
    v7 = *a4;
  else
    v7 = 0LL;
  v8 = *a3;
  if ( *a3 > 0x100 )
  {
    *a3 = 256;
    v8 = 256;
  }
  v9 = a2 | 1;
  if ( v8 <= 0x10 )
    v9 = a2;
  v10 = v9;
  if ( a4 )
    v10 = v9 | 4;
  result = sub_14033C424(v10);
  if ( !result )
  {
    if ( a4 )
    {
      LOBYTE(v12) = 17;
      sub_140334790(v7, v12, v13, v14);
    }
    else
    {
      if ( (v9 & 1) == 0 )
        return 0LL;
      v9 &= ~1u;
      *a3 = 16;
    }
    v15 = (_SLIST_ENTRY *)sub_14033C424(v9);
    if ( v15 )
      goto LABEL_15;
    if ( (v9 & 1) == 0 )
      return (__int64)v15;
    *a3 = 16;
    v15 = (_SLIST_ENTRY *)sub_14033C424(v9 & 0xFFFFFFFE);
    if ( v15 )
    {
LABEL_15:
      if ( a4 )
      {
        v16 = sub_140273AF0(a1, 0LL);
        if ( !v16 )
        {
          sub_14027456C(v15);
          return 0LL;
        }
        *a4 = v16;
      }
      return (__int64)v15;
    }
    return 0LL;
  }
  return result;
}
