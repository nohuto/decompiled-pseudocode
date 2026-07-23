/*
 * XREFs of sub_14099F5D8 @ 0x14099F5D8
 * Callers:
 *     sub_14098BDD4 @ 0x14098BDD4 (sub_14098BDD4.c)
 * Callees:
 *     sub_14099E2B4 @ 0x14099E2B4 (sub_14099E2B4.c)
 *     sub_14099E420 @ 0x14099E420 (sub_14099E420.c)
 *     sub_14099F3A0 @ 0x14099F3A0 (sub_14099F3A0.c)
 */

__int64 __fastcall sub_14099F5D8(__int64 a1, char a2, _DWORD *a3)
{
  char v3; // r15
  unsigned int v7; // ebx
  int v8; // ebp
  __int64 v9; // rdi
  int v10; // eax
  int v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  v3 = 0;
  v12 = 0;
  if ( (*(_DWORD *)(a1 + 760) & 0x30000) != 0 )
  {
    v7 = 0;
  }
  else
  {
    sub_14099E2B4(a1, a2, &v13);
    v8 = 0;
    v9 = a1;
    while ( (*(_DWORD *)(v9 + 760) & 2) != 0 )
    {
      if ( !*(_QWORD *)(v9 + 8) || (*(_DWORD *)(v9 + 760) & 4) != 0 )
        goto LABEL_14;
      v9 = *(_QWORD *)(v9 + 8);
LABEL_17:
      if ( v9 == a1 )
        goto LABEL_18;
    }
    v10 = sub_14099F3A0(v9, v13, a2, &v12);
    v7 = v10;
    if ( v10 >= 0 )
    {
      ++v8;
      goto LABEL_14;
    }
    v3 = 1;
    if ( v10 == -1073741637 )
    {
LABEL_14:
      while ( v9 != a1 )
      {
        if ( *(_QWORD *)v9 )
        {
          v9 = *(_QWORD *)v9;
          goto LABEL_17;
        }
        v9 = *(_QWORD *)(v9 + 16);
      }
LABEL_18:
      *a3 |= v12;
      v7 = v8 == 0 ? 0xC00000BB : 0;
    }
  }
  sub_14099E420(v13, v7, v12, v3);
  return v7;
}
