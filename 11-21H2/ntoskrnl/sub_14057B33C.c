/*
 * XREFs of sub_14057B33C @ 0x14057B33C
 * Callers:
 *     sub_14020E9E8 @ 0x14020E9E8 (sub_14020E9E8.c)
 *     sub_140292350 @ 0x140292350 (sub_140292350.c)
 * Callees:
 *     sub_1402A01BC @ 0x1402A01BC (sub_1402A01BC.c)
 *     sub_1402A0324 @ 0x1402A0324 (sub_1402A0324.c)
 */

__int64 __fastcall sub_14057B33C(__int64 a1, unsigned __int16 *a2)
{
  __int64 result; // rax
  char v5; // r10
  unsigned __int16 v6; // bx
  unsigned __int16 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rdx

  result = *a2;
  v5 = 0;
  v6 = 0;
  if ( (_WORD)result )
  {
    while ( v6 >= (unsigned __int16)result
         || !*(_QWORD *)&a2[4 * v6 + 4]
         || v6 >= LOWORD(dword_140D06E40[0])
         || !*(_QWORD *)&dword_140D06E40[2 * v6 + 2] )
    {
LABEL_18:
      result = *a2;
      if ( ++v6 >= (unsigned __int16)result )
      {
        if ( v5 )
        {
          result = sub_1402A0324((unsigned __int16 *)(a1 + 80));
          *(_DWORD *)(a1 + 636) = result;
        }
        return result;
      }
    }
    v7 = *(_WORD *)(a1 + 80);
    if ( v6 >= v7 )
      v8 = 0LL;
    else
      v8 = *(_QWORD *)(a1 + 8LL * v6 + 88);
    if ( v6 >= LOWORD(dword_140D06E40[0]) )
      v9 = 0LL;
    else
      v9 = *(_QWORD *)&dword_140D06E40[2 * v6 + 2];
    if ( v7 <= v6 )
    {
      if ( *(_WORD *)(a1 + 82) <= v6 )
        goto LABEL_16;
      *(_WORD *)(a1 + 80) = v6 + 1;
    }
    *(_QWORD *)(a1 + 8LL * v6 + 88) |= v9;
LABEL_16:
    if ( !v8 )
    {
      sub_1402A01BC(a1, 0LL, v6);
      v5 = 1;
    }
    goto LABEL_18;
  }
  return result;
}
