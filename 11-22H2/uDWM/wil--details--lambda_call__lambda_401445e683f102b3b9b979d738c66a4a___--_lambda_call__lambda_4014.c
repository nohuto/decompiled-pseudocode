/*
 * XREFs of wil::details::lambda_call__lambda_401445e683f102b3b9b979d738c66a4a___::_lambda_call__lambda_401445e683f102b3b9b979d738c66a4a___ @ 0x180106438
 * Callers:
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x180019650 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     _CWindowBorder::CreateBorderStructure_::_1_::dtor$11 @ 0x18006741E (_CWindowBorder--CreateBorderStructure_--_1_--dtor$11.c)
 * Callees:
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x18001A784 (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z @ 0x18001A7C8 (-SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::details::lambda_call__lambda_401445e683f102b3b9b979d738c66a4a___::_lambda_call__lambda_401445e683f102b3b9b979d738c66a4a___(
        __int64 a1)
{
  _QWORD *result; // rax
  __int64 v3; // rcx
  __int64 v4; // r8

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    result = *(_QWORD **)a1;
    if ( **(_QWORD **)a1 )
    {
      result = *(_QWORD **)(a1 + 8);
      v3 = result[32];
      if ( v3 )
      {
        CVisualProxy::SetClip(*(CVisualProxy **)(v3 + 16), 0LL);
        return (_QWORD *)CVisual::SetIgnoreClipForHitTest(*(CVisual **)(*(_QWORD *)(a1 + 8) + 256LL), 0, v4);
      }
    }
  }
  return result;
}
