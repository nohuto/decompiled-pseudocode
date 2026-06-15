/*
 * XREFs of ?UpdateAuxiliaryInputForStreamGroup@@YAXAEBVWeakRef@WRL@Microsoft@@_N@Z @ 0x1801020C8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_1f31b8697ed1c25c33575d9f78ad2385__void_::_Do_call @ 0x1800FB0E0 (std--_Func_impl_no_alloc__lambda_1f31b8697ed1c25c33575d9f78ad2385__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_65aab9f6ed5defcbad7cd8d369fe750d__void_::_Do_call @ 0x180105F80 (std--_Func_impl_no_alloc__lambda_65aab9f6ed5defcbad7cd8d369fe750d__void_--_Do_call.c)
 * Callees:
 *     <none>
 */

void __fastcall UpdateAuxiliaryInputForStreamGroup(const struct Microsoft::WRL::WeakRef *a1, bool a2)
{
  CAudioResourceManager *v3; // rcx

  v3 = 0LL;
  if ( g_AudioResourceManager )
    v3 = (struct IAudioResourceManager *)((char *)g_AudioResourceManager - 8);
  CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup(v3, a1, a2);
}
