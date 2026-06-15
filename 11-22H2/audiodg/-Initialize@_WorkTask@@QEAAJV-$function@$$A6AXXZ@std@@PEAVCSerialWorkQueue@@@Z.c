/*
 * XREFs of ?Initialize@_WorkTask@@QEAAJV?$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z @ 0x14006FF6C
 * Callers:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1400701BC (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1400280E4 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14003833E (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x140038558 (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall _WorkTask::Initialize(_QWORD *a1, __int64 a2, __int64 a3)
{
  std::_Ref_count_base *v5; // rcx
  unsigned int v6; // ebx
  __int64 *v7; // rcx
  __int64 v8; // rdx
  _DWORD *v10; // [rsp+20h] [rbp-38h]

  a1[2] = a3;
  v10 = operator new(0x50uLL);
  *(_OWORD *)v10 = 0LL;
  v10[2] = 1;
  v10[3] = 1;
  *(_QWORD *)v10 = &std::_Ref_count_obj2<std::function<void (void)>>::`vftable';
  std::function<void (void)>::function<void (void)>((__int64)(v10 + 4), a2);
  *a1 = v10 + 4;
  v5 = (std::_Ref_count_base *)a1[1];
  a1[1] = v10;
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  v6 = *a1 == 0LL ? 0x8007000E : 0;
  v7 = *(__int64 **)(a2 + 56);
  if ( v7 )
  {
    v8 = *v7;
    LOBYTE(v8) = v7 != (__int64 *)a2;
    (*(void (__fastcall **)(__int64 *, __int64))(*v7 + 32))(v7, v8);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  return v6;
}
