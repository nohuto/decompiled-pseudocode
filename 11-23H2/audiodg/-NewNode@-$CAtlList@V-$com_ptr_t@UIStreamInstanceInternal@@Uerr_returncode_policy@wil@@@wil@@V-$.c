/*
 * XREFs of ?NewNode@?$CAtlList@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBV?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@PEAV312@1@Z @ 0x140006680
 * Callers:
 *     ?AddHead@?$CAtlList@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBV?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x140006830 (-AddHead@-$CAtlList@V-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 * Callees:
 *     ??0?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInstanceInternal@@@Z @ 0x1400099F4 (--0-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInsta.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x1400136A8 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B99C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

_QWORD *__fastcall ATL::CAtlList<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>>>::NewNode(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  struct ATL::CAtlPlex *v7; // rax
  int v8; // r8d
  _QWORD *i; // rdx
  _QWORD *v10; // rdi
  __int64 v11; // rbx
  _QWORD *result; // rax

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v7 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)(a1 + 24), *(unsigned int *)(a1 + 40), 0x18uLL);
    if ( !v7 )
      ATL::AtlThrowImpl(-2147024882);
    v8 = *(_DWORD *)(a1 + 40) - 1;
    for ( i = (_QWORD *)((char *)v7 + 16 * v8 + 8 * (unsigned int)v8 + 8); v8 >= 0; --v8 )
    {
      *i = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = i;
      i -= 3;
    }
  }
  v10 = *(_QWORD **)(a1 + 32);
  v11 = *v10;
  wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>(
    v10 + 2,
    *a2);
  *(_QWORD *)(a1 + 32) = v11;
  result = v10;
  v10[1] = 0LL;
  *v10 = a4;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
