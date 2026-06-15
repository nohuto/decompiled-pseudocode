/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_IAudioStreamInfo_________lambda_65a86acbe82ac79a9aa5697306fff9e4___ @ 0x18003F820
 * Callers:
 *     ?ForEachStream@CBaseStreamGroupProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x18003F730 (-ForEachStream@CBaseStreamGroupProxy@@UEAAXV-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18003F560 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??R?$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEBAXPEAUIAudioStreamInfo@@@Z @ 0x18004B364 (--R-$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEBAXPEAUIAudioStreamInfo@@@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_IAudioStreamInfo_________lambda_65a86acbe82ac79a9aa5697306fff9e4___(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4)
{
  _QWORD *i; // r14
  __int64 v8; // rcx
  __int64 v9; // rdx

  for ( i = (_QWORD *)a2; i != a3; ++i )
    std::_Func_class<void,IAudioStreamInfo *>::operator()(a4, *i);
  *(_QWORD *)(a1 + 56) = 0LL;
  v8 = *(_QWORD *)(a4 + 56);
  if ( v8 )
  {
    if ( v8 == a4 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 8LL))(v8, a1);
      std::_Func_class<void,>::_Tidy(a4, v9);
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v8;
      *(_QWORD *)(a4 + 56) = 0LL;
    }
  }
  std::_Func_class<void,>::_Tidy(a4, a2);
  return a1;
}
