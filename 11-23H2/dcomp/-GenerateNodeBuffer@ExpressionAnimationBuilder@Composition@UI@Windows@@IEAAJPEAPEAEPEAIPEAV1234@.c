/*
 * XREFs of ?GenerateNodeBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@IEAAJPEAPEAEPEAIPEAV1234@PEAVCompositionAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@111@Z @ 0x18005AA50
 * Callers:
 *     ?ResolveAndCopyNodesToBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAEIPEAV1234@PEAVCompositionAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAI44@Z @ 0x1800578B0 (-ResolveAndCopyNodesToBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAEIPEAV12.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ResolveAndCopyNodesToBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAEIPEAV1234@PEAVCompositionAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAI44@Z @ 0x1800578B0 (-ResolveAndCopyNodesToBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAEIPEAV12.c)
 *     ?ResolveNodesInfo@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAXPEAI@Z @ 0x18005AB40 (-ResolveNodesInfo@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAXPEAI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::GenerateNodeBuffer(
        Windows::UI::Composition::ExpressionAnimationBuilder *this,
        _QWORD *a2,
        unsigned int *a3,
        __int64 a4,
        struct Windows::UI::Composition::CompositionAnimation *a5,
        void *a6,
        __int64 a7,
        __int64 a8,
        _DWORD *a9)
{
  unsigned int v13; // ebx
  HANDLE ProcessHeap; // rax
  LPVOID v15; // rax
  unsigned int v16; // r8d
  signed int v17; // eax
  unsigned int v18; // ebx
  void *retaddr; // [rsp+68h] [rbp+0h]

  *a9 += *((_DWORD *)this + 1);
  if ( *(_DWORD *)this != 1 )
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  Windows::UI::Composition::ExpressionAnimationBuilder::ResolveNodesInfo(this, a3);
  v13 = *a3;
  ProcessHeap = GetProcessHeap();
  v15 = HeapAlloc(ProcessHeap, 0, v13);
  if ( !v15 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v16 = *a3;
  *a2 = v15;
  v17 = Windows::UI::Composition::ExpressionAnimationBuilder::ResolveAndCopyNodesToBuffer(
          this,
          (__int64)v15,
          v16,
          a4,
          a5,
          a6,
          a7,
          a8,
          (__int64)a9);
  v18 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *)"W", 1u, v17, 0x17Fu, 0LL);
  else
    return 0;
  return v18;
}
