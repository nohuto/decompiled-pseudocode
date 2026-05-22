/*
 * XREFs of ?RuntimeClassInitialize@SceneBoundingBox@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z @ 0x18018B9D0
 * Callers:
 *     ??$MakeAndInitialize2@VSceneBoundingBox@Scenes@Composition@UI@Windows@@V12345@AEAPEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVSceneBoundingBox@Scenes@Composition@UI@Windows@@AEAPEAVCompositor@567@@Z @ 0x180131DD0 (--$MakeAndInitialize2@VSceneBoundingBox@Scenes@Composition@UI@Windows@@V12345@AEAPEAVCompositor@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneBoundingBox::RuntimeClassInitialize(
        Windows::UI::Composition::Scenes::SceneBoundingBox *this,
        struct Windows::UI::Composition::Compositor *a2)
{
  int v3; // edi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(this, a2);
  result = 0LL;
  if ( v3 >= 0 )
  {
    *((_QWORD *)this + 20) = 0LL;
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtspatialbounds.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  return result;
}
