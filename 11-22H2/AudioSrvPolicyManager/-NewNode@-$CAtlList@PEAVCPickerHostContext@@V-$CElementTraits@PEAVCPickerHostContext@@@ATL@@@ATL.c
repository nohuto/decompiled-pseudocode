/*
 * XREFs of ?NewNode@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCPickerHostContext@@PEAV312@1@Z @ 0x1800306B0
 * Callers:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x18000EBE0 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180012B04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x1800266C0 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 */

__int64 *__fastcall ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::NewNode(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *result; // rax
  struct ATL::CAtlPlex *v7; // r9
  __int64 v8; // r8
  __int64 *i; // rdx
  __int64 v10; // rdx

  result = (__int64 *)qword_180062C98;
  if ( !qword_180062C98 )
  {
    v7 = ATL::CAtlPlex::Create(&qword_180062C90, (unsigned int)dword_180062CA0, 0x18uLL);
    if ( !v7 )
      ATL::AtlThrowImpl(-2147024882);
    v8 = (unsigned int)(dword_180062CA0 - 1);
    result = (__int64 *)qword_180062C98;
    for ( i = (__int64 *)((char *)v7 + 16 * v8 + 8 * v8 + 8); (int)v8 >= 0; LODWORD(v8) = v8 - 1 )
    {
      *i = (__int64)result;
      result = i;
      qword_180062C98 = (__int64)i;
      i -= 3;
    }
  }
  v10 = *result;
  result[2] = *a2;
  qword_180062C98 = v10;
  result[1] = 0LL;
  *result = a4;
  ++qword_180062C88;
  return result;
}
