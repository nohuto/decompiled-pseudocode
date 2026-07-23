/*
 * XREFs of sub_1402F1298 @ 0x1402F1298
 * Callers:
 *     sub_1407A0EE0 @ 0x1407A0EE0 (sub_1407A0EE0.c)
 * Callees:
 *     sub_1402EF324 @ 0x1402EF324 (sub_1402EF324.c)
 *     sub_1407D454C @ 0x1407D454C (sub_1407D454C.c)
 */

__int64 __fastcall sub_1402F1298(__int64 a1, __int64 a2, char a3)
{
  __int64 *v5; // rbx
  int v6; // esi
  __int64 result; // rax
  __int16 v8; // cx
  __int16 v9; // r8
  __int64 v10; // rcx
  __int16 v11; // cx

  if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
    return a2 + 16;
  v5 = (__int64 *)(a2 + 16);
  v6 = sub_1402EF324();
  if ( !v6 )
    return (__int64)v5;
  for ( result = *v5; (__int64 *)result != v5; result = *(_QWORD *)result )
  {
    if ( *(_DWORD *)(result + 16) == v6 )
    {
      if ( a3 )
      {
        v8 = *(_WORD *)(result + 22);
        if ( (v8 & 4) == 0 )
        {
          v9 = *(_WORD *)(result + 20);
          if ( v9 == -1 )
            v8 |= 1u;
          else
            *(_WORD *)(result + 20) = v9 + 1;
          *(_WORD *)(result + 22) = v8 | 4;
        }
      }
      return result;
    }
  }
  result = sub_1407D454C(24LL, 1282241601LL);
  if ( result )
  {
    v10 = *v5;
    if ( *(__int64 **)(*v5 + 8) != v5 )
      __fastfail(3u);
    *(_QWORD *)result = v10;
    *(_QWORD *)(result + 8) = v5;
    *(_QWORD *)(v10 + 8) = result;
    *v5 = result;
    *(_DWORD *)(result + 20) = 0;
    *(_DWORD *)(result + 16) = v6;
    if ( a3 )
    {
      *(_DWORD *)(result + 20) = 262145;
      v11 = *(_WORD *)(a2 + 36);
      if ( v11 == -1 )
        *(_WORD *)(a2 + 38) |= 1u;
      else
        *(_WORD *)(a2 + 36) = v11 + 1;
    }
  }
  return result;
}
