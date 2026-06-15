/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@VCPowerReference@@@std@@EEAAXXZ @ 0x18000AB10
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180009110 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800483C0 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Ref_count_obj2<CPowerReference>::_Destroy(_QWORD *a1)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx
  std::_Ref_count_base *v5; // rcx
  std::_Ref_count_base *v6; // rcx
  std::_Ref_count_base *v7; // rcx
  volatile signed __int32 *v8; // rbx
  __int64 v9; // r8
  _QWORD v10[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v11[9]; // [rsp+30h] [rbp-48h] BYREF

  if ( a1[10] )
  {
    std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(v10, a1 + 10, g_powerReferenceManager);
    v11[0] = off_18016C030;
    v11[1] = v10[0];
    v11[2] = v10[1];
    v11[7] = v11;
    CSerialWorkQueue::QueueWorkItem(v9 + 440, v11);
  }
  v2 = (std::_Ref_count_base *)a1[15];
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (std::_Ref_count_base *)a1[13];
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  v4 = (std::_Ref_count_base *)a1[11];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v5 = (std::_Ref_count_base *)a1[9];
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  v6 = (std::_Ref_count_base *)a1[7];
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  v7 = (std::_Ref_count_base *)a1[5];
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  v8 = (volatile signed __int32 *)a1[3];
  if ( v8 && _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
    if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
  }
}
