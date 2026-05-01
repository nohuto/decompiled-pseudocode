/*
 * XREFs of wistd::__function::__func__lambda_d30d699a9b0100ad99955a9d234ed237__void___cdecl(enum_wil::FolderChangeEvent_unsigned_short_const__)_::__move @ 0x180582060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_d30d699a9b0100ad99955a9d234ed237__void___cdecl_enum_wil::FolderChangeEvent_unsigned_short_const____::__move(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax

  *a2 = &off_180645070;
  a2[1] = 0LL;
  a2[2] = 0LL;
  a2[1] = *(_QWORD *)(a1 + 8);
  result = *(_QWORD *)(a1 + 16);
  a2[2] = result;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
