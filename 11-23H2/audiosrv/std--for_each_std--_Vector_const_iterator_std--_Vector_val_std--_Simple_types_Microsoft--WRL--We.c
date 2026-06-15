/*
 * XREFs of std::for_each_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_530575f8b419a08780554bb070101504___ @ 0x18003F8C8
 * Callers:
 *     ?ForEachStream@CBaseStreamGroupProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x18003F730 (-ForEachStream@CBaseStreamGroupProxy@@UEAAXV-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18003F560 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     _lambda_530575f8b419a08780554bb070101504_::operator() @ 0x18003F988 (_lambda_530575f8b419a08780554bb070101504_--operator().c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::for_each_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_530575f8b419a08780554bb070101504___(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 *i; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h]

  v13 = a4;
  v12 = a1;
  for ( i = (__int64 *)a2; i != a3; ++i )
  {
    v8 = *i;
    v12 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    lambda_530575f8b419a08780554bb070101504_::operator()(a4, &v12);
  }
  *(_QWORD *)(a1 + 56) = 0LL;
  v9 = *(_QWORD *)(a4 + 56);
  if ( v9 )
  {
    if ( v9 == a4 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, a1);
      std::_Func_class<void,>::_Tidy(a4, v10);
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v9;
      *(_QWORD *)(a4 + 56) = 0LL;
    }
  }
  std::_Func_class<void,>::_Tidy(a4, a2);
  return a1;
}
