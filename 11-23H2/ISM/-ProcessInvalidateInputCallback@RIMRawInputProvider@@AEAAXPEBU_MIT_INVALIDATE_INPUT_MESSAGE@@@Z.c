/*
 * XREFs of ?ProcessInvalidateInputCallback@RIMRawInputProvider@@AEAAXPEBU_MIT_INVALIDATE_INPUT_MESSAGE@@@Z @ 0x1800D3824
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_3eec97e4abfde791949971aa1342b43e__void__MIT_INVALIDATE_INPUT_MESSAGE_const___::_Do_call @ 0x1800D3A70 (std--_Func_impl_no_alloc__lambda_3eec97e4abfde791949971aa1342b43e__void__MIT_INVALI_ea_1800D3A70.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall RIMRawInputProvider::ProcessInvalidateInputCallback(
        RIMRawInputProvider *this,
        const struct _MIT_INVALIDATE_INPUT_MESSAGE *a2)
{
  __int64 v2; // r8
  _QWORD *v3; // r9
  _QWORD *v4; // rcx

  v2 = *(_QWORD *)a2;
  if ( (unsigned __int64)(*(_QWORD *)a2 - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v3 = (_QWORD *)*((_QWORD *)this + 5);
    if ( v3 && v3[10] == v2
      || (v3 = (_QWORD *)*((_QWORD *)this + 6)) != 0LL && v3[10] == v2
      || (v3 = (_QWORD *)*((_QWORD *)this + 7)) != 0LL && v3[10] == v2
      || (v3 = (_QWORD *)*((_QWORD *)this + 9)) != 0LL && v3[10] == v2
      || (v3 = (_QWORD *)*((_QWORD *)this + 8)) != 0LL && v3[10] == v2
      || (v3 = (_QWORD *)*((_QWORD *)this + 10)) != 0LL && v3[10] == v2
      || (v3 = (_QWORD *)*((_QWORD *)this + 11)) != 0LL && v3[10] == v2 )
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v3 + 56LL))(v3, *((_QWORD *)a2 + 1));
    }
    else
    {
      v4 = (_QWORD *)*((_QWORD *)this + 15);
      if ( v4 )
      {
        if ( v4[10] == v2 )
          (*(void (__fastcall **)(_QWORD *, _QWORD))(*v4 + 56LL))(v4, *((_QWORD *)a2 + 1));
      }
    }
  }
}
