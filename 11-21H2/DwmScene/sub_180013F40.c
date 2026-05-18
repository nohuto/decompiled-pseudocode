/*
 * XREFs of sub_180013F40 @ 0x180013F40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180049D54 @ 0x180049D54 (sub_180049D54.c)
 */

__int64 sub_180013F40()
{
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    sub_180049D54();
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000F364(
      retaddr,
      181LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrematerial.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return result;
}
