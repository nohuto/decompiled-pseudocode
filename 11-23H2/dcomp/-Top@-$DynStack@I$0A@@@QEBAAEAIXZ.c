/*
 * XREFs of ?Top@?$DynStack@I$0A@@@QEBAAEAIXZ @ 0x180095578
 * Callers:
 *     ?ProcessEndPrecedenceToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ @ 0x180059020 (-ProcessEndPrecedenceToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall DynStack<unsigned int,0>::Top(__int64 a1)
{
  int v1; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_DWORD *)(a1 + 24);
  if ( !v1 )
    ModuleFailFastForHRESULT(2147946717LL, retaddr);
  return *(_QWORD *)a1 + 4LL * (unsigned int)(v1 - 1);
}
