/*
 * XREFs of std::_Func_impl_no_alloc__lambda_217f93733fed947115f4d103a29104db__void_::_Do_call @ 0x180016290
 * Callers:
 *     <none>
 * Callees:
 *     ??$As@UIProcessSubmixProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180002C7C (--$As@UIProcessSubmixProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall std::_Func_impl_no_alloc__lambda_217f93733fed947115f4d103a29104db__void_::_Do_call(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v5 = 0LL;
  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
    result = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD))(*(_QWORD *)v1 + 24LL))(
               v1,
               &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
               &v5);
  else
    result = 0LL;
  if ( (int)result >= 0 )
  {
    if ( v5 )
    {
      result = Microsoft::WRL::ComPtr<IInspectable>::As<IProcessSubmixProxy>(&v5, &v6);
      if ( (int)result >= 0 )
        result = (*(__int64 (__fastcall **)(struct IProcessSubmixManager *, __int64))(*(_QWORD *)g_ProcessSubmixManager
                                                                                    + 72LL))(
                   g_ProcessSubmixManager,
                   v6);
    }
  }
  v3 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = v5;
  if ( v5 )
  {
    v5 = 0LL;
    return ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v4)[2])(v4);
  }
  return result;
}
