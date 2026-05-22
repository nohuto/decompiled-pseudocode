/*
 * XREFs of ?GetPointerWheelConfig@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJPEAPEAVInteractionSourceConfiguration@2345@@Z @ 0x18011D994
 * Callers:
 *     ?get_PointerWheelConfig@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUIInteractionSourceConfiguration@3456@@Z @ 0x18011E980 (-get_PointerWheelConfig@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJPE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$MakeAndInitialize2@VInteractionSourceConfiguration@Interactions@Composition@UI@Windows@@V12345@PEAVCompositor@345@PEAVVisualInteractionSource@2345@@Details@WRL2@Microsoft@@YAJPEAPEAVInteractionSourceConfiguration@Interactions@Composition@UI@Windows@@$$QEAPEAVCompositor@567@$$QEAPEAVVisualInteractionSource@4567@@Z @ 0x18011C4C8 (--$MakeAndInitialize2@VInteractionSourceConfiguration@Interactions@Composition@UI@Windows@@V1234.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::GetPointerWheelConfig(
        Windows::UI::Composition::Interactions::VisualInteractionSource *this,
        struct Windows::UI::Composition::Interactions::InteractionSourceConfiguration **a2)
{
  Microsoft::WRL2::NestableRuntimeClass **v2; // rbx
  struct Windows::UI::Composition::Compositor *v4; // rax
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::UI::Composition::Interactions::VisualInteractionSource *v9; // [rsp+30h] [rbp+8h] BYREF
  struct Windows::UI::Composition::Compositor *v10; // [rsp+40h] [rbp+18h] BYREF

  v2 = (Microsoft::WRL2::NestableRuntimeClass **)((char *)this + 256);
  if ( *((_QWORD *)this + 32)
    || (v4 = (struct Windows::UI::Composition::Compositor *)*((_QWORD *)this + 3),
        v9 = this,
        v10 = v4,
        v5 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Interactions::InteractionSourceConfiguration,Windows::UI::Composition::Interactions::InteractionSourceConfiguration,Windows::UI::Composition::Compositor *,Windows::UI::Composition::Interactions::VisualInteractionSource *>(
               (Windows::UI::Composition::CompositionObject **)this + 32,
               &v10,
               &v9),
        v6 = v5,
        v5 >= 0) )
  {
    if ( *v2 )
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(*v2);
    *a2 = *v2;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E7,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioninteractionsource.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
