/*
 * XREFs of ?IsBackgroundActivation@KioskPositioner@@AEAA_NPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1805A8B84
 * Callers:
 *     ?ControlGainedForActivation@KioskPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1805A7A50 (-ControlGainedForActivation@KioskPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@.c)
 *     ?InitializePosition@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1805A8AA0 (-InitializePosition@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationR.c)
 * Callees:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180012C88 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

bool __fastcall KioskPositioner::IsBackgroundActivation(
        KioskPositioner *this,
        struct IUnknownVtbl *a2,
        __int64 (__fastcall ***a3)(struct IApplicationView *, GUID *, ViewSizePreferenceHelpers **))
{
  int DetailsForActivation; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknown v7; // [rsp+38h] [rbp+10h] BYREF

  v7.lpVtbl = a2;
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(this, a3, &v7, 0LL);
  if ( DetailsForActivation < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x492,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)DetailsForActivation,
      v5);
  return ((__int64)v7.lpVtbl & 0x11) != 0;
}
