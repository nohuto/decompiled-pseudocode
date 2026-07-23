/*
 * XREFs of sub_1402053E4 @ 0x1402053E4
 * Callers:
 *     sub_140204758 @ 0x140204758 (sub_140204758.c)
 *     sub_140204870 @ 0x140204870 (sub_140204870.c)
 * Callees:
 *     sub_140205370 @ 0x140205370 (sub_140205370.c)
 *     sub_14028AC10 @ 0x14028AC10 (sub_14028AC10.c)
 *     sub_1403008B0 @ 0x1403008B0 (sub_1403008B0.c)
 *     sub_140376790 @ 0x140376790 (sub_140376790.c)
 *     sub_1403767E0 @ 0x1403767E0 (sub_1403767E0.c)
 *     sub_14064A300 @ 0x14064A300 (sub_14064A300.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1402053E4(__int64 a1, __int64 a2)
{
  int v3; // edi
  __int64 v5; // rax
  _DWORD *v6; // rbx
  __int64 v8; // r9
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  v3 = 0;
  v10 = 0;
  LOWORD(v9) = *(_WORD *)a2;
  WORD1(v9) = v9;
  *((_QWORD *)&v9 + 1) = *(_QWORD *)(a2 + 8);
  v5 = sub_1403008B0(a1, &v9);
  v6 = (_DWORD *)v5;
  if ( !v5 || (*(_DWORD *)(v5 + 56) & 4) != 0 )
  {
    return (unsigned int)-1073741275;
  }
  else
  {
    sub_140205370(a1, v5, 0, 1);
    if ( *(_DWORD *)(a2 + 24) )
    {
      v3 = sub_14064A300(v6, a2, &v10);
      if ( v3 < 0 )
        return (unsigned int)v3;
      if ( v10 )
        v6[14] |= 4u;
    }
    else
    {
      v6[14] |= 4u;
      sub_140376790(v6);
    }
    if ( (v6[14] & 5) == 4 )
    {
      LOBYTE(v8) = 1;
      sub_1403767E0(a1, v6, 0LL, v8);
      sub_14028AC10(v6, 0LL);
      ExFreePoolWithTag(v6, 0);
    }
  }
  return (unsigned int)v3;
}
