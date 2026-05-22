/*
 * XREFs of ?Set@Edge@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801CA554
 * Callers:
 *     ??0Edge@@QEAA@PEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801C932C (--0Edge@@QEAA@PEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801C96FC (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180047E38 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsEdge@Edge@@QEBA_NPEBG@Z @ 0x1801C9F1C (-IsEdge@Edge@@QEBA_NPEBG@Z.c)
 */

void __fastcall Edge::Set(void **this, const struct EdgyCompositionConfigurationUpdateEx *a2)
{
  void *v2; // rax
  unsigned __int16 *v4; // rdx
  unsigned __int64 v6; // r8
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(void **)a2;
  v4 = (unsigned __int16 *)((char *)a2 + 24);
  *this = v2;
  if ( this[3] )
  {
    if ( !Edge::IsEdge((Edge *)this, v4) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2A,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edges.cpp",
        v7);
  }
  else
  {
    v6 = -1LL;
    do
      ++v6;
    while ( v4[v6] );
    std::wstring::assign(this + 1, v4, v6);
  }
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 4);
}
