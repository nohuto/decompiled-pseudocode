/*
 * XREFs of ?RuntimeClassInitialize@CompositionEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4EasingFunctionKind@234@@Z @ 0x180079E54
 * Callers:
 *     ?RuntimeClassInitialize@ExponentialEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4CompositionEasingFunctionMode@234@M@Z @ 0x18000C4E8 (-RuntimeClassInitialize@ExponentialEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 *     ?RuntimeClassInitialize@PowerEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4CompositionEasingFunctionMode@234@M@Z @ 0x180079640 (-RuntimeClassInitialize@PowerEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4Co.c)
 *     ?RuntimeClassInitialize@StepEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@H@Z @ 0x180079DEC (-RuntimeClassInitialize@StepEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@H@Z.c)
 *     ?RuntimeClassInitialize@BackEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4CompositionEasingFunctionMode@234@M@Z @ 0x18017523C (-RuntimeClassInitialize@BackEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4Com.c)
 *     ?RuntimeClassInitialize@BounceEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4CompositionEasingFunctionMode@234@HM@Z @ 0x180175400 (-RuntimeClassInitialize@BounceEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4C.c)
 *     ?RuntimeClassInitialize@CircleEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4CompositionEasingFunctionMode@234@@Z @ 0x180175640 (-RuntimeClassInitialize@CircleEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4C.c)
 *     ?RuntimeClassInitialize@ElasticEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4CompositionEasingFunctionMode@234@HM@Z @ 0x180176D5C (-RuntimeClassInitialize@ElasticEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4.c)
 *     ?RuntimeClassInitialize@SineEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4CompositionEasingFunctionMode@234@@Z @ 0x18017D3DC (-RuntimeClassInitialize@SineEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4Com.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionEasingFunction::RuntimeClassInitialize(
        Windows::UI::Composition::CompositionObject *a1,
        struct Windows::UI::Composition::Compositor *a2,
        int a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(a1, a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioneasingfunction.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  else
  {
    *((_DWORD *)a1 + 36) = a3;
    return 0LL;
  }
}
