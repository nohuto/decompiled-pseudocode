/*
 * XREFs of ?RemoveVisual@CompositionLight@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@234@PEAVVisual@234@@Z @ 0x180006470
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionLight::RemoveVisual(
        Windows::UI::Composition::CompositionLight *this,
        struct Windows::UI::Composition::VisualUnorderedCollectionImpl *a2,
        struct Windows::UI::Composition::Visual *a3)
{
  __int64 v4; // r8
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == (Windows::UI::Composition::CompositionLight *)((char *)this + 80) )
  {
    v4 = 0LL;
  }
  else
  {
    if ( a2 != (Windows::UI::Composition::CompositionLight *)((char *)this + 40) )
      Microsoft::WRL2::FailFast::Unexpected(0LL);
    v4 = 1LL;
  }
  v5 = (*(__int64 (__fastcall **)(char *, struct Windows::UI::Composition::Visual *, __int64))(*((_QWORD *)this - 17)
                                                                                             + 304LL))(
         (char *)this - 136,
         a3,
         v4);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9E,
    (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionlight.cpp",
    (const char *)(unsigned int)v5,
    v8);
  return v6;
}
