/*
 * XREFs of ?NotifyStreamChange@CBtAudioResourceManagerBase@@IEAAX_N@Z @ 0x1800F9890
 * Callers:
 *     wil::details::lambda_call__lambda_254961bb12f0535cea5e965be1582e8b___::_lambda_call__lambda_254961bb12f0535cea5e965be1582e8b___ @ 0x1800F54A0 (wil--details--lambda_call__lambda_254961bb12f0535cea5e965be1582e8b___--_lambda_call__lambda_2549.c)
 *     ?CreateSecondaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x1800F7050 (-CreateSecondaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJPEA.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800F9E74 (-RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$function@$$A6AX_N@Z@std@@QEAA@AEBV01@@Z @ 0x1800D8484 (--0-$function@$$A6AX_N@Z@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@std@@YAXPEAV?$function@$$A6AX_N@Z@0@QEAV10@AEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@0@@Z @ 0x1800F4BF4 (--$_Destroy_range@V-$allocator@V-$function@$$A6AX_N@Z@std@@@std@@@std@@YAXPEAV-$function@$$A6AX_.c)
 *     ??$_Emplace_reallocate@AEBV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAAPEAV?$function@$$A6AX_N@Z@1@QEAV21@AEBV21@@Z @ 0x1800F4C2C (--$_Emplace_reallocate@AEBV-$function@$$A6AX_N@Z@std@@@-$vector@V-$function@$$A6AX_N@Z@std@@V-$a.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800F56FC (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CBtAudioResourceManagerBase::NotifyStreamChange(RTL_SRWLOCK *this, char a2)
{
  __int64 v4; // rdi
  RTL_SRWLOCK *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  void *v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rcx
  __int128 v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+30h] [rbp-10h]
  __int64 v16; // [rsp+70h] [rbp+30h] BYREF
  RTL_SRWLOCK *v17; // [rsp+80h] [rbp+40h]

  v14 = 0LL;
  v4 = 0LL;
  v15 = 0LL;
  v5 = this + 23;
  AcquireSRWLockShared(this + 23);
  v17 = v5;
  v6 = *(_QWORD *)this[25].Ptr;
  v16 = v6;
  v7 = 0LL;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    if ( v7 == v4 )
    {
      std::vector<std::function<void (bool)>>::_Emplace_reallocate<std::function<void (bool)> const &>(
        (__int64 *)&v14,
        v7,
        v6 + 40);
      v4 = v15;
      v7 = *((_QWORD *)&v14 + 1);
    }
    else
    {
      std::function<void (bool)>::function<void (bool)>(v7, v6 + 40);
      v7 += 64LL;
      *((_QWORD *)&v14 + 1) = v7;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>,std::_Iterator_base0>::operator++(
      &v16,
      v8,
      v9,
      v10);
    v6 = v16;
  }
  if ( v5 )
    ReleaseSRWLockShared(v5);
  v11 = (void *)v14;
  v12 = v14;
  if ( (_QWORD)v14 == v7 )
  {
LABEL_12:
    if ( v11 )
    {
      std::_Destroy_range<std::allocator<std::function<void (bool)>>>((__int64)v11, v7);
      std::_Deallocate<16,0>(v11, (v4 - (_QWORD)v11) & 0xFFFFFFFFFFFFFFC0uLL);
    }
  }
  else
  {
    while ( 1 )
    {
      LOBYTE(v16) = a2;
      v13 = *(_QWORD *)(v12 + 56);
      if ( !v13 )
        break;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 16LL))(v13, &v16);
      v12 += 64LL;
      if ( v12 == v7 )
        goto LABEL_12;
    }
    std::_Xbad_function_call();
    CBtAudioResourceManagerBase::NotifyStreamChange_::_1_::dtor_0();
  }
}
