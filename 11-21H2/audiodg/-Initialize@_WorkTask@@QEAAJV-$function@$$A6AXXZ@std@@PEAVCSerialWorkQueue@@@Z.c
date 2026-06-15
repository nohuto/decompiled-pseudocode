/*
 * XREFs of ?Initialize@_WorkTask@@QEAAJV?$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z @ 0x14006808C
 * Callers:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x140068288 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14002DA28 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x14002F864 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x140067AB8 (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall _WorkTask::Initialize(char **a1, __int64 a2, char *a3)
{
  char *v5; // rdi
  std::_Ref_count_base *v6; // rcx
  __int64 *v7; // rcx
  __int64 v8; // rdx
  char *v10; // [rsp+20h] [rbp-38h]

  a1[2] = a3;
  v10 = (char *)operator new(0x50uLL);
  *(_OWORD *)v10 = 0LL;
  *((_DWORD *)v10 + 2) = 1;
  *((_DWORD *)v10 + 3) = 1;
  *(_QWORD *)v10 = &std::_Ref_count_obj2<std::function<void (void)>>::`vftable';
  v5 = v10 + 16;
  std::function<void (void)>::function<void (void)>((__int64)(v10 + 16), a2);
  *a1 = v10 + 16;
  v6 = (std::_Ref_count_base *)a1[1];
  a1[1] = v10;
  if ( v6 )
  {
    std::_Ref_count_base::_Decref(v6);
    v5 = *a1;
  }
  v7 = *(__int64 **)(a2 + 56);
  if ( v7 )
  {
    v8 = *v7;
    LOBYTE(v8) = v7 != (__int64 *)a2;
    (*(void (__fastcall **)(__int64 *, __int64))(*v7 + 32))(v7, v8);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  return v5 == 0LL ? 0x8007000E : 0;
}
