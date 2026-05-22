/*
 * XREFs of ?DeferUntilBootstrapped@InputSystemInternalClientConnection@@QEAAXV?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@std@@@Z @ 0x18012082C
 * Callers:
 *     ??0SystemContextEndpoint@@AEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180087190 (--0SystemContextEndpoint@@AEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ??0InputProcess@@AEAA@XZ @ 0x1800B1580 (--0InputProcess@@AEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1800469A4 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x18008D4B8 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x18008D604 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ??$_Emplace_back_with_unused_capacity@AEBV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@?$vector@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@2@@std@@AEAAAEAV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@1@AEBV21@@Z @ 0x1800F4018 (--$_Emplace_back_with_unused_capacity@AEBV-$function@$$A6AXAEAV-$ComPtr@VDataProviderPrincipal@@.c)
 *     ??$_Emplace_reallocate@AEBV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@?$vector@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@2@@std@@QEAAPEAV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@1@QEAV21@AEBV21@@Z @ 0x1800F4084 (--$_Emplace_reallocate@AEBV-$function@$$A6AXAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@.c)
 *     ??R?$_Func_class@XAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@std@@QEBAXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z @ 0x1800F441C (--R-$_Func_class@XAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@std@@QEBAXAEAV-$ComPtr@V.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputSystemInternalClientConnection::DeferUntilBootstrapped(
        struct Microsoft::Bamo::BaseBamoConnection *a1,
        Microsoft::BamoImpl::BamoImplObject *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  const char *v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rdx
  bool v8; // zf
  __int64 *v9; // rcx
  Microsoft::BamoImpl::BamoImplObject *v11[3]; // [rsp+20h] [rbp-28h] BYREF

  v11[2] = a2;
  if ( *((_QWORD *)a1 + 29) )
  {
    Microsoft::Bamo::Lock::Lock(v11, a1);
    std::_Func_class<void,Microsoft::WRL::ComPtr<DataProviderPrincipal> &>::operator()((__int64)a2);
    Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v11, v3, v4, v5);
  }
  else
  {
    v7 = *((_QWORD *)a1 + 31);
    v8 = v7 == *((_QWORD *)a1 + 32);
    v9 = (__int64 *)((char *)a1 + 240);
    if ( v8 )
      std::vector<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>>::_Emplace_reallocate<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)> const &>(
        v9,
        v7,
        (__int64)a2);
    else
      std::vector<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>>::_Emplace_back_with_unused_capacity<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)> const &>(
        (__int64)v9,
        (__int64)a2);
  }
  return std::_Func_class<void,>::_Tidy((__int64)a2, v6);
}
