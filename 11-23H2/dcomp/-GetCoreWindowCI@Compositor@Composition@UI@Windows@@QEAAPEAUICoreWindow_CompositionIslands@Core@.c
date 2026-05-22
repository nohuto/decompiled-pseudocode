/*
 * XREFs of ?GetCoreWindowCI@Compositor@Composition@UI@Windows@@QEAAPEAUICoreWindow_CompositionIslands@Core@34@XZ @ 0x18008B604
 * Callers:
 *     ?RuntimeClassInitialize@Compositor@Composition@UI@Windows@@QEAAJPEAUIDispatcherQueue@System@4@PEAUICoreWindow@Core@34@PEAUIUnknown@@PEAVCompositorController@8234@W4CreationFlags@CompositorCommon@234@W4DeviceVersion@DirectComposition@@@Z @ 0x18001CFA4 (-RuntimeClassInitialize@Compositor@Composition@UI@Windows@@QEAAJPEAUIDispatcherQueue@System@4@PE.c)
 *     ?CreateTargetForCoreWindow@Compositor@Composition@UI@Windows@@QEAAJPEAPEAVCompositionIslandTarget@234@@Z @ 0x18010F540 (-CreateTargetForCoreWindow@Compositor@Composition@UI@Windows@@QEAAJPEAPEAVCompositionIslandTarge.c)
 *     ?PostDestroy@CompositionIslandTarget@Composition@UI@Windows@@UEAAXXZ @ 0x180159FD0 (-PostDestroy@CompositionIslandTarget@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

struct Windows::UI::Core::ICoreWindow_CompositionIslands *__fastcall Windows::UI::Composition::Compositor::GetCoreWindowCI(
        Windows::UI::Composition::Compositor *this)
{
  char *v1; // rdi
  __int64 (__fastcall ***v2)(_QWORD, GUID *, char *); // rsi
  __int64 (__fastcall *v3)(_QWORD, GUID *, char *); // rbx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (char *)this + 480;
  if ( !*((_QWORD *)this + 60) )
  {
    v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*((_QWORD *)this + 59);
    if ( v2 )
    {
      v3 = **v2;
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)this + 60);
      v4 = v3(v2, &GUID_a7ff5b48_94e0_40e6_8a80_228482b688ba, v1);
      if ( v4 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xC6,
          (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
          (const char *)(unsigned int)v4,
          v6);
    }
  }
  return *(struct Windows::UI::Core::ICoreWindow_CompositionIslands **)v1;
}
