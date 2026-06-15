/*
 * XREFs of ?NotifyStreamChange@CBtAudioResourceManager@@AEAAX_N@Z @ 0x180066A50
 * Callers:
 *     wil::details::lambda_call__lambda_6b2b64412140cbdd2cb9231d8e9c566d___::_lambda_call__lambda_6b2b64412140cbdd2cb9231d8e9c566d___ @ 0x1800667FC (wil--details--lambda_call__lambda_6b2b64412140cbdd2cb9231d8e9c566d___--_lambda_call__lambda_6b2b.c)
 *     ?CreateHfpRenderSaDeviceWithDefaultParameters@CBtAudioResourceManager@@AEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x1801140E0 (-CreateHfpRenderSaDeviceWithDefaultParameters@CBtAudioResourceManager@@AEAAJPEAPEAUISaDeviceProx.c)
 *     ?RestoreDisplacedA2dpStreamGroups@CBtAudioResourceManager@@AEAAJXZ @ 0x180116D54 (-RestoreDisplacedA2dpStreamGroups@CBtAudioResourceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18005D644 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ??$_Destroy_range@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@std@@YAXPEAV?$function@$$A6AX_N@Z@0@QEAV10@AEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@0@@Z @ 0x1800662F4 (--$_Destroy_range@V-$allocator@V-$function@$$A6AX_N@Z@std@@@std@@@std@@YAXPEAV-$function@$$A6AX_.c)
 *     ??$_Emplace_reallocate@AEBV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAAPEAV?$function@$$A6AX_N@Z@1@QEAV21@AEBV21@@Z @ 0x18006632C (--$_Emplace_reallocate@AEBV-$function@$$A6AX_N@Z@std@@@-$vector@V-$function@$$A6AX_N@Z@std@@V-$a.c)
 *     ??0?$function@$$A6AX_N@Z@std@@QEAA@AEBV01@@Z @ 0x1800666D4 (--0-$function@$$A6AX_N@Z@std@@QEAA@AEBV01@@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180066930 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?lock_shared@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800C7DDC (-lock_shared@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SR.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CBtAudioResourceManager::NotifyStreamChange(CBtAudioResourceManager *this, char a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 i; // r14
  __int64 v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+30h] [rbp-10h]
  __int64 v11; // [rsp+60h] [rbp+20h] BYREF
  RTL_SRWLOCK *v12; // [rsp+70h] [rbp+30h] BYREF

  v9 = 0LL;
  v4 = 0LL;
  v10 = 0LL;
  wil::srwlock::lock_shared((char *)this + 160, &v12);
  v5 = **((_QWORD **)this + 22);
  v11 = v5;
  v6 = 0LL;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    if ( v6 == v4 )
    {
      std::vector<std::function<void (bool)>>::_Emplace_reallocate<std::function<void (bool)> const &>(
        (__int64 *)&v9,
        v6,
        v5 + 40);
      v4 = v10;
      v6 = *((_QWORD *)&v9 + 1);
    }
    else
    {
      std::function<void (bool)>::function<void (bool)>(v6, v5 + 40);
      v6 += 64LL;
      *((_QWORD *)&v9 + 1) = v6;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>,std::_Iterator_base0>::operator++(&v11);
    v5 = v11;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v12);
  for ( i = v9; i != v6; i += 64LL )
  {
    LOBYTE(v11) = a2;
    v8 = *(_QWORD *)(i + 56);
    if ( !v8 )
    {
      std::_Xbad_function_call();
      break;
    }
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 16LL))(v8, &v11);
  }
  if ( (_QWORD)v9 )
  {
    std::_Destroy_range<std::allocator<std::function<void (bool)>>>(v9, v6);
    std::_Deallocate<16,0>((void *)v9, (v4 - v9) & 0xFFFFFFFFFFFFFFC0uLL);
  }
}
