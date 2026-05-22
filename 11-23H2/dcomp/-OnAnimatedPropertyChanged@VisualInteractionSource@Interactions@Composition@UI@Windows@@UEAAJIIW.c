/*
 * XREFs of ?OnAnimatedPropertyChanged@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x18011DAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnAnimatedPropertyChanged@CompositionObject@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x18006DAE0 (-OnAnimatedPropertyChanged@CompositionObject@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRE.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ?SetRailsEnabledForAxis@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAXW4ScrollAxis@@_N@Z @ 0x18011E0DC (-SetRailsEnabledForAxis@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAXW4Scro.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::OnAnimatedPropertyChanged(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        char a6,
        _BYTE *a7,
        __int16 a8)
{
  __int64 v9; // r8
  unsigned int v10; // ecx
  int v12; // eax
  unsigned int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a2 == *(_DWORD *)(*(_QWORD *)(a1 + 240) + 128LL) )
  {
    v9 = a3 - 13;
    if ( (_DWORD)v9 )
    {
      if ( (_DWORD)v9 != 1 )
        Microsoft::WRL2::FailFast::Unexpected(0LL);
      v10 = 1;
    }
    else
    {
      v10 = 0;
    }
    LOBYTE(v9) = *a7;
    Windows::UI::Composition::Interactions::VisualInteractionSource::SetRailsEnabledForAxis(a1, v10, v9);
    return 0LL;
  }
  v12 = Windows::UI::Composition::CompositionObject::OnAnimatedPropertyChanged(a1, a2, a3, a4, a5, a6, (__int64)a7, a8);
  v13 = v12;
  if ( v12 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x11F,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioninteractionsource.cpp",
    (const char *)(unsigned int)v12);
  return v13;
}
