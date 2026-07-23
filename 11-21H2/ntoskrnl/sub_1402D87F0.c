/*
 * XREFs of sub_1402D87F0 @ 0x1402D87F0
 * Callers:
 *     sub_14075B270 @ 0x14075B270 (sub_14075B270.c)
 *     sub_140841F20 @ 0x140841F20 (sub_140841F20.c)
 *     sub_140A15B1C @ 0x140A15B1C (sub_140A15B1C.c)
 *     sub_140A15D60 @ 0x140A15D60 (sub_140A15D60.c)
 *     sub_140A18114 @ 0x140A18114 (sub_140A18114.c)
 *     sub_140B1C49C @ 0x140B1C49C (sub_140B1C49C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402D87F0(_WORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  _WORD *v5; // rax
  __int64 v6; // r8
  __int64 result; // rax
  _WORD *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r11
  __int16 v12; // r8
  _WORD *v13; // rax

  v4 = a2;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    return 3221225485LL;
  v5 = a1;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --a2;
  }
  while ( a2 );
  v6 = (v4 - a2) & -(__int64)(a2 != 0);
  result = a2 == 0 ? 0xC000000D : 0;
  if ( a2 )
  {
    v8 = &a1[v6];
    v9 = v4 - v6;
    if ( v4 != v6 )
    {
      v10 = 2147483646LL;
      v11 = a3 - (_QWORD)v8;
      do
      {
        if ( !v10 )
          break;
        v12 = *(_WORD *)((char *)v8 + v11);
        if ( !v12 )
          break;
        *v8 = v12;
        --v10;
        ++v8;
        --v9;
      }
      while ( v9 );
    }
    v13 = v8 - 1;
    if ( v9 )
      v13 = v8;
    *v13 = 0;
    return v9 == 0 ? 0x80000005 : 0;
  }
  return result;
}
