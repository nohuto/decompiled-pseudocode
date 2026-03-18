/*
 * XREFs of ??$_lambda_invoker_cdecl_@PEAXPEAU_LOOKASIDE_LIST_EX@@@_lambda_06b16099bfc1f7b9c33b9410b68cf5d0_@@CAXPEAXPEAU_LOOKASIDE_LIST_EX@@@Z @ 0x1C00AEAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0092034 (-Free@-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall _lambda_06b16099bfc1f7b9c33b9410b68cf5d0_::_lambda_invoker_cdecl_<void *,_LOOKASIDE_LIST_EX *>(
        struct _SLIST_ENTRY *Buffer,
        PLOOKASIDE_LIST_EX Lookaside)
{
  NSInstrumentation::CTypeIsolation<180224,704>::Free((__int64)&Lookaside[-1].L.AllocateEx, Buffer);
}
