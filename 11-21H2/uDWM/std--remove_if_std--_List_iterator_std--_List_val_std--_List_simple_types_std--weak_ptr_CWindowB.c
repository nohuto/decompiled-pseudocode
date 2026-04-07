/*
 * XREFs of std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::weak_ptr_CWindowBorder::CCachedBorderBrush_________lambda_78b0f3466128b2cc365cc1d34b7f49ae___ @ 0x18003A83C
 * Callers:
 *     ??1CCachedBorderBrush@CWindowBorder@@QEAA@XZ @ 0x18003A7A0 (--1CCachedBorderBrush@CWindowBorder@@QEAA@XZ.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180039150 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::weak_ptr_CWindowBorder::CCachedBorderBrush_________lambda_78b0f3466128b2cc365cc1d34b7f49ae___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  std::_Ref_count_base *v12; // rcx
  _QWORD *result; // rax

  while ( a2 != a3 )
  {
    v6 = a2[3];
    if ( !v6 || !*(_DWORD *)(v6 + 8) )
    {
      v7 = a2;
      while ( 1 )
      {
        v8 = (_QWORD *)*v7;
        v7 = v8;
        if ( v8 == a3 )
          break;
        v9 = v8[3];
        if ( v9 && *(_DWORD *)(v9 + 8) )
        {
          v10 = v7[2];
          v7[2] = 0LL;
          v11 = v7[3];
          v7[3] = 0LL;
          v12 = (std::_Ref_count_base *)a2[3];
          a2[2] = v10;
          a2[3] = v11;
          if ( v12 )
            std::_Ref_count_base::_Decwref(v12);
          a2 = (_QWORD *)*a2;
        }
      }
      break;
    }
    a2 = (_QWORD *)*a2;
  }
  result = a1;
  *a1 = a2;
  return result;
}
