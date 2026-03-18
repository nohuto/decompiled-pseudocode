/*
 * XREFs of ??0CGradientBrushMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C00AFEEC
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CBrushMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C0030314 (--0CBrushMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall DirectComposition::CGradientBrushMarshaler::CGradientBrushMarshaler(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  DirectComposition::CBrushMarshaler::CBrushMarshaler((_QWORD *)a1, a2);
  *(_QWORD *)(a1 + 72) = 2LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  result = a1;
  *(_DWORD *)(a1 + 80) = 1;
  return result;
}
