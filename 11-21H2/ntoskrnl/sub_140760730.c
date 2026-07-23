/*
 * XREFs of sub_140760730 @ 0x140760730
 * Callers:
 *     sub_1407608BC @ 0x1407608BC (sub_1407608BC.c)
 * Callees:
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     sub_140312BB0 @ 0x140312BB0 (sub_140312BB0.c)
 *     sub_140760B20 @ 0x140760B20 (sub_140760B20.c)
 */

__int64 __fastcall sub_140760730(__int64 a1)
{
  unsigned __int64 v2; // rcx
  __int64 result; // rax
  int v4; // ebp
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = 0LL;
  v2 = *(_QWORD *)(a1 + 48);
  v8 = 0LL;
  result = sub_1402FDD20(v2);
  if ( !(_DWORD)result )
  {
    v4 = 0;
    v5 = 0LL;
    do
    {
      result = sub_140760B20(a1, v4, 4, 0, (__int64)&v8, (__int64)&v9);
      v6 = v8;
      v4 = result;
      if ( v8 )
      {
        if ( v5 )
        {
          if ( v8 < v5 )
            v6 = v5;
          v8 = v6;
        }
        v7 = v9;
        if ( v6 <= v9 )
        {
          result = sub_140312BB0(a1, v6, v9, 2);
          v5 = v7 + 8;
        }
      }
    }
    while ( v4 );
  }
  return result;
}
