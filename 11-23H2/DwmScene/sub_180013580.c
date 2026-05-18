/*
 * XREFs of sub_180013580 @ 0x180013580
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800448F8 @ 0x1800448F8 (sub_1800448F8.c)
 */

__int64 sub_180013580()
{
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    sub_1800448F8();
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000F024(
      retaddr,
      44LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrematerial.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return result;
}
