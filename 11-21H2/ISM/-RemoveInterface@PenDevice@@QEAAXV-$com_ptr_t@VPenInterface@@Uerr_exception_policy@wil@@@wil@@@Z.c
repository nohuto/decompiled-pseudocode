/*
 * XREFs of ?RemoveInterface@PenDevice@@QEAAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18018A1FC
 * Callers:
 *     ?RemoveRIMDevice@PenDeviceManager@@QEAAXPEAX@Z @ 0x180187B44 (-RemoveRIMDevice@PenDeviceManager@@QEAAXPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?erase@?$vector@V?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x18018AA18 (-erase@-$vector@V-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-$com.c)
 *     ?RemoveInterface@HapticsDevice@@QEAAXV?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18018E3BC (-RemoveInterface@HapticsDevice@@QEAAXV-$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PenDevice::RemoveInterface(__int64 a1, __int64 *a2)
{
  _QWORD **v4; // rcx
  _QWORD *v5; // r8
  HapticsDevice *v6; // rbx
  __int64 v7; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v10; // [rsp+38h] [rbp+10h]

  v10 = a2;
  v4 = (_QWORD **)(a1 + 80);
  v5 = *v4;
  if ( *v4 != *(_QWORD **)(a1 + 88) )
  {
    do
    {
      if ( *v5 == *a2 )
        break;
      ++v5;
    }
    while ( v5 != *(_QWORD **)(a1 + 88) );
    if ( v5 != *(_QWORD **)(a1 + 88) )
      std::vector<wil::com_ptr_t<PenInterface,wil::err_exception_policy>>::erase(v4, &v9);
  }
  v6 = *(HapticsDevice **)(a1 + 104);
  if ( v6 )
  {
    v7 = *(_QWORD *)(*a2 + 136);
    v9 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    HapticsDevice::RemoveInterface(v6);
  }
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(a2);
}
