/*
 * XREFs of sub_180013640 @ 0x180013640
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800446B0 @ 0x1800446B0 (sub_1800446B0.c)
 */

__int64 __fastcall sub_180013640(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 16);
  try
  {
    sub_1800446B0(v1, &unk_1801D6D68);
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000F024(
      retaddr,
      109LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrematerial.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return result;
}
