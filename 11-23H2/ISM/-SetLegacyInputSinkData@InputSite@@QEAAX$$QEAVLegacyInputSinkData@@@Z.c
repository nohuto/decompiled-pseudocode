/*
 * XREFs of ?SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z @ 0x18005EFB0
 * Callers:
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@_N@Z @ 0x18005F4BC (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 * Callees:
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??0LegacyInputSinkData@@QEAA@$$QEAV0@@Z @ 0x18005ED18 (--0LegacyInputSinkData@@QEAA@$$QEAV0@@Z.c)
 *     ?SetIdForNamespace@InputSite@@AEAAXW4InputSiteIdNamespace@@_K@Z @ 0x18005EF2C (-SetIdForNamespace@InputSite@@AEAAXW4InputSiteIdNamespace@@_K@Z.c)
 *     ?reset@?$_Optional_destruct_base@VLegacyInputSinkData@@$0A@@std@@QEAAXXZ @ 0x18005F0A0 (-reset@-$_Optional_destruct_base@VLegacyInputSinkData@@$0A@@std@@QEAAXXZ.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x18005F944 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ?GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ @ 0x18005FA6C (-GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ.c)
 *     ?GetProcessId@LegacyInputSinkData@@QEBAIXZ @ 0x18005FACC (-GetProcessId@LegacyInputSinkData@@QEBAIXZ.c)
 */

__int64 __fastcall InputSite::SetLegacyInputSinkData(__int64 a1, LegacyInputSinkData *a2)
{
  __int64 v4; // rax
  int v5; // ecx
  __int64 *v6; // rbx
  __int64 CompositionInputQueue; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 result; // rax
  struct _LUID v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h] BYREF

  v12 = *LegacyInputSinkData::GetLuid(a2);
  InputSite::SetIdForNamespace(a1, 0, *(_QWORD *)&v12);
  v4 = 0LL;
  v5 = 1;
  do
    *(&v12.LowPart + v4++) = v5++;
  while ( v4 < 4 );
  v6 = (__int64 *)&v12;
  while ( 1 )
  {
    CompositionInputQueue = LegacyInputSinkData::GetCompositionInputQueue(a2, *(unsigned int *)v6);
    if ( (unsigned int)(*(_DWORD *)CompositionInputQueue - 2) <= 1 )
      break;
    v6 = (__int64 *)((char *)v6 + 4);
    if ( v6 == &v13 )
    {
      LODWORD(v9) = 0;
      goto LABEL_8;
    }
  }
  v9 = *(_QWORD *)(CompositionInputQueue + 8);
LABEL_8:
  v10 = (unsigned int)v9;
  if ( (_DWORD)v9 )
    InputSite::SetIdForNamespace(a1, 1, (unsigned int)v9);
  if ( !*(_DWORD *)(a1 + 40) )
    *(_DWORD *)(a1 + 40) = LegacyInputSinkData::GetProcessId(a2);
  std::_Optional_destruct_base<LegacyInputSinkData,0>::reset(a1 + 48, v8, v10);
  result = LegacyInputSinkData::LegacyInputSinkData(a1 + 48, (__int64)a2);
  *(_BYTE *)(a1 + 480) = 1;
  return result;
}
