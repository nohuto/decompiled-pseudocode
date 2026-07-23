/*
 * XREFs of DbgkLkmdRegisterCallback @ 0x1408324C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140281870 @ 0x140281870 (sub_140281870.c)
 *     sub_140281930 @ 0x140281930 (sub_140281930.c)
 *     sub_1403C7678 @ 0x1403C7678 (sub_1403C7678.c)
 *     sub_140832A20 @ 0x140832A20 (sub_140832A20.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgkLkmdRegisterCallback(__int64 a1, __int64 a2, int a3)
{
  unsigned int i; // ebx
  signed __int64 *v7; // rdi
  struct _EX_RUNDOWN_REF *v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rsi
  unsigned int j; // ebx
  __int64 result; // rax

  if ( (a3 & 3) == 3 )
    return 3221225485LL;
  for ( i = 0; i < 8; ++i )
  {
    v7 = (signed __int64 *)(&stru_140C5A870 + 2 * i);
    v8 = sub_140281870(v7);
    if ( v8 )
    {
      if ( a1 == v8[1].Count )
      {
        sub_140281930(v7, (__int64)v8);
        return 3221227288LL;
      }
      sub_140281930(v7, (__int64)v8);
    }
  }
  v9 = (struct _EX_RUNDOWN_REF *)sub_140832A20(a1, a2);
  if ( !v9 )
    return 3221225495LL;
  for ( j = 0; j < 8; ++j )
  {
    if ( sub_1403C7678((signed __int64 *)&stru_140C5A870 + 2 * j, v9, 0LL) )
    {
      result = 0LL;
      *((_DWORD *)&stru_140C5A870 + 4 * j + 2) = a3;
      return result;
    }
  }
  ExFreePoolWithTag(v9, 0);
  return 3221226539LL;
}
