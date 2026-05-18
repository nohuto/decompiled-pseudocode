/*
 * XREFs of sub_180013EF0 @ 0x180013EF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004A0C8 @ 0x18004A0C8 (sub_18004A0C8.c)
 */

__int64 __fastcall sub_180013EF0(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 16);
  try
  {
    sub_18004A0C8(v1, &qword_1801F5CF8);
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000F364(
      retaddr,
      165LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrematerial.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return result;
}
