/*
 * XREFs of ??$_Find_lower_bound@PEAUICompositor@Composition@UI@Windows@@@?$_Tree@V?$_Tmap_traits@PEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@U?$less@PEAUICompositor@Composition@UI@Windows@@@std@@V?$allocator@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@@9@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBQEAUICompositor@Composition@UI@Windows@@@Z @ 0x18012D860
 * Callers:
 *     ??$_Try_emplace@AEBQEAUICompositor@Composition@UI@Windows@@$$V@?$map@PEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@U?$less@PEAUICompositor@Composition@UI@Windows@@@std@@V?$allocator@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@@9@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBQEAUICompositor@Composition@UI@Windows@@@Z @ 0x18012D8B4 (--$_Try_emplace@AEBQEAUICompositor@Composition@UI@Windows@@$$V@-$map@PEAUICompositor@Composition.c)
 *     ?TryGetSettings@CompositionDebugSettingsFactory@Diagnostics@Composition@UI@Windows@@UEAAJPEAUICompositor@345@PEAPEAUICompositionDebugSettings@2345@@Z @ 0x18012DB80 (-TryGetSettings@CompositionDebugSettingsFactory@Diagnostics@Composition@UI@Windows@@UEAAJPEAUICo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<Windows::UI::Composition::ICompositor *,Microsoft::WRL::ComPtr<Windows::UI::Composition::Diagnostics::CompositionDebugSettings>,std::less<Windows::UI::Composition::ICompositor *>,std::allocator<std::pair<Windows::UI::Composition::ICompositor * const,Microsoft::WRL::ComPtr<Windows::UI::Composition::Diagnostics::CompositionDebugSettings>>>,0>>::_Find_lower_bound<Windows::UI::Composition::ICompositor *>(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  unsigned __int64 v5; // r8
  int v6; // eax

  v3 = Windows::UI::Composition::Diagnostics::CompositionDebugSettingsFactory::s_debugSettingsMap;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v4 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v4;
  if ( !*((_BYTE *)v4 + 25) )
  {
    v5 = *a3;
    do
    {
      *(_QWORD *)a2 = v4;
      if ( v4[4] >= v5 )
      {
        *(_QWORD *)(a2 + 16) = v4;
        v6 = 1;
        v4 = (__int64 *)*v4;
      }
      else
      {
        v4 = (__int64 *)v4[2];
        v6 = 0;
      }
      *(_DWORD *)(a2 + 8) = v6;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
  return a2;
}
