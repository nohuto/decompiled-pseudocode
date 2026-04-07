/*
 * XREFs of std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::weak_ptr_CWindowBorder::CCachedBorderBrush_________lambda_78b0f3466128b2cc365cc1d34b7f49ae___ @ 0x180019430
 * Callers:
 *     ??1CCachedBorderBrush@CWindowBorder@@QEAA@XZ @ 0x180019390 (--1CCachedBorderBrush@CWindowBorder@@QEAA@XZ.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800194D8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::weak_ptr_CWindowBorder::CCachedBorderBrush_________lambda_78b0f3466128b2cc365cc1d34b7f49ae___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  _QWORD *result; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  std::_Ref_count_base *v12; // rcx

  while ( 1 )
  {
    if ( a2 == a3 )
    {
      v7 = a2;
      goto LABEL_7;
    }
    v6 = a2[3];
    if ( !v6 || !*(_DWORD *)(v6 + 8) )
      break;
    a2 = (_QWORD *)*a2;
  }
  v7 = a2;
  while ( 1 )
  {
    v8 = (_QWORD *)*a2;
    a2 = v8;
    if ( v8 == a3 )
      break;
    v10 = v8[3];
    if ( v10 && *(_DWORD *)(v10 + 8) )
    {
      v8[3] = 0LL;
      v11 = v8[2];
      a2[2] = 0LL;
      v12 = (std::_Ref_count_base *)v7[3];
      v7[2] = v11;
      v7[3] = v10;
      if ( v12 )
        std::_Ref_count_base::_Decwref(v12);
      v7 = (_QWORD *)*v7;
    }
  }
LABEL_7:
  result = a1;
  *a1 = v7;
  return result;
}
