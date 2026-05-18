/*
 * XREFs of sub_180013730 @ 0x180013730
 * Callers:
 *     <none>
 * Callees:
 *     sub_180044B1C @ 0x180044B1C (sub_180044B1C.c)
 */

__int64 __fastcall sub_180013730(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 16);
  try
  {
    sub_180044B1C(v1, &unk_1801D6D28);
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000F024(
      retaddr,
      165LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrematerial.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return result;
}
