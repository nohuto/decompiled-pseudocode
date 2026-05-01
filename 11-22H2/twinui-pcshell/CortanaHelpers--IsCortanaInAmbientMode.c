/*
 * XREFs of CortanaHelpers::IsCortanaInAmbientMode @ 0x180483BC8
 * Callers:
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180484B68 (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetCortanaRegistrySetting@_N@CortanaRegistrySettings@@YAJPEBGP6A_NK@Z_NPEA_N3@Z @ 0x18048047C (--$GetCortanaRegistrySetting@_N@CortanaRegistrySettings@@YAJPEBGP6A_NK@Z_NPEA_N3@Z.c)
 */

bool __fastcall CortanaHelpers::IsCortanaInAmbientMode(__int64 a1, __int64 a2)
{
  char v2; // bl
  int CortanaRegistry; // eax
  unsigned int v4; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v7 = 0;
  CortanaRegistry = CortanaRegistrySettings::GetCortanaRegistrySetting<bool>(L"CortanaInAmbientMode", a2, 0, &v7);
  v4 = CortanaRegistry;
  if ( CortanaRegistry >= 0 )
    return v7 != 0;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBB,
    (int)"onecoreuap\\internal\\shell\\inc\\CortanaRegistrySettings.h",
    (const char *)(unsigned int)CortanaRegistry);
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x87,
    (int)"desktop\\internal\\shell\\inc\\private\\CortanaHelpers.h",
    (const char *)v4);
  return v2;
}
