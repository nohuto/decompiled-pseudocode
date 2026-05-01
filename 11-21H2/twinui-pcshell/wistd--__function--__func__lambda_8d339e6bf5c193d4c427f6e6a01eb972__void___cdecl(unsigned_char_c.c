/*
 * XREFs of wistd::__function::__func__lambda_8d339e6bf5c193d4c427f6e6a01eb972__void___cdecl(unsigned_char_const_&)_::operator() @ 0x1801B0CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_8d339e6bf5c193d4c427f6e6a01eb972__void___cdecl_unsigned_char_const____::operator()(
        __int64 a1,
        _BYTE *a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(result + 1205) = *a2 != 0;
  return result;
}
