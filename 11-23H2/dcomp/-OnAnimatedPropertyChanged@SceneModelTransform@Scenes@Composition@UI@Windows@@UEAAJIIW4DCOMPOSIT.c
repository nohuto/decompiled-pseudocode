/*
 * XREFs of ?OnAnimatedPropertyChanged@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180192BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnAnimatedPropertyChanged@CompositionObject@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x18006DAE0 (-OnAnimatedPropertyChanged@CompositionObject@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRE.c)
 *     ?OnAnimatedPropertyChanged@ComponentTransform3D@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x1800722E0 (-OnAnimatedPropertyChanged@ComponentTransform3D@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EX.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneModelTransform::OnAnimatedPropertyChanged(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        char a6,
        float *a7,
        __int16 a8)
{
  __int64 v8; // r10
  int v9; // ebx
  __int64 v10; // rdx
  int v12; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8 = *(_QWORD *)(a1 + 152);
  LOBYTE(v12) = a5;
  if ( a2 == *(_DWORD *)(v8 + 128) )
  {
    v9 = Windows::UI::Composition::ComponentTransform3D::OnAnimatedPropertyChanged(v8, a2, a3, a4, v12, a6, a7, a8);
    if ( v9 < 0 )
    {
      v10 = 143LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtscenemodeltransform.cpp",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
  }
  else
  {
    v9 = Windows::UI::Composition::CompositionObject::OnAnimatedPropertyChanged(a1, a2, a3, a4, a5, a6, (__int64)a7, a8);
    if ( v9 < 0 )
    {
      v10 = 154LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
