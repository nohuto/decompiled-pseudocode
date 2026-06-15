/*
 * XREFs of ?LockServer@CComClassFactory@ATL@@UEAAJH@Z @ 0x14004CD40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComClassFactory::LockServer(ATL::CComClassFactory *this, int a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)ATL::_pAtlModule;
  if ( a2 )
    (*(void (**)(void))(v2 + 8))();
  else
    (*(void (**)(void))(v2 + 16))();
  return 0LL;
}
