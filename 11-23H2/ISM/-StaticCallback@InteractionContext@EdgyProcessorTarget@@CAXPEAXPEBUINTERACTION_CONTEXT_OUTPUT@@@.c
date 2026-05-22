/*
 * XREFs of ?StaticCallback@InteractionContext@EdgyProcessorTarget@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1801CC0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@EdgyImpl@@QEAAXXZ @ 0x1801CCA54 (-Reset@EdgyImpl@@QEAAXXZ.c)
 */

void __fastcall EdgyProcessorTarget::InteractionContext::StaticCallback(
        __int64 *a1,
        const struct INTERACTION_CONTEXT_OUTPUT *a2)
{
  __int64 v2; // rax
  EdgyImpl *v3; // rcx

  if ( (unsigned int)(*(_DWORD *)a2 - 4) <= 1 )
  {
    v2 = *a1;
    v3 = (EdgyImpl *)(*(_QWORD *)(*a1 + 120) + 80LL);
    *(_DWORD *)(v2 + 32) = 1;
    EdgyImpl::Reset(v3);
  }
}
