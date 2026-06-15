/*
 * XREFs of ?AddBridgeSourceEndpointConsumer@CBridgeSourceEndpoint@@UEAAJPEAUIBridgeSourceEndpointConsumer@@@Z @ 0x140079670
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x140079160 (--$_Emplace_reallocate@V-$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CBridgeSourceEndpoint::AddBridgeSourceEndpointConsumer(
        CBridgeSourceEndpoint *this,
        struct IBridgeSourceEndpointConsumer *a2)
{
  RTL_SRWLOCK *v4; // rdi
  _QWORD *v5; // rdx
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IBridgeSourceEndpointConsumer *v9; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+48h] [rbp+10h]

  v4 = (RTL_SRWLOCK *)((char *)this + 96);
  AcquireSRWLockExclusive((PSRWLOCK)this + 12);
  try
  {
    v10 = v4;
    v9 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IBridgeSourceEndpointConsumer *))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = (_QWORD *)*((_QWORD *)this + 14);
    if ( v5 == *((_QWORD **)this + 15) )
    {
      std::vector<wil::com_ptr_t<IBridgeSourceEndpointConsumer,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IBridgeSourceEndpointConsumer,wil::err_returncode_policy>>(
        (__int64 *)this + 13,
        (__int64)v5,
        (__int64 *)&v9);
    }
    else
    {
      v9 = 0LL;
      *v5 = a2;
      *((_QWORD *)this + 14) += 8LL;
    }
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v9);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x94,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\bridgesourceendpoint.cpp",
                           v6);
  }
  return result;
}
