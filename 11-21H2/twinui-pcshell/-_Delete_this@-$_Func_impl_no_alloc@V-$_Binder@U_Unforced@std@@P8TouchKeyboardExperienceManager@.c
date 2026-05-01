/*
 * XREFs of ?_Delete_this@?$_Func_impl_no_alloc@V?$_Binder@U_Unforced@std@@P8TouchKeyboardExperienceManager@@EAAJPEBG@ZPEAV3@AEBU?$_Ph@$00@2@@std@@JPEBG@std@@EEAAX_N@Z @ 0x18046A500
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$07$0A@@std@@YAXPEAX_K@Z @ 0x18031A808 (--$_Deallocate@$07$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,long (TouchKeyboardExperienceManager::*)(unsigned short const *),TouchKeyboardExperienceManager *,std::_Ph<1> const &>,long,unsigned short const *>::_Delete_this(
        void *a1,
        char a2,
        __int64 a3)
{
  if ( a2 )
    std::_Deallocate<8,0>(a1, 0x28uLL, a3);
}
