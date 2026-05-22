/*
 * XREFs of ?Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801CA49C
 * Callers:
 *     ??0Edge@@QEAA@PEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801C9294 (--0Edge@@QEAA@PEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801C9604 (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180047E38 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$emplace_back@AEAPEAVEdgyControllerClientProxy@@@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAA?A_TAEAPEAVEdgyControllerClientProxy@@@Z @ 0x1801C8FEC (--$emplace_back@AEAPEAVEdgyControllerClientProxy@@@-$vector@V-$ComPtr@VEdgyControllerClientProxy.c)
 *     ??4?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVEdgyControllerClientProxy@@@Z @ 0x1801C9408 (--4-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVEdgyControllerClientProx.c)
 *     ?IsEdge@Edge@@QEBA_NPEBG@Z @ 0x1801C9F1C (-IsEdge@Edge@@QEBA_NPEBG@Z.c)
 */

void __fastcall Edge::Set(Edge *this, unsigned __int16 *a2, struct EdgyControllerClientProxy *a3)
{
  unsigned __int64 v5; // r8
  const char *v6; // r9
  struct EdgyControllerClientProxy **i; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct EdgyControllerClientProxy *v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = a3;
  if ( *((_QWORD *)this + 3) )
  {
    if ( !Edge::IsEdge(this, a2) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x46,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edges.cpp",
        v6);
  }
  else
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a2[v5] );
    std::wstring::assign((void **)this + 1, a2, v5);
  }
  if ( *((_QWORD *)this + 5) )
  {
    if ( !a3 || a3 != *((struct EdgyControllerClientProxy **)this + 5) )
    {
      for ( i = (struct EdgyControllerClientProxy **)*((_QWORD *)this + 13);
            i != *((struct EdgyControllerClientProxy ***)this + 14);
            ++i )
      {
        if ( *i == a3 )
          return;
      }
      std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::emplace_back<EdgyControllerClientProxy * &>(
        (__int64 *)this + 13,
        (__int64 *)&v9);
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::operator=((__int64 *)this + 5, (__int64)a3);
  }
}
