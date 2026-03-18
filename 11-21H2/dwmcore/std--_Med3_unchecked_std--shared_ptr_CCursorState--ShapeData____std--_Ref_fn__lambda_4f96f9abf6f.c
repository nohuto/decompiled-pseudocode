/*
 * XREFs of std::_Med3_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x180268234
 * Callers:
 *     std::_Guess_median_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x180267FDC (std--_Guess_median_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__lambda_4f9.c)
 * Callees:
 *     std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData__&_std::shared_ptr_CCursorState::ShapeData__&_ @ 0x1802679EC (std--_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___--operator()_std--shared_ptr_CCursorStat.c)
 */

__int64 std::_Med3_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        ...)
{
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  va_list va; // [rsp+48h] [rbp+20h] BYREF

  va_start(va, a3);
  if ( (unsigned __int8)std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                          (__int64)va,
                          (__int64)a2,
                          a1) )
  {
    v6 = *a2;
    *a2 = *a1;
    v7 = a1[1];
    *a1 = v6;
    v8 = a2[1];
    a2[1] = v7;
    a1[1] = v8;
  }
  result = std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
             (__int64)va,
             (__int64)a3,
             a2);
  if ( (_BYTE)result )
  {
    v10 = *a3;
    *a3 = *a2;
    v11 = a2[1];
    *a2 = v10;
    v12 = a3[1];
    a3[1] = v11;
    a2[1] = v12;
    result = std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
               (__int64)va,
               (__int64)a2,
               a1);
    if ( (_BYTE)result )
    {
      v13 = *a2;
      *a2 = *a1;
      result = a1[1];
      *a1 = v13;
      v14 = a2[1];
      a2[1] = result;
      a1[1] = v14;
    }
  }
  return result;
}
