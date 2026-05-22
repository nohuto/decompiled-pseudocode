/*
 * XREFs of ?SetFaceVisibility@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@QEAAJW4CompositionCubeMapFace@2345@_N@Z @ 0x1801811E0
 * Callers:
 *     ?SetFaceVisibility@Partner@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAAJW4CompositionCubeMapFace@3456@E@Z @ 0x180181270 (-SetFaceVisibility@Partner@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAAJW4Composi.c)
 * Callees:
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::CompositionSkyBoxBrush::SetFaceVisibility(
        __int64 a1,
        int a2,
        char a3)
{
  char v5; // al
  char v6; // cl
  unsigned __int8 v7; // cl
  const char *v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 <= 5 )
  {
    v5 = 1 << a2;
    v6 = *(_BYTE *)(a1 + 177);
    if ( a3 )
      v7 = v5 | v6;
    else
      v7 = ~v5 & v6;
    *(_BYTE *)(a1 + 177) = v7;
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
      *(_DWORD *)(a1 + 128),
      0,
      v7);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x246,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionskyboxbrush.cpp",
      (const char *)0x80070057LL,
      (int)"Invalid cube map face value.",
      v8);
    return 2147942487LL;
  }
}
