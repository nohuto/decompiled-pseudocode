/*
 * XREFs of ?UpdateAllConfigs@CompositionPointerEventRouter@Composition@UI@Windows@@IEAAJW4Enum@InteractionProperty@@@Z @ 0x1801540B8
 * Callers:
 *     ?ClearAll@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJXZ @ 0x1801533D0 (-ClearAll@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureNotReadOnly@CompositionPointerEventRouter@Composition@UI@Windows@@AEAAJXZ @ 0x18006D8DC (-EnsureNotReadOnly@CompositionPointerEventRouter@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?ProcessChange@CompositionPointerEventRouter@Composition@UI@Windows@@IEAAJAEBUInteractionConfigurationInternal@@AEBW4Enum@InteractionProperty@@@Z @ 0x1800B7666 (-ProcessChange@CompositionPointerEventRouter@Composition@UI@Windows@@IEAAJAEBUInteractionConfigu.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPointerEventRouter::UpdateAllConfigs(
        Windows::UI::Composition::CompositionPointerEventRouter *a1)
{
  int Only; // edi
  __int64 v3; // rdx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // [rsp+20h] [rbp-50h] BYREF
  _DWORD v8[4]; // [rsp+28h] [rbp-48h] BYREF
  _DWORD v9[4]; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v10[4]; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v11[2]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v12; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v8[0] = 0;
  v12 = 0LL;
  v7 = 2;
  v8[2] = -1;
  v8[3] = -805306369;
  v9[2] = -1;
  v8[1] = 1;
  v9[0] = 1;
  v9[1] = 1;
  v10[1] = 1;
  v9[3] = -805306369;
  v10[0] = 2;
  v10[2] = -1;
  v10[3] = -805306369;
  v11[0] = 3;
  v11[1] = -805306369;
  Only = Windows::UI::Composition::CompositionPointerEventRouter::EnsureNotReadOnly(a1);
  if ( Only < 0 )
  {
    v3 = 1046LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtpointereventrouter.cpp",
      (const char *)(unsigned int)Only);
    return (unsigned int)Only;
  }
  Only = Windows::UI::Composition::CompositionPointerEventRouter::ProcessChange(
           a1,
           (const struct InteractionConfigurationInternal *)v8,
           (const enum InteractionProperty::Enum *)&v7);
  if ( Only < 0 )
  {
    v3 = 1048LL;
    goto LABEL_3;
  }
  Only = Windows::UI::Composition::CompositionPointerEventRouter::ProcessChange(
           a1,
           (const struct InteractionConfigurationInternal *)v9,
           (const enum InteractionProperty::Enum *)&v7);
  if ( Only < 0 )
  {
    v3 = 1050LL;
    goto LABEL_3;
  }
  Only = Windows::UI::Composition::CompositionPointerEventRouter::ProcessChange(
           a1,
           (const struct InteractionConfigurationInternal *)v10,
           (const enum InteractionProperty::Enum *)&v7);
  if ( Only < 0 )
  {
    v3 = 1052LL;
    goto LABEL_3;
  }
  v5 = Windows::UI::Composition::CompositionPointerEventRouter::ProcessChange(
         a1,
         (const struct InteractionConfigurationInternal *)v11,
         (const enum InteractionProperty::Enum *)&v7);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x41E,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtpointereventrouter.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
