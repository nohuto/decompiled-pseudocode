/*
 * XREFs of ?NewNode@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCVADServer@@PEAV312@1@Z @ 0x18003E3C4
 * Callers:
 *     ?RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x18003E018 (-RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVE.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x1800295E8 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE7C4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 *__fastcall ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::NewNode(
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

  result = (__int64 *)qword_1801CEE70;
  if ( !qword_1801CEE70 )
  {
    v7 = ATL::CAtlPlex::Create(&qword_1801CEE68, (unsigned int)dword_1801CEE78, 24LL);
    if ( !v7 )
      ATL::AtlThrowImpl(-2147024882);
    v8 = (unsigned int)(dword_1801CEE78 - 1);
    result = (__int64 *)qword_1801CEE70;
    for ( i = (__int64 *)((char *)v7 + 16 * v8 + 8 * v8 + 8); (int)v8 >= 0; LODWORD(v8) = v8 - 1 )
    {
      *i = (__int64)result;
      result = i;
      qword_1801CEE70 = (__int64)i;
      i -= 3;
    }
  }
  v10 = *result;
  result[2] = *a2;
  qword_1801CEE70 = v10;
  result[1] = 0LL;
  *result = a4;
  ++qword_1801CEE60;
  return result;
}
