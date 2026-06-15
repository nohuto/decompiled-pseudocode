/*
 * XREFs of ?NewNode@?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCSubmixImpl@@PEAV312@1@Z @ 0x140007338
 * Callers:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z @ 0x1400074C0 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x1400136A8 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B99C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 *__fastcall ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::NewNode(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *result; // rax
  __int64 v7; // rdx
  struct ATL::CAtlPlex *v8; // r9
  __int64 v9; // r8
  __int64 *i; // rdx

  result = (__int64 *)qword_1400CEB10;
  if ( !qword_1400CEB10 )
  {
    v8 = ATL::CAtlPlex::Create(&qword_1400CEB08, (unsigned int)dword_1400CEB18, 0x18uLL);
    if ( !v8 )
      ATL::AtlThrowImpl(-2147024882);
    v9 = (unsigned int)(dword_1400CEB18 - 1);
    result = (__int64 *)qword_1400CEB10;
    for ( i = (__int64 *)((char *)v8 + 16 * v9 + 8 * v9 + 8); (int)v9 >= 0; LODWORD(v9) = v9 - 1 )
    {
      *i = (__int64)result;
      result = i;
      qword_1400CEB10 = (__int64)i;
      i -= 3;
    }
  }
  v7 = *result;
  result[2] = *a2;
  qword_1400CEB10 = v7;
  result[1] = 0LL;
  *result = a4;
  ++qword_1400CEB00;
  return result;
}
