/*
 * XREFs of ?_Delete_this@?$_Func_impl_no_alloc@P6AXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@0@ZXPEAU1@AEAV23@PEAU1@@std@@EEAAX_N@Z @ 0x180148F90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc<void (*)(InputInfo *,std::unordered_set<unsigned long> &,InputInfo *),void,InputInfo *,std::unordered_set<unsigned long> &,InputInfo *>::_Delete_this(
        void *a1,
        char a2)
{
  if ( a2 )
    operator delete(a1);
}
