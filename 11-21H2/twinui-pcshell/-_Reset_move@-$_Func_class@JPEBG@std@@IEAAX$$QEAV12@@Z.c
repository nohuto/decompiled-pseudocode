/*
 * XREFs of ?_Reset_move@?$_Func_class@JPEBG@std@@IEAAX$$QEAV12@@Z @ 0x18046A7D0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3f7c4ca579c2955647d5fca56c9af8c5___::CTaskWrapper__lambda_3f7c4ca579c2955647d5fca56c9af8c5_____lambda_3f7c4ca579c2955647d5fca56c9af8c5___ @ 0x1801AE0E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3f7c4ca579c2955647d5fca56c9af8c5___--CTaskW.c)
 *     ??4?$function@$$A6AJPEBG@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18045B61C (--4-$function@$$A6AJPEBG@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18010E4E8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_class<long,unsigned short const *>::_Reset_move(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx

  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      std::_Func_class<void,>::_Tidy(a2, v5);
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
  }
}
