/*
 * XREFs of ?OnEdgyCompositionUpdate@EdgyConnection@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801C7EF8
 * Callers:
 *     ?OnEdgyCompositionUpdateStatic@EdgyConnection@@CAJPEAXPEBXH@Z @ 0x1801C7F60 (-OnEdgyCompositionUpdateStatic@EdgyConnection@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801C96FC (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 *     ?Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801CA3F4 (-Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 */

void __fastcall EdgyConnection::OnEdgyCompositionUpdate(
        EdgyConnection *this,
        const struct EdgyCompositionConfigurationUpdateEx *a2,
        __int64 a3,
        const char *a4)
{
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)a2 + 2) == 2 )
  {
    if ( Edges::AddOrUpdate((EdgyConnection *)((char *)this + 72), a2) < 0 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xAB,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyconnection.cpp",
        v4);
  }
  else
  {
    if ( *((_DWORD *)a2 + 2) != 3 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xB5,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyconnection.cpp",
        a4);
    Edges::Remove((EdgyConnection *)((char *)this + 72), a2);
  }
}
