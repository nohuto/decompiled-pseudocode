/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_c5ba6885c59c7d44add3d2e24646e672___ @ 0x1800D8254
 * Callers:
 *     ?DisconnectOffloadStreams@CAudioResourceManager@@QEAAJ$$QEAV?$function@$$A6A_NPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x1800DA9E0 (-DisconnectOffloadStreams@CAudioResourceManager@@QEAAJ$$QEAV-$function@$$A6A_NPEAUIAudioStreamIn.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18003F560 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     std::_Global_new_std::_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioStreamInfo_____lambda_783f8bafea3f8c2f6eb6dded7328b263___ @ 0x1800D8128 (std--_Global_new_std--_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioS.c)
 *     ??0?$function@$$A6AX_N@Z@std@@QEAA@AEBV01@@Z @ 0x1800D8484 (--0-$function@$$A6AX_N@Z@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_c5ba6885c59c7d44add3d2e24646e672___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 i; // r12
  __int64 v8; // rsi
  void (__fastcall *v9)(__int64, _BYTE *); // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  _BYTE v14[64]; // [rsp+28h] [rbp-61h] BYREF
  _BYTE v15[56]; // [rsp+68h] [rbp-21h] BYREF
  _QWORD *v16; // [rsp+A0h] [rbp+17h]

  for ( i = a2; i != a3; i += 8LL )
  {
    v8 = *(_QWORD *)i;
    v9 = *(void (__fastcall **)(__int64, _BYTE *))(**(_QWORD **)i + 384LL);
    std::function<void (bool)>::function<void (bool)>(v14, a4);
    v16 = 0LL;
    v16 = std::_Global_new_std::_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioStreamInfo_____lambda_783f8bafea3f8c2f6eb6dded7328b263___((__int64)v14);
    std::_Func_class<void,>::_Tidy((__int64)v14, v10);
    v9(v8, v15);
  }
  *(_QWORD *)(a1 + 56) = 0LL;
  v11 = *(_QWORD *)(a4 + 56);
  if ( v11 )
  {
    if ( v11 == a4 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 8LL))(v11, a1);
      std::_Func_class<void,>::_Tidy(a4, v12);
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v11;
      *(_QWORD *)(a4 + 56) = 0LL;
    }
  }
  std::_Func_class<void,>::_Tidy(a4, a2);
  return a1;
}
