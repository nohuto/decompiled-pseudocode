/*
 * XREFs of sub_180015710 @ 0x180015710
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F364 @ 0x18000F364 (sub_18000F364.c)
 *     sub_180014D3C @ 0x180014D3C (sub_180014D3C.c)
 */

__int64 __fastcall sub_180015710(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v5; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( *a2 == 0x4BD1CD637052B94FLL && a2[1] == 0xDB6D126B7184B2B7uLL )
  {
    v5 = a1 + 16;
    sub_180014D3C(a1 + 16);
    *a3 = v5 & -(__int64)(a1 != 0);
    return 0LL;
  }
  else
  {
    sub_18000F364(
      retaddr,
      113LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrenode.cpp",
      2147942487LL);
    return 2147942487LL;
  }
}
