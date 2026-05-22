/*
 * XREFs of ?_Delete_this@?$_Func_impl_no_alloc@V?$_Binder@U_Unforced@std@@P8MPCHeadUpdateListener@@EAAX_N@ZPEAV3@AEBU?$_Ph@$00@2@@std@@X_N@std@@EEAAX_N@Z @ 0x1800E1A60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (MPCHeadUpdateListener::*)(bool),MPCHeadUpdateListener *,std::_Ph<1> const &>,void,bool>::_Delete_this(
        void *a1,
        char a2)
{
  if ( a2 )
    operator delete(a1);
}
