/*
 * XREFs of ?OnEdgyCompositionUpdateStatic@EdgyConnection@@CAJPEAXPEBXH@Z @ 0x1801C7F60
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnEdgyCompositionUpdate@EdgyConnection@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801C7EF8 (-OnEdgyCompositionUpdate@EdgyConnection@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 */

__int64 __fastcall EdgyConnection::OnEdgyCompositionUpdateStatic(
        EdgyConnection *a1,
        const struct EdgyCompositionConfigurationUpdateEx *a2,
        __int64 a3)
{
  int v3; // r9d
  int v4; // r9d
  const char *v5; // r9
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_DWORD *)a2 + 2);
  if ( !v3 || (v4 = v3 - 1) == 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x8F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyconnection.cpp",
      (const char *)0x80004001LL,
      v7);
  v5 = (const char *)(unsigned int)(v4 - 1);
  if ( (unsigned int)v5 <= 1 )
  {
    if ( (_DWORD)a3 != 152 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x99,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyconnection.cpp",
        v5);
    EdgyConnection::OnEdgyCompositionUpdate(a1, a2, a3, v5);
  }
  return 0LL;
}
