/*
 * XREFs of std::_Func_impl_no_alloc__lambda_5866d9d9698f5611ecde0c12945e8600__void_::_Do_call @ 0x1800174B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall std::_Func_impl_no_alloc__lambda_5866d9d9698f5611ecde0c12945e8600__void_::_Do_call(__int64 a1)
{
  __int64 (__fastcall ***v1)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  v1 = 0LL;
  v8 = 0LL;
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD *))(*(_QWORD *)v2 + 24LL))(
               v2,
               &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
               &v8);
    v1 = v8;
  }
  else
  {
    result = 0LL;
  }
  if ( (int)result >= 0 && v1 )
  {
    v4 = **v1;
    v5 = v7;
    if ( v7 )
    {
      v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    result = v4(v1, &GUID_3a5c2657_1b5f_474a_96ef_4cfdc4deeb2a, &v7);
    if ( (int)result >= 0 )
      result = (*(__int64 (__fastcall **)(struct IProcessSubmixManager *, __int64))(*(_QWORD *)g_ProcessSubmixManager
                                                                                  + 72LL))(
                 g_ProcessSubmixManager,
                 v7);
    v1 = v8;
  }
  v6 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v1 = v8;
  }
  if ( v1 )
  {
    v8 = 0LL;
    return ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v1)[2])(v1);
  }
  return result;
}
