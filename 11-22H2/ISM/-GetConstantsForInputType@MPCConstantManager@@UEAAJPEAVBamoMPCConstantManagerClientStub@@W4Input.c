/*
 * XREFs of ?GetConstantsForInputType@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEAVBamoAsyncResult_string_Proxy@@@Z @ 0x1800BE470
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckTypeExistence@MPCConstantManager@@QEAA_NW4InputType@@@Z @ 0x1800481E4 (-CheckTypeExistence@MPCConstantManager@@QEAA_NW4InputType@@@Z.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800AC0D0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?GetConstantNamesString@MPCConstantManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4InputType@@@Z @ 0x1800BE140 (-GetConstantNamesString@MPCConstantManager@@AEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCConstantManager::GetConstantsForInputType(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v6; // rbx
  void **v8; // rdx
  unsigned int v9; // ebx
  void *v10[4]; // [rsp+20h] [rbp-48h] BYREF

  v6 = a4 + 8;
  if ( !MPCConstantManager::CheckTypeExistence(a1, a3) )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 32LL))(v6, 2147942487LL);
  MPCConstantManager::GetConstantNamesString(a1, v10, a3);
  v8 = v10;
  if ( v10[3] >= (void *)8 )
    v8 = (void **)v10[0];
  v9 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v6 + 24LL))(v6, v8);
  std::wstring::_Tidy_deallocate((__int64)v10);
  return v9;
}
