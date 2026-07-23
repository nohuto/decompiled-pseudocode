/*
 * XREFs of MiWriteValidPteNewPage @ 0x1402EB2DC
 * Callers:
 *     MiTradeActivePage @ 0x1402EB0B4 (MiTradeActivePage.c)
 *     MiCombineInitialInstance @ 0x1402EC920 (MiCombineInitialInstance.c)
 *     MiStealPage @ 0x1403BC5BC (MiStealPage.c)
 *     MiCopyKstack @ 0x14062D030 (MiCopyKstack.c)
 *     MiWriteAweClusterPte @ 0x14064CA58 (MiWriteAweClusterPte.c)
 *     MiTradeBootImagePage @ 0x140B46E5C (MiTradeBootImagePage.c)
 *     MxSwapPages @ 0x140B58AF8 (MxSwapPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 */

__int64 __fastcall MiWriteValidPteNewPage(__int64 *a1, __int64 a2, int a3)
{
  int v3; // esi
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  bool v12; // zf

  v3 = a3;
  if ( a3 )
    v6 = *a1;
  else
    v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  result = (a2 ^ v6) & 0x7F00000000000000LL;
  v8 = result ^ a2;
  if ( v3 )
  {
    *a1 = v8;
    return result;
  }
  result = MiPteInShadowRange((unsigned __int64)a1);
  if ( (_DWORD)result )
  {
    result = MiPteHasShadow(v10, v9, v11);
    if ( (_DWORD)result )
    {
      v3 = 1;
      if ( HIBYTE(word_140C66CFC) )
        goto LABEL_5;
      v12 = (v8 & 1) == 0;
    }
    else
    {
      result = (__int64)KeGetCurrentThread();
      if ( (*(_DWORD *)(*(_QWORD *)(result + 184) + 2172LL) & 0x1000) == 0 )
        goto LABEL_5;
      v12 = (v8 & 1) == 0;
    }
    if ( !v12 )
    {
      result = 0x8000000000000000uLL;
      v8 |= 0x8000000000000000uLL;
    }
  }
LABEL_5:
  *a1 = v8;
  if ( v3 )
    return MiWritePteShadow(a1, v8);
  return result;
}
