/*
 * XREFs of ?GetConstant@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGPEAVBamoAsyncResult_PROPVARIANT_Proxy@@@Z @ 0x1800BE0B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetPROPVARIANT@MPCConstantManager@@AEAA?AV?$optional@UtagPROPVARIANT@@@std@@W4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x1800BE6DC (-GetPROPVARIANT@MPCConstantManager@@AEAA-AV-$optional@UtagPROPVARIANT@@@std@@W4InputType@@V-$bas.c)
 */

__int64 __fastcall MPCConstantManager::GetConstant(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v10[40]; // [rsp+30h] [rbp-28h] BYREF

  v9[0] = a4;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)(a4 + 2 * v5) );
  v9[1] = v5;
  MPCConstantManager::GetPROPVARIANT(a1, v10, a3, v9);
  v6 = a5 + 8;
  v7 = *(_QWORD *)(a5 + 8);
  if ( v10[24] )
    return (*(__int64 (__fastcall **)(__int64, _BYTE *))(v7 + 24))(v6, v10);
  else
    return (*(__int64 (__fastcall **)(__int64, __int64))(v7 + 32))(v6, 2147942487LL);
}
