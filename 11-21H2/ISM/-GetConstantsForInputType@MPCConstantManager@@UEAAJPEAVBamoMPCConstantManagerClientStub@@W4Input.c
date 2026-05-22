/*
 * XREFs of ?GetConstantsForInputType@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEAVBamoAsyncResult_string_Proxy@@@Z @ 0x180095600
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180082A64 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?CheckTypeExistence@MPCConstantManager@@QEAA_NW4InputType@@@Z @ 0x180094E60 (-CheckTypeExistence@MPCConstantManager@@QEAA_NW4InputType@@@Z.c)
 *     ?GetConstantNamesString@MPCConstantManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4InputType@@@Z @ 0x180095300 (-GetConstantNamesString@MPCConstantManager@@AEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCConstantManager::GetConstantsForInputType(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v6; // rbx
  _QWORD *v8; // rdx
  unsigned int v9; // ebx
  _QWORD v10[4]; // [rsp+20h] [rbp-48h] BYREF

  v6 = a4 + 8;
  if ( !MPCConstantManager::CheckTypeExistence(a1, a3) )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 32LL))(v6, 2147942487LL);
  MPCConstantManager::GetConstantNamesString(a1, (__int64)v10, a3);
  v8 = v10;
  if ( v10[3] >= 8uLL )
    v8 = (_QWORD *)v10[0];
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 24LL))(v6, v8);
  std::wstring::_Tidy_deallocate((__int64)v10);
  return v9;
}
