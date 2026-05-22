/*
 * XREFs of ?DeferUntilBootstrapped@InputSystemInternalClientConnection@@QEAAXV?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@std@@@Z @ 0x18013C17C
 * Callers:
 *     ??0SystemContextEndpoint@@AEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18009E354 (--0SystemContextEndpoint@@AEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ??0InputProcess@@AEAA@XZ @ 0x1800CA6F8 (--0InputProcess@@AEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x18004E88C (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1800A40D4 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1800A41E8 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ??R?$_Func_class@XAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@std@@QEBAXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z @ 0x18010E4B4 (--R-$_Func_class@XAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@std@@QEBAXAEAV-$ComPtr@V.c)
 *     ??$_Emplace_reallocate@AEBV?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@std@@@?$vector@V?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@std@@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@std@@@2@@std@@QEAAPEAV?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@1@QEAV21@AEBV21@@Z @ 0x18013BD94 (--$_Emplace_reallocate@AEBV-$function@$$A6AXAEAV-$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Mic.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall InputSystemInternalClientConnection::DeferUntilBootstrapped(
        struct Microsoft::Bamo::BaseBamoConnection *a1,
        Microsoft::BamoImpl::BamoImplObject *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  const char *v6; // r9
  __int64 *v7; // rcx
  __int64 v8; // rsi
  __int64 (__fastcall ***v9)(_QWORD, __int64); // rcx
  Microsoft::BamoImpl::BamoImplObject *v11[3]; // [rsp+20h] [rbp-28h] BYREF

  v11[2] = a2;
  if ( *((_QWORD *)a1 + 31) )
  {
    Microsoft::Bamo::Lock::Lock(v11, a1);
    std::_Func_class<void,Microsoft::WRL::ComPtr<DataProviderPrincipal> &>::operator()((__int64)a2);
    Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v11, v4, v5, v6);
  }
  else
  {
    v7 = (__int64 *)((char *)a1 + 256);
    v8 = *((_QWORD *)a1 + 33);
    if ( v8 == *((_QWORD *)a1 + 34) )
    {
      std::vector<std::function<void (Microsoft::WRL::ComPtr<BamoInputSystemInternalProxy> &)>>::_Emplace_reallocate<std::function<void (Microsoft::WRL::ComPtr<BamoInputSystemInternalProxy> &)> const &>(
        v7,
        *((_QWORD *)a1 + 33),
        (__int64)a2);
    }
    else
    {
      v11[0] = *((Microsoft::BamoImpl::BamoImplObject **)a1 + 33);
      *(_QWORD *)(v8 + 56) = 0LL;
      v9 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)a2 + 7);
      if ( v9 )
        *(_QWORD *)(v8 + 56) = (**v9)(v9, v8);
      *((_QWORD *)a1 + 33) += 64LL;
    }
  }
  return std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)a2, (__int64)a2);
}
