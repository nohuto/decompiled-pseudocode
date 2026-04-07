/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAUHTIPTEST__@@P6AXPEAU1@@Z$1?TestClose@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180013570
 * Callers:
 *     ??1?$test_common_data@$0A@@details@tip@@QEAA@XZ @ 0x180013500 (--1-$test_common_data@$0A@@details@tip@@QEAA@XZ.c)
 * Callees:
 *     TestClose @ 0x1800F7054 (TestClose.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::unique_storage<wil::details::resource_policy<HTIPTEST__ *,void (*)(HTIPTEST__ *),&void TestClose(HTIPTEST__ *),wistd::integral_constant<unsigned __int64,0>,HTIPTEST__ *,HTIPTEST__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HTIPTEST__ *,void (*)(HTIPTEST__ *),&void TestClose(HTIPTEST__ *),wistd::integral_constant<unsigned __int64,0>,HTIPTEST__ *,HTIPTEST__ *,0,std::nullptr_t>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return TestClose();
  return result;
}
